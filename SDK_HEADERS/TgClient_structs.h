/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgClient_structs.h
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

// ScriptStruct TgClient.TgDataChunk.DataField
// 0x0048
struct FDataField
{
	struct FString                                     FieldName;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FASValue                                    Value;                                            		// 0x000C (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FASValue                                    Last;                                             		// 0x0028 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDirty : 1;                                       		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClient.TgGameDC_Chat.QueueMessage
// 0x0028
struct FQueueMessage
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Priority;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      bHasPlayedSound : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                VoicePackId;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                VoiceBotId;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                VoiceSkinId;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     VoicePackCustomSuffix;                            		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   SoundCue;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGameDC_Chat.MessageToken
// 0x0018
struct FMessageToken
{
	int                                                msgId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MsgIdRed;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MsgIdBlue;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     Token;                                            		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGameHUDOverlay.DamageInfoData
// 0x0024
struct FDamageInfoData
{
	int                                                nSourceId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nTargetId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                dwSourceItemId;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned long                                      bLocalSource : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fValue;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     displayStr;                                       		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGameHUDOverlay.AdditionalCalculateHudParams
// 0x000C
struct FAdditionalCalculateHudParams
{
	class ATgRepInfo_TaskForce*                        LocalPCTaskForce;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsSpectating : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlayerHasTgEffectForm_Xbalanque_ApocalypseShroud : 1;		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              FOVAngle;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGameHUDOverlay.OverlayTag
// 0x00B8
struct FOverlayTag
{
	float                                              fLastMarkTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fDistance;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fCurrentScale;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnemy : 1;                                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMarked : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHidden : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      eOverlayType;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      eOverlayOffscreenIndicator;                       		// 0x0011 (0x0001) [0x0000000000000000]              
	int                                                nActorId;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nPrevHealth;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nPrevMaxHealth;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nPrevPower;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nPrevMaxPower;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nPrevShield;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nPrevMaxShield;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nPrevLevel;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nPrevStunCat;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     sPrevName;                                        		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      bPrevPassiveActive;                               		// 0x0044 (0x0001) [0x0000000000000000]              
	unsigned char                                      bPrevPassiveSlotActive[ 0x8 ];                    		// 0x0045 (0x0008) [0x0000000000000000]              
	int                                                nProfileId;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                nMaxHealth;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                nMaxPower;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  containerClip;                                    		// 0x005C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  nameplateClip;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  arrowClip;                                        		// 0x0064 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  playerBarClip;                                    		// 0x0068 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  nameClip;                                         		// 0x006C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  nameClip2;                                        		// 0x0070 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  distanceClip;                                     		// 0x0074 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  levelClip;                                        		// 0x0078 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  levelClip2;                                       		// 0x007C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  targetedClip;                                     		// 0x0080 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  objectiveLabelClip;                               		// 0x0084 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  passiveHolderClip;                                		// 0x0088 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  passiveHolderEffectsList;                         		// 0x008C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  lifespanBarClip;                                  		// 0x0090 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  lifespanBarScaleClip;                             		// 0x0094 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  effectClip;                                       		// 0x0098 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  effectBarClip;                                    		// 0x009C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  effectBarScaleClip;                               		// 0x00A0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  portraitLoaderClip;                               		// 0x00A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  portraitDeadClip;                                 		// 0x00A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  sctClip;                                          		// 0x00AC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  sctCritClip;                                      		// 0x00B0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  offscreenIndicatorClip;                           		// 0x00B4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGameHUDOverlay.DamageInfoQueue
// 0x0010
struct FDamageInfoQueue
{
	TArray< struct FDamageInfoData >                   damageInfos;                                      		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              lastUpdate;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGameMoviePlayer.UIChangeStruct
// 0x000C
struct FUIChangeStruct
{
	class AActor*                                      refActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      uiEvent;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                subType;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGameMoviePlayer.UIQueuedAcquisition
// 0x0048
struct FUIQueuedAcquisition
{
	int                                                m_nIndex;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nType;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sHeader;                                        		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sFooter;                                        		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sLeagueHeader;                                  		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sLeagueFooter;                                  		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nItemId;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sOptional;                                      		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGameMoviePlayer.SysCounterData
// 0x0008
struct FSysCounterData
{
	int                                                CounterId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CounterCount;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGameMoviePlayer.WidgetBinding
// 0x000C
struct FWidgetBinding
{
	struct FName                                       m_WidgetName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_Widget;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGameMoviePlayer.CardTextureWidget
// 0x0040
struct FCardTextureWidget
{
	class UGFxObject*                                  Widget;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nItemId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fWidth;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fHeight;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fTimeSinceCreation;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLoaded : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sCardMIC;                                         		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTexture;                                         		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMaterialInstanceConstant*                   cardMIC;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  Texture;                                          		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGameMoviePlayer.WebRegion
// 0x0020
struct FWebRegion
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nLastStreamId;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sLastURL;                                         		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGameMoviePlayer.LastMatchMember
// 0x0018
struct FLastMatchMember
{
	int                                                m_playerId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_profileId;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_playerName;                                     		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_avatarId;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGameMoviePlayer.LastPartiedMember
// 0x0010
struct FLastPartiedMember
{
	int                                                m_playerId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_playerName;                                     		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxChallengeList.QueuedPlayer
// 0x0010
struct FQueuedPlayer
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Status;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxChallengeList.CustomServer
// 0x00E0
struct FCustomServer
{
	int                                                nQueueId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nIconId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nPickType;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nNumPlayers;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nCurPlayers;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nTeamSize;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPassword : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sOwnerName;                                       		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sQueueName;                                       		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sGameMode;                                        		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FQueuedPlayer                               Players[ 0xA ];                                   		// 0x0040 (0x00A0) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxChallengeList.ServerButton
// 0x0008
struct FServerButton
{
	class UTgGFxObject*                                Button;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Lock;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxChallengeList.LabelValuePair
// 0x0008
struct FLabelValuePair
{
	class UTgGFxObject*                                Label;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxChallengeList.MatchDetails
// 0x002C
struct FMatchDetails
{
	class UTgGFxObject*                                Panel;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Title;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Image;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FLabelValuePair                             Server;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	struct FLabelValuePair                             Players;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FLabelValuePair                             GameMode;                                         		// 0x001C (0x0008) [0x0000000000000000]              
	struct FLabelValuePair                             PickType;                                         		// 0x0024 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxChallengeLobby.PlayerInvite
// 0x0010
struct FPlayerInvite
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Status;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxChallengeLobby.BotDifficultyOption
// 0x0010
struct FBotDifficultyOption
{
	int                                                nSpawnTableDetailId;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nSpawnTableId;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nDifficultyId;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nDifficultySortOrder;                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxChallengeLobby.BotData
// 0x001C
struct FBotData
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nBotId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FBotDifficultyOption >              pBotDifficultyOptions;                            		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxChallengeLobby.PlayerSlot
// 0x0048
struct FPlayerSlot
{
	class UTgGFxObject*                                Object;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerInfo;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerName;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerIcon;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerIconLoader;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerLevel;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                RoomHost;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                KickBtn;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                ChangeTeamBtn;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PromoteInviterBtn;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                EmptyInfo;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                HostJoinBtn;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerJoinBtn;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                AddBotMyTeamBtn;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                AddBotEnemyTeamBtn;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                BotClassDropdown;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                BotDifficultyDropdown;                            		// 0x0040 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                BotDifficultyTF;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxChallengeLobby.TeamMember
// 0x002C
struct FTeamMember
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsSelf : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsHost : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanInvite : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                nBotId;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nSpawnTableDetailId;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nIconId;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     sIconTexture;                                     		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nLevel;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxChallengeOptions.MatchButton
// 0x0008
struct FMatchButton
{
	class UTgGFxObject*                                Button;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Icon;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.ItemBuilderCategory
// 0x0038
struct FItemBuilderCategory
{
	int                                                CategoryId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Items[ 0x4 ];                                     		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                Quantities[ 0x4 ];                                		// 0x0018 (0x0010) [0x0000000000000000]              
	int                                                AutoBuyIndex[ 0x4 ];                              		// 0x0028 (0x0010) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.PreviewItem
// 0x000C
struct FPreviewItem
{
	int                                                CategoryIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ColumnIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.AbilityLevelButton
// 0x0008
struct FAbilityLevelButton
{
	class UTgGFxObject*                                Icon;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Object;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.AbilityRow
// 0x0014
struct FAbilityRow
{
	class UTgGFxObject*                                LevelTF;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FAbilityLevelButton                         Button[ 0x2 ];                                    		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.AbilitySelectionButton
// 0x0020
struct FAbilitySelectionButton
{
	class UTgGFxObject*                                Icon;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Object;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                AbilityNameTF;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                AblilityPips[ 0x5 ];                              		// 0x000C (0x0014) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.LevelInfo
// 0x0008
struct FLevelInfo
{
	int                                                Ability[ 0x2 ];                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.BuildItemDisplay
// 0x0008
struct FBuildItemDisplay
{
	class UTgGFxObject*                                Icon;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Quantity;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.ItemDisplay
// 0x0040
struct FItemDisplay
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                ItemButton;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                BuildButton;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                RemoveButton;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Icon;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                NameTF;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                DescTF;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                BuildQty;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                BuildQtyTF;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                BuildCostTF;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                BuildIcon;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                BuildNameTF;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                BuildCheckbox;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                CostTF[ 0x3 ];                                    		// 0x0034 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxChatInput.ChannelData
// 0x0010
struct FChannelData
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxEventScene.QuestConnection
// 0x000C
struct FQuestConnection
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nStartQuest;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nEndQuest;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxEventScene.EventMilestone
// 0x000C
struct FEventMilestone
{
	class UTgGFxObject*                                Milestone;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Tick;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Textfield;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxEventScene.EventMapMarkings
// 0x0010
struct FEventMapMarkings
{
	int                                                nItemsRequired;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sObjName;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxEventScene.CollectionBonuses
// 0x0008
struct FCollectionBonuses
{
	int                                                nItemsRequired;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nItemId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxEventScene.QuestItemRewards
// 0x0020
struct FQuestItemRewards
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nLootTableItemId;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sQuestRequired;                                   		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sQuestDescription;                                		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxEventScene.QuestGoal
// 0x0040
struct FQuestGoal
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription;                                     		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCompleted : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nName;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nDescription;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nCompletedType;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nGoalId;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nRewardItemId;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nRewardQuantity;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	TArray< int >                                      nPrecursorGoalId;                                 		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxFooterMain.GfxActiveChannelItem
// 0x0014
struct FGfxActiveChannelItem
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                CloseButton;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SelectionButton;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                NotificationIndicator;                            		// 0x000C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                NotificationCount;                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxGods.ItemData_GodPage
// 0x009C
struct FItemData_GodPage
{
	int                                                nGodId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nItemId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nUIHint;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nIconIndexBW;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nSkinId;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nSkinType;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nFavorCost;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nGemCost;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nPackId;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nPackCost;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nPackCurrency;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nGodLevel;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nWorshipers;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nForLevel;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                nForNext;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                nRentTime;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                nRentTimeUpdate;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                nSubType;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                nObtainability;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	unsigned long                                      bNew : 1;                                         		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSelected : 1;                                    		// 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOwned : 1;                                       		// 0x0050 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bLocked : 1;                                      		// 0x0050 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPurchasable : 1;                                 		// 0x0050 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bVoicePackOwned : 1;                              		// 0x0050 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bRented : 1;                                      		// 0x0050 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bHasVP : 1;                                       		// 0x0050 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bIsExclusive : 1;                                 		// 0x0050 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bIsLimited : 1;                                   		// 0x0050 (0x0004) [0x0000000000000000] [0x00000200] 
	struct FString                                     sGoldLabel;                                       		// 0x0054 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x0060 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTags;                                            		// 0x006C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription;                                     		// 0x0078 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sPantheon;                                        		// 0x0084 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sImageTexture;                                    		// 0x0090 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxGods.StreamData_Gods
// 0x0020
struct FStreamData_Gods
{
	int                                                streamIdGods;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                streamBotId;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     streamURLGods;                                    		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     streamLabelGods;                                  		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxGods.AchievementData_GodsAchievements
// 0x0058
struct FAchievementData_GodsAchievements
{
	int                                                botIdGods;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                pointValue;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                goalGroupId;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                goalId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ActivityId;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                dateInt;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     nameMsg;                                          		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     titleMsg;                                         		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     descMsg;                                          		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     dateMsg;                                          		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     imgSource;                                        		// 0x0048 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      hasCompleted : 1;                                 		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClient.TgGfxGods.VendorItemUIHint
// 0x0010
struct FVendorItemUIHint
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxGods.GFxGodBtn
// 0x0034
struct FGFxGodBtn
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Icon;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                TagText;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                GoldTag;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                OwnedLabel;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                GemPrice;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                FavorPrice;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                GemPriceTF;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                FavorPriceTF;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SpecialTF;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SpecialTag;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                MasteryIcon;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                GodLabel;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxGods.GFxSkinBtn
// 0x0034
struct FGFxSkinBtn
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Icon;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                TagText;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                GoldTag;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                OwnedLabel;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                GemPrice;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                FavorPrice;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                GemPriceTF;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                FavorPriceTF;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SpecialTF;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SpecialTag;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                LegendaryImage;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                DiamondImage;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxGods.GFxItem
// 0x0020
struct FGFxItem
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Icon;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconWard;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconWardBW;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconWardColor;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                MasterIcon;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                TagText;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                GoldTag;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxGodTargeter.GfxGodSelector
// 0x0010
struct FGfxGodSelector
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerName;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                godName;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                godButton;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxHudNotify.NotifyData
// 0x0078
struct FNotifyData
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nSoundId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nAnnouncerId;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocal : 1;                                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLocalOnly : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      NotifyType;                                       		// 0x0010 (0x0001) [0x0000000000000000]              
	struct FString                                     sSourceName;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTargetName;                                      		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bFriendly : 1;                                    		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nSkin;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nGodA;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nGodB;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                nGodAColored;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                nGodBColored;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned char                                      AccoladeType;                                     		// 0x0044 (0x0001) [0x0000000000000000]              
	unsigned long                                      bKillStreakOrCombo : 1;                           		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nAccoladeIcon;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              fExpireTime;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              fDurationOverride;                                		// 0x0054 (0x0004) [0x0000000000000000]              
	struct FString                                     sMessage;                                         		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nAlertType;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                nNotifyFill;                                      		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                nNotifyDelay;                                     		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                nNotifyColor;                                     		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                nNotifySize;                                      		// 0x0074 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxHudNotify.EventLogData
// 0x0008
struct FEventLogData
{
	int                                                RewindFrame;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                EventIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxLoadouts.ItemData_LoadoutsPage
// 0x0030
struct FItemData_LoadoutsPage
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nGemPrice;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nFavorPrice;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nSubType;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNew : 1;                                         		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOwned : 1;                                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPurchasable : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     sName;                                            		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription;                                     		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxLoadouts.GFxLoadoutItem
// 0x0070
struct FGFxLoadoutItem
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconAvatar;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconAvatarColor;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconAnnouncer;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconAnnouncerBW;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconAnnouncerColor;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconWard;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconWardBW;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconWardColor;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconFrame;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconFrameBW;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconFrameColor;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconPedestal;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconPedestalBW;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconPedestalColor;                                		// 0x0038 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconGlobalEmote;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconGlobalEmoteBW;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconGlobalEmoteColor;                             		// 0x0044 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconMusicTheme;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconMusicThemeBW;                                 		// 0x004C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconMusicThemeColor;                              		// 0x0050 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconRecallSkin;                                   		// 0x0054 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconRecallSkinBW;                                 		// 0x0058 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconRecallSkinColor;                              		// 0x005C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconHudTheme;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconHudThemeBW;                                   		// 0x0064 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconHudThemeColor;                                		// 0x0068 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Tag;                                              		// 0x006C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxLoadouts.GfxEquippedLoadoutItem
// 0x0084
struct FGfxEquippedLoadoutItem
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FGFxLoadoutItem                             LoadoutItem;                                      		// 0x0004 (0x0070) [0x0000000000000000]              
	class UTgGFxObject*                                TitleTF;                                          		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FString                                     sTitle;                                           		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxMassInvite.OpenInvite
// 0x0010
struct FOpenInvite
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                IconId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxMassInvite.FriendRow
// 0x0010
struct FFriendRow
{
	class UTgGFxObject*                                Object;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerName;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerStatus;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                InviteBtn;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxMassInvite.InviteRow
// 0x0010
struct FInviteRow
{
	class UTgGFxObject*                                Object;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerName;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerIcon;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                RemoveBtn;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxNotificationList.Notification
// 0x0090
struct FNotification
{
	class UTgGFxObject*                                Object;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Notification;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Description;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Time;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Status;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                BackBtn;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                AcceptBtn;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                CancelBtn;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                RemoveBtn;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                GotoBtn;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconBtn;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                AvatarIcon;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                AnnouncerPackIcon;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                WardSkinIcon;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                LoadingFrameIcon;                                 		// 0x0038 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PedestalIcon;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                GlobalEmoteIcon;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                MusicThemeIcon;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                RecallSkinIcon;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                TreasureRollIcon;                                 		// 0x004C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                QuestIcon;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                AvatarIconOuter;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                AnnouncerPackIconOuter;                           		// 0x0058 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                WardSkinIconOuter;                                		// 0x005C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                LoadingFrameIconOuter;                            		// 0x0060 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PedestalIconOuter;                                		// 0x0064 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                GlobalEmoteIconOuter;                             		// 0x0068 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                MusicThemeIconOuter;                              		// 0x006C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                RecallSkinIconOuter;                              		// 0x0070 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconLoader;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                IconOther;                                        		// 0x0078 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PointsContainer;                                  		// 0x007C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PointsTF;                                         		// 0x0080 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                PromotionalCodeIcon;                              		// 0x0084 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                HudThemeIcon;                                     		// 0x0088 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                HudThemeIconOuter;                                		// 0x008C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxNotificationList.NotificationTab
// 0x0008
struct FNotificationTab
{
	class UTgGFxObject*                                Tab;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                NewIndicator;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxParty.QuickAddListData
// 0x0010
struct FQuickAddListData
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxParty.PartyPlayer
// 0x002C
struct FPartyPlayer
{
	class UTgGFxObject*                                Obj;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Icon;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Bkgd;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Stat;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Btns[ 0x4 ];                                      		// 0x0010 (0x0010) [0x0000000000000000]              
	class UTgGFxObject*                                Text[ 0x3 ];                                      		// 0x0020 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxParty.PartyQuickAdd
// 0x0018
struct FPartyQuickAdd
{
	class UTgGFxObject*                                Obj;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Stat[ 0x2 ];                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Text[ 0x2 ];                                      		// 0x000C (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                AddIcon;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxPartyManagement.ListPlayerData
// 0x0018
struct FListPlayerData
{
	int                                                lpd_PlayerId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                lpd_AvatarId;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                lpd_PlayedGodId;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     lpd_PlayerName;                                   		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxPartyManagement.PlayerBtn
// 0x0010
struct FPlayerBtn
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Avatar;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Pending;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                SignificanceIcon;                                 		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxPlayerProfile.MatchMembersFilter
// 0x0008
struct FMatchMembersFilter
{
	int                                                matchId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  membersFilterArray;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxProfileAchievements.AchievementData_ProfileAchievements
// 0x0068
struct FAchievementData_ProfileAchievements
{
	int                                                achievementType;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                achievementProgress;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                achievementGoalProgress;                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                pointValue;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                displayId;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                goalGroupId;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                goalId;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ActivityId;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                dateInt;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     nameMsg;                                          		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     titleMsg;                                         		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     descMsg;                                          		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     dateMsg;                                          		// 0x0048 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     imgSource;                                        		// 0x0054 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      hasCompleted : 1;                                 		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject*                                  gfxObj;                                           		// 0x0064 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxProfileOverview.MatchOutcome
// 0x0008
struct FMatchOutcome
{
	int                                                wins;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                losses;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxReferrals.LevelRewardData
// 0x0010
struct FLevelRewardData
{
	int                                                LRD_Level;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LRD_Reward;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                LRD_RewardType;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                LRD_Boost;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxReferrals.PlayedRewardData
// 0x0010
struct FPlayedRewardData
{
	int                                                PRD_Played;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PRD_Reward;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PRD_RewardType;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PRD_Boost;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxSpectatorHud.BotLifeData
// 0x0018
struct FBotLifeData
{
	unsigned long                                      bAlive : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nSpawnTime;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nRespawnTime;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_DeathTimes;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxTrainingPage.TrainingData
// 0x002C
struct FTrainingData
{
	unsigned long                                      TD_HasCompleted : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TD_QueueId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TD_PrizeAmount;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TD_XpAmount;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TD_IconId;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     TD_Title;                                         		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     TD_Desc;                                          		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxVendorData.ItemData
// 0x0070
struct FItemData
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nTier;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nType;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nIcon;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nCost;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nCostA;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nCostB;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nCostC;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nLevel;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nSubType;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nMaxStacks;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nDeviceType;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bAura : 1;                                        		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bStack : 1;                                       		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOwned : 1;                                       		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bLocked : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bUnique : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bStarter : 1;                                     		// 0x0030 (0x0004) [0x0000000000000000] [0x00000020] 
	struct FString                                     sName;                                            		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDesc;                                            		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      nEffects;                                         		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      nParents;                                         		// 0x0058 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      nChildren;                                        		// 0x0064 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxVendorStore.ItemCategory
// 0x0028
struct FItemCategory
{
	int                                                CategoryId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Items[ 0x4 ];                                     		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                Quantities[ 0x4 ];                                		// 0x0018 (0x0010) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxVendorStore.ItemFilter
// 0x0014
struct FItemFilter
{
	int                                                nMask;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nAltMask;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bChecked : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	class UTgGFxObject*                                pObj;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                pBox;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxVendorStore.DisplayItem
// 0x0038
struct FDisplayItem
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Icon;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                NameTF;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                DescTF;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                CostTF;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Cost1TF;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Cost2TF;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Cost3TF;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                Quantity;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                OwnedIcon;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                LockedIcon;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                LockedFrame;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                TierBtnBG;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                RelicBorder;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgLandingPanelManager.FeatureAdData
// 0x0008
struct FFeatureAdData
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nProbability;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgLobbyHUD.LobbyTransitionPlayer
// 0x00B8
struct FLobbyTransitionPlayer
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nClassId;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nSkinId;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nTaskForce;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nWins;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nPlayerKills;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nAssists;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nXpLevel;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nHasGoldFrame;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nFrameId;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nMasteryLevel;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nAvatarId;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nHideGodStats;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FString                                     sTeam1;                                           		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTeam2;                                           		// 0x0048 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDateTime;                                        		// 0x0054 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sFantasyPoints;                                   		// 0x0060 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      isAI : 1;                                         		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      hasSeasonTicket : 1;                              		// 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     sOdyPoints;                                       		// 0x0070 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sClassName;                                       		// 0x007C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sClassIconTexture;                                		// 0x0088 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sClassIconMIC;                                    		// 0x0094 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sBorderMIC;                                       		// 0x00A0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sSkinName;                                        		// 0x00AC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgLobbyHUD.LobbyTransitionData
// 0x0730
struct FLobbyTransitionData
{
	struct FLobbyTransitionPlayer                      FriendlyTeam[ 0x5 ];                              		// 0x0000 (0x0398) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLobbyTransitionPlayer                      EnemyTeam[ 0x5 ];                                 		// 0x0398 (0x0398) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgMiniMap.LayerIndex
// 0x000C
struct FLayerIndex
{
	TArray< int >                                      Entries;                                          		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgMiniMap.MiniMapPingInfo
// 0x003C
struct FMiniMapPingInfo
{
	float                                              fServerStartTime;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fClientStartTime;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	class ATgRepInfo_Player*                           pingedPri;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     vPingedLoc;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      bIsPinging : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eType;                                            		// 0x001C (0x0001) [0x0000000000000000]              
	int                                                nIconSize;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   pingMIC;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	class ATgRepInfo_Player*                           sourcePRI;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                SourceIndex;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	struct FVector                                     vSourceWorldLocation;                             		// 0x0030 (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgMiniMap.FogMaskData
// 0x002C
struct FFogMaskData
{
	int                                                nSize;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nMapDrawLocationX;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nMapDrawLocationY;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocationChanged : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bVisionRangeChanged : 1;                          		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FBitArray_Mirror                            m_MaskPoints;                                     		// 0x0010 (0x001C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct TgClient.TgMiniMap.MiniMapEntity
// 0x0088
struct FMiniMapEntity
{
	struct FVector                                     vLocation;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      eType;                                            		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                nSubType;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nProfileId;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      Team;                                             		// 0x0018 (0x0001) [0x0000000000000000]              
	int                                                nVisionRange;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsDead : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	class AReplicationInfo*                            RepInfo;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                GenericState;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nIdx;                                             		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bMarked : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bVisibleOnMap : 1;                                		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bValidTarget : 1;                                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHovered : 1;                                     		// 0x0030 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bFlashHighlight : 1;                              		// 0x0030 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bFlashRecall : 1;                                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bVisible : 1;                                     		// 0x0030 (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              fAlpha;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              fHealthPCT;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasNoIcon : 1;                                   		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nDrawSize;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                nHitSize;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FVector                                     vRect;                                            		// 0x004C (0x000C) [0x0000000000000000]              
	float                                              fBlinkSpeed;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FFogMaskData                                FogMaskData;                                      		// 0x005C (0x002C) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgMiniMap.BuffMonsterMIC
// 0x000C
struct FBuffMonsterMIC
{
	class UMaterialInstanceConstant*                   SpawnedMIC;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   DroppedMIC;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   TimerMIC;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgRewardCenterManager.GoalRewardItem
// 0x000C
struct FGoalRewardItem
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nQuantity;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRental : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClient.TgRewardCenterManager.ActivityGoal
// 0x0034
struct FActivityGoal
{
	int                                                nTargetValue;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nProgressValue;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sDescription;                                     		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bClaimed : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nGoalId;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	TArray< struct FGoalRewardItem >                   pLootItems;                                       		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgRewardCenterManager.PlayerPartyBonus
// 0x0010
struct FPlayerPartyBonus
{
	int                                                nPlayerCount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fWorshipperBonus;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fXpBonus;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fFavorBonus;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgRewardCenterManager.SeasonTicketGameData
// 0x00F0
struct FSeasonTicketGameData
{
	int                                                nGameMatchId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sTeamName1;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTeamName2;                                       		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTeamAbbr1;                                       		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTeamAbbr2;                                       		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTeamImage1;                                      		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTeamImage2;                                      		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDesc;                                            		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nTeam1Picks;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                nTeam2Picks;                                      		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                nSplitPicks;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                nTeamId1;                                         		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                nTeamId2;                                         		// 0x0068 (0x0004) [0x0000000000000000]              
	struct FString                                     sExternalLink;                                    		// 0x006C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nSelectedTeam;                                    		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                nWinningTeam;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                nStartTime;                                       		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                nEventId;                                         		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                nEventType;                                       		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                nGroupId;                                         		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                nRoundType;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                nRoundTypeSortOrder;                              		// 0x0094 (0x0004) [0x0000000000000000]              
	struct FString                                     sRoundName;                                       		// 0x0098 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nDisplayGrouping;                                 		// 0x00A4 (0x0004) [0x0000000000000000]              
	struct FString                                     sDisplayGroupingName;                             		// 0x00A8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nMatchCount;                                      		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                nTeam1Wins;                                       		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                nTeam2Wins;                                       		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                nTeamMatchWinCount1;                              		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                nTeamMatchWinCount2;                              		// 0x00C4 (0x0004) [0x0000000000000000]              
	int                                                nTeamMatchLossCount1;                             		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                nTeamMatchLossCount2;                             		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                NSTG_StartingWeek;                                		// 0x00D0 (0x0004) [0x0000000000000000]              
	int                                                NSTG_StartYear;                                   		// 0x00D4 (0x0004) [0x0000000000000000]              
	int                                                NSTG_StartMonth;                                  		// 0x00D8 (0x0004) [0x0000000000000000]              
	int                                                NSTG_StartDate;                                   		// 0x00DC (0x0004) [0x0000000000000000]              
	int                                                NSTG_StartHour;                                   		// 0x00E0 (0x0004) [0x0000000000000000]              
	int                                                NSTG_StartMin;                                    		// 0x00E4 (0x0004) [0x0000000000000000]              
	int                                                NSTG_StartDayOfWeek;                              		// 0x00E8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFeatured : 1;                                    		// 0x00EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMatchOver : 1;                                   		// 0x00EC (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TgClient.TgRewardCenterManager.SeasonTicketTeamData
// 0x0020
struct FSeasonTicketTeamData
{
	int                                                nTeamId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nEventTeamId;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nSeedNumber;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nTeamWins;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nTeamLosses;                                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgRewardCenterManager.SeasonTicketEventData
// 0x0038
struct FSeasonTicketEventData
{
	int                                                nEventId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nStartTime;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nNewCount;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nEventType;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nMaxPicks;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_PickedTeams;                                    		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FSeasonTicketTeamData >             m_TeamData;                                       		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgRewardCenterManager.QuestData
// 0x0050
struct FQuestData
{
	int                                                nQuestId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nActivityId;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nGoalId;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nLootTableId;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nReceivedTime;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nNameId;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nDescId;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nGoalType;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nCompletionGoal;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nCompleteType;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nCurrentProgress;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nQuestType;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nEndTime;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nProgressEarned;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                nDisplayOrder;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanAbandon : 1;                                  		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSkipped : 1;                                     		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSeen : 1;                                        		// 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNew : 1;                                         		// 0x0040 (0x0004) [0x0000000000000000] [0x00000008] 
	TArray< struct FGoalRewardItem >                   pLootItems;                                       		// 0x0044 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgRewardCenterManager.CouponData
// 0x000C
struct FCouponData
{
	int                                                nCouponId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nItemId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSeen : 1;                                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClient.TgSeasonTicketManager.SeasonTicketDisplayGroups
// 0x001C
struct FSeasonTicketDisplayGroups
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      pGroupIds;                                        		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgSeasonTicketManager.SeasonTicketGroupDescriptions
// 0x0010
struct FSeasonTicketGroupDescriptions
{
	int                                                nGroupId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sDesc;                                            		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgSeasonTicketManager.SeasonTicketTeamImages
// 0x0010
struct FSeasonTicketTeamImages
{
	int                                                nTeamId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sId;                                              		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgSeasonTicketManager.SeasonTicketAdData
// 0x0008
struct FSeasonTicketAdData
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nProbability;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgStreamManager.GameStream
// 0x0044
struct FGameStream
{
	unsigned long                                      bLive : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFeatured : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSpecial : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     StreamURL;                                        		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ChannelName;                                      		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Viewers;                                          		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgSystemNotificationManager.SystemMessage
// 0x0044
struct FSystemMessage
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      subType;                                          		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x0002 (0x0001) [0x0000000000000000]              
	struct FString                                     sDescription;                                     		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTime;                                            		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nItemType;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nItemSubType;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FString                                     sTextureName;                                     		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSeen : 1;                                        		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nActivityId;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                nGoalId;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif