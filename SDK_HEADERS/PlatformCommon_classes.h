/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PlatformCommon_classes.h
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
# Constants
# ========================================================================================= #
*/

#define CONST_MAX_SIMULTANEOUS_DOWNLOADS                         8
#define CONST_TIME_OUT                                           30.f
#define CONST_m_nMinDisplayLookSensitivity                       1.0
#define CONST_m_nMaxDisplayLookSensitivity                       100.0
#define CONST_GC_OS_TYPE_BELOW_XP                                10300
#define CONST_GC_OS_TYPE_XP                                      10301
#define CONST_GC_OS_TYPE_VISTA                                   10303
#define CONST_GC_OS_TYPE_WIN7                                    10305
#define CONST_GC_OS_TYPE_WIN8                                    10307

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum PlatformCommon.PComImageDownloader.EPComImageDownloadState
/*enum EPComImageDownloadState
{
	TIDS_NotStarted                                    = 0,
	TIDS_Downloading                                   = 1,
	TIDS_Succeeded                                     = 2,
	TIDS_Failed                                        = 3,
	TIDS_MAX                                           = 4
};*/

// Enum PlatformCommon.PComPerformanceCaptureGame.EPComPerformanceCaptureState
/*enum EPComPerformanceCaptureState
{
	PPCS_WaitingToStart                                = 0,
	PPCS_MoveToNode                                    = 1,
	PPCS_StartBasicStats                               = 2,
	PPCS_StopBasicStats                                = 3,
	PPCS_StartCycleStats                               = 4,
	PPCS_StopCycleStats                                = 5,
	PPCS_SaveAndExit                                   = 6,
	PPCS_MAX                                           = 7
};*/

// Enum PlatformCommon.PComStructures.CMTargetType
/*enum CMTargetType
{
	CMTT_Pawn                                          = 0,
	CMTT_Deployable                                    = 1,
	CMTT_Destructible                                  = 2,
	CMTT_MAX                                           = 3
};*/

// Enum PlatformCommon.PComSupportCommands.GC_ALERT_PRIORITY
/*enum GC_ALERT_PRIORITY
{
	GC_APT_MINIMAL                                     = 0,
	GC_APT_NORMAL                                      = 1,
	GC_APT_HIGH                                        = 2,
	GC_APT_CRITICAL                                    = 3,
	GC_APT_MAX                                         = 4
};*/

// Enum PlatformCommon.PComSupportCommands.GC_CHAT_CHANNEL
/*enum GC_CHAT_CHANNEL
{
	GC_CC_GLOBAL                                       = 0,
	GC_CC_CLAN                                         = 1,
	GC_CC_INSTANCE                                     = 2,
	GC_CC_LOCAL_TEAM                                   = 3,
	GC_CC_PARTY                                        = 4,
	GC_CC_CITY                                         = 5,
	GC_CC_PERSONAL                                     = 6,
	GC_CC_PRIVATE                                      = 7,
	GC_CC_EOM_LOBBY                                    = 8,
	GC_CC_SYSTEM                                       = 9,
	GC_CC_TRADE                                        = 10,
	GC_CC_LFG                                          = 11,
	GC_CC_LFG01                                        = 12,
	GC_CC_HELP                                         = 13,
	GC_CC_VOIP_NEWS                                    = 14,
	GC_CC_GM                                           = 15,
	GC_CC_VIP                                          = 16,
	GC_CC_LFG02                                        = 17,
	GC_CC_COUNT                                        = 18,
	GC_CC_VOIP_ECHO                                    = 19,
	GC_CC_VOIP_CONF                                    = 20,
	GC_CC_COMBAT                                       = 21,
	GC_CC_EMOTE                                        = 22,
	GC_CC_INVALID                                      = 23,
	GC_CC_LAST                                         = 24,
	GC_CC_MAX                                          = 25
};*/

// Enum PlatformCommon.PComSupportCommands.GC_STEAM_TXN_TYPES
/*enum GC_STEAM_TXN_TYPES
{
	GC_STT_INVALID                                     = 0,
	GC_STT_GETUSERINFO                                 = 1,
	GC_STT_INIT                                        = 2,
	GC_STT_FINALIZE                                    = 3,
	GC_STT_DECLINE                                     = 4,
	GC_STT_MAX                                         = 5
};*/

// Enum PlatformCommon.PComOpenBroadcaster.EPComOpenBroadcasterState
/*enum EPComOpenBroadcasterState
{
	POBS_Idle                                          = 0,
	POBS_WaitingForFacebookWebBrowserLoaded            = 1,
	POBS_WaitingForFacebookLogin                       = 2,
	POBS_WaitingForFacebookPublish                     = 3,
	POBS_FacebookPublishFinished                       = 4,
	POBS_Streaming                                     = 5,
	POBS_Quitting                                      = 6,
	POBS_MAX                                           = 7
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class PlatformCommon.PComBrowserInteraction
// 0x0004 (0x007C - 0x0078)
class UPComBrowserInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x0078 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1448 );

		return pClassPointer;
	};

};

UClass* UPComBrowserInteraction::pClassPointer = NULL;

// Class PlatformCommon.PComCheatManager
// 0x0000 (0x0068 - 0x0068)
class UPComCheatManager : public UGameCheatManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1449 );

		return pClassPointer;
	};

};

UClass* UPComCheatManager::pClassPointer = NULL;

// Class PlatformCommon.PComGameEngine
// 0x0020 (0x07E4 - 0x07C4)
class UPComGameEngine : public UGameEngine
{
public:
	TArray< struct FScriptDelegate >                   MarshalEventDelegates;                            		// 0x07C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    pOutgoingMarshal;                                 		// 0x07D0 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    pEventMarshal;                                    		// 0x07D4 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FScriptDelegate                             __OnMarshalEvent__Delegate;                       		// 0x07D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1450 );

		return pClassPointer;
	};

	bool HandlePlayerCommandInput ( struct FString FSCommand, class APlayerController* PC );
	void SendGameRequest ( struct FString fsRequest );
	void SendCtrlRequest ( struct FString fsRequest );
	void ClearMarshalEventDelegate ( struct FScriptDelegate MarshalEventDelegate );
	void AddMarshalEventDelegate ( struct FScriptDelegate MarshalEventDelegate );
	void OnMarshalEvent ( struct FPointer pMarEvent );
	bool GetFieldString ( int nToken, struct FString* StrValue );
	bool GetFieldFloat ( int nToken, float* FloatValue );
	bool GetFieldInt ( int nToken, int* IntValue );
	void SendMarshalAll ( unsigned long bLowPriority );
	void SendMarshal ( struct FUniqueNetId qwPlayerId, unsigned long bLowPriority );
	void ClearMarshal ( );
	bool SetFieldString ( int nToken, struct FString StrValue );
	bool SetFieldFloat ( int nToken, float FloatValue );
	bool SetFieldInt ( int nToken, int IntValue );
	bool SetFunction ( int nFunction );
};

UClass* UPComGameEngine::pClassPointer = NULL;

// Class PlatformCommon.PComGameViewportClient
// 0x0010 (0x013C - 0x012C)
class UPComGameViewportClient : public UGameViewportClient
{
public:
	class UPComOpenBroadcaster*                        OpenBroadcaster;                                  		// 0x012C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPComInputLightingEffect*                    InputLightingEffect;                              		// 0x0130 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bUseDynamicResolutionScaler : 1;                  		// 0x0134 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	struct FPointer                                    DynamicResolutionScaler;                          		// 0x0138 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1451 );

		return pClassPointer;
	};

	bool eventInit ( struct FString* OutError );
	void StartFacebookStreaming ( );
	void StopRTMPStreaming ( );
	void StartRTMPStreaming ( struct FString InServer, struct FString InKey );
	void SetRTMPSettings ( unsigned long bAllowWebcam, unsigned long bAllowMicrophone, unsigned long bAllowDesktopAudio );
	void InitDynamicResolutionScaler ( );
};

UClass* UPComGameViewportClient::pClassPointer = NULL;

// Class PlatformCommon.PComImageDownloader
// 0x0018 (0x0054 - 0x003C)
class UPComImageDownloader : public UObject
{
public:
	TArray< struct FPComImageDownload >                DownloadImages;                                   		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPComImageDownloaded__Delegate;                		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1452 );

		return pClassPointer;
	};

	void SetPComImageDownloadedDelegate ( struct FScriptDelegate PComImageDownloadedDelegate );
	void OnPComImageDownloaded ( struct FPComImageDownload CachedEntry );
};

UClass* UPComImageDownloader::pClassPointer = NULL;

// Class PlatformCommon.PComInputLightingEffect
// 0x006C (0x00A8 - 0x003C)
class UPComInputLightingEffect : public UObject
{
public:
	unsigned long                                      bAllowLogitechSdk : 1;                            		// 0x003C (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bLogitechSdkInitialized : 1;                      		// 0x003C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bLatchedSystemSettingsSdkAllowed : 1;             		// 0x003C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	TArray< struct FPComInputLightingPreset >          Presets;                                          		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FMap_Mirror                                 PresetsMap;                                       		// 0x004C (0x003C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< struct FPComActiveInputLightingPreset >    ActivePresets;                                    		// 0x0088 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FLinearColor                                BlendFromColor;                                   		// 0x0094 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	float                                              BlendPercent;                                     		// 0x00A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1453 );

		return pClassPointer;
	};

	bool IsLogitechSdkVersionValid ( );
	void SetCurrentTime ( struct FName InPresetName, float CurrentTime );
	void StopPreset ( struct FName InPresetName );
	void PlayPreset ( struct FName InPresetName, unsigned long bUseOverrideStartTime, float OverrideStartTime );
	void DisableSystem ( );
	void TryEnableSystem ( );
};

UClass* UPComInputLightingEffect::pClassPointer = NULL;

// Class PlatformCommon.PComJsonHandler
// 0x003C (0x0078 - 0x003C)
class UPComJsonHandler : public UObject
{
public:
	class UPComImageDownloader*                        m_pImageDownloader;                               		// 0x003C (0x0004) [0x0000000000000000]              
	struct FPointer                                    m_pCallbackObject;                                		// 0x0040 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     m_strUrl;                                         		// 0x0044 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_strLocalDir;                                    		// 0x0050 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_strJson;                                        		// 0x005C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_strName;                                        		// 0x0068 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FPointer                                    m_pHttp;                                          		// 0x0074 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1454 );

		return pClassPointer;
	};

	void OnImageDownloaded ( struct FPComImageDownload CachedEntry );
};

UClass* UPComJsonHandler::pClassPointer = NULL;

// Class PlatformCommon.PComOpenBroadcaster
// 0x0058 (0x0094 - 0x003C)
class UPComOpenBroadcaster : public UObject
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     FacebookAppId;                                    		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     FacebookApprovedDomain;                           		// 0x004C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned char                                      CurrentState;                                     		// 0x0058 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FPComOpenBroadcasterSettings                CurrentSettings;                                  		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPointer                                    StreamerProcessHandle;                            		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __PreloadWebBrowser__Delegate;                    		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __IsWebBrowserLoaded__Delegate;                   		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OpenWebBrowser__Delegate;                       		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __CloseWebBrowser__Delegate;                      		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1455 );

		return pClassPointer;
	};

	class UWebRequest* eventDecodeFacebookRTMPUrl ( struct FString InRequest );
	void Tick ( );
	void ForceStopStreaming ( );
	void StopStreaming ( );
	void StartRTMPStreaming ( struct FString InServer, struct FString InKey );
	void StartFacebookStreaming ( );
	void QueueFacebookStreaming ( );
	void SetStreamSettings ( struct FPComOpenBroadcasterSettings* InSettings );
	bool IsStreaming ( );
	void CloseWebBrowser ( );
	void OpenWebBrowser ( struct FString URL );
	bool IsWebBrowserLoaded ( );
	void PreloadWebBrowser ( );
};

UClass* UPComOpenBroadcaster::pClassPointer = NULL;

// Class PlatformCommon.PComPerformanceCaptureGame
// 0x0088 (0x0424 - 0x039C)
class APComPerformanceCaptureGame : public AGameInfo
{
public:
	TArray< struct FName >                             StatsToCollect;                                   		// 0x039C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FArray_Mirror                               StatIds;                                          		// 0x03A8 (0x000C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< unsigned char >                            StatTypes;                                        		// 0x03B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              FOV;                                              		// 0x03C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FPComPerformanceCaptureProfile >    Profiles;                                         		// 0x03C4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPComPerformanceCaptureProfile              FallbackProfile;                                  		// 0x03D0 (0x001C) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      CurrentCaptureState;                              		// 0x03EC (0x0001) [0x0000000000000000]              
	struct FPComPerformanceCaptureProfile              ActiveProfile;                                    		// 0x03F0 (0x001C) [0x0000000000002000]              ( CPF_Transient )
	TArray< class APComPerformanceCaptureNode* >       NodesToCapture;                                   		// 0x040C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPComPerformanceCaptureStatsPerNode > StatsPerNode;                                     		// 0x0418 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1456 );

		return pClassPointer;
	};

	void DoNextAction ( );
	void InitializePerformanceCaptureSettings ( );
	void eventPostBeginPlay ( );
};

UClass* APComPerformanceCaptureGame::pClassPointer = NULL;

// Class PlatformCommon.PComPerformanceCaptureNode
// 0x0000 (0x01F0 - 0x01F0)
class APComPerformanceCaptureNode : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1457 );

		return pClassPointer;
	};

};

UClass* APComPerformanceCaptureNode::pClassPointer = NULL;

// Class PlatformCommon.PComPlayerController
// 0x0024 (0x05E8 - 0x05C4)
class APComPlayerController : public AGamePlayerController
{
public:
	struct FUniqueNetId                                m_LastPendingPartyInviteId;                       		// 0x05C4 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bPartySessionJoinInProgress : 1;                		// 0x05CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bPartySessionCreateInProgress : 1;              		// 0x05CC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bPartyDestroyInProgress : 1;                    		// 0x05CC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bQuittingToMainMenu : 1;                        		// 0x05CC (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	struct FOnlineGameSearchResult                     m_PendingInviteResult;                            		// 0x05D0 (0x0008) [0x0000000000000000]              
	struct FName                                       PartySessionName;                                 		// 0x05D8 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       GameSessionName;                                  		// 0x05E0 (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1458 );

		return pClassPointer;
	};

	void PlayTestInputLightingEffect ( struct FName InPresetName );
	void SetCurrentTimeForInputLightingEffect ( struct FName InPresetName, float InCurrentTime );
	void StopInputLightingEffect ( struct FName InPresetName );
	void PlayInputLightingEffect ( struct FName InPresetName, unsigned long bUseOverrideStartTime, float OverrideStartTime );
	void eventClientPlayInputLightingEffect ( struct FName InPresetName, unsigned long bUseOverrideStartTime, float OverrideStartTime );
	bool TryAutoLogin ( );
	void eventTryAutoLoginDelayed ( );
	void eventSetAsNewPartyHost ( );
	void eventToggleGameSessionInvitesAllowed ( unsigned long bAllowed );
	void eventTogglePartySessionInvitesAllowed ( unsigned long bAllowed );
	void eventUpdateMCTSWithNewPartyInfo ( );
	bool eventIsHostOfParty ( );
	void OnPeoplePickerComplete ( unsigned long bWasSuccessful, TArray< struct FOnlineFriend > PeoplePicked );
	void OnReadFriendsListComplete ( unsigned long bWasSuccessful );
	bool ShowPeoplePickerUI ( );
	void JoinCustomMatchForInviteDelay ( );
	void eventJoinCustomMatchFromInvite ( );
	void OnJoinSessionForReceivedInviteComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnPrivilegeCheckForGameSessionJoin ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint );
	void OnPrivilegeLevelCheckedCompleteForPartyJoin ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint );
	void OnGameDestroyedForPartyJoin ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnAlternatePrivilegeLevelCheckedComplete ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
	void OnPartySessionDestroyed ( struct FName SessionName, unsigned long bWasSuccessful );
	void DestroyPartySession ( );
	void eventInvitePlayerToParty ( struct FUniqueNetId InPlayerId );
	void eventInvitePlayerToPartyByName ( struct FString InPlayerName );
	void OnCreatePartySessionComplete ( struct FName SessionName, unsigned long bSuccessful );
	void CreatePartySession ( );
	void eventUnregisterP2PEnemiesForCustomMatch ( TArray< struct FUniqueNetId > EnemyIds );
	void OnGetVoicePermissionsForUsersComplete ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResult > Results );
	void OnGetSessionMemberInfoComplete ( TArray< struct FSessionMemberInfo > SessionListInfo, unsigned long bWasSuccessful );
	void OnGetUserConnectionInfoComplete ( TArray< struct FSessionMemberInfo > SessionListInfo, unsigned long bWasSuccessful );
	TArray< struct FString > GetUserNamesForPS4P2PConnections ( );
	void CloseConnectionsToInvalidPeers ( TArray< struct FSessionMemberInfo > SessionListInfo );
	void EstablishPeers ( );
	void eventLostP2PConnection ( struct FUniqueNetId UniqueId );
	void eventGetControllerIdFromNetId ( struct FUniqueNetId PlayerID, int* ControllerId );
	void eventPairLoggedInUserAndCurrentController ( );
	void LogoutPlayer ( );
	bool IsInGame ( );
	bool IsPackageInstalled ( );
	void OnMultiplayerSessionChange ( struct FName SessionName, struct FSessionUpdateInfo SessionChanges );
	void eventClearOnlineDelegates ( );
	void eventRegisterOnlineDelegates ( );
	void ClientRestablishP2PConnections ( );
	void ServerReEstablishP2PConnections ( );
	bool IsReconnect ( );
	void eventRestablishVoiceForReconnect ( );
	void OnJoinOnlineGameCompleteForReceivedSessionInfo ( struct FName SessionName, unsigned long bWasSuccessful );
	void eventReceiveSessionInfo ( unsigned char* PlatformSpecificInfo, unsigned char ConsoleType );
	void OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void ChooseThisControllerForSessionScout ( unsigned long bCustomMatch, int MaxPlayers, unsigned long bPrivate, TArray< struct FUniqueNetId >* ReservedMembers );
	void OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void FinishQuitToMainMenu ( );
	bool CleanupOnlineSubsystemSession ( unsigned long bWasFromMenu );
	void eventQuitToMainMenu ( );
	void AcknowledgePossession ( class APawn* P );
	void LeaveMatchQueue ( );
	void UpdatePartyUI ( );
	void TryOpenPartyUI ( );
	void ShowCustomGameDisallowedPopup ( );
	void ShowPackageNotInstalledForPartyInviteWarning ( );
	void ShowPartyNoLongerAvailableWarning ( );
	void ShowPartyFullWarning ( unsigned long bPartySession );
	void ShowUnableToReadFriendsListWarning ( );
	void ShowNoFriendsForPartyInviteWarning ( );
	void ShowControllerDisconnectedWarning ( );
	bool ShouldPartySessionsBePublic ( );
	bool ArePartySessionInvitesAllowed ( );
	void UpdateMCTSSession ( struct FString SessionGuid, unsigned long bIsHost );
	void BlockPartySceneInput ( unsigned long bBlockInput );
	void FilterFriendListForPeoplePicker ( TArray< struct FOnlineFriend >* FriendList, TArray< struct FSessionMemberInfo >* SessionMemberList );
	void ShowPrivilegeMessageAndDeclineInvite ( );
	void AcceptPartyInvite ( struct FString InviterName );
	void ConnectToPeers ( TArray< struct FSessionMemberInfo >* SessionListInfo );
	void TryJoinSession ( );
	void MCTSSetSessionId ( unsigned char* PlatformSpecificInfo );
	bool IsInCustomMatch ( );
	void SendSessionEnd ( );
	void SendSessionStart ( int GameModeId );
	void OnRemoteTalkerStatusChange ( struct FUniqueNetId RemoteNetId, unsigned long bIsTalking );
	void OnCurrentUserChanged ( unsigned char LocalUserNum, struct FString CurrentUser, struct FString LoggedInUser );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
	void OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	void OnMarketplaceItemPurchased ( );
	unsigned char eventGetPlayerDLCLicenses ( TArray< struct FOnlineContent >* ContentList );
	void OnReadPlayerMarketplaceInventoryComplete ( );
	void eventGetMarketplaceInventory ( );
	void eventGetOSSTokenAndSignature ( struct FString URL );
	void DumpStoreCatalog ( unsigned char MediaType );
	void DumpConumables ( );
	void DumpDurables ( );
	void DumpGameProducts ( );
	void OnReadAdditionalProductDetailsComplete ( unsigned char MediaType );
	void OnReadAvailableProductsComplete ( unsigned char MediaType );
	void eventRefreshStoreData ( );
	void PlayerReceivedURLTokenAndSignature ( unsigned char LocalUserNum, struct FString URL, struct FString Token, struct FString Signature );
	void SendPlayerDLCLicensesToServer ( );
	void PlayerRetrievedOSSInventory ( TArray< struct FMarketplaceInventoryItem >* Items );
	void ChallengeJoin ( int nQueue, struct FString fsName, struct FString fsPassword );
	void ChallengeCreate ( int nQueue, struct FString fsName, struct FString fsPassword );
	void TeamSetLeader ( struct FString fsLeader );
	void TeamLeave ( );
	void TeamAccept ( unsigned long bAccepted );
	void TeamInvite ( struct FString fsName );
	void SetConfig ( struct FString Key, struct FString Value );
	bool GetConfigBool ( struct FString Key );
	int GetConfigInt ( struct FString Key );
	struct FString GetConfig ( struct FString Key );
	void DumpConfig ( );
	void AddCheats ( );
	void ClientAddCheats ( );
};

UClass* APComPlayerController::pClassPointer = NULL;

// Class PlatformCommon.PComPlayerInput
// 0x005C (0x02C4 - 0x0268)
class UPComPlayerInput : public UPlayerInput
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0268 (0x003C) UNKNOWN PROPERTY: MapProperty PlatformCommon.PComPlayerInput.m_KeyBindingMap
	unsigned long                                      c_bDirty : 1;                                     		// 0x02A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      c_bUseServerBindings : 1;                         		// 0x02A4 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      c_bJumpEnabled : 1;                               		// 0x02A4 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	struct FString                                     c_sCurrentProfile;                                		// 0x02A8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                m_nKeybindConfigSet;                              		// 0x02B4 (0x0004) [0x0000000000000000]              
	float                                              m_nMinLookSensitivity;                            		// 0x02B8 (0x0004) [0x0000000000000000]              
	float                                              m_nMaxLookSensitivity;                            		// 0x02BC (0x0004) [0x0000000000000000]              
	int                                                m_RecCastMode;                                    		// 0x02C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1459 );

		return pClassPointer;
	};

	void Jump ( );
	void UnbindCommand ( struct FString Command, int nAlternate );
	void UnbindCommandAllExtended ( struct FString Command, unsigned long bStoreToServer );
	void UnbindCommandAll ( struct FString Command );
	void eventUnbindCommandFromServer ( struct FString Command );
	void UnbindKey ( struct FName* BindName );
	void SetCommandBind ( struct FString Command, int nAlternate, struct FString ExtendedBinding, unsigned long bStoreToServer );
	void eventSetCommandBindFromServer ( struct FString Command, int nAlternate, struct FString ExtendedBinding );
	void SetBindExtended ( struct FString ExtendedBinding, struct FString Command, unsigned long bStoreToServer );
	void eventSetBindFromServer ( struct FString BindName, struct FString Command );
	void SetBind ( struct FString Command, struct FName* BindName );
	float eventGetDisplayLookSensitivityY ( );
	float eventGetDisplayLookSensitivity ( );
	void SetLookSensitivity ( float fSensitivity, float fSensitivityY );
	void SetMouseInput ( unsigned long bInvert, unsigned long bSmooth, float fSensitivity );
	void SetDirty ( );
	void ReadMouseSettings ( );
	void StoreMouseSettings ( );
	struct FKeyBind GetKeybindWithCurrentModifiers ( struct FName* Key );
	struct FString GetBind ( struct FName* Key, struct FKeyBind* ModifierKeyBind );
	struct FString KeybindToExtendedString ( struct FKeyBind* Bind );
	struct FKeyBind ExtendedStringToKeybind ( struct FString Str, struct FString Cmd );
	struct FKeyBind GetBindFromCommand ( struct FString Cmd, int nAlternate );
	bool GetBindExtended ( struct FString Str, unsigned long bExactMatch, struct FKeyBind* Bind );
	struct FString GetStorageStringForCommand ( struct FString Command );
	void InitKeyBindingsMap ( );
	void ReadBindings ( );
	void StoreBinding ( struct FString BindName, struct FString Command, struct FString OldCommand );
	void ResetKeysToDefault ( struct FString PresetName );
	void StoreKeysToDefault ( );
	int ConvertCommandToProperty ( struct FString* Command );
};

UClass* UPComPlayerInput::pClassPointer = NULL;

// Class PlatformCommon.PComPlayerProfile
// 0x008C (0x00F4 - 0x0068)
class UPComPlayerProfile : public UOnlinePlayerStorage
{
public:
	int                                                Rank;                                             		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                Kills;                                            		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                Deaths;                                           		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                Assists;                                          		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                XpLevel;                                          		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                HZPoints;                                         		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                XPPoints;                                         		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                AssistPoints;                                     		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                AverageScore;                                     		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                BoostHoursRemaining;                              		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                InfoMask;                                         		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                TimePlayed;                                       		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                TotalAccolades;                                   		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                FastestSki;                                       		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                FlagGrabs;                                        		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                FlagCaps;                                         		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                GensDestroyed;                                    		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                ObjsDestroyed;                                    		// 0x00AC (0x0004) [0x0000000000000000]              
	unsigned long                                      bVIP : 1;                                         		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBoost : 1;                                       		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                PlayerID;                                         		// 0x00B4 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x00B8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FBadgeStruct >                      Badges;                                           		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FBadgeStruct >                      TopBadges;                                        		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPropertyPair >                     ClassTimePlayed;                                  		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAccoladeStruct >                   Accolades;                                        		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1460 );

		return pClassPointer;
	};

};

UClass* UPComPlayerProfile::pClassPointer = NULL;

// Class PlatformCommon.PComRepInfo_Game
// 0x0014 (0x0254 - 0x0240)
class APComRepInfo_Game : public AGameReplicationInfo
{
public:
	class UPComMusicThemePlayer*                       m_MusicThemePlayer;                               		// 0x0240 (0x0004) [0x0000000000000000]              
	class UClass*                                      m_MusicThemePlayerClass;                          		// 0x0244 (0x0004) [0x0000000000000000]              
	struct FString                                     m_MusicThemePlayerClassName;                      		// 0x0248 (0x000C) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1461 );

		return pClassPointer;
	};

	void CreateMusicThemePlayer ( );
	void PostBeginPlay ( );
	void PlayMusicEvent ( struct FName EventName );
};

UClass* APComRepInfo_Game::pClassPointer = NULL;

// Class PlatformCommon.PComStructures
// 0x0000 (0x003C - 0x003C)
class UPComStructures : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1462 );

		return pClassPointer;
	};

};

UClass* UPComStructures::pClassPointer = NULL;

// Class PlatformCommon.PComSupportCommands
// 0x0008 (0x0044 - 0x003C)
class UPComSupportCommands : public UObject
{
public:
	class APComPlayerController*                       PC;                                               		// 0x003C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class AWorldInfo*                                  WorldInfo;                                        		// 0x0040 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1463 );

		return pClassPointer;
	};

	void scLogTickFlags ( int nFlags, unsigned long bSet );
	void scPerfAlwaysRelevantLimit ( int feet );
	void scGPerfServerFlags ( int Flags, int alternate1, int alternate2 );
	void scPerfPhysThreshold ( float thresh1, float thesh2 );
	void scPerfTickRate ( int tickHz, int altTickHz );
	void scPerfDebugRelevMode ( int Mode );
	void scPerfDebugSkip ( int skips );
	void scPerfDebugFeet ( int feet );
	void scDemoStop ( );
	void scDemoRec ( struct FString sCommand );
	void scTimer ( struct FString sCommand );
	void scTime ( int nSeconds );
	void scScore ( int nTeam, int nCount );
	void scEndGame ( struct FString Reason );
	void scStartGame ( struct FString Reason );
	void scLogMark ( struct FString Comment );
	void scLog ( struct FString LogName, unsigned long bEnabled );
	void gmmf ( );
	void SetLogServerTickStatsFlags ( int Flags, unsigned long bSet );
	void GPerfDebugPhysicsThreshold ( float fThresh1, float fThresh2 );
	void GPerfDebugTickRate ( int tickHz, int altTickHz );
	void GPerfAllRelevantLimit ( int feet );
	void GPerfServerFlags ( int Flags, int alternate1, int alternate2 );
	void GPerfDebugRelevMode ( int Mode );
	void GPerfDebugSkips ( int skips );
	void GPerfDebugFeet ( int feet );
	void gmDiag ( int Code, int Route );
	void gmC ( struct FString sCommand );
	void gmCommand ( struct FString sCommand );
	void gmMatchNext ( int nMapId );
	void gmMatchForce ( int nQueueId );
};

UClass* UPComSupportCommands::pClassPointer = NULL;

// Class PlatformCommon.PComUIManagerBase
// 0x001C (0x0058 - 0x003C)
class UPComUIManagerBase : public UObject
{
public:
	unsigned long                                      m_bDebugDraw : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FManagerImage >                     m_cachedImages;                                   		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_strJson;                                        		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1464 );

		return pClassPointer;
	};

	void eventDebugDraw ( class UCanvas* Canvas );
};

UClass* UPComUIManagerBase::pClassPointer = NULL;

// Class PlatformCommon.PComVoiceInterfaceCurseConfig
// 0x000C (0x0048 - 0x003C)
class UPComVoiceInterfaceCurseConfig : public UObject
{
public:
	TArray< struct FPComCursePromo >                   Promos;                                           		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1465 );

		return pClassPointer;
	};

};

UClass* UPComVoiceInterfaceCurseConfig::pClassPointer = NULL;

// Class PlatformCommon.SearFiles
// 0x0000 (0x007C - 0x007C)
class USearFiles : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1466 );

		return pClassPointer;
	};

};

UClass* USearFiles::pClassPointer = NULL;

// Class PlatformCommon.PComMusicTheme
// 0x0030 (0x006C - 0x003C)
class UPComMusicTheme : public UObject
{
public:
	struct FMusicTrackStruct                           DefaultTrack;                                     		// 0x003C (0x0024) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FMusicEvent >                       MusicEvents;                                      		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1467 );

		return pClassPointer;
	};

};

UClass* UPComMusicTheme::pClassPointer = NULL;

// Class PlatformCommon.PComMusicThemeFactory
// 0x0000 (0x0070 - 0x0070)
class UPComMusicThemeFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1468 );

		return pClassPointer;
	};

};

UClass* UPComMusicThemeFactory::pClassPointer = NULL;

// Class PlatformCommon.PComMusicThemePlayer
// 0x0050 (0x008C - 0x003C)
class UPComMusicThemePlayer : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     MusicThemePath;                                   		// 0x0040 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UPComMusicTheme*                             MusicTheme;                                       		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAudioComponent*                             MusicComp;                                        		// 0x0050 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class APComMusicThemeSyncActor*                    MusicSyncActor;                                   		// 0x0054 (0x0004) [0x0000000000000000]              
	struct FName                                       LastMusicEvent;                                   		// 0x0058 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FMusicTrackStruct                           CurrentMusicTrack;                                		// 0x0060 (0x0024) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              CurrentMusicTrackStartTime;                       		// 0x0084 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentMusicTrackDuration;                        		// 0x0088 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1469 );

		return pClassPointer;
	};

	void UpdateReplicatedMusicEvent ( struct FName EventName );
	void UpdateMusicTrack ( struct FMusicTrackStruct NewMusicTrack, float fDuration );
	void StopMusic ( );
	void PlayMusicEvent ( struct FName EventName );
	void PlayDefaultMusic ( );
	void OnThemeLoaded ( );
	void LoadTheme ( struct FString themepath );
	struct FString GetDefaultThemePath ( );
	void LoadDefaultTheme ( );
	void Init ( );
};

UClass* UPComMusicThemePlayer::pClassPointer = NULL;

// Class PlatformCommon.PComMusicThemeSyncActor
// 0x0008 (0x01F8 - 0x01F0)
class APComMusicThemeSyncActor : public AActor
{
public:
	struct FName                                       m_ReplicatedMusicEvent;                           		// 0x01F0 (0x0008) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1470 );

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	void UpdateMusicEventClient ( struct FName EventName );
	void UpdateMusicEvent ( struct FName EventName );
};

UClass* APComMusicThemeSyncActor::pClassPointer = NULL;

// Class PlatformCommon.PComSeqAct_PlayMusicEvent
// 0x0008 (0x00CC - 0x00C4)
class UPComSeqAct_PlayMusicEvent : public USequenceAction
{
public:
	struct FName                                       EventName;                                        		// 0x00C4 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1471 );

		return pClassPointer;
	};

};

UClass* UPComSeqAct_PlayMusicEvent::pClassPointer = NULL;

// Class PlatformCommon.PComNetDriver
// 0x0010 (0x01CC - 0x01BC)
class UPComNetDriver : public UTcpNetDriver
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x01BC (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1472 );

		return pClassPointer;
	};

};

UClass* UPComNetDriver::pClassPointer = NULL;

// Class PlatformCommon.PComNetConn
// 0x0048 (0x9094 - 0x904C)
class UPComNetConn : public UTcpipConnection
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x904C (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1473 );

		return pClassPointer;
	};

};

UClass* UPComNetConn::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif