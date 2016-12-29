/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: BattleGame_functions.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function BattleGame.BattlePlayerController.BattlePlayerControllerFunction
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ABattlePlayerController::BattlePlayerControllerFunction ( )
{
	static UFunction* pFnBattlePlayerControllerFunction = NULL;

	if ( ! pFnBattlePlayerControllerFunction )
		pFnBattlePlayerControllerFunction = (UFunction*) UObject::GObjObjects()->GetIndex( 130139 );

	ABattlePlayerController_execBattlePlayerControllerFunction_Parms BattlePlayerControllerFunction_Parms;

	pFnBattlePlayerControllerFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBattlePlayerControllerFunction, &BattlePlayerControllerFunction_Parms, NULL );

	pFnBattlePlayerControllerFunction->FunctionFlags |= 0x400;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif