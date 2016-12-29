/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgGame_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct TgGame.TgAchievement_AbilityMultiHit.DeviceEffectPair
// 0x0018
struct FDeviceEffectPair
{
	TArray< int >                                      DeviceIds;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      EffectIds;                                        		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_AbilityMultiHit.DeviceHitInfo
// 0x0014
struct FDeviceHitInfo
{
	class UObject*                                     DeviceReference;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      nFiringInstance;                                  		// 0x0004 (0x0001) [0x0000000000000000]              
	TArray< class ATgPawn* >                           PawnsHit;                                         		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_Bellona_Master.TrackedHits
// 0x0008
struct FTrackedHits
{
	unsigned long                                      bHitInHand : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHitHammer : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHitScourge : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHitShield : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAchievement_Cabrakan_Tremors.TremorsData
// 0x000C
struct FTremorsData
{
	class ATgPawn*                                     GodPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LastTime;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAchievement_DeviceHits_SingleShotPerTarget.ShotHitCountInfo
// 0x0008
struct FShotHitCountInfo
{
	class ATgPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                HitCount;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAchievement_DeviceHits_SingleShotPerTarget.ShotHitInfo
// 0x0010
struct FShotHitInfo
{
	int                                                FiringInstance;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FShotHitCountInfo >                 Hits;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_DeviceKillsSingleShot.TrackedKilledTargets
// 0x0010
struct FTrackedKilledTargets
{
	int                                                FiringInstance;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class ATgPawn* >                           Targets;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_DeviceMultiHit_ByType.TrackedTargets
// 0x0010
struct FTrackedTargets
{
	int                                                FiringInstance;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class ATgPawn* >                           Targets;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_Hel_StanceKills.HelStanceKillTrackingData
// 0x000C
struct FHelStanceKillTrackingData
{
	class ATgPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LightStanceKills;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                DarkStanceKills;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAchievement_HelpingHand.AssistComboData
// 0x0008
struct FAssistComboData
{
	class AActor*                                      m_ComboActor;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nPreviousKillCombo;                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAchievement_HouYi_Trick.HitsPerBounce
// 0x000C
struct FHitsPerBounce
{
	TArray< class AActor* >                            HitTargets;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_Kaboom.DeviceDamageInfo
// 0x0014
struct FDeviceDamageInfo
{
	class ATgDevice*                                   DeviceReference;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      nFiringInstance;                                  		// 0x0004 (0x0001) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fDamage;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bRecorded : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgAchievement_KillsSingleAbility.DeviceKillsInfo
// 0x0006
struct FDeviceKillsInfo
{
	class UObject*                                     DeviceReference;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      nFiringInstance;                                  		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      nKills;                                           		// 0x0005 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAchievement_NeZha_TwosACrowd.BounceData
// 0x0008
struct FBounceData
{
	class ATgPawn*                                     HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              HitCount;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.TgKeyBind
// 0x0044
struct FTgKeyBind
{
	int                                                nGroupNameMsgId;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nNameMsgId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sKeyCommand;                                      		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDefaultKey;                                      		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sKey;                                             		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sKeyAlternate;                                    		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sKeyBindText;                                     		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgObject.sPingInfo
// 0x0019
struct FsPingInfo
{
	class ATgRepInfo_Player*                           pingedPri;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fStartTime;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     vPingedLoc;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	unsigned long                                      bPinging : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eType;                                            		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.OnDamagedParams
// 0x0080
struct FOnDamagedParams
{
	class ATgPawn*                                     attacker;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATgDevice*                                   Dev;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgEffectGroup*                              eg;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FImpactInfo                                 Impact;                                           		// 0x000C (0x0060) [0x0000000000080000]              ( CPF_Component )
	float                                              fBuffedDamage;                                    		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              fMitigatedDamage;                                 		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              fPreDamageHealth;                                 		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCritical : 1;                                    		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nPropertyId;                                      		// 0x007C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.OnHealedParams
// 0x0078
struct FOnHealedParams
{
	class ATgPawn*                                     Healer;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATgDevice*                                   Dev;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgEffectGroup*                              eg;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FImpactInfo                                 Impact;                                           		// 0x000C (0x0060) [0x0000000000080000]              ( CPF_Component )
	float                                              fHealAmount;                                      		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              fHealthChange;                                    		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                nPropertyId;                                      		// 0x0074 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.OnAbsorbHitParams
// 0x0014
struct FOnAbsorbHitParams
{
	class ATgPawn*                                     attacker;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATgDevice*                                   Dev;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgDeviceFire*                               DeviceMode;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgEffectGroup*                              AbsorbedEG;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	class AActor*                                      AbsorbingActor;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.OnDodgedParams
// 0x0010
struct FOnDodgedParams
{
	class ATgPawn*                                     attacker;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATgDevice*                                   Dev;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgDeviceFire*                               DeviceMode;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	class AActor*                                      DodgingActor;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.ChargeHitInfo
// 0x0008
struct FChargeHitInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.sTrainingBotMap
// 0x0008
struct FsTrainingBotMap
{
	int                                                BotID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TrainingBotID;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.ButtonPromptData
// 0x0018
struct FButtonPromptData
{
	struct FString                                     promptText;                                       		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     buttonDisplay;                                    		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgObject.ScoreKillData
// 0x0054
struct FScoreKillData
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATgRepInfo_Player*                           KillerPRI;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	class ATgPawn*                                     KillerPawn;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FPointer                                    KillerBotAssembly;                                		// 0x000C (0x0004) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      bKillerIsGod : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bKillerIsMinion : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bKillerIsTower : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	class AController*                                 Victim;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	class ATgPawn*                                     VictimPawn;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	class ATgRepInfo_Player*                           VictimPRI;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	class ATgRepInfo_TaskForce*                        VictimTaskForce;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FPointer                                    VictimBotAssembly;                                		// 0x0024 (0x0004) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      VictimCanScore : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bVictimIsGod : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bVictimIsMinion : 1;                              		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bVictimIsTower : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000008] 
	class AController*                                 Scorer;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	class ATgPawn*                                     ScorerPawn;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	class ATgRepInfo_Player*                           ScorerPRI;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	class ATgRepInfo_TaskForce*                        ScorerTaskForce;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      ScorerCanScore : 1;                               		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	class UTgEffectGroup*                              KillingEffectGroup;                               		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSuicide : 1;                                     		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFirstBlood : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< class ATgRepInfo_Player* >                 AssistingPlayers;                                 		// 0x0048 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgObject.OffhandAnimation
// 0x0014
struct FOffhandAnimation
{
	struct FName                                       m_OffhandUseType;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       m_AnimName;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bFullBody : 1;                                  		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct TgGame.TgObject.TG_HUD_INFO_EFFECTS
// 0x0014
struct FTG_HUD_INFO_EFFECTS
{
	int                                                nEffectGroupId;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nIconStackId;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nStackCount;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fDurationSecs;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fRemainingSecs;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.TG_HUD_INFO
// 0x012E
struct FTG_HUD_INFO
{
	unsigned char                                      eOverlayType;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                nActorId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnemy : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     objectiveString;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bShowNameplate : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowPortrait : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShowOverlays : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsTargeted : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector                                     vScreenLoc;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	float                                              fScale;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              fAlphaLevel;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              fLastSeenTime;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              fLastUnseenTime;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nHealth;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                nMaxHealth;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                nMana;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                nMaxMana;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                nShield;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                nMaxShield;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              fDistance;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                nLevel;                                           		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                nProfileId;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                nSkinId;                                          		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                nPacingType;                                      		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                nHardCCCategoryId;                                		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              fHardCCLengthSecs;                                		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              fHardCCRemainingSecs;                             		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FTG_HUD_INFO_EFFECTS                        ImportantEffects[ 0x8 ];                          		// 0x007C (0x00A0) [0x0000000000000000]              
	float                                              fLifeLengthSecs;                                  		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              fLifeRemainingSecs;                               		// 0x0120 (0x0004) [0x0000000000000000]              
	float                                              fNextLineCheckTime;                               		// 0x0124 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLastLineCheckResult : 1;                         		// 0x0128 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eLineCheckState;                                  		// 0x012C (0x0001) [0x0000000000000000]              
	unsigned char                                      eOffscreenIndicator;                              		// 0x012D (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.RewardInfo
// 0x0018
struct FRewardInfo
{
	int                                                RequestedReward;                                  		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                BoostReward;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ActualReward;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ActualRewardAccum;                                		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                BoostRewardAccum;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ErrorMessage;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.MeshAssets
// 0x0030
struct FMeshAssets
{
	struct FString                                     m_sSkeletalMesh;                                  		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     m_sPhysicsAsset;                                  		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     m_sAnimTreeTemplate;                              		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     m_sAnimSets;                                      		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgObject.ObjectiveMICInfo
// 0x0014
struct FObjectiveMICInfo
{
	int                                                MyTeam;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              AmountFilled;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ObjStatus;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                IsContested;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Flip;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgObject.AimData
// 0x002C
struct FAimData
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     AimVector;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bResult : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgObject.EquipDeviceInfo
// 0x000C
struct FEquipDeviceInfo
{
	int                                                nDeviceId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nDeviceInstanceId;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nMode;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAhMuzenCabSwarmInstance.InfectedInfo
// 0x0008
struct FInfectedInfo
{
	class AActor*                                      InfectedTarget;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fInfectedUntil;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAIBehaviorNode.BehaviorStateData
// 0x0009
struct FBehaviorStateData
{
	float                                              LastTickTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NodeToken;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Status;                                           		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.DeployWallPushingInfo
// 0x0010
struct FDeployWallPushingInfo
{
	class ATgDeploy_Wall*                              OverlappingWall;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     PushingVector;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.GravityModifierInfo
// 0x0008
struct FGravityModifierInfo
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fMultipler;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.OverlayMICList
// 0x000C
struct FOverlayMICList
{
	TArray< class UMaterialInstanceConstant* >         MICs;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgPawn.OverlayInfo
// 0x004D
struct FOverlayInfo
{
	class UTgSkeletalMeshComponent*                    OverlayMesh;                                      		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTgSilhouetteComponent*                      Silhouette;                                       		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      ParentMesh;                                       		// 0x0008 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bSetPhysAsset : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FOverlayMICList                             OverlayMICInstances[ 0x5 ];                       		// 0x0010 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CurrentState;                                     		// 0x004C (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.HealingInfo
// 0x0008
struct FHealingInfo
{
	float                                              HealAmount;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.FloorPortalTweenInfo
// 0x0014
struct FFloorPortalTweenInfo
{
	unsigned char                                      FloorPortalState;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector                                     StartPosition;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              StartVelocityZ;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgSpecialFx.Fx_Sound
// 0x0018
struct FFx_Sound
{
	int                                                c_nId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   c_SoundCue;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             c_acSound;                                        		// 0x0008 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      c_bAllowSoundToFinishFlag : 1;                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                c_nAudienceType;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      c_bForceAudioComponent : 1;                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgSpecialFx.Fx_PSC
// 0x002D
struct FFx_PSC
{
	int                                                c_nId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    c_PSC;                                            		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             c_PSCTemplate;                                    		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              c_fScale;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                c_nScaleType;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      c_bRunning : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       c_nmSocketDisplayGrp;                             		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       c_nmSocket;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	unsigned long                                      c_bAbsoluteRotation : 1;                          		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      c_eDepthPriorityGroup;                            		// 0x002C (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgSpecialFx.Fx_Material
// 0x0014
struct FFx_Material
{
	int                                                nFxMatId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nFxMatTypeCode;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       nmMIC;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      bApplyIfSameTeam : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgSpecialFx.Fx_Decal
// 0x0020
struct FFx_Decal
{
	int                                                c_nId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          c_MaterialInterface;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              c_fWidth;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              c_fHeight;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              c_fThickness;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      c_bNoClip : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      c_bAttach : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	class UDecalComponent*                             c_Decal;                                          		// 0x0018 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              c_fLifetime;                                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.PostureStack
// 0x001C
struct FPostureStack
{
	TArray< int >                                      GUIDs;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            Postures;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NewPostureGUID;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.GlobalEmoteInfo
// 0x0005
struct FGlobalEmoteInfo
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      nTicker;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.PawnDamagerStruct
// 0x0008
struct FPawnDamagerStruct
{
	class ATgPawn*                                     DamagerPawn;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fTimestamp;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn.TGEQUIP_SLOTS_STRUCT
// 0x00C8
struct FTGEQUIP_SLOTS_STRUCT
{
	int                                                SlotIndices[ 0x19 ];                              		// 0x0000 (0x0064) [0x0000000000000000]              
	int                                                MiscItems[ 0x19 ];                                		// 0x0064 (0x0064) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAIController.ThreatStruct
// 0x0008
struct FThreatStruct
{
	class AActor*                                      Threatener;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fThreat;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAIController_Behavior.DeferredNode
// 0x0014
struct FDeferredNode
{
	float                                              WorldTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    CurrentNode;                                      		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    CachedStatus;                                     		// 0x0008 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    StorageMemory;                                    		// 0x000C (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    WorkingMemory;                                    		// 0x0010 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct TgGame.TgAIController_Behavior.IncomingDamageEntry
// 0x002C
struct FIncomingDamageEntry
{
	class ATgPawn*                                     attacker;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      DeviceSlot;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FVector                                     SourceInitialLocation;                            		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    SourceInitialAim;                                 		// 0x0014 (0x000C) [0x0000000000000000]              
	float                                              ExpireTime;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              RemovalTime;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAIController_Behavior.FollowLaneState
// 0x0008
struct FFollowLaneState
{
	int                                                LastLaneIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFinalApproach : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLockedToMarker : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TgGame.TgAIController_Behavior.NavigationQueueEntry
// 0x0024
struct FNavigationQueueEntry
{
	class ATgPawn*                                     TargetPawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      TargetActor;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     TargetLocation;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
	unsigned long                                      bNewEntry : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanCacheLOS : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCachedLOS : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bLookAtTarget : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bMustHaveLOS : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bStopNavOnReachedDestination : 1;                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              DistanceTolerance;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                NodeToken;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                TeleportIndex;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAIController_BehaviorMapNpc.ThreatEntry
// 0x0008
struct FThreatEntry
{
	class ATgPawn*                                     attacker;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ThreatLevel;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAILocalPositionSolver.DefaultRepulsorData
// 0x000D
struct FDefaultRepulsorData
{
	unsigned char                                      TargetType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              MaxEnemyWeight;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MaxFriendlyWeight;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      SolverType;                                       		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAIObstacleAvoidance.ObstacleQueryCache
// 0x0025
struct FObstacleQueryCache
{
	struct FVector                                     RealGoalPos;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     ModifiedGoalPos;                                  		// 0x000C (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           IntermediatePoints;                               		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      PathStatus;                                       		// 0x0024 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAnimNodeBlendList.ChildBlendParam
// 0x0010
struct FChildBlendParam
{
	int                                                FromChild;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ToChild;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTime;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxBlendTime;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgPawn_Character.PERSISTENT_BUFF_STRUCT
// 0x0014
struct FPERSISTENT_BUFF_STRUCT
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nPropId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fValue;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FQWord                                      nExpireDateTime;                                  		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Bellona.VisibleWeaponOverrides
// 0x000C
struct FVisibleWeaponOverrides
{
	unsigned char                                      DesiredWeaponSet;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              fWeight;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           RequestingAnimSeqNode;                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Bellona.VisibleFlagMesh
// 0x0008
struct FVisibleFlagMesh
{
	unsigned long                                      bUseOverlay : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UAnimNodeSequence*                           RequestingAnimSeqNode;                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Bellona.WeaponSetInfo
// 0x0004
struct FWeaponSetInfo
{
	unsigned char                                      CurrentWeaponSet;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      SwapState;                                        		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      Padding[ 0x2 ];                                   		// 0x0002 (0x0002) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Bellona.ShieldBashRepInfo
// 0x0011
struct FShieldBashRepInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                Rotation;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      Ticker;                                           		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAnimBlendByFire.DeviceParameters
// 0x0010
struct FDeviceParameters
{
	struct FString                                     SlotName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bForceReplayOnBuildup : 1;                        		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bForceReplayOnStartFire : 1;                      		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bShouldInterruptIfStopped : 1;                    		// 0x000C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bShouldInterruptIfInterrupted : 1;                		// 0x000C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bShouldInterruptIfJumping : 1;                    		// 0x000C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
};

// ScriptStruct TgGame.TgMarkComponent.TargetMark
// 0x0018
struct FTargetMark
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fTimeLeft;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nNumMarks;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< class UTgEffectGroup* >                    AppliedEffects;                                   		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAnimBlendByPhase.m_PhaseTransitionAnimSet
// 0x000C
struct Fm_PhaseTransitionAnimSet
{
	int                                                m_TransitionToPhase;                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_TransitionAnimName;                             		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimBlendByPhase.m_PhaseProfile
// 0x0010
struct Fm_PhaseProfile
{
	int                                                m_Phase;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct Fm_PhaseTransitionAnimSet >         m_TransitionAnimSets;                             		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAnimBlendByPosture.PostureTransitionOverride
// 0x000E
struct FPostureTransitionOverride
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              BlendTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      StartPosture;                                     		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      EndPosture;                                       		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAnimBlendByPosture.m_TransitionAnimSet
// 0x000C
struct Fm_TransitionAnimSet
{
	unsigned char                                      m_TransitionToPosture;                            		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_TransitionAnimName;                             		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimBlendByPosture.m_PostureProfile
// 0x0014
struct Fm_PostureProfile
{
	unsigned char                                      m_Posture;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct Fm_TransitionAnimSet >              m_TransitionAnimSets;                             		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      m_bResetBlendByFireToIdleOnTransition : 1;        		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimBlendBySpeed.ResetSynchGroup
// 0x0020
struct FResetSynchGroup
{
	struct FName                                       AnimNodeSynchName;                                		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeSynch*                              SynchNode;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       GroupName;                                        		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      ResetChannels;                                    		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAnimMetaData_BellonaFlagMesh.FlagMeshParameterKeyFrame
// 0x0008
struct FFlagMeshParameterKeyFrame
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetValue;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimMetaData_BellonaWeaponSetOverride.WeaponSetParameterKeyFrame
// 0x0008
struct FWeaponSetParameterKeyFrame
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetValue;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimMetaData_MICScalarParameter.MICScalarParameterKeyFrame
// 0x0008
struct FMICScalarParameterKeyFrame
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetValue;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimNodeBlendByPhysics.ChildBlendInfo
// 0x0008
struct FChildBlendInfo
{
	unsigned char                                      m_PhysicsState;                                   		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fBlendTime;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimNodeBlendByPhysics.ChildrenBlendInfo
// 0x0010
struct FChildrenBlendInfo
{
	unsigned char                                      m_PhysicsState;                                   		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FChildBlendInfo >                   m_ChildBlendInfo;                                 		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAnimNodeBlendList_Bacchus_Inebriation.InebriationLevelInfo
// 0x0004
struct FInebriationLevelInfo
{
	float                                              Percentage;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgPawn_Thoth.SpeedGlyphProjTrackingData
// 0x000C
struct FSpeedGlyphProjTrackingData
{
	int                                                Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Device;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                FiringInstance;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Thoth.SpeedGlyphProjEventData
// 0x000C
struct FSpeedGlyphProjEventData
{
	int                                                ProjId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ShooterDevId;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAnimNodeEmoteSequence_WithPAC.EMOTE_PAC_INFO
// 0x0018
struct FEMOTE_PAC_INFO
{
	unsigned char                                      Emote;                                            		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                MeshId;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     BoneName;                                         		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTgSkeletalMeshComponent*                    c_EmoteMesh;                                      		// 0x0014 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct TgGame.TgAnimNodeRandom.TgRandomAnimInfo
// 0x0020
struct FTgRandomAnimInfo
{
	float                                              Chance;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LoopCountMin;                                     		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LoopCountMax;                                     		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCanRepeat : 1;                                   		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      LoopCount;                                        		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned long                                      bCallOnAnimEndOnParent : 1;                       		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bChooseNewNodeOnAnimEnd : 1;                    		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FVector2D                                   m_ChildActiveTime;                                		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimNodeSequenceByBoneRotation.AnimByRotation
// 0x0014
struct FAnimByRotation
{
	struct FRotator                                    DesiredRotation;                                  		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimNodeStanceTransitioner.CachedTgAnimNodeStanceInfo
// 0x0008
struct FCachedTgAnimNodeStanceInfo
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgAnimNodeStance*                           Node;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAnimNodeStanceTransitioner.CachedTgAnimNodeStanceTransitionInfo
// 0x0008
struct FCachedTgAnimNodeStanceTransitionInfo
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgAnimNodeStanceTransition*                 Node;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgAnimNotify_PlayParticleEffect_Skinned.PPE_Skin
// 0x000C
struct FPPE_Skin
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSkinLevel;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PSTemplate;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimNotify_Sound.PSE_Skin
// 0x000C
struct FPSE_Skin
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSkinLevel;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundCue;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimTurnInPlace.RotTransitionInfo
// 0x000C
struct FRotTransitionInfo
{
	float                                              RotationOffset;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TransName;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgAnimTurnInPlace_Player.TIP_Transition
// 0x0010
struct FTIP_Transition
{
	struct FName                                       TransName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgBotFactory.SpawnQueueEntry
// 0x0018
struct FSpawnQueueEntry
{
	float                                              fSpawnTime;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nBotId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nSkinId;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nSpawnTableDetailId;                              		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       BehaviorTreeOverride;                             		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgBotFactory.FactorySpawnModifier
// 0x000C
struct FFactorySpawnModifier
{
	int                                                nSpawnModifierItemId;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fSpawnModifierDuration;                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nModifierStacks;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgCameraModule_SpectatorOverview.CameraPitchInfo
// 0x0008
struct FCameraPitchInfo
{
	float                                              ZHeight;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Pitch;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgCharmComponent_Serqet.FireChainInfo
// 0x0010
struct FFireChainInfo
{
	int                                                nMode;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fPreFireDelay;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fPostFireDelay;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nAttackType;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPlayerController.InventoryChangeFlags
// 0x0004
struct FInventoryChangeFlags
{
	unsigned long                                      bDevice : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bComponent : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEquipped : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDeviceFailed : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct TgGame.TgPlayerController.sSimProjectileFireInfo
// 0x0021
struct FsSimProjectileFireInfo
{
	int                                                nOwnerFireModeId;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     vLocation;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     vDirectionMunged;                                 		// 0x0010 (0x000C) [0x0000000000000000]              
	int                                                nActorId;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      ActorType;                                        		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_Player.SocialEmoteInfo
// 0x000C
struct FSocialEmoteInfo
{
	unsigned char                                      Emote;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                nVgsId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseable : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgGameTipManager.GameTipInfo
// 0x0020
struct FGameTipInfo
{
	int                                                nTipId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nPriority;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSelfSuppress : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fRemainingTime;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fTimeOnTop;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRemoveOnTimer : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDismissed : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWaitForDismiss : 1;                              		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDisplayAlways : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPopupDisplay : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000010] 
	class USoundCue*                                   PopupSoundCue;                                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPlayerController.FLOOD
// 0x0008
struct FFLOOD
{
	int                                                m_nCount;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fLastUpdate;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPlayerController.AbilityLevelInfo
// 0x0008
struct FAbilityLevelInfo
{
	int                                                Ability[ 0x2 ];                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPlayerController.TG_LAST_PURCHASE
// 0x0008
struct FTG_LAST_PURCHASE
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nCount;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgSpectatorController.BroadcastChannel
// 0x0008
struct FBroadcastChannel
{
	unsigned char                                      Channel;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                PlayerID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgSpectatorController.SpectatorBookmark
// 0x0024
struct FSpectatorBookmark
{
	class AActor*                                      ViewTarget;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ViewMode;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FTPOV                                       POV;                                              		// 0x0008 (0x001C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDemoRecSpectator.SpectatorCommand
// 0x000C
struct FSpectatorCommand
{
	int                                                nFrame;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseIndex : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fSpeed;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDemoRecSpectator.DilationData
// 0x0010
struct FDilationData
{
	float                                              fValue;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgSpectatorDirector.ViewTargetInfo
// 0x0030
struct FViewTargetInfo
{
	class ATgPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATgPawn_Tower*                               ClosestEnemyTower;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Rating;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DistSqToClosestEnemy;                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              DistSqToClosestFriend;                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              DistSqToFireGiant;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              DistSqToGoldFury;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              DistSqToEnemyTower;                               		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              DistSqToEnemyMinotaur;                            		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              DistSqToEnemyPhoenix;                             		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                NumCloseEnemies;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                NumCloseFriends;                                  		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeploy_AutoPortal.PortalExcludeInfo
// 0x0008
struct FPortalExcludeInfo
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fTimeLeft;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeploy_AutoPortal.PortalPermanentExcludeInfo
// 0x0008
struct FPortalPermanentExcludeInfo
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nTimesUsed;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeploy_MovingEffectVolume.InterpAnchor
// 0x0024
struct FInterpAnchor
{
	struct FVector                                     LastLocation;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    LastRotation;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	struct FName                                       SocketName;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned long                                      bExists : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_AhMuzenCab.HoneyVictimInfo
// 0x000C
struct FHoneyVictimInfo
{
	int                                                NumStacks;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATgPawn*                                     VictimPawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgDeviceFire*                               HoneyFireMode;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_Camazotz_Essence.CamazotzTouchData
// 0x0008
struct FCamazotzTouchData
{
	class ATgPawn_Camazotz*                            Camazotz;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ChannelTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_Hercules_HercSmash.HercSmashHitInfo
// 0x0018
struct FHercSmashHitInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInKnockupArea : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDeployable_NuWa_Pillars.CannotTouchInfo
// 0x0008
struct FCannotTouchInfo
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeToReTouch;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_PortalEntrance.PortalTimer
// 0x0008
struct FPortalTimer
{
	class ATgPawn*                                     P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fTime;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeployable_Thoth_SpeedGlyph.SpeedGlyphImpactFXData
// 0x0014
struct FSpeedGlyphImpactFXData
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	int                                                ShooterDevId;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgTimerManager.TGT_REG_LINK
// 0x000C
struct FTGT_REG_LINK
{
	struct FPointer                                    NextLink;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UObject*                                     RegObject;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	class UFunction*                                   RegFunction;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgTimerManager.TgTimerData
// 0x0020
struct FTgTimerData
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      byTimer;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              fStartTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fRemaining;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bRepeat : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPausedByGame : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FTGT_REG_LINK                               CallbackRegistry;                                 		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_ChainedMelee.AttackModeInfo
// 0x000C
struct FAttackModeInfo
{
	int                                                nAttackNum;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      nMode;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              fRefireTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_ActiveMode.ActiveModeInfo
// 0x0008
struct FActiveModeInfo
{
	int                                                ActiveMode;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AttackCounter;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_AoKuang_NewUltimate.ValidTargetInfo
// 0x0008
struct FValidTargetInfo
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgDeviceFire*                               TargetEffectMode;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_MeshSwapper.StanceInfo
// 0x0030
struct FStanceInfo
{
	int                                                nMeshId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      nDeviceIds;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      nDeviceEqPoints;                                  		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       fnMeshSwapBodyAnim;                               		// 0x001C (0x0008) [0x0000000000000000]              
	float                                              fBlendInTime;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              fBlendOutTime;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDoesFullBodyOnSwap : 1;                          		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_MeshSwapper.CachedStanceObject
// 0x002C
struct FCachedStanceObject
{
	int                                                nBaseMeshId;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    StanceMeshAssembly;                               		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    StanceDestroyedMeshAssembly;                      		// 0x0008 (0x0004) [0x0000000000001000]              ( CPF_Native )
	TArray< class ATgDevice* >                         StanceDevices;                                    		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       fnMeshSwapBodyAnim;                               		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              fBlendInTime;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              fBlendOutTime;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDoesFullBodyOnSwap : 1;                          		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDevice_Janus_DeathGate.DeathGateHitInfo
// 0x0008
struct FDeathGateHitInfo
{
	class AActor*                                      HitTarget;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nTimesHit;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Jumong_FanOfArrows.FanInformation
// 0x000C
struct ATgDevice_Jumong_FanOfArrows_FFanInformation
{
	int                                                FanId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Hits;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Neith_BrokenWeave.WeaveSpawnInfo
// 0x0008
struct FWeaveSpawnInfo
{
	class ATgDeployable_Neith_BrokenWeave*             Weave;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATgPawn*                                     Source;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_NeZha.WindFireWheelsQteStatus
// 0x0020
struct FWindFireWheelsQteStatus
{
	int                                                HitTiming;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              FadeEndTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              CurrentEnergy;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                HitStatus;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     ScreenLoc;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	unsigned long                                      bShown : 1;                                       		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDevice_NuWa_Passive.CrystalInfo
// 0x0014
struct FCrystalInfo
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eType;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              fTimer;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fLifeTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	class UTgDeviceFire*                               DeviceMode;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Ratatoskr_Dart.PreviousChargeInfo
// 0x0010
struct FPreviousChargeInfo
{
	TArray< class AActor* >                            HitActors;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              fTimer;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Scylla_Num3.TargetFxInfo
// 0x0008
struct FTargetFxInfo
{
	class ATgPawn*                                     Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgSpecialFx*                                Fx;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Serqet_LastBreath.LastBreathExplosionInfo
// 0x0014
struct FLastBreathExplosionInfo
{
	float                                              fDelayLeft;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	class UTgDeviceFire*                               DeviceMode;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_WarningDeployable.WarningDeployableInfo
// 0x0008
struct FWarningDeployableInfo
{
	class ATgDeployable*                               WarningDeployable;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATgProjectile*                               Proj;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Xbalanque_PoisonDarts.FanInformation
// 0x000C
struct ATgDevice_Xbalanque_PoisonDarts_FFanInformation
{
	int                                                nFiringInstanceId;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nHits;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDevice_Zeus_ForkedLightning.ArcingInfo
// 0x0024
struct FArcingInfo
{
	float                                              DamageMultiplier;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ArcTime;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RemainingArcTime;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                JumpsRemaining;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	class AActor*                                      PreviousArcTarget;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            PreviousTargets;                                  		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgDeviceFire_Zeus_ForkedLightning*          ArcFiremode;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeviceFire.TGDFM_ANIM_SEQUENCE
// 0x0010
struct FTGDFM_ANIM_SEQUENCE
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       nmSeqName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned long                                      bLeftHand : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDeviceFire_Ratatoskr_AcornThrowV2.AcornThrowHitData
// 0x000C
struct FAcornThrowHitData
{
	class ATgPawn*                                     HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                numHits;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      hitSpecialApplied : 1;                            		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgDeviceForm.ModeData
// 0x0020
struct FModeData
{
	float                                              c_fEquipModeTime;                                 		// 0x0000 (0x0004) [0x0000000000100000]              
	float                                              c_fBuildupTime;                                   		// 0x0004 (0x0004) [0x0000000000100000]              
	unsigned long                                      c_bContinuousFire : 1;                            		// 0x0008 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      c_FxInstantFire : 1;                              		// 0x0008 (0x0004) [0x0000000000100000] [0x00000002] 
	struct FName                                       c_nmOffhandAnimationType;                         		// 0x000C (0x0008) [0x0000000000100000]              
	unsigned long                                      c_bScaleFireAnimsWithRefire : 1;                  		// 0x0014 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      c_bInterruptAnimOnRefire : 1;                     		// 0x0014 (0x0004) [0x0000000000100000] [0x00000002] 
	float                                              c_fEffectRadius;                                  		// 0x0018 (0x0004) [0x0000000000100000]              
	float                                              c_fFullBodyAnimTime;                              		// 0x001C (0x0004) [0x0000000000100000]              
};

// ScriptStruct TgGame.TgDeviceForm_MultipleTargetIndicator.FormTargetingInfo
// 0x0008
struct FFormTargetingInfo
{
	class UTgSpecialFx*                                Fx;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgDeviceForm_SplineTarget.SplineContainer
// 0x001C
struct FSplineContainer
{
	struct FInterpCurveVector                          Spline;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ATgSplineLoftActorSpawnable* >       SplineActors;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgDistributionFloatSoundAttenuation.AttenuationGroup
// 0x000C
struct FAttenuationGroup
{
	struct FName                                       GroupName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              AttenuationDistance;                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgEffectForm_WithMeshes.EffectMeshInfo
// 0x0034
struct FEffectMeshInfo
{
	class UMeshComponent*                              Mesh;                                             		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                nMeshId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       DisplayGroup;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      AbsoluteTranslation : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      AbsoluteRotation : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      AbsoluteScale : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWillSelfDestruct : 1;                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector                                     vAdditiveTranslation;                             		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rAdditiveRotation;                                		// 0x0020 (0x000C) [0x0000000000000000]              
	float                                              fScaleMultipler;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsesParentAnimComponent : 1;                     		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgEffectManager.StunStackEntry
// 0x0005
struct FStunStackEntry
{
	class UTgEffect*                                   Effect;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      StunType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgEffectManager.EffectQueueEntry
// 0x0020
struct FEffectQueueEntry
{
	int                                                nEffectGroupId;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nExtraInfo;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     vHitLocation;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rHitNormal;                                       		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgEffectManager.EffectListEntry
// 0x0018
struct FEffectListEntry
{
	int                                                nEffectGroupId;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nSourceItemId;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      byNumStacks;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
	float                                              fInitTimeRemaining;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nExtraInfo;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nInstigatorId;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgEffectManager.RevealStackEntry
// 0x000C
struct FRevealStackEntry
{
	class UTgEffect*                                   Effect;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      RevealType;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	class ATgRepInfo_Player*                           RevealedBy;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgFlagContentData.FlagMeshData
// 0x0008
struct FFlagMeshData
{
	unsigned char                                      ContentDataType;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	class UTgMenuMeshInfo*                             MainMeshInfo;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGame.TgPlayerWardSkins
// 0x0010
struct FTgPlayerWardSkins
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      wardSkinIds;                                      		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgGame.TgPlayerGlobalEmoteSkins
// 0x0010
struct FTgPlayerGlobalEmoteSkins
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      globalEmoteSkinIds;                               		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgGame.TgAIBotPlayersToSpawn
// 0x001C
struct FTgAIBotPlayersToSpawn
{
	struct FString                                     fsName;                                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nBotId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nTaskForceId;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nSpawnTableDetailId;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFakeName : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgRepInfo_Game.GraphData
// 0x000C
struct FGraphData
{
	int                                                XP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Gold;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGame_Mission.SurrenderVote
// 0x0008
struct FSurrenderVote
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSurrender : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgGame_Mission.SurrenderData
// 0x0020
struct FSurrenderData
{
	float                                              fLastSurrenderTime;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FSurrenderVote >                    SurrenderVotes;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nSurrenderTotal;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nSurrenderNeeded;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nSurrenderVoteCount;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nNoSurrenderVoteCount;                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgGameTipManager.TipSavedState
// 0x0008
struct FTipSavedState
{
	int                                                nTipId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEncountered : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCompleted : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSuppressed : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct TgGame.TgInterpolatingCameraActor.InterpolatingCameraInfo
// 0x0040
struct FInterpolatingCameraInfo
{
	unsigned long                                      m_bInterpLocation : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bInterpRotation : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bInterpFOVAngle : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FVector                                     m_BaseLocation;                                   		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_TargetLocation;                                 		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    m_BaseRotation;                                   		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    m_TargetRotation;                                 		// 0x0028 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fBaseFOVAngle;                                  		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fTargetFOVAngle;                                		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fInterpSpeed;                                   		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgInventoryManager.InventoryTransaction
// 0x001C
struct FInventoryTransaction
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                ExistingObjectInvId;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                NewObjectInvId;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nInstanceCountChange;                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nGoldValue;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nEqpPoint;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fCooldown;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryManager.AutoPurchaseItem
// 0x0008
struct FAutoPurchaseItem
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nQuantity;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryManager.sInventoryStackItem
// 0x0005
struct FsInventoryStackItem
{
	class UTgInventoryObject_Device*                   Device;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      OldEquipPoint;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryManager.CourierTransaction
// 0x0019
struct FCourierTransaction
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ItemCount;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                InventoryId;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Currency;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	class ATgPawn_Courier*                             Courier;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      CourierPhase;                                     		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryManager.InventoryData
// 0x001C
struct FInventoryData
{
	int                                                nInvId;                                           		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                nItemId;                                          		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                nInstanceCount;                                   		// 0x0008 (0x0004) [0x0000000000100000]              
	unsigned long                                      bBoundFlag : 1;                                   		// 0x000C (0x0004) [0x0000000000100000] [0x00000001] 
	float                                              fAcquiredDatetime;                                		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                nEquipSlotValueId;                                		// 0x0014 (0x0004) [0x0000000000100000]              
	int                                                nRequiredLevel;                                   		// 0x0018 (0x0004) [0x0000000000100000]              
};

// ScriptStruct TgGame.TgInventoryManager_Ratatoskr.AcornPurchaseInfo
// 0x0010
struct FAcornPurchaseInfo
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nItemCount;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nUpgradeInvId;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsUpgrade : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgInventoryObject.sInventoryReq
// 0x0010
struct FsInventoryReq
{
	unsigned long                                      m_bLevelFail : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bSkillFail : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nSkillLevelReq;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nSkillIdReq;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bFlairFail : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bLocationFail : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TgGame.TgInventoryObject_Listen_AhMuzenCabBees.BeeVictimInfo
// 0x000C
struct FBeeVictimInfo
{
	class UTgEffectGroup*                              BeesEG;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fApplyTime;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fLastDisarm;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Ancile_S3.CooldownModifierInfo
// 0x000C
struct FCooldownModifierInfo
{
	class ATgDevice*                                   ModifiedDevice;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ModifiedCooldown;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDidModify : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgInventoryObject_Listen_BellonaScourge.HealAdder
// 0x000C
struct FHealAdder
{
	int                                                nDeviceId;                                        		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                nHitsPerStack;                                    		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                nTrackedHitCount;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_BellonaShieldBash.BlockStackAdder
// 0x000C
struct FBlockStackAdder
{
	int                                                nDeviceId;                                        		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                nHitsPerStack;                                    		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                nTrackedHitCount;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_OffHand.CastTrackingInfo
// 0x000C
struct FCastTrackingInfo
{
	int                                                nTargetId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nDeviceId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nFiringInstance;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Effect_Shockwave_OnHitHigherLevel.TGHHL_HITINFO
// 0x0008
struct FTGHHL_HITINFO
{
	int                                                nDeviceId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nLastTrackedFiringInstance;                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgInventoryObject_Listen_SoulStone_S3.SoulStoneTrackingData
// 0x000C
struct FSoulStoneTrackingData
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                FiringInstance;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      ConsumedStacks : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgInventoryObject_Listen_JanusTransitions.TransitionsEffectGroupInfo
// 0x0014
struct FTransitionsEffectGroupInfo
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bReadyToRemove : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class UTgEffectGroup* >                    AppliedEffectGroups;                              		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgInventoryObject_Listen_PotionOfMagMight.DeviceToReduce
// 0x000C
struct FDeviceToReduce
{
	int                                                m_nDeviceId;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nFiringInst;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bCooldownReduced : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgInventoryObject_Listen_RewardBoots.RewardHitInfo
// 0x0010
struct FRewardHitInfo
{
	class ATgPawn_Character*                           m_GodPawn;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UObject*                                     m_DeviceModeReference;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nFiringInstance;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fLastHitTime;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgMenuContentData.MeshData
// 0x0010
struct FMeshData
{
	unsigned char                                      ContentDataType;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	class UTgMenuMeshInfo*                             MainMeshInfo;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       CameraName;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgMenuMeshInfo.ParticleSystemInfo
// 0x000C
struct FParticleSystemInfo
{
	class UParticleSystem*                             ParticleSystem;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgMenuMeshInfo.LobbyMeshInfo
// 0x0050
struct FLobbyMeshInfo
{
	struct FVector                                     Translation;                                      		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scale;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               SkelMesh;                                         		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPhysicsAsset*                               PhysAsset;                                        		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimTree*                                   AnimTreeTemplate;                                 		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UAnimSet* >                          AnimSets;                                         		// 0x0028 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMorphTargetSet*                             MorphTargetSet;                                   		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOnlySelfShadow : 1;                              		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< class UMaterialInterface* >                MaterialOverrides;                                		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bUseIndividualLightEnvironment : 1;               		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseOverlayMesh : 1;                              		// 0x0048 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	int                                                SkinOverrideId;                                   		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgMinimapManager.MiniMapServerEntity
// 0x0050
struct FMiniMapServerEntity
{
	struct FVector                                     vLocation;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      eType;                                            		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                nSubType;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nProfileId;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      Team;                                             		// 0x0018 (0x0001) [0x0000000000000000]              
	int                                                nVisionRange;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsDead : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	class AReplicationInfo*                            RepInfo;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nIdx;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMarked : 1;                                      		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      bVisibleOnMap;                                    		// 0x0030 (0x0001) [0x0000000000000000]              
	unsigned char                                      bVisibleBySentinel;                               		// 0x0031 (0x0001) [0x0000000000000000]              
	unsigned long                                      bVisibleByDetector : 1;                           		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fLastPingTime;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRequireLOS : 1;                                  		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDetector : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSentinel : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      byVisionMask;                                     		// 0x0040 (0x0001) [0x0000000000000000]              
	float                                              fHealthPCT;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	class AActor*                                      FogOfWarArea;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      FogOfWarAreaRevealed : 1;                         		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_AhPuch.Dev3Victim
// 0x0008
struct FDev3Victim
{
	class ATgPawn*                                     VictimPawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                HealStacks;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Aphrodite.SoulMateLinkInfo
// 0x0030
struct FSoulMateLinkInfo
{
	class AActor*                                      LinkActor;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgSpecialFx*                                Fx;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     SourceLocation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     TargetLocation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              fDetachLength;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              fOpacity;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBlink : 1;                                       		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_Chaac.LevitateVictimInfo
// 0x000C
struct FLevitateVictimInfo
{
	class ATgPawn*                                     VictimPawn;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   RelativeOffset2D;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Chaac.KillMaterialInfo
// 0x0024
struct FKillMaterialInfo
{
	struct FName                                       MaterialParameterName;                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       DisplayGroupName;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                nActivationLevel;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fRampUpTime;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fRampDownTime;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fCurrentValue;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bActive : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_Courier.CourierPhaseState
// 0x0008
struct FCourierPhaseState
{
	unsigned char                                      Phase;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      TransactionType;                                  		// 0x0001 (0x0001) [0x0000000000000000]              
	class ATgPawn*                                     Customer;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Chronos.RewindInfo
// 0x0024
struct FRewindInfo
{
	float                                              fTimestamp;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              fHealth;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fMana;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Phoenix.NavMeshBorderEdges
// 0x0018
struct FNavMeshBorderEdges
{
	struct FVector                                     P1;                                               		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     P2;                                               		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Djinni.ScalingProp
// 0x0008
struct FScalingProp
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_G72.G72PassiveTarget
// 0x0008
struct FG72PassiveTarget
{
	class ATgCollisionProxy*                           Aura;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_GuanYuV2.SavedChargeHitV2
// 0x0008
struct FSavedChargeHitV2
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              HitTime;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_GuanYuV2.GuanYuV2UltTarget
// 0x0008
struct FGuanYuV2UltTarget
{
	class ATgPawn*                                     Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                HitCount;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Juggernaut.MinionSpawnInfo
// 0x003C
struct FMinionSpawnInfo
{
	float                                              fSpawnDelay;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       DeathAnimName;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FVector                                     vSpawnLocations[ 0x2 ];                           		// 0x000C (0x0018) [0x0000000000000000]              
	struct FRotator                                    rSpawnRotations[ 0x2 ];                           		// 0x0024 (0x0018) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Kaldr.KaldrDamageInstance
// 0x000C
struct FKaldrDamageInstance
{
	int                                                nDeviceId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nDeviceInstanceId;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nDeviceFiringInstance;                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Kukulkan.SlipstreamMod
// 0x0008
struct FSlipstreamMod
{
	float                                              fSpeedMod;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fDuration;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Kumbhakarna.VictimCollisionData
// 0x0010
struct FVictimCollisionData
{
	class ATgPawn*                                     KnockedUpVictim;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastLocation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_NeZha.UniverseRingTossDamageTracker
// 0x0008
struct FUniverseRingTossDamageTracker
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                HitCount;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Nox.ShadowLockInfo
// 0x0030
struct FShadowLockInfo
{
	class AActor*                                      LinkActor;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgSpecialFx*                                Fx;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     SourceLocation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     TargetLocation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              fDetachLength;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              fOpacity;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBlink : 1;                                       		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_NuWa.NuWaFormControl
// 0x0014
struct FNuWaFormControl
{
	class USkelControlBase*                            SkelCon;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       SkelConName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      eActiveForm;                                      		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned long                                      bNotOnIntro : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_NuWa.NuWaCrystalInfo
// 0x0014
struct FNuWaCrystalInfo
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fTimer;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class USkelControlBase*                            SkelCon;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       SkelConName;                                      		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Terra.TerraWardstoneFXData
// 0x000C
struct FTerraWardstoneFXData
{
	class ATgPawn*                                     Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ActiveStoneCount;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsActive : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgPawn_Thanatos.LowHealthInfo
// 0x000C
struct FLowHealthInfo
{
	class UTgSpecialFx*                                LowHealthFx;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fBearing;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Thanatos.KillBallInfo
// 0x0024
struct FKillBallInfo
{
	class UTgSkeletalMeshComponent*                    Mesh;                                             		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     vLocation;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned long                                      bIsMovable : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fStartDistance;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fTimeActive;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fReturnTime;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fMoveWeight;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Tower_Obelisk.TowerBeamInfo
// 0x0008
struct FTowerBeamInfo
{
	class ATgPawn*                                     TargetActor;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgSpecialFx*                                TowerBeamFx;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_ZhongKui.FierceGlareInfo
// 0x0024
struct FFierceGlareInfo
{
	class UTgSkeletalMeshComponent*                    Mesh;                                             		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     vLocation;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned long                                      bGoToBag : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsMovable : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              fStartDistance;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fTimeActive;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fReturnTime;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fMoveWeight;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_ZhongKui.FierceGlareHealInfo
// 0x000C
struct FFierceGlareHealInfo
{
	float                                              fHealTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgDeviceFire*                               HealMode;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnergyOnly : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgGame.TgProj_Hercules_Boulder.BoulderHitInfo
// 0x0008
struct FBoulderHitInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                numHits;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_Player.DeviceTeamInfo
// 0x0020
struct FDeviceTeamInfo
{
	int                                                CurrentDeviceId;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LastKnownDeviceId[ 0x3 ];                         		// 0x0004 (0x000C) [0x0000000000000000]              
	int                                                CurrentDeviceCount;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                LastKnownDeviceCount[ 0x3 ];                      		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.TGTEAM_ENTRY
// 0x0028
struct FTGTEAM_ENTRY
{
	struct FString                                     fsName;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     fsMapName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nHealth;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nMaxHealth;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bLeader : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	class ATgRepInfo_Player*                           pPrep;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.TEAMTIMEMANAGER_ENTRY
// 0x0008
struct FTEAMTIMEMANAGER_ENTRY
{
	class UTgTimerManager*                             m_TimerManager;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nDeviceId;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.GLOBALEFFECT_ENTRY
// 0x0008
struct FGLOBALEFFECT_ENTRY
{
	class UTgEffectGroup*                              eg;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATgPawn*                                     pawnInstigator;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.sPredefinedLevelDeployInfo
// 0x0010
struct FsPredefinedLevelDeployInfo
{
	int                                                m_Id;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_Location;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgSkelCon_CCD_IK_FootPlacement.JointConstraintInformation
// 0x0008
struct FJointConstraintInformation
{
	float                                              AngleConstraint;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StretchConstraint;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgSkelCon_HitReaction.RecoilInfo
// 0x00E0
struct FRecoilInfo
{
	struct FRecoilDef                                  Min;                                              		// 0x0000 (0x0070) [0x0000000000000001]              ( CPF_Edit )
	struct FRecoilDef                                  Max;                                              		// 0x0070 (0x0070) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgSkelCon_Spinner_Skinned.SkinnedSpinData
// 0x0008
struct FSkinnedSpinData
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSkinnedRotationsPerSecond;                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgSkelCon_ZhongKui_BagGrowth.BagGrowthDef
// 0x0030
struct FBagGrowthDef
{
	float                                              fMinScale;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxScale;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAbsoluteMinScale;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAbsoluteMaxScale;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEmptyBagScale;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fGrowthPerDemon;                                  		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fGrowthCoefficient;                               		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fDampeningCoefficient;                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fGrowthImpulse;                                   		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fGrowthImpulseDecay;                              		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fShrinkImpulse;                                   		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fShrinkImpulseDecay;                              		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgSkelControlSingleBone_DisplayGroup.DisplayGroupInfo
// 0x0024
struct FDisplayGroupInfo
{
	struct FName                                       DisplayGroupName;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      WhenDisplayGroupOn;                               		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Strength;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOn : 1;                                          		// 0x0010 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      ForceOffIfMeshHidden : 1;                         		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< struct FName >                             SocketNames;                                      		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      ForceOffIfBelowLobbyWall : 1;                     		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct TgGame.TgSkelControlSingleBone_ScalarMICParam.ScalarMICParamInfo
// 0x0010
struct FScalarMICParamInfo
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bInverseOfControlStrength : 1;                    		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              ParamStrength;                                    		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct TgGame.TgSkelControlSingleBone_Skinned.SkinStrengthOverride
// 0x0008
struct FSkinStrengthOverride
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fDesiredStrength;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct TgGame.TgSoundGroup.FootstepSoundInfo
// 0x000C
struct FFootstepSoundInfo
{
	struct FName                                       MaterialType;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   Sound;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgSpecialFxLightManager.TgFxLight
// 0x000C
struct FTgFxLight
{
	struct FPointer                                    m_FxEmitter;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgSpecialFx*                                m_OwnerSpecialFx;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_Score;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgTrailComponent_Aphrodite_FertileGround.TouchInfo
// 0x0010
struct FTouchInfo
{
	class AActor*                                      TouchedActor;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class ATgDeployable* >                     TouchingChildren;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAchievement_Camazotz_BatOutOfHell.CamazotzTrackedTargets
// 0x0014
struct FCamazotzTrackedTargets
{
	int                                                FiringInstance;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AmmoInstance;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< class ATgPawn* >                           Targets;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgAnimNotify_Sound_NikeUltSounds.PSE_Skin_Nike
// 0x0014
struct FPSE_Skin_Nike
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSkinLevel;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class USoundCue* >                         SoundCues;                                        		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct TgGame.TgDevice_Apep_AcidSpray.DeployTouchStatus
// 0x0008
struct FDeployTouchStatus
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumTouches;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Racer.RacerTurnRateData
// 0x000C
struct FRacerTurnRateData
{
	float                                              BotRate;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TopRate;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgGame.TgPawn_Racer.RacerAccelData
// 0x0008
struct FRacerAccelData
{
	float                                              MaxSpeed;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Rate;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif