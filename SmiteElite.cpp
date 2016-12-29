#define _CRT_SECURE_NO_WARNINGS
#pragma optimize("", off) // optimizations cause crashes for some reason
// demo project, didn't bother with making code clean
// wanted to finish this project in 5 days, during my winter break.  succeeeded!
// i only implemented ESP, but the main task was generating an SDK for Smite and 
// reverse engineering the game in order to make the SDK work
// implementing aimbot is trivial... already have one named "ArenaMaster"

#include <Windows.h>
#include <stdio.h>
#include <vector>
#include "SdkHeaders.h"
#include "Console.h"
#include "Detours.h"
#include "HackTools.h"

// Functions
// Gets an instance of an object
UObject* GetInstanceOf(UClass* Class);
// ProcessEvent hook
void __fastcall hkProcessEvent(UObject* PObject, unsigned long uReserved, UFunction* PFunction, void* pParams, void* pResult);
// Dump the bone names
void DumpBoneNames(APawn* PPawn);
// Populate the vectors Teammates and Enemies
void PopulatePlayers(ATgPlayerController* PPlayer, AWorldInfo* PWorld);
// Draw info on a player
void DrawPlayer(AHUD* PHUD, APawn* PTarget, FColor Color);
// Get the view angle
float inline GetViewAngle(AHUD* PHUD, FVector PawnLocation);
// Rotation to vector
FVector inline RotationToVector(FRotator Rotation);
// Check if the angle is OK, for drawing
bool inline CheckAngle(float fAngle, float fMaxAngle);
// Get the bounding box of an actor
FBox GetScreenBoundingBox(UCanvas* pCanvas, AActor* pActor);
// Draw a box
void DrawBox(UCanvas* pCanvas, float X, float Y, float Width, float Height, FColor Color);
// Get distance between two vectors
float GetDistance(FVector Vec2, FVector Vec1);
// Aim at the target
void AutoAim(APlayerController* PPlayer, APawn* PTarget);

// Typedefs
typedef void(__fastcall* tProcessEvent) (UObject*, unsigned long, UFunction*, void*, void*);

// Globals
FVector ViewLocation;
FRotator ViewRotation;
tProcessEvent pOrgProcessEvent = (tProcessEvent)((DWORD)0x71450 + (DWORD)GetModuleHandle(L"Smite.exe"));
std::vector<APawn*> Teammates, Enemies;

// Constants
const float ARROW_SPEED = 4000.0f;
const float ARROW_MAX_RANGE = 1000.0f;
const float YAW_FACTOR = 32768.0f / 180.0f;
const float TELEPORT_DISTANCE = 10.0f;

DWORD WINAPI OnAttach(LPVOID lpParam) {	
	// CopyXorArray();
	// Hook ProcessEvent
	pOrgProcessEvent = (tProcessEvent)DetourFunction((PBYTE)pOrgProcessEvent, (PBYTE)hkProcessEvent);

	CConsole Console = CConsole();
	printf("Cheat Loaded\nESP and Aimbot are passive features.\nUse Cheat Engine for Speedhack.\n");

	while (1) {		
		Sleep(5000);
	}

	return 0;
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	if (dwReason == DLL_PROCESS_ATTACH) {
		DisableThreadLibraryCalls(hModule);
		CloseHandle(
			CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)OnAttach, NULL, 0, NULL)
		);
	}

	return TRUE;
}

UObject* GetInstanceOf(UClass* Class) {
	for (int i = 0; i < UObject::GObjObjects()->Num(); ++i) {
		auto Object = UObject::GObjObjects()->GetIndex(i);
		if (Object && Object->IsA(Class)) {
			if (!strstr(Object->GetFullName(), "Default")) {				
				return Object;
			}
		}
	}
	return nullptr;
}

// always called first
//TgGameHUD TheWorld.PersistentLevel.TgGameHUD] Function TgClient.TgGameHUD.PostRender
void __fastcall hkProcessEvent(UObject* PObject, unsigned long uReserved, UFunction* PFunction, void* pParams, void* pResult) {
	if (PObject && PFunction) {			
		if (strcmp("Function TgClient.TgGameHUD.PostRender", PFunction->GetFullName()) == 0) {
			AHUD* PHUD = (AHUD*)PObject;
			APlayerController* PPlayerController = (APlayerController*)PHUD->PlayerOwner;

			if (PPlayerController == NULL ||PPlayerController->Pawn->Health == 0)
				return;
			
			PPlayerController->Pawn->eventGetActorEyesViewPoint(&ViewLocation, &ViewRotation);
			
			// Aim information
			APawn* TargetEnemy = NULL;
			float ClosestAngle = 1000000000.0f;
			float RadAngle = 1.0f;

			// Draw
			for (APawn* PEnemy : Enemies) {
				if (PEnemy->Health > 0) {
					DrawPlayer(PHUD, PEnemy, PHUD->RedColor);
					// If the player is not in range, continue
					if (GetDistance(PPlayerController->Pawn->Location, PEnemy->Location) > ARROW_MAX_RANGE)
						continue;

					// Find the enemy closest to our aim
					float ViewAngle = GetViewAngle(PHUD, PEnemy->Location);
					float Angle = (float)cos(ViewAngle * CONST_Pi / 360.0f);
					if (Angle < ClosestAngle) {
						TargetEnemy = PEnemy;
						ClosestAngle = Angle;
						RadAngle = ViewAngle;
					}
				}
			}
			for (APawn* PTeammate : Teammates) {
				if (PTeammate->Health > 0)
					DrawPlayer(PHUD, PTeammate, PHUD->GreenColor);
			}	

			// Handle aiming
			if (CheckAngle(RadAngle, 30) && GetAsyncKeyState(VK_LBUTTON))				
				AutoAim(PPlayerController, TargetEnemy);			
			
		}
		else if (strcmp("Function TgGame.TgPlayerController.PlayerTick", PFunction->GetFullName()) == 0) {
			ATgPlayerController* PPlayer = (ATgPlayerController*)PObject;
			PopulatePlayers(PPlayer, PPlayer->WorldInfo);
		}
	}
	
	pOrgProcessEvent(PObject, uReserved, PFunction, pParams, pResult);
}

void DumpBoneNames(APawn* PPawn) {
	if (PPawn) {
		FILE* file = fopen("C:\\Users\\CD\\Desktop\\SMITE_SDK_2\\BoneNames.txt", "a+");
		TArray<FName> BoneArray;
		PPawn->Mesh->GetBoneNames(&BoneArray);
		for (int i = 0; i < BoneArray.Count; i++) {
			fprintf(file, "%d Name=%-10s\n", i, BoneArray.Data[i].GetName());
		}
		fclose(file);
	}
}

void PopulatePlayers(ATgPlayerController* PPlayer, AWorldInfo* PWorld) {
	Teammates.clear();
	Enemies.clear();

	APawn* PPawn = PWorld->PawnList;

	while (PPawn != NULL) {
		if (PPawn != PPlayer->GetPlayerControlPawn() && ((ATgPawn*)PPawn)->IsGod()) {
			if (PPawn->IsEnemy(PPlayer->Pawn)) {
				// enemy
				Enemies.emplace_back(PPawn);
				//printf("Added Enemy: %s\n", PPawn->GetName());
			}
			else {
				// teammate
				Teammates.emplace_back(PPawn);
				//printf("Added Teammate: %s\n", PPawn->GetName());
			}
		}
		PPawn = PPawn->NextPawn;		
	}
}

// Bone Info
/*
FName fnHead = FName("head");
FName fnPelvis = FName("Pelvis");

FName fnLArmUp = FName("L_UpperArm");
FName fnLShoulder = FName("L_Clavicle");
FName fnLArmLow = FName("L_Forearm");
FName fnLHand = FName("L_Hand");
FName fnLLegUp = FName("L_Thigh");
FName fnLLegLow = FName("L_Calf");
FName fnLFoot = FName("L_Foot");

FName fnRArmUp = FName("R_UpperArm");
FName fnRShoulder = FName("R_Clavicle");
FName fnRArmLow = FName("R_Forearm");
FName fnRHand = FName("R_Hand");
FName fnRLegUp = FName("R_Thigh");
FName fnRLegLow = FName("R_Calf");
FName fnRFoot = FName("R_Foot");
*/

void DrawPlayer(AHUD* PHUD, APawn* PTarget, FColor Color) {	

	float fCurrentAngle = GetViewAngle(PHUD, PTarget->Location);
	if (!CheckAngle(fCurrentAngle, 180.0f))
		return;

	FVector From = PHUD->Canvas->Project(PHUD->PlayerOwner->Pawn->Location);
	FVector To = PHUD->Canvas->Project(PTarget->Location);
	
	// Line from player to target
	//PHUD->Canvas->Draw2DLine(From.X, From.Y, To.X, To.Y, Color);
	
	// Bone Info
	/*
	FVector Head = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnHead, 0));	
	FVector Pelvis = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnPelvis, 0));
	
	FVector LArmUp = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnLArmUp, 0));
	FVector LShoulder = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnLShoulder, 0));
	FVector LArmLow = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnLArmLow, 0));
	FVector LHand = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnLHand, 0));
	FVector LLegUp = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnLLegUp, 0));
	FVector LLegLow = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnLLegLow, 0));
	FVector LFoot = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnLFoot, 0));

	FVector RArmUp = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnRArmUp, 0));
	FVector RShoulder = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnRShoulder, 0));
	FVector RArmLow = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnRArmLow, 0));
	FVector RHand = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnRHand, 0));
	FVector RLegUp = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnRLegUp, 0));
	FVector RLegLow = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnRLegLow, 0));
	FVector RFoot = PHUD->Canvas->Project(PTarget->Mesh->GetBoneLocation(fnRFoot, 0));
	*/
	
	// Box ESP
	FBox fBox = GetScreenBoundingBox(PHUD->Canvas, PTarget);
	DrawBox(PHUD->Canvas, fBox.Min.X, fBox.Min.Y, fBox.Max.X - fBox.Min.X, fBox.Max.Y - fBox.Min.Y, Color);
	
}

float inline GetViewAngle(AHUD* PHUD, FVector PawnLocation) {
	float fAngle;

	FVector Delta = {
		PawnLocation.X - ViewLocation.X, 
		PawnLocation.Y - ViewLocation.Y, 
		PawnLocation.Z - ViewLocation.Z
	};
	
	float fDeltaSize = PHUD->Canvas->VSize(Delta);

	FVector Div = {
		Delta.X / fDeltaSize,
		Delta.Y / fDeltaSize,
		Delta.Z / fDeltaSize
	};

	FVector ViewRotToVec = RotationToVector(ViewRotation);

	fAngle = PHUD->Canvas->Dot_VectorVector(Div, ViewRotToVec);
	return fAngle;
}

FVector inline RotationToVector(FRotator Rotation) {
	FVector Vector;
	float fYaw = Rotation.Yaw * (float)CONST_UnrRotToRad;
	float fPitch = Rotation.Pitch * (float)CONST_UnrRotToRad;
	float fCosPitch = cos(fPitch);

	Vector.X = cos(fYaw) * fCosPitch;
	Vector.Y = sin(fYaw) * fCosPitch;
	Vector.Z = sin(fPitch);

	return Vector;
}

bool inline CheckAngle(float fAngle, float fMaxAngle) {
	return fAngle > cos(fMaxAngle * CONST_Pi / 360.0);
}

FBox GetScreenBoundingBox(UCanvas* pCanvas, AActor* pActor) {
	FBox OutBox, ComponentsBoundingBox;
	FVector BoundingBoxCoordinates[8];
	pActor->GetComponentsBoundingBox(&ComponentsBoundingBox);

	BoundingBoxCoordinates[0].X = ComponentsBoundingBox.Min.X;
	BoundingBoxCoordinates[0].Y = ComponentsBoundingBox.Min.Y;
	BoundingBoxCoordinates[0].Z = ComponentsBoundingBox.Min.Z;
	BoundingBoxCoordinates[0] = pCanvas->Project(BoundingBoxCoordinates[0]);

	BoundingBoxCoordinates[1].X = ComponentsBoundingBox.Max.X;
	BoundingBoxCoordinates[1].Y = ComponentsBoundingBox.Min.Y;
	BoundingBoxCoordinates[1].Z = ComponentsBoundingBox.Min.Z;
	BoundingBoxCoordinates[1] = pCanvas->Project(BoundingBoxCoordinates[1]);

	BoundingBoxCoordinates[2].X = ComponentsBoundingBox.Min.X;
	BoundingBoxCoordinates[2].Y = ComponentsBoundingBox.Max.Y;
	BoundingBoxCoordinates[2].Z = ComponentsBoundingBox.Min.Z;
	BoundingBoxCoordinates[2] = pCanvas->Project(BoundingBoxCoordinates[2]);

	BoundingBoxCoordinates[3].X = ComponentsBoundingBox.Max.X;
	BoundingBoxCoordinates[3].Y = ComponentsBoundingBox.Max.Y;
	BoundingBoxCoordinates[3].Z = ComponentsBoundingBox.Min.Z;
	BoundingBoxCoordinates[3] = pCanvas->Project(BoundingBoxCoordinates[3]);

	BoundingBoxCoordinates[4].X = ComponentsBoundingBox.Min.X;
	BoundingBoxCoordinates[4].Y = ComponentsBoundingBox.Min.Y;
	BoundingBoxCoordinates[4].Z = ComponentsBoundingBox.Max.Z;
	BoundingBoxCoordinates[4] = pCanvas->Project(BoundingBoxCoordinates[4]);

	BoundingBoxCoordinates[5].X = ComponentsBoundingBox.Max.X;
	BoundingBoxCoordinates[5].Y = ComponentsBoundingBox.Min.Y;
	BoundingBoxCoordinates[5].Z = ComponentsBoundingBox.Max.Z;
	BoundingBoxCoordinates[5] = pCanvas->Project(BoundingBoxCoordinates[5]);

	BoundingBoxCoordinates[6].X = ComponentsBoundingBox.Min.X;
	BoundingBoxCoordinates[6].Y = ComponentsBoundingBox.Max.Y;
	BoundingBoxCoordinates[6].Z = ComponentsBoundingBox.Max.Z;
	BoundingBoxCoordinates[6] = pCanvas->Project(BoundingBoxCoordinates[6]);

	BoundingBoxCoordinates[7].X = ComponentsBoundingBox.Max.X;
	BoundingBoxCoordinates[7].Y = ComponentsBoundingBox.Max.Y;
	BoundingBoxCoordinates[7].Z = ComponentsBoundingBox.Max.Z;
	BoundingBoxCoordinates[7] = pCanvas->Project(BoundingBoxCoordinates[7]);

	OutBox.Min.X = pCanvas->ClipX;
	OutBox.Min.Y = pCanvas->ClipY;
	OutBox.Max.X = 0;
	OutBox.Max.Y = 0;

	for (int i = 0; i < 8; ++i)
	{
		if (OutBox.Min.X > BoundingBoxCoordinates[i].X)
			OutBox.Min.X = BoundingBoxCoordinates[i].X;

		if (OutBox.Min.Y > BoundingBoxCoordinates[i].Y)
			OutBox.Min.Y = BoundingBoxCoordinates[i].Y;

		if (OutBox.Max.X < BoundingBoxCoordinates[i].X)
			OutBox.Max.X = BoundingBoxCoordinates[i].X;

		if (OutBox.Max.Y < BoundingBoxCoordinates[i].Y)
			OutBox.Max.Y = BoundingBoxCoordinates[i].Y;
	}

	return OutBox;
}

void DrawBox(UCanvas* pCanvas, float X, float Y, float Width, float Height, FColor Color) {
	float oldX = pCanvas->CurX;
	float oldY = pCanvas->CurY;
	FColor oldColor = pCanvas->DrawColor;
	pCanvas->CurX = X;
	pCanvas->CurY = Y;
	pCanvas->DrawColor = Color;
	pCanvas->DrawBox(Width, Height);
	pCanvas->CurX = oldX;
	pCanvas->CurY = oldY;
	pCanvas->DrawColor = oldColor;
}

float GetDistance(FVector Vec2, FVector Vec1) {
	FVector Delta = { Vec2.X - Vec1.X, Vec2.Y - Vec1.Y, Vec2.Z - Vec1.Z };
	return sqrtf(Delta.X*Delta.X + Delta.Y*Delta.Y + Delta.Z*Delta.Z);
}

void AutoAim(APlayerController* PPlayer, APawn* PTarget) {
	if (PPlayer == NULL || PTarget == NULL || PPlayer->Pawn == NULL)
		return;

	FVector PlayerLocation = PPlayer->Pawn->Location;
	FVector TargetLocation = PTarget->Location;
	FRotator Rotation = ViewRotation;

	float TravelTime = GetDistance(PlayerLocation, TargetLocation) / ARROW_SPEED;

	// aim prediction
	FVector PredictedTargetLocation = {
		TargetLocation.X + PTarget->Velocity.X * TravelTime,
		TargetLocation.Y + PTarget->Velocity.Y * TravelTime,
		TargetLocation.Z
	};

	FVector Diff = {
		PredictedTargetLocation.X - PlayerLocation.X,
		PredictedTargetLocation.Y - PlayerLocation.Y,
		PredictedTargetLocation.Z - PlayerLocation.Z
	};

	float Yaw = 0.0f;
	if (Diff.Y != 0 && Diff.Z != 0) {
		Rotation.Yaw = (int)(atan2f(Diff.Y, Diff.X) * CONST_RadToUnrRot);
		PPlayer->Pawn->ClientSetRotation(Rotation);
	}	

}