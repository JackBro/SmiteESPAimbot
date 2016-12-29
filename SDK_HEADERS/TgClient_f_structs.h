/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgClient_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function TgClient.TgBrowserManager.OpenWebPage
// [0x00024802] ( FUNC_Event )
struct UTgBrowserManager_eventOpenWebPage_Parms
{
	int                                                pageType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bExternal : 1;                                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bShowNavButtons : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAddLang : 1;                                     		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  URL;                                              		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClient.TgBrowserManager.GetURLByPageType
// [0x00020002] 
struct UTgBrowserManager_execGetURLByPageType_Parms
{
	int                                                pageType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgBrowserManager.OpenWebPageWithTarget
// [0x00024802] ( FUNC_Event )
struct UTgBrowserManager_eventOpenWebPageWithTarget_Parms
{
	int                                                pageType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     urlTarget;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bExternal : 1;                                    		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bShowNavButtons : 1;                              		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  URL;                                              		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClient.TgBrowserManager.SetContainer
// [0x00020400] ( FUNC_Native )
struct UTgBrowserManager_execSetContainer_Parms
{
	class UTgGfxBrowser*                               container;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgBrowserManager.ResizeView
// [0x00020400] ( FUNC_Native )
struct UTgBrowserManager_execResizeView_Parms
{
};

// Function TgClient.TgBrowserManager.Close
// [0x00020400] ( FUNC_Native )
struct UTgBrowserManager_execClose_Parms
{
};

// Function TgClient.TgBrowserManager.OpenVideo
// [0x00020400] ( FUNC_Native )
struct UTgBrowserManager_execOpenVideo_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgBrowserManager.OpenURL
// [0x00024400] ( FUNC_Native )
struct UTgBrowserManager_execOpenURL_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShowNavButtons : 1;                              		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgBrowserManager.ExternalOpenURL
// [0x00024400] ( FUNC_Native )
struct UTgBrowserManager_execExternalOpenURL_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bAddLang : 1;                                     		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgBrowserManager.IsBrowserLoaded
// [0x00020002] 
struct UTgBrowserManager_execIsBrowserLoaded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgChatData.TokenReplace
// [0x00020802] ( FUNC_Event )
struct UTgChatData_eventTokenReplace_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Token;                                            		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sValue;                                           		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0024 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgChatData.CheckWarning
// [0x00020802] ( FUNC_Event )
struct UTgChatData_eventCheckWarning_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgClientHUD.GetBulletPoint
// [0x00020802] ( FUNC_Event )
struct ATgClientHUD_eventGetBulletPoint_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgClientHUD.GetGameState
// [0x00020802] ( FUNC_Event )
struct ATgClientHUD_eventGetGameState_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgClientHUD.OnEscapePressed
// [0x00020202] ( FUNC_Exec )
struct ATgClientHUD_execOnEscapePressed_Parms
{
};

// Function TgClient.TgClientHUD.ToggleScene
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct ATgClientHUD_execToggleScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClientHUD.UnloadScene
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct ATgClientHUD_execUnloadScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClientHUD.LoadScene
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct ATgClientHUD_execLoadScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClientHUD.Tick
// [0x00020802] ( FUNC_Event )
struct ATgClientHUD_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClientHUD.PostBeginPlay
// [0x00020102] 
struct ATgClientHUD_execPostBeginPlay_Parms
{
};

// Function TgClient.TgClientHUD.ToggleHUDScene
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgClientHUD_execToggleHUDScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClientHUD.ToggleHUD
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgClientHUD_execToggleHUD_Parms
{
};

// Function TgClient.TgClientHUD.TestDidIt
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgClientHUD_execTestDidIt_Parms
{
	int                                                nActivityId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCount;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                n_goalID;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClientHUD.UpdateSpectatorSettingsMenu
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execUpdateSpectatorSettingsMenu_Parms
{
};

// Function TgClient.TgClientHUD.UpdateKeyBindSettingsMenu
// [0x00024400] ( FUNC_Native )
struct ATgClientHUD_execUpdateKeyBindSettingsMenu_Parms
{
	int                                                settingtype;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgClientHUD.UpdateSpecKeyDisplay
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execUpdateSpecKeyDisplay_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClientHUD.UpdateKeyDisplay
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execUpdateKeyDisplay_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClientHUD.gfxProcessSound
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execgfxProcessSound_Parms
{
	struct FName                                       aThemeName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       aEventName;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClientHUD.IsInGame
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execIsInGame_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgClientHUD.IsLoggedIn
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execIsLoggedIn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgClientHUD.GetSettingsData
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execGetSettingsData_Parms
{
	class UTgDataGroup_Settings*                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgClientHUD.GetEOMLobbyData
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execGetEOMLobbyData_Parms
{
	class UTgDataGroup_EOMLobby*                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgClientHUD.GetLobbyData
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execGetLobbyData_Parms
{
	class UTgDataGroup_Lobby*                          ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgClientHUD.GetGameData
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execGetGameData_Parms
{
	class UTgDataGroup_Game*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgClientHUD.GetDataHandler
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execGetDataHandler_Parms
{
	class UTgGameDataHandler*                          ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgClientHUD.OnMarshalEvent
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execOnMarshalEvent_Parms
{
	struct FPointer                                    pMarEvent;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClientHUD.UnregisterMarshalCallback
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execUnregisterMarshalCallback_Parms
{
};

// Function TgClient.TgClientHUD.RegisterMarshalCallback
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execRegisterMarshalCallback_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgClientHUD.TutorialMessage
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execTutorialMessage_Parms
{
	int                                                msgId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTips : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgClientHUD.ResetViewCenterPoint
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgClientHUD_execResetViewCenterPoint_Parms
{
};

// Function TgClient.TgClientHUD.SetViewCenterPoint
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgClientHUD_execSetViewCenterPoint_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fScale;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClientHUD.DisplayBadConnectionAlert
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execDisplayBadConnectionAlert_Parms
{
};

// Function TgClient.TgClientHUD.InitMainMoviePlayer
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execInitMainMoviePlayer_Parms
{
};

// Function TgClient.TgClientHUD.ShowCursor
// [0x00024400] ( FUNC_Native )
struct ATgClientHUD_execShowCursor_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bUpdateCapture : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgClientHUD.CloseMovie
// [0x00024400] ( FUNC_Native )
struct ATgClientHUD_execCloseMovie_Parms
{
	class UTgMoviePlayer*                              mp;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUnload : 1;                                      		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgClientHUD.CreateMovie
// [0x00024400] ( FUNC_Native )
struct ATgClientHUD_execCreateMovie_Parms
{
	class UClass*                                      MovieClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAutoFocus : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bCaptureInput : 1;                                		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      TimingMode;                                       		// 0x000C (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UTgMoviePlayer*                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgClientHUD.UnregisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execUnregisterEngineCallbacks_Parms
{
};

// Function TgClient.TgClientHUD.RegisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execRegisterEngineCallbacks_Parms
{
};

// Function TgClient.TgClientHUD.DelegateOnMarshalEvent
// [0x00120000] 
struct ATgClientHUD_execDelegateOnMarshalEvent_Parms
{
	struct FPointer                                    pMarEvent;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgDataChunk.usc_Unsubscribe
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execusc_Unsubscribe_Parms
{
};

// Function TgClient.TgDataChunk.usc_Subscribe
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execusc_Subscribe_Parms
{
};

// Function TgClient.TgDataChunk.usc_Unsubscribe_Delegate
// [0x00120000] 
struct UTgDataChunk_execusc_Unsubscribe_Delegate_Parms
{
};

// Function TgClient.TgDataChunk.usc_Subscribe_Delegate
// [0x00120000] 
struct UTgDataChunk_execusc_Subscribe_Delegate_Parms
{
};

// Function TgClient.TgDataChunk.GetPlayerController
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execGetPlayerController_Parms
{
	class ATgPlayerController*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgDataChunk.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execNotifyMapChange_Parms
{
};

// Function TgClient.TgDataChunk.IsSubscribed
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execIsSubscribed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgDataChunk.SetDirty
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execSetDirty_Parms
{
};

// Function TgClient.TgDataChunk.GetField
// [0x00420400] ( FUNC_Native )
struct UTgDataChunk_execGetField_Parms
{
	struct FString                                     FieldName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    NewValue;                                         		// 0x000C (0x001C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgDataChunk.SetField
// [0x00424400] ( FUNC_Native )
struct UTgDataChunk_execSetField_Parms
{
	struct FString                                     FieldName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    NewValue;                                         		// 0x000C (0x001C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bCreateIfMissing : 1;                             		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgDataChunk.AddField
// [0x00420400] ( FUNC_Native )
struct UTgDataChunk_execAddField_Parms
{
	struct FString                                     FieldName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    NewValue;                                         		// 0x000C (0x001C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClient.TgDataChunk.ClearDelegates
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execClearDelegates_Parms
{
};

// Function TgClient.TgDataChunk.SetDelegates
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execSetDelegates_Parms
{
};

// Function TgClient.TgDataChunk.RemoveChild
// [0x00024400] ( FUNC_Native )
struct UTgDataChunk_execRemoveChild_Parms
{
	class UTgDataChunk*                                Child;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bClearDelegates : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgDataChunk.AddChild
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execAddChild_Parms
{
	class UTgDataChunk*                                Child;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgDataChunk.DataUpdateEvent
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execDataUpdateEvent_Parms
{
};

// Function TgClient.TgDataChunk.Update
// [0x00024400] ( FUNC_Native )
struct UTgDataChunk_execUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSkipCallback : 1;                                		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgDataChunk.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgDataHandler.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgDataHandler_execNotifyMapChange_Parms
{
};

// Function TgClient.TgDataHandler.QueueDirtyChunks
// [0x00020400] ( FUNC_Native )
struct UTgDataHandler_execQueueDirtyChunks_Parms
{
	class UTgDataChunk*                                Node;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgDataHandler.Update
// [0x00024400] ( FUNC_Native )
struct UTgDataHandler_execUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bImmediate : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgDataHandler.InitializeDataHandler
// [0x00020400] ( FUNC_Native )
struct UTgDataHandler_execInitializeDataHandler_Parms
{
	class UTgMoviePlayer*                              mp;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameViewportClient.GetSubtitleRegion
// [0x00420802] ( FUNC_Event )
struct UTgGameViewportClient_eventGetSubtitleRegion_Parms
{
	struct FVector2D                                   MinPos;                                           		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector2D                                   MaxPos;                                           		// 0x0008 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClient.TgGameViewportClient.PostRender
// [0x00020802] ( FUNC_Event )
struct UTgGameViewportClient_eventPostRender_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATgPlayerController*                      PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ATgGameHUD*                               HUD;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATgLobbyHUD*                              lobbyHUD;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGameViewportClient.GameSessionEnded
// [0x00020802] ( FUNC_Event )
struct UTgGameViewportClient_eventGameSessionEnded_Parms
{
	// class ATgSpectatorController*                   SpectatorPC;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGameViewportClient.IsGfxMovieCapturingMouseInput
// [0x00020400] ( FUNC_Native )
struct UTgGameViewportClient_execIsGfxMovieCapturingMouseInput_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameViewportClient.NativeGameSessionEnded
// [0x00020400] ( FUNC_Native )
struct UTgGameViewportClient_execNativeGameSessionEnded_Parms
{
};

// Function TgClient.TgGameViewportClient.DrawTransition
// [0x00020000] 
struct UTgGameViewportClient_execDrawTransition_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxScene.SendGFxData
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGfxScene_eventSendGFxData_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxScene.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxScene_execUninitialize_Parms
{
};

// Function TgClient.TgGfxScene.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxScene_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pMoviePlayer;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxScene.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxScene_execReceiveGFxData_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxScene.DelegateGFxData
// [0x00120000] 
struct UTgGfxScene_execDelegateGFxData_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAchievementPopup.QueueAchievement
// [0x00020802] ( FUNC_Event )
struct UTgGfxAchievementPopup_eventQueueAchievement_Parms
{
};

// Function TgClient.TgGfxAchievementPopup.asc_QueueAchievement
// [0x00020003] ( FUNC_Final )
struct UTgGfxAchievementPopup_execasc_QueueAchievement_Parms
{
};

// Function TgClient.TgGfxAchievementPopup.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAchievementPopup_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pMoviePlayer;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAchievementSelection.UpdateSelectedAchievements
// [0x00020802] ( FUNC_Event )
struct UTgGfxAchievementSelection_eventUpdateSelectedAchievements_Parms
{
};

// Function TgClient.TgGfxAchievementSelection.ASC_UpdateSelectedAchievements
// [0x00020003] ( FUNC_Final )
struct UTgGfxAchievementSelection_execASC_UpdateSelectedAchievements_Parms
{
};

// Function TgClient.TgGfxAchievementSelection.UpdateScreen
// [0x00020802] ( FUNC_Event )
struct UTgGfxAchievementSelection_eventUpdateScreen_Parms
{
};

// Function TgClient.TgGfxAchievementSelection.ASC_UpdateScreen
// [0x00020003] ( FUNC_Final )
struct UTgGfxAchievementSelection_execASC_UpdateScreen_Parms
{
};

// Function TgClient.TgGfxAchievementSelection.USC_ApplySelections
// [0x00020400] ( FUNC_Native )
struct UTgGfxAchievementSelection_execUSC_ApplySelections_Parms
{
	int                                                as1;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                as2;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                as3;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                as4;                                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAchievementSelection.USC_ApplySelections_Delegate
// [0x00120000] 
struct UTgGfxAchievementSelection_execUSC_ApplySelections_Delegate_Parms
{
	int                                                as1;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                as2;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                as3;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                as4;                                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAchievementSelection.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAchievementSelection_execUninitialize_Parms
{
};

// Function TgClient.TgGfxAchievementSelection.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAchievementSelection_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAcquisitionPopup.DoShowAcquisition
// [0x00020802] ( FUNC_Event )
struct UTgGfxAcquisitionPopup_eventDoShowAcquisition_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAcquisitionPopup.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAcquisitionPopup_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAcquisitionPopup.ShowAcquisition
// [0x00020003] ( FUNC_Final )
struct UTgGfxAcquisitionPopup_execShowAcquisition_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxBooster.USC_ShowPurchasePopup
// [0x00020400] ( FUNC_Native )
struct UTgGfxBooster_execUSC_ShowPurchasePopup_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nQuantity;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxBooster.USC_ShowPurchasePopup_Delegate
// [0x00120000] 
struct UTgGfxBooster_execUSC_ShowPurchasePopup_Delegate_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nQuantity;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxBooster.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxBooster_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxBrowser.SetControls
// [0x00020802] ( FUNC_Event )
struct UTgGfxBrowser_eventSetControls_Parms
{
	unsigned long                                      prevDisabled : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      nextDisabled : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxBrowser.ASC_SetControls
// [0x00020003] ( FUNC_Final )
struct UTgGfxBrowser_execASC_SetControls_Parms
{
	unsigned long                                      prevDisabled : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      nextDisabled : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxBrowser.ToggleControls
// [0x00020802] ( FUNC_Event )
struct UTgGfxBrowser_eventToggleControls_Parms
{
	unsigned long                                      showNav : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxBrowser.ASC_ToggleControls
// [0x00020003] ( FUNC_Final )
struct UTgGfxBrowser_execASC_ToggleControls_Parms
{
	unsigned long                                      showNav : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxBrowser.USC_OnNavigate
// [0x00020400] ( FUNC_Native )
struct UTgGfxBrowser_execUSC_OnNavigate_Parms
{
	int                                                navId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxBrowser.USC_OnNavigate_Delegate
// [0x00120000] 
struct UTgGfxBrowser_execUSC_OnNavigate_Delegate_Parms
{
	int                                                navId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxBrowser.USC_OnResize
// [0x00020400] ( FUNC_Native )
struct UTgGfxBrowser_execUSC_OnResize_Parms
{
};

// Function TgClient.TgGfxBrowser.USC_OnResize_Delegate
// [0x00120000] 
struct UTgGfxBrowser_execUSC_OnResize_Delegate_Parms
{
};

// Function TgClient.TgGfxBrowser.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxBrowser_execUninitialize_Parms
{
};

// Function TgClient.TgGfxBrowser.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxBrowser_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxChallengeList.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxChallengeList_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxChallengeList.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxChallengeList_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxChallengeLobby.SortDifficulties
// [0x00020002] 
struct UTgGfxChallengeLobby_execSortDifficulties_Parms
{
	struct FBotDifficultyOption                        A;                                                		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FBotDifficultyOption                        B;                                                		// 0x0010 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGfxChallengeLobby.SortByBotName
// [0x00020002] 
struct UTgGfxChallengeLobby_execSortByBotName_Parms
{
	struct FBotData                                    A;                                                		// 0x0000 (0x001C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FBotData                                    B;                                                		// 0x001C (0x001C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0038 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGfxChallengeLobby.SortBots
// [0x00020802] ( FUNC_Event )
struct UTgGfxChallengeLobby_eventSortBots_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGfxChallengeLobby.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxChallengeLobby_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxChallengeLobby.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxChallengeLobby_execUninitialize_Parms
{
};

// Function TgClient.TgGfxChallengeLobby.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxChallengeLobby_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxChallengeOptions.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxChallengeOptions_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxChallengeOptions.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxChallengeOptions_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxCharacterBuilder.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxCharacterBuilder_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxCharacterBuilder.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxCharacterBuilder_execUninitialize_Parms
{
};

// Function TgClient.TgGfxCharacterBuilder.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxCharacterBuilder_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxChatModal.SetChannelMembers
// [0x00020802] ( FUNC_Event )
struct UTgGfxChatModal_eventSetChannelMembers_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxChatModal.UpdateChannelMembers
// [0x00020003] ( FUNC_Final )
struct UTgGfxChatModal_execUpdateChannelMembers_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxChatModal.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxChatModal_execUninitialize_Parms
{
};

// Function TgClient.TgGfxChatModal.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxChatModal_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanAdmin.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanAdmin_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanAdmin.UpdateClanNameChange
// [0x00020802] ( FUNC_Event )
struct UTgGfxClanAdmin_eventUpdateClanNameChange_Parms
{
};

// Function TgClient.TgGfxClanAdmin.ASC_UpdateClanNameChange
// [0x00020003] ( FUNC_Final )
struct UTgGfxClanAdmin_execASC_UpdateClanNameChange_Parms
{
};

// Function TgClient.TgGfxClanAdmin.UpdateApplicationData
// [0x00020802] ( FUNC_Event )
struct UTgGfxClanAdmin_eventUpdateApplicationData_Parms
{
};

// Function TgClient.TgGfxClanAdmin.ASC_UpdateApplicationData
// [0x00020003] ( FUNC_Final )
struct UTgGfxClanAdmin_execASC_UpdateApplicationData_Parms
{
};

// Function TgClient.TgGfxClanAdmin.UpdatePlayerInvites
// [0x00020802] ( FUNC_Event )
struct UTgGfxClanAdmin_eventUpdatePlayerInvites_Parms
{
};

// Function TgClient.TgGfxClanAdmin.ASC_UpdatePlayerInvites
// [0x00020003] ( FUNC_Final )
struct UTgGfxClanAdmin_execASC_UpdatePlayerInvites_Parms
{
};

// Function TgClient.TgGfxClanAdmin.UpdateClanData
// [0x00020802] ( FUNC_Event )
struct UTgGfxClanAdmin_eventUpdateClanData_Parms
{
};

// Function TgClient.TgGfxClanAdmin.ASC_UpdateClanData
// [0x00020003] ( FUNC_Final )
struct UTgGfxClanAdmin_execASC_UpdateClanData_Parms
{
};

// Function TgClient.TgGfxClanAdmin.USC_DeclineClanApp
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanAdmin_execUSC_DeclineClanApp_Parms
{
	int                                                nAppId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanAdmin.USC_AcceptClanApp
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanAdmin_execUSC_AcceptClanApp_Parms
{
	int                                                nAppId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanAdmin.USC_UpdateJoinTypeRegion
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanAdmin_execUSC_UpdateJoinTypeRegion_Parms
{
	int                                                nJoinTypeId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRegionId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanAdmin.USC_UpdateClanNameAndTag
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanAdmin_execUSC_UpdateClanNameAndTag_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sTag;                                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxClanAdmin.USC_DeclineClanApp_Delegate
// [0x00120000] 
struct UTgGfxClanAdmin_execUSC_DeclineClanApp_Delegate_Parms
{
	int                                                nAppId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanAdmin.USC_AcceptClanApp_Delegate
// [0x00120000] 
struct UTgGfxClanAdmin_execUSC_AcceptClanApp_Delegate_Parms
{
	int                                                nAppId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanAdmin.USC_UpdateJoinTypeRegion_Delegate
// [0x00120000] 
struct UTgGfxClanAdmin_execUSC_UpdateJoinTypeRegion_Delegate_Parms
{
	int                                                nJoinTypeId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRegionId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanAdmin.USC_UpdateClanNameAndTag_Delegate
// [0x00120000] 
struct UTgGfxClanAdmin_execUSC_UpdateClanNameAndTag_Delegate_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sTag;                                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxClanCreation.Reinit
// [0x00020802] ( FUNC_Event )
struct UTgGfxClanCreation_eventReinit_Parms
{
};

// Function TgClient.TgGfxClanCreation.ASC_Reinit
// [0x00020003] ( FUNC_Final )
struct UTgGfxClanCreation_execASC_Reinit_Parms
{
};

// Function TgClient.TgGfxClanCreation.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanCreation_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanCreation.USC_GotoClanList
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanCreation_execUSC_GotoClanList_Parms
{
};

// Function TgClient.TgGfxClanCreation.USC_GetRegionListData
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanCreation_execUSC_GetRegionListData_Parms
{
};

// Function TgClient.TgGfxClanCreation.USC_CancelClanRequest
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanCreation_execUSC_CancelClanRequest_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanCreation.USC_AcceptClanRequest
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanCreation_execUSC_AcceptClanRequest_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanCreation.USC_GetInvitesData
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanCreation_execUSC_GetInvitesData_Parms
{
};

// Function TgClient.TgGfxClanCreation.USC_CreateClan
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanCreation_execUSC_CreateClan_Parms
{
	struct FString                                     sClanName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sClanTag;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nRegionId;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRecruitmentType;                                 		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanCreation.USC_GotoClanList_Delegate
// [0x00120000] 
struct UTgGfxClanCreation_execUSC_GotoClanList_Delegate_Parms
{
};

// Function TgClient.TgGfxClanCreation.USC_GetRegionListData_Delegate
// [0x00120000] 
struct UTgGfxClanCreation_execUSC_GetRegionListData_Delegate_Parms
{
};

// Function TgClient.TgGfxClanCreation.USC_CancelClanRequest_Delegate
// [0x00120000] 
struct UTgGfxClanCreation_execUSC_CancelClanRequest_Delegate_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanCreation.USC_AcceptClanRequest_Delegate
// [0x00120000] 
struct UTgGfxClanCreation_execUSC_AcceptClanRequest_Delegate_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanCreation.USC_GetInvitesData_Delegate
// [0x00120000] 
struct UTgGfxClanCreation_execUSC_GetInvitesData_Delegate_Parms
{
};

// Function TgClient.TgGfxClanCreation.USC_CreateClan_Delegate
// [0x00120000] 
struct UTgGfxClanCreation_execUSC_CreateClan_Delegate_Parms
{
};

// Function TgClient.TgGfxClanIconPicker.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanIconPicker_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pMP;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanIconPicker.USC_SelectIcon
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanIconPicker_execUSC_SelectIcon_Parms
{
	int                                                nIconItemId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanIconPicker.USC_SelectIcon_Delegate
// [0x00120000] 
struct UTgGfxClanIconPicker_execUSC_SelectIcon_Delegate_Parms
{
};

// Function TgClient.TgGfxClanList.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanList_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanList.UpdateApplicationData
// [0x00020802] ( FUNC_Event )
struct UTgGfxClanList_eventUpdateApplicationData_Parms
{
};

// Function TgClient.TgGfxClanList.ASC_UpdateApplicationData
// [0x00020003] ( FUNC_Final )
struct UTgGfxClanList_execASC_UpdateApplicationData_Parms
{
};

// Function TgClient.TgGfxClanList.UpdateClanList
// [0x00020802] ( FUNC_Event )
struct UTgGfxClanList_eventUpdateClanList_Parms
{
};

// Function TgClient.TgGfxClanList.ASC_UpdateClanList
// [0x00020003] ( FUNC_Final )
struct UTgGfxClanList_execASC_UpdateClanList_Parms
{
};

// Function TgClient.TgGfxClanList.USC_ApplyToClan
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanList_execUSC_ApplyToClan_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWithMessage : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxClanList.USC_SearchClans
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanList_execUSC_SearchClans_Parms
{
	struct FString                                     sSearchString;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nJoinTypeId;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRegionId;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRecommendedOnly : 1;                             		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxClanList.USC_ApplyToClan_Delegate
// [0x00120000] 
struct UTgGfxClanList_execUSC_ApplyToClan_Delegate_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWithMessage : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxClanList.USC_SearchClans_Delegate
// [0x00120000] 
struct UTgGfxClanList_execUSC_SearchClans_Delegate_Parms
{
	struct FString                                     sSearchString;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nJoinTypeId;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRegionId;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRecommendedOnly : 1;                             		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxClanManagement.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanManagement_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanManagement.USC_ModifyLeader
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanManagement_execUSC_ModifyLeader_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanManagement.USC_ViewProfile
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanManagement_execUSC_ViewProfile_Parms
{
	struct FString                                     sInputValue;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxClanManagement.USC_InviteToClan
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanManagement_execUSC_InviteToClan_Parms
{
	struct FString                                     sInputValue;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxClanManagement.USC_UpdateClanTag
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanManagement_execUSC_UpdateClanTag_Parms
{
};

// Function TgClient.TgGfxClanManagement.USC_QuitClan
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanManagement_execUSC_QuitClan_Parms
{
};

// Function TgClient.TgGfxClanManagement.USC_CancelPlayerInvite
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanManagement_execUSC_CancelPlayerInvite_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanManagement.USC_ModifyLeader_Delegate
// [0x00120000] 
struct UTgGfxClanManagement_execUSC_ModifyLeader_Delegate_Parms
{
};

// Function TgClient.TgGfxClanManagement.USC_ViewProfile_Delegate
// [0x00120000] 
struct UTgGfxClanManagement_execUSC_ViewProfile_Delegate_Parms
{
};

// Function TgClient.TgGfxClanManagement.USC_InviteToClan_Delegate
// [0x00120000] 
struct UTgGfxClanManagement_execUSC_InviteToClan_Delegate_Parms
{
};

// Function TgClient.TgGfxClanManagement.USC_UpdateClanTag_Delegate
// [0x00120000] 
struct UTgGfxClanManagement_execUSC_UpdateClanTag_Delegate_Parms
{
};

// Function TgClient.TgGfxClanManagement.USC_QuitClan_Delegate
// [0x00120000] 
struct UTgGfxClanManagement_execUSC_QuitClan_Delegate_Parms
{
};

// Function TgClient.TgGfxClanManagement.USC_CancelPlayerInvite_Delegate
// [0x00120000] 
struct UTgGfxClanManagement_execUSC_CancelPlayerInvite_Delegate_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxDailyReward.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxDailyReward_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxDailyReward.UpdateDailyData
// [0x00020802] ( FUNC_Event )
struct UTgGfxDailyReward_eventUpdateDailyData_Parms
{
};

// Function TgClient.TgGfxDailyReward.ASC_UpdateDailyData
// [0x00020003] ( FUNC_Final )
struct UTgGfxDailyReward_execASC_UpdateDailyData_Parms
{
};

// Function TgClient.TgGfxDailyReward.USC_CollectReward
// [0x00020400] ( FUNC_Native )
struct UTgGfxDailyReward_execUSC_CollectReward_Parms
{
};

// Function TgClient.TgGfxDailyReward.USC_CollectReward_Delegate
// [0x00120000] 
struct UTgGfxDailyReward_execUSC_CollectReward_Delegate_Parms
{
};

// Function TgClient.TgGfxEventLeaderboard.UpdateFromChunk
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventLeaderboard_execUpdateFromChunk_Parms
{
	int                                                dataIdx;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGfxEventLeaderboard.SetDifficulty
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventLeaderboard_execSetDifficulty_Parms
{
};

// Function TgClient.TgGfxEventLeaderboard.ReceivedAllData
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventLeaderboard_execReceivedAllData_Parms
{
};

// Function TgClient.TgGfxEventLeaderboard.PopulateLeaderboard
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventLeaderboard_execPopulateLeaderboard_Parms
{
};

// Function TgClient.TgGfxEventLeaderboard.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventLeaderboard_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventLeaderboard.USC_RequestEventLeaderboard
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventLeaderboard_execUSC_RequestEventLeaderboard_Parms
{
	int                                                EventIdx;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventLeaderboard.USC_RequestEventLeaderboard_Delegate
// [0x00120000] 
struct UTgGfxEventLeaderboard_execUSC_RequestEventLeaderboard_Delegate_Parms
{
	int                                                EventIdx;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventScene.SceneTick
// [0x00020800] ( FUNC_Event )
struct UTgGfxEventScene_eventSceneTick_Parms
{
	float                                              Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventScene.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventScene_execUninitialize_Parms
{
};

// Function TgClient.TgGfxEventScene.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventScene_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventScene.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventScene_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSeasonalEvent.SceneTick
// [0x00020802] ( FUNC_Event )
struct UTgGfxSeasonalEvent_eventSceneTick_Parms
{
	float                                              Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFacebookStreamDisplay.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFacebookStreamDisplay_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFacebookStreamDisplay.USC_CheckStreamStatus
// [0x00020400] ( FUNC_Native )
struct UTgGfxFacebookStreamDisplay_execUSC_CheckStreamStatus_Parms
{
};

// Function TgClient.TgGfxFacebookStreamDisplay.USC_CheckStreamStatus_Delegate
// [0x00120000] 
struct UTgGfxFacebookStreamDisplay_execUSC_CheckStreamStatus_Delegate_Parms
{
};

// Function TgClient.TgGfxFacebookStreamPopup.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFacebookStreamPopup_execUninitialize_Parms
{
};

// Function TgClient.TgGfxFacebookStreamPopup.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFacebookStreamPopup_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFacebookStreamPopup.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxFacebookStreamPopup_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFeedback.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxFeedback_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFeedback.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFeedback_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFooterMain.USC_AddFriend
// [0x00020400] ( FUNC_Native )
struct UTgGfxFooterMain_execUSC_AddFriend_Parms
{
};

// Function TgClient.TgGfxFooterMain.USC_AddFriend_Delegate
// [0x00120000] 
struct UTgGfxFooterMain_execUSC_AddFriend_Delegate_Parms
{
};

// Function TgClient.TgGfxFooterMain.USC_Resize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFooterMain_execUSC_Resize_Parms
{
	struct FString                                     RegionName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  pObj;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFooterMain.USC_Resize_Delegate
// [0x00120000] 
struct UTgGfxFooterMain_execUSC_Resize_Delegate_Parms
{
	struct FString                                     RegionName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  pObj;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFooterMain.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFooterMain_execUninitialize_Parms
{
};

// Function TgClient.TgGfxFooterMain.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFooterMain_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUninitialize_Parms
{
};

// Function TgClient.TgGfxFriendManagement.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.Reinit
// [0x00020802] ( FUNC_Event )
struct UTgGfxFriendManagement_eventReinit_Parms
{
};

// Function TgClient.TgGfxFriendManagement.ASC_Reinit
// [0x00020003] ( FUNC_Final )
struct UTgGfxFriendManagement_execASC_Reinit_Parms
{
};

// Function TgClient.TgGfxFriendManagement.ErrorFeedback
// [0x00020802] ( FUNC_Event )
struct UTgGfxFriendManagement_eventErrorFeedback_Parms
{
	struct FString                                     ErrMsg;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.ASC_ErrorFeedback
// [0x00020003] ( FUNC_Final )
struct UTgGfxFriendManagement_execASC_ErrorFeedback_Parms
{
	struct FString                                     ErrMsg;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_OnCurse
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_OnCurse_Parms
{
	struct FString                                     UserName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_EditNote
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_EditNote_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_BlockPlayer
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_BlockPlayer_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_InviteClan
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_InviteClan_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_AddFriend
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_AddFriend_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_Resize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_Resize_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_ToggleDND
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_ToggleDND_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_UpdateStatusMessage
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_UpdateStatusMessage_Parms
{
	struct FString                                     sStatus;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_InviteToClan
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_InviteToClan_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_BlockByString
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_BlockByString_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_InviteFriendByString
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_InviteFriendByString_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_AddPlayerNote
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_AddPlayerNote_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sPlayerNote;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_RemoveBlocked
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_RemoveBlocked_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_PartyKick
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_PartyKick_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_PartyInvite
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_PartyInvite_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_SpectatePlayer
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_SpectatePlayer_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_ViewPlayerClan
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_ViewPlayerClan_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_ViewPlayerProfile
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_ViewPlayerProfile_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_CancelAllFriendRequests
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_CancelAllFriendRequests_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_CancelFriendRequest
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_CancelFriendRequest_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_AcceptAllFriendRequests
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_AcceptAllFriendRequests_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_AcceptFriendRequest
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_AcceptFriendRequest_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_CancelClanInvite
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_CancelClanInvite_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_AcceptClanInvite
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_AcceptClanInvite_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_CancelInvite
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_CancelInvite_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_InviteFriend
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_InviteFriend_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_GetListData
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_GetListData_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_SearchByString
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_SearchByString_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_MessageFriend
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_MessageFriend_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sPlayerName;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_RemoveFriend
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_RemoveFriend_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_GetFriendsData
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendManagement_execUSC_GetFriendsData_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_OnCurse_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_OnCurse_Delegate_Parms
{
	struct FString                                     UserName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_EditNote_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_EditNote_Delegate_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_BlockPlayer_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_BlockPlayer_Delegate_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_InviteClan_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_InviteClan_Delegate_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_AddFriend_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_AddFriend_Delegate_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_Resize_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_Resize_Delegate_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_ToggleDND_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_ToggleDND_Delegate_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_UpdateStatusMessage_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_UpdateStatusMessage_Delegate_Parms
{
	struct FString                                     sStatus;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_InviteToClan_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_InviteToClan_Delegate_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_BlockByString_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_BlockByString_Delegate_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_InviteFriendByString_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_InviteFriendByString_Delegate_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_AddPlayerNote_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_AddPlayerNote_Delegate_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sPlayerNote;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_RemoveBlocked_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_RemoveBlocked_Delegate_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_PartyKick_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_PartyKick_Delegate_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_PartyInvite_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_PartyInvite_Delegate_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_SpectatePlayer_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_SpectatePlayer_Delegate_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_ViewPlayerClan_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_ViewPlayerClan_Delegate_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_ViewPlayerProfile_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_ViewPlayerProfile_Delegate_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_CancelAllFriendRequests_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_CancelAllFriendRequests_Delegate_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_CancelFriendRequest_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_CancelFriendRequest_Delegate_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_AcceptAllFriendRequests_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_AcceptAllFriendRequests_Delegate_Parms
{
};

// Function TgClient.TgGfxFriendManagement.USC_AcceptFriendRequest_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_AcceptFriendRequest_Delegate_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_CancelClanInvite_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_CancelClanInvite_Delegate_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_AcceptClanInvite_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_AcceptClanInvite_Delegate_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_CancelInvite_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_CancelInvite_Delegate_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_InviteFriend_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_InviteFriend_Delegate_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_GetListData_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_GetListData_Delegate_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_SearchByString_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_SearchByString_Delegate_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_MessageFriend_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_MessageFriend_Delegate_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sPlayerName;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxFriendManagement.USC_RemoveFriend_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_RemoveFriend_Delegate_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFriendManagement.USC_GetFriendsData_Delegate
// [0x00120000] 
struct UTgGfxFriendManagement_execUSC_GetFriendsData_Delegate_Parms
{
};

// Function TgClient.TgGfxGammaControls.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGammaControls_execUninitialize_Parms
{
};

// Function TgClient.TgGfxGammaControls.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGammaControls_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGammaControls.DrawGammaLogo
// [0x00020400] ( FUNC_Native )
struct UTgGfxGammaControls_execDrawGammaLogo_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGods.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxGods_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGods.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGods_execUninitialize_Parms
{
};

// Function TgClient.TgGfxGods.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGods_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGods.USC_PlayGodVideo
// [0x00020400] ( FUNC_Native )
struct UTgGfxGods_execUSC_PlayGodVideo_Parms
{
	struct FString                                     demoURL;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxGods.USC_PlayGodVideo_Delegate
// [0x00120000] 
struct UTgGfxGods_execUSC_PlayGodVideo_Delegate_Parms
{
};

// Function TgClient.TgGfxGods.USC_UpdateEmoteSelection
// [0x00020400] ( FUNC_Native )
struct UTgGfxGods_execUSC_UpdateEmoteSelection_Parms
{
	struct FString                                     emoteName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxGods.USC_UpdateEmoteSelection_Delegate
// [0x00120000] 
struct UTgGfxGods_execUSC_UpdateEmoteSelection_Delegate_Parms
{
	struct FString                                     emoteName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxGodsHistory.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGodsHistory_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGodsHistory.UpdateGodHistory
// [0x00020802] ( FUNC_Event )
struct UTgGfxGodsHistory_eventUpdateGodHistory_Parms
{
};

// Function TgClient.TgGfxGodsHistory.ASC_UpdateGodHistory
// [0x00020003] ( FUNC_Final )
struct UTgGfxGodsHistory_execASC_UpdateGodHistory_Parms
{
};

// Function TgClient.TgGfxGodsHistory.UpdateQueueData
// [0x00020802] ( FUNC_Event )
struct UTgGfxGodsHistory_eventUpdateQueueData_Parms
{
};

// Function TgClient.TgGfxGodsHistory.ASC_UpdateQueueData
// [0x00020003] ( FUNC_Final )
struct UTgGfxGodsHistory_execASC_UpdateQueueData_Parms
{
};

// Function TgClient.TgGfxGodsHistory.USC_ShowMatchDetails
// [0x00020400] ( FUNC_Native )
struct UTgGfxGodsHistory_execUSC_ShowMatchDetails_Parms
{
	int                                                pMatchID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGodsHistory.USC_GetHistoryData
// [0x00020400] ( FUNC_Native )
struct UTgGfxGodsHistory_execUSC_GetHistoryData_Parms
{
	int                                                queueId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGodsHistory.USC_GetQueuesDropdown
// [0x00020400] ( FUNC_Native )
struct UTgGfxGodsHistory_execUSC_GetQueuesDropdown_Parms
{
	int                                                godId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGodsHistory.USC_ShowMatchDetails_Delegate
// [0x00120000] 
struct UTgGfxGodsHistory_execUSC_ShowMatchDetails_Delegate_Parms
{
	int                                                pMatchID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGodsHistory.USC_GetHistoryData_Delegate
// [0x00120000] 
struct UTgGfxGodsHistory_execUSC_GetHistoryData_Delegate_Parms
{
	int                                                queueId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGodsHistory.USC_GetQueuesDropdown_Delegate
// [0x00120000] 
struct UTgGfxGodsHistory_execUSC_GetQueuesDropdown_Delegate_Parms
{
	int                                                godId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGodTargeter.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGodTargeter_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGodTargeter.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxGodTargeter_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGuides.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGuides_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHomePage.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxHomePage_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHomePage.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxHomePage_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHUD.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxHUD_execUninitialize_Parms
{
};

// Function TgClient.TgGfxHUD.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxHUD_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudItems.UpdateGlow
// [0x00020802] ( FUNC_Event )
struct UTgGfxHudItems_eventUpdateGlow_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Visibility : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxHudItems.ASC_UpdateGlow
// [0x00020003] ( FUNC_Final )
struct UTgGfxHudItems_execASC_UpdateGlow_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Visibility : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxHudItems.USC_SetupItemDisplay
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudItems_execUSC_SetupItemDisplay_Parms
{
};

// Function TgClient.TgGfxHudItems.USC_SetupItemDisplay_Delegate
// [0x00120000] 
struct UTgGfxHudItems_execUSC_SetupItemDisplay_Delegate_Parms
{
};

// Function TgClient.TgGfxHudItems.CheckWishList
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudItems_execCheckWishList_Parms
{
	unsigned long                                      bPurge : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxHudItems.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudItems_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudItems.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudItems_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudNotify.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudNotify_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pMP;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudNotify.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudNotify_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudUpgrade.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudUpgrade_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pMP;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudUpgrade.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudUpgrade_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxIntro.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxIntro_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLandingPanelWeb.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLandingPanelWeb_execUninitialize_Parms
{
};

// Function TgClient.TgGfxLandingPanelWeb.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLandingPanelWeb_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLeagueMenu.UpdateFriends
// [0x00020802] ( FUNC_Event )
struct UTgGfxLeagueMenu_eventUpdateFriends_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.ASC_UpdateFriends
// [0x00020003] ( FUNC_Final )
struct UTgGfxLeagueMenu_execASC_UpdateFriends_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.UpdateStanding
// [0x00020802] ( FUNC_Event )
struct UTgGfxLeagueMenu_eventUpdateStanding_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.ASC_UpdateStanding
// [0x00020003] ( FUNC_Final )
struct UTgGfxLeagueMenu_execASC_UpdateStanding_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.UpdateLeaderboard
// [0x00020802] ( FUNC_Event )
struct UTgGfxLeagueMenu_eventUpdateLeaderboard_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.ASC_UpdateLeaderboard
// [0x00020003] ( FUNC_Final )
struct UTgGfxLeagueMenu_execASC_UpdateLeaderboard_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.UpdateCurrentLeagueStats
// [0x00020802] ( FUNC_Event )
struct UTgGfxLeagueMenu_eventUpdateCurrentLeagueStats_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.ASC_UpdateCurrentLeagueStats
// [0x00020003] ( FUNC_Final )
struct UTgGfxLeagueMenu_execASC_UpdateCurrentLeagueStats_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.UpdateLeagueListing
// [0x00020802] ( FUNC_Event )
struct UTgGfxLeagueMenu_eventUpdateLeagueListing_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.ASC_UpdateLeagueListing
// [0x00020003] ( FUNC_Final )
struct UTgGfxLeagueMenu_execASC_UpdateLeagueListing_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.UpdateSelectedTab
// [0x00020802] ( FUNC_Event )
struct UTgGfxLeagueMenu_eventUpdateSelectedTab_Parms
{
	struct FString                                     tabLabel;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxLeagueMenu.ASC_UpdateSelectedTab
// [0x00020003] ( FUNC_Final )
struct UTgGfxLeagueMenu_execASC_UpdateSelectedTab_Parms
{
	struct FString                                     tabLabel;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxLeagueMenu.UpdateTabLabels
// [0x00020802] ( FUNC_Event )
struct UTgGfxLeagueMenu_eventUpdateTabLabels_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.ASC_UpdateTabLabels
// [0x00020003] ( FUNC_Final )
struct UTgGfxLeagueMenu_execASC_UpdateTabLabels_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.USC_SaveTabIndex
// [0x00020400] ( FUNC_Native )
struct UTgGfxLeagueMenu_execUSC_SaveTabIndex_Parms
{
	int                                                tierTabIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLeagueMenu.USC_GetLeaderboard
// [0x00020400] ( FUNC_Native )
struct UTgGfxLeagueMenu_execUSC_GetLeaderboard_Parms
{
	int                                                nLeagueId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nTierId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLeagueMenu.USC_GetTopTen
// [0x00020400] ( FUNC_Native )
struct UTgGfxLeagueMenu_execUSC_GetTopTen_Parms
{
	int                                                nLeagueId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nTierId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLeagueMenu.USC_TabSelected
// [0x00020400] ( FUNC_Native )
struct UTgGfxLeagueMenu_execUSC_TabSelected_Parms
{
	struct FString                                     tabSelected;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxLeagueMenu.USC_GetTabLabels
// [0x00020400] ( FUNC_Native )
struct UTgGfxLeagueMenu_execUSC_GetTabLabels_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.USC_SaveTabIndex_Delegate
// [0x00120000] 
struct UTgGfxLeagueMenu_execUSC_SaveTabIndex_Delegate_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.USC_GetLeaderboard_Delegate
// [0x00120000] 
struct UTgGfxLeagueMenu_execUSC_GetLeaderboard_Delegate_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.USC_GetTopTen_Delegate
// [0x00120000] 
struct UTgGfxLeagueMenu_execUSC_GetTopTen_Delegate_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.USC_TabSelected_Delegate
// [0x00120000] 
struct UTgGfxLeagueMenu_execUSC_TabSelected_Delegate_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.USC_GetTabLabels_Delegate
// [0x00120000] 
struct UTgGfxLeagueMenu_execUSC_GetTabLabels_Delegate_Parms
{
};

// Function TgClient.TgGfxLeagueMenu.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLeagueMenu_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLoadouts.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoadouts_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLoadouts.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoadouts_execUninitialize_Parms
{
};

// Function TgClient.TgGfxLoadouts.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoadouts_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLobbyMain.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLobbyMain_execUninitialize_Parms
{
};

// Function TgClient.TgGfxLobbyMain.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLobbyMain_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMainMenu.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxMainMenu_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMainMenu.USC_GotoLobby
// [0x00020400] ( FUNC_Native )
struct UTgGfxMainMenu_execUSC_GotoLobby_Parms
{
};

// Function TgClient.TgGfxMainMenu.USC_GotoLobby_Delegate
// [0x00120000] 
struct UTgGfxMainMenu_execUSC_GotoLobby_Delegate_Parms
{
};

// Function TgClient.TgGfxMassInvite.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxMassInvite_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMassInvite.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxMassInvite_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMatchDetails.MatchDataUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxMatchDetails_eventMatchDataUpdated_Parms
{
};

// Function TgClient.TgGfxMatchDetails.ASC_MatchDataUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxMatchDetails_execASC_MatchDataUpdated_Parms
{
};

// Function TgClient.TgGfxMatchDetails.USC_SearchByMatchId
// [0x00020400] ( FUNC_Native )
struct UTgGfxMatchDetails_execUSC_SearchByMatchId_Parms
{
	struct FString                                     matchId;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxMatchDetails.USC_SearchByMatchId_Delegate
// [0x00120000] 
struct UTgGfxMatchDetails_execUSC_SearchByMatchId_Delegate_Parms
{
	struct FString                                     matchId;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxMatchDetails.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxMatchDetails_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGFxMatchInvite.Update
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchInvite_eventUpdate_Parms
{
};

// Function TgClient.TgGFxMatchInvite.Hide
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchInvite_eventHide_Parms
{
};

// Function TgClient.TgGFxMatchInvite.Show
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchInvite_eventShow_Parms
{
};

// Function TgClient.TgGFxMatchInvite.DisableBrowserInput
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchInvite_execDisableBrowserInput_Parms
{
};

// Function TgClient.TgGFxMatchInvite.EnableBrowserInput
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchInvite_execEnableBrowserInput_Parms
{
};

// Function TgClient.TgGFxMatchInvite.GetMatchInviteData
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchInvite_execGetMatchInviteData_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGFxMatchInvite.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchInvite_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGFxMatchInvite.HideMatchInvite
// [0x00020003] ( FUNC_Final )
struct UTgGFxMatchInvite_execHideMatchInvite_Parms
{
};

// Function TgClient.TgGFxMatchInvite.UpdateMatchInvite
// [0x00020003] ( FUNC_Final )
struct UTgGFxMatchInvite_execUpdateMatchInvite_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGFxMatchInvite.ShowMatchInvite
// [0x00020003] ( FUNC_Final )
struct UTgGFxMatchInvite_execShowMatchInvite_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMatchLobby.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxMatchLobby_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMatchLobby.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxMatchLobby_execUninitialize_Parms
{
};

// Function TgClient.TgGfxMatchLobby.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxMatchLobby_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMatchLobbyClassSelection.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxMatchLobbyClassSelection_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMatchLobbyClassSelection.UpdateEmoteData
// [0x00020802] ( FUNC_Event )
struct UTgGfxMatchLobbyClassSelection_eventUpdateEmoteData_Parms
{
};

// Function TgClient.TgGfxMatchLobbyClassSelection.ASC_UpdateEmoteData
// [0x00020003] ( FUNC_Final )
struct UTgGfxMatchLobbyClassSelection_execASC_UpdateEmoteData_Parms
{
};

// Function TgClient.TgGfxMatchLobbyClassSelection.SetSelectedSkin
// [0x00020802] ( FUNC_Event )
struct UTgGfxMatchLobbyClassSelection_eventSetSelectedSkin_Parms
{
	int                                                SkinId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMatchLobbyClassSelection.ASC_SetSelectedSkin
// [0x00020003] ( FUNC_Final )
struct UTgGfxMatchLobbyClassSelection_execASC_SetSelectedSkin_Parms
{
	int                                                SkinId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMatchLobbyClassSelection.VoicePackPurchased
// [0x00020802] ( FUNC_Event )
struct UTgGfxMatchLobbyClassSelection_eventVoicePackPurchased_Parms
{
	int                                                godId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                voicePackItemId;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMatchLobbyClassSelection.ASC_VoicePackPurchased
// [0x00020003] ( FUNC_Final )
struct UTgGfxMatchLobbyClassSelection_execASC_VoicePackPurchased_Parms
{
	int                                                godId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                voicePackItemId;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_ShowEmotePurchase
// [0x00020400] ( FUNC_Native )
struct UTgGfxMatchLobbyClassSelection_execUSC_ShowEmotePurchase_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_ShowEmotePurchase_Delegate
// [0x00120000] 
struct UTgGfxMatchLobbyClassSelection_execUSC_ShowEmotePurchase_Delegate_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_GetEmoteData
// [0x00020400] ( FUNC_Native )
struct UTgGfxMatchLobbyClassSelection_execUSC_GetEmoteData_Parms
{
	int                                                godId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_GetEmoteData_Delegate
// [0x00120000] 
struct UTgGfxMatchLobbyClassSelection_execUSC_GetEmoteData_Delegate_Parms
{
	int                                                godId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_SetVPSelection
// [0x00020400] ( FUNC_Native )
struct UTgGfxMatchLobbyClassSelection_execUSC_SetVPSelection_Parms
{
	int                                                Selection;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_SetVPSelection_Delegate
// [0x00120000] 
struct UTgGfxMatchLobbyClassSelection_execUSC_SetVPSelection_Delegate_Parms
{
	int                                                Selection;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_GetVoicePackInfo
// [0x00020400] ( FUNC_Native )
struct UTgGfxMatchLobbyClassSelection_execUSC_GetVoicePackInfo_Parms
{
	int                                                godId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_GetVoicePackInfo_Delegate
// [0x00120000] 
struct UTgGfxMatchLobbyClassSelection_execUSC_GetVoicePackInfo_Delegate_Parms
{
	int                                                godId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGfxMenuBar.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxMenuBar_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMenuBar.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxMenuBar_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMenuBar.USC_StopWindowMove
// [0x00020400] ( FUNC_Native )
struct UTgGfxMenuBar_execUSC_StopWindowMove_Parms
{
};

// Function TgClient.TgGfxMenuBar.USC_StopWindowMove_Delegate
// [0x00120000] 
struct UTgGfxMenuBar_execUSC_StopWindowMove_Delegate_Parms
{
};

// Function TgClient.TgGfxMenuBar.USC_StartWindowMove
// [0x00020400] ( FUNC_Native )
struct UTgGfxMenuBar_execUSC_StartWindowMove_Parms
{
};

// Function TgClient.TgGfxMenuBar.USC_StartWindowMove_Delegate
// [0x00120000] 
struct UTgGfxMenuBar_execUSC_StartWindowMove_Delegate_Parms
{
};

// Function TgClient.TgGfxNotificationList.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxNotificationList_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxNotificationList.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxNotificationList_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxParty.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxParty_execUninitialize_Parms
{
};

// Function TgClient.TgGfxParty.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxParty_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pMP;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxParty.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxParty_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPartyManagement.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPartyManagement_execUninitialize_Parms
{
};

// Function TgClient.TgGfxPartyManagement.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxPartyManagement_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPartyManagement.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPartyManagement_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pMP;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayNowV2_execUninitialize_Parms
{
};

// Function TgClient.TgGfxPlayNowV2.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayNowV2_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pMP;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.ToggleParty
// [0x00020802] ( FUNC_Event )
struct UTgGfxPlayNowV2_eventToggleParty_Parms
{
	unsigned long                                      Show : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.ASC_ToggleParty
// [0x00020003] ( FUNC_Final )
struct UTgGfxPlayNowV2_execASC_ToggleParty_Parms
{
	unsigned long                                      Show : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.AutoNavTo
// [0x00020802] ( FUNC_Event )
struct UTgGfxPlayNowV2_eventAutoNavTo_Parms
{
	int                                                tabI;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                queueI;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.ASC_AutoNavTo
// [0x00020003] ( FUNC_Final )
struct UTgGfxPlayNowV2_execASC_AutoNavTo_Parms
{
	int                                                tabI;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                queueI;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.UpdateTabQueues
// [0x00020802] ( FUNC_Event )
struct UTgGfxPlayNowV2_eventUpdateTabQueues_Parms
{
	unsigned long                                      Disable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.ASC_UpdateTabQueues
// [0x00020003] ( FUNC_Final )
struct UTgGfxPlayNowV2_execASC_UpdateTabQueues_Parms
{
	unsigned long                                      Disable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.UpdateQueueInfo
// [0x00020802] ( FUNC_Event )
struct UTgGfxPlayNowV2_eventUpdateQueueInfo_Parms
{
};

// Function TgClient.TgGfxPlayNowV2.ASC_UpdateQueueInfo
// [0x00020003] ( FUNC_Final )
struct UTgGfxPlayNowV2_execASC_UpdateQueueInfo_Parms
{
};

// Function TgClient.TgGfxPlayNowV2.UpdateQueueList
// [0x00020802] ( FUNC_Event )
struct UTgGfxPlayNowV2_eventUpdateQueueList_Parms
{
};

// Function TgClient.TgGfxPlayNowV2.ASC_UpdateQueueList
// [0x00020003] ( FUNC_Final )
struct UTgGfxPlayNowV2_execASC_UpdateQueueList_Parms
{
};

// Function TgClient.TgGfxPlayNowV2.USC_ShowFeatureScene
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayNowV2_execUSC_ShowFeatureScene_Parms
{
	unsigned long                                      Show : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.USC_ShowFeatureScene_Delegate
// [0x00120000] 
struct UTgGfxPlayNowV2_execUSC_ShowFeatureScene_Delegate_Parms
{
	unsigned long                                      Show : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.USC_JoinQueue
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayNowV2_execUSC_JoinQueue_Parms
{
	int                                                queueId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.USC_JoinQueue_Delegate
// [0x00120000] 
struct UTgGfxPlayNowV2_execUSC_JoinQueue_Delegate_Parms
{
	int                                                queueId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.USC_OnInfoBtn
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayNowV2_execUSC_OnInfoBtn_Parms
{
	int                                                btnId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.USC_OnInfoBtn_Delegate
// [0x00120000] 
struct UTgGfxPlayNowV2_execUSC_OnInfoBtn_Delegate_Parms
{
	int                                                btnId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.USC_SelectQueue
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayNowV2_execUSC_SelectQueue_Parms
{
	int                                                qId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.USC_SelectQueue_Delegate
// [0x00120000] 
struct UTgGfxPlayNowV2_execUSC_SelectQueue_Delegate_Parms
{
	int                                                qId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.USC_SelectRegion
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayNowV2_execUSC_SelectRegion_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.USC_SelectRegion_Delegate
// [0x00120000] 
struct UTgGfxPlayNowV2_execUSC_SelectRegion_Delegate_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.USC_GetQueueList
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayNowV2_execUSC_GetQueueList_Parms
{
	int                                                tabVV;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayNowV2.USC_GetQueueList_Delegate
// [0x00120000] 
struct UTgGfxPlayNowV2_execUSC_GetQueueList_Delegate_Parms
{
	int                                                tabVV;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPopupModal.SendAnnounceReportPlayer
// [0x00020802] ( FUNC_Event )
struct UTgGfxPopupModal_eventSendAnnounceReportPlayer_Parms
{
	struct FString                                     reportedName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxPopupModal.SendClosePopup
// [0x00020802] ( FUNC_Event )
struct UTgGfxPopupModal_eventSendClosePopup_Parms
{
};

// Function TgClient.TgGfxPopupModal.SendOpenPopup
// [0x00020802] ( FUNC_Event )
struct UTgGfxPopupModal_eventSendOpenPopup_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPopupModal.USC_SelectedPopup
// [0x00020400] ( FUNC_Native )
struct UTgGfxPopupModal_execUSC_SelectedPopup_Parms
{
	int                                                nActionID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sInputValue;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sSecondaryInputValue;                             		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxPopupModal.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPopupModal_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPopupModal.USC_SelectedPopup_Delegate
// [0x00120000] 
struct UTgGfxPopupModal_execUSC_SelectedPopup_Delegate_Parms
{
	int                                                nActionID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sInputValue;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sSecondaryInputValue;                             		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxPopupModal.AnnounceReportPlayer
// [0x00020003] ( FUNC_Final )
struct UTgGfxPopupModal_execAnnounceReportPlayer_Parms
{
	struct FString                                     reportedName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxPopupModal.ClosePopup
// [0x00020003] ( FUNC_Final )
struct UTgGfxPopupModal_execClosePopup_Parms
{
};

// Function TgClient.TgGfxPopupModal.OpenPopup
// [0x00020003] ( FUNC_Final )
struct UTgGfxPopupModal_execOpenPopup_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileAccolade.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileAccolade_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileAccolade.AccoladeDataUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileAccolade_eventAccoladeDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileAccolade.ASC_AccoladeDataUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileAccolade_execASC_AccoladeDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileAchievements.CheckIfHasMasterList
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileAchievements_eventCheckIfHasMasterList_Parms
{
};

// Function TgClient.TgGfxProfileAchievements.ASC_CheckIfHasMasterList
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileAchievements_execASC_CheckIfHasMasterList_Parms
{
};

// Function TgClient.TgGfxProfileAchievements.UpdateAchievements
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileAchievements_eventUpdateAchievements_Parms
{
};

// Function TgClient.TgGfxProfileAchievements.ASC_UpdateAchievements
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileAchievements_execASC_UpdateAchievements_Parms
{
};

// Function TgClient.TgGfxProfileAchievements.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileAchievements_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileHistory.QueueDataUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileHistory_eventQueueDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileHistory.ASC_QueueDataUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileHistory_execASC_QueueDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileHistory.MatchesDataUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileHistory_eventMatchesDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileHistory.ASC_MatchesDataUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileHistory_execASC_MatchesDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileHistory.USC_ShowDetails
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileHistory_execUSC_ShowDetails_Parms
{
	struct FString                                     matchId;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfileHistory.USC_SetQueueFilter
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileHistory_execUSC_SetQueueFilter_Parms
{
	int                                                queueId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileHistory.USC_SetGodsFilter
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileHistory_execUSC_SetGodsFilter_Parms
{
	struct FString                                     sFilterGod;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfileHistory.USC_ShowDetails_Delegate
// [0x00120000] 
struct UTgGfxProfileHistory_execUSC_ShowDetails_Delegate_Parms
{
	struct FString                                     matchId;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfileHistory.USC_SetQueueFilter_Delegate
// [0x00120000] 
struct UTgGfxProfileHistory_execUSC_SetQueueFilter_Delegate_Parms
{
	int                                                queueId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileHistory.USC_SetGodsFilter_Delegate
// [0x00120000] 
struct UTgGfxProfileHistory_execUSC_SetGodsFilter_Delegate_Parms
{
	struct FString                                     sFilterGod;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfileHistory.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileHistory_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileLeagueStats.UpdateLeagueStats
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileLeagueStats_eventUpdateLeagueStats_Parms
{
};

// Function TgClient.TgGfxProfileLeagueStats.ASC_UpdateLeagueStats
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileLeagueStats_execASC_UpdateLeagueStats_Parms
{
};

// Function TgClient.TgGfxProfileLeagueStats.UpdateCurrentLeagueStats
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileLeagueStats_eventUpdateCurrentLeagueStats_Parms
{
};

// Function TgClient.TgGfxProfileLeagueStats.ASC_UpdateCurrentLeagueStats
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileLeagueStats_execASC_UpdateCurrentLeagueStats_Parms
{
};

// Function TgClient.TgGfxProfileLeagueStats.UpdateLeagueListing
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileLeagueStats_eventUpdateLeagueListing_Parms
{
};

// Function TgClient.TgGfxProfileLeagueStats.ASC_UpdateLeagueListing
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileLeagueStats_execASC_UpdateLeagueListing_Parms
{
};

// Function TgClient.TgGfxProfileLeagueStats.USC_NavToAboutLeague
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileLeagueStats_execUSC_NavToAboutLeague_Parms
{
};

// Function TgClient.TgGfxProfileLeagueStats.USC_GetLeagueStats
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileLeagueStats_execUSC_GetLeagueStats_Parms
{
};

// Function TgClient.TgGfxProfileLeagueStats.USC_NavToAboutLeague_Delegate
// [0x00120000] 
struct UTgGfxProfileLeagueStats_execUSC_NavToAboutLeague_Delegate_Parms
{
};

// Function TgClient.TgGfxProfileLeagueStats.USC_GetLeagueStats_Delegate
// [0x00120000] 
struct UTgGfxProfileLeagueStats_execUSC_GetLeagueStats_Delegate_Parms
{
};

// Function TgClient.TgGfxProfileLeagueStats.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileLeagueStats_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileOverview.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileOverview_execUninitialize_Parms
{
};

// Function TgClient.TgGfxProfileOverview.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileOverview_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileOverview.UpdateSelectedAchievements
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileOverview_eventUpdateSelectedAchievements_Parms
{
};

// Function TgClient.TgGfxProfileOverview.ASC_UpdateSelectedAchievements
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileOverview_execASC_UpdateSelectedAchievements_Parms
{
};

// Function TgClient.TgGfxProfileOverview.LeagueDataUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileOverview_eventLeagueDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileOverview.ASC_LeagueDataUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileOverview_execASC_LeagueDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileOverview.ProfileDataUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileOverview_eventProfileDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileOverview.ASC_ProfileDataUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileOverview_execASC_ProfileDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileOverview.USC_NavigateToClan
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileOverview_execUSC_NavigateToClan_Parms
{
};

// Function TgClient.TgGfxProfileOverview.USC_NavigateToClan_Delegate
// [0x00120000] 
struct UTgGfxProfileOverview_execUSC_NavigateToClan_Delegate_Parms
{
};

// Function TgClient.TgGfxProfilePage.UpdateAvailable
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfilePage_eventUpdateAvailable_Parms
{
	unsigned long                                      vis : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateAvailable
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfilePage_execASC_UpdateAvailable_Parms
{
	unsigned long                                      vis : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxProfilePage.UpdateCallout
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfilePage_eventUpdateCallout_Parms
{
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateCallout
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfilePage_execASC_UpdateCallout_Parms
{
};

// Function TgClient.TgGfxProfilePage.UpdatePlayer
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfilePage_eventUpdatePlayer_Parms
{
};

// Function TgClient.TgGfxProfilePage.ASC_UpdatePlayer
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfilePage_execASC_UpdatePlayer_Parms
{
};

// Function TgClient.TgGfxProfilePage.UpdateTab
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfilePage_eventUpdateTab_Parms
{
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateTab
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfilePage_execASC_UpdateTab_Parms
{
};

// Function TgClient.TgGfxProfilePage.USC_UpdatePrivacy
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfilePage_execUSC_UpdatePrivacy_Parms
{
};

// Function TgClient.TgGfxProfilePage.USC_UpdatePrivacy_Delegate
// [0x00120000] 
struct UTgGfxProfilePage_execUSC_UpdatePrivacy_Delegate_Parms
{
};

// Function TgClient.TgGfxProfilePage.USC_AddFriend
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfilePage_execUSC_AddFriend_Parms
{
};

// Function TgClient.TgGfxProfilePage.USC_AddFriend_Delegate
// [0x00120000] 
struct UTgGfxProfilePage_execUSC_AddFriend_Delegate_Parms
{
};

// Function TgClient.TgGfxProfilePage.USC_TabSelected
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfilePage_execUSC_TabSelected_Parms
{
	int                                                tabId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfilePage.USC_TabSelected_Delegate
// [0x00120000] 
struct UTgGfxProfilePage_execUSC_TabSelected_Delegate_Parms
{
	int                                                tabId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfilePage.USC_SearchPlayerByName
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfilePage_execUSC_SearchPlayerByName_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfilePage.USC_SearchPlayerByName_Delegate
// [0x00120000] 
struct UTgGfxProfilePage_execUSC_SearchPlayerByName_Delegate_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfilePage.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfilePage_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileWorshiper.FilterDataUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileWorshiper_eventFilterDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileWorshiper.ASC_FilterDataUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileWorshiper_execASC_FilterDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileWorshiper.GodMasteryUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileWorshiper_eventGodMasteryUpdated_Parms
{
};

// Function TgClient.TgGfxProfileWorshiper.ASC_GodMasteryUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileWorshiper_execASC_GodMasteryUpdated_Parms
{
};

// Function TgClient.TgGfxProfileWorshiper.USC_Search
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileWorshiper_execUSC_Search_Parms
{
	struct FString                                     searchText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfileWorshiper.USC_Search_Delegate
// [0x00120000] 
struct UTgGfxProfileWorshiper_execUSC_Search_Delegate_Parms
{
	struct FString                                     searchText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfileWorshiper.USC_SetGodMasteryFilter
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileWorshiper_execUSC_SetGodMasteryFilter_Parms
{
	int                                                filterId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileWorshiper.USC_SetGodMasteryFilter_Delegate
// [0x00120000] 
struct UTgGfxProfileWorshiper_execUSC_SetGodMasteryFilter_Delegate_Parms
{
	int                                                filterId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileWorshiper.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileWorshiper_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPurchaseGems.UpdateData
// [0x00020802] ( FUNC_Event )
struct UTgGfxPurchaseGems_eventUpdateData_Parms
{
};

// Function TgClient.TgGfxPurchaseGems.ASC_UpdateData
// [0x00020003] ( FUNC_Final )
struct UTgGfxPurchaseGems_execASC_UpdateData_Parms
{
};

// Function TgClient.TgGfxPurchaseGems.HideOverlay
// [0x00020802] ( FUNC_Event )
struct UTgGfxPurchaseGems_eventHideOverlay_Parms
{
};

// Function TgClient.TgGfxPurchaseGems.ASC_HideOverlay
// [0x00020003] ( FUNC_Final )
struct UTgGfxPurchaseGems_execASC_HideOverlay_Parms
{
};

// Function TgClient.TgGfxPurchaseGems.ShowOverlay
// [0x00020802] ( FUNC_Event )
struct UTgGfxPurchaseGems_eventShowOverlay_Parms
{
};

// Function TgClient.TgGfxPurchaseGems.ASC_ShowOverlay
// [0x00020003] ( FUNC_Final )
struct UTgGfxPurchaseGems_execASC_ShowOverlay_Parms
{
};

// Function TgClient.TgGfxPurchaseGems.USC_PurchaseItem
// [0x00020400] ( FUNC_Native )
struct UTgGfxPurchaseGems_execUSC_PurchaseItem_Parms
{
	struct FString                                     SKUCode;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                lootId;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPurchaseGems.USC_PurchaseItem_Delegate
// [0x00120000] 
struct UTgGfxPurchaseGems_execUSC_PurchaseItem_Delegate_Parms
{
	struct FString                                     SKUCode;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                lootId;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPurchaseGems.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPurchaseGems_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPurchaseModal.SetupBundleCompare
// [0x00020802] ( FUNC_Event )
struct UTgGfxPurchaseModal_eventSetupBundleCompare_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Data2;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPurchaseModal.asc_SetupBundleCompare
// [0x00020003] ( FUNC_Final )
struct UTgGfxPurchaseModal_execasc_SetupBundleCompare_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Data2;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPurchaseModal.SetupData
// [0x00020802] ( FUNC_Event )
struct UTgGfxPurchaseModal_eventSetupData_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                popupType;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPurchaseModal.asc_SetupData
// [0x00020003] ( FUNC_Final )
struct UTgGfxPurchaseModal_execasc_SetupData_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                popupType;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPurchaseModal.USC_ShowNotEnoughCurrency
// [0x00020400] ( FUNC_Native )
struct UTgGfxPurchaseModal_execUSC_ShowNotEnoughCurrency_Parms
{
	int                                                CurrencyType;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPurchaseModal.USC_ShowNotEnoughCurrency_Delegate
// [0x00120000] 
struct UTgGfxPurchaseModal_execUSC_ShowNotEnoughCurrency_Delegate_Parms
{
	int                                                CurrencyType;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPurchaseModal.USC_OnClickConfirm
// [0x00020400] ( FUNC_Native )
struct UTgGfxPurchaseModal_execUSC_OnClickConfirm_Parms
{
};

// Function TgClient.TgGfxPurchaseModal.USC_OnClickConfirm_Delegate
// [0x00120000] 
struct UTgGfxPurchaseModal_execUSC_OnClickConfirm_Delegate_Parms
{
};

// Function TgClient.TgGfxPurchaseModal.USC_OnCloseScreen
// [0x00020400] ( FUNC_Native )
struct UTgGfxPurchaseModal_execUSC_OnCloseScreen_Parms
{
};

// Function TgClient.TgGfxPurchaseModal.USC_OnCloseScreen_Delegate
// [0x00120000] 
struct UTgGfxPurchaseModal_execUSC_OnCloseScreen_Delegate_Parms
{
};

// Function TgClient.TgGfxPurchaseModal.USC_PurchaseItem
// [0x00020400] ( FUNC_Native )
struct UTgGfxPurchaseModal_execUSC_PurchaseItem_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPriceInUI;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CurrencyType;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Quantity;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCouponId;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPurchaseModal.USC_PurchaseItem_Delegate
// [0x00120000] 
struct UTgGfxPurchaseModal_execUSC_PurchaseItem_Delegate_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPriceInUI;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CurrencyType;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Quantity;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCouponId;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPurchaseModal.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPurchaseModal_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxQuestAcquisition.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxQuestAcquisition_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxQuestAcquisition.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxQuestAcquisition_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxQuestList.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxQuestList_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxQuestList.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxQuestList_execUninitialize_Parms
{
};

// Function TgClient.TgGfxQuestList.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxQuestList_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxQuestWindow.UpdateQuest
// [0x00020802] ( FUNC_Event )
struct UTgGfxQuestWindow_eventUpdateQuest_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Goal;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     msg;                                              		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxQuestWindow.ASC_UpdateQuest
// [0x00020003] ( FUNC_Final )
struct UTgGfxQuestWindow_execASC_UpdateQuest_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Goal;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     msg;                                              		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxQuestWindow.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxQuestWindow_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxReferralPopup.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferralPopup_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxReferralPopup.UpdateFriendList
// [0x00020802] ( FUNC_Event )
struct UTgGfxReferralPopup_eventUpdateFriendList_Parms
{
};

// Function TgClient.TgGfxReferralPopup.ASC_UpdateFriendList
// [0x00020003] ( FUNC_Final )
struct UTgGfxReferralPopup_execASC_UpdateFriendList_Parms
{
};

// Function TgClient.TgGfxReferralPopup.USC_SendFriendReferral
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferralPopup_execUSC_SendFriendReferral_Parms
{
	struct FString                                     sQQId;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sMessage;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPlayerName;                                      		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxReferralPopup.USC_SendFriendReferral_Delegate
// [0x00120000] 
struct UTgGfxReferralPopup_execUSC_SendFriendReferral_Delegate_Parms
{
};

// Function TgClient.TgGfxReferralReward.USC_OpenReferFriendReward
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferralReward_execUSC_OpenReferFriendReward_Parms
{
};

// Function TgClient.TgGfxReferralReward.USC_OpenReferFriendReward_Delegate
// [0x00120000] 
struct UTgGfxReferralReward_execUSC_OpenReferFriendReward_Delegate_Parms
{
};

// Function TgClient.TgGfxReferralReward.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferralReward_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxReferrals.UpdateAchievements
// [0x00020802] ( FUNC_Event )
struct UTgGfxReferrals_eventUpdateAchievements_Parms
{
};

// Function TgClient.TgGfxReferrals.ASC_UpdateAchievements
// [0x00020003] ( FUNC_Final )
struct UTgGfxReferrals_execASC_UpdateAchievements_Parms
{
};

// Function TgClient.TgGfxReferrals.UpdatePlayerList
// [0x00020802] ( FUNC_Event )
struct UTgGfxReferrals_eventUpdatePlayerList_Parms
{
};

// Function TgClient.TgGfxReferrals.ASC_UpdatePlayerList
// [0x00020003] ( FUNC_Final )
struct UTgGfxReferrals_execASC_UpdatePlayerList_Parms
{
};

// Function TgClient.TgGfxReferrals.USC_OpenReferFriend
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferrals_execUSC_OpenReferFriend_Parms
{
};

// Function TgClient.TgGfxReferrals.USC_OpenReferFriend_Delegate
// [0x00120000] 
struct UTgGfxReferrals_execUSC_OpenReferFriend_Delegate_Parms
{
};

// Function TgClient.TgGfxReferrals.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferrals_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxReferralSelector.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferralSelector_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxReferralSelector.UpdateFriendList
// [0x00020802] ( FUNC_Event )
struct UTgGfxReferralSelector_eventUpdateFriendList_Parms
{
};

// Function TgClient.TgGfxReferralSelector.ASC_UpdateFriendList
// [0x00020003] ( FUNC_Final )
struct UTgGfxReferralSelector_execASC_UpdateFriendList_Parms
{
};

// Function TgClient.TgGfxReferralSelector.USC_SelectReferral
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferralSelector_execUSC_SelectReferral_Parms
{
	struct FString                                     sQQId;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxReferralSelector.USC_SelectReferral_Delegate
// [0x00120000] 
struct UTgGfxReferralSelector_execUSC_SelectReferral_Delegate_Parms
{
};

// Function TgClient.TgGfxRewardCenter.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxRewardCenter_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxRewardCenter.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxRewardCenter_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSeasonTicket.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSeasonTicket_execUninitialize_Parms
{
};

// Function TgClient.TgGfxSeasonTicket.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxSeasonTicket_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSeasonTicket.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSeasonTicket_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSecurityManagement.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSecurityManagement_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSecurityManagement.USC_SubmitSecurity
// [0x00020400] ( FUNC_Native )
struct UTgGfxSecurityManagement_execUSC_SubmitSecurity_Parms
{
	struct FString                                     securityquestion;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     securityanswer;                                   		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxSecurityManagement.USC_SubmitSecurity_Delegate
// [0x00120000] 
struct UTgGfxSecurityManagement_execUSC_SubmitSecurity_Delegate_Parms
{
	struct FString                                     securityquestion;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     securityanswer;                                   		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxSmiteTv.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSmiteTv_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSmiteTv.UpdateSelectedTab
// [0x00020802] ( FUNC_Event )
struct UTgGfxSmiteTv_eventUpdateSelectedTab_Parms
{
	struct FString                                     tabLabel;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxSmiteTv.ASC_UpdateSelectedTab
// [0x00020003] ( FUNC_Final )
struct UTgGfxSmiteTv_execASC_UpdateSelectedTab_Parms
{
	struct FString                                     tabLabel;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxSmiteTv.UpdateSmiteTvTabLabels
// [0x00020802] ( FUNC_Event )
struct UTgGfxSmiteTv_eventUpdateSmiteTvTabLabels_Parms
{
};

// Function TgClient.TgGfxSmiteTv.ASC_UpdateSmiteTvTabLabels
// [0x00020003] ( FUNC_Final )
struct UTgGfxSmiteTv_execASC_UpdateSmiteTvTabLabels_Parms
{
};

// Function TgClient.TgGfxSmiteTv.USC_TabSelected
// [0x00020400] ( FUNC_Native )
struct UTgGfxSmiteTv_execUSC_TabSelected_Parms
{
	struct FString                                     tabSelected;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxSmiteTv.USC_TabSelected_Delegate
// [0x00120000] 
struct UTgGfxSmiteTv_execUSC_TabSelected_Delegate_Parms
{
};

// Function TgClient.TgGfxSmiteTv.USC_GetSmiteTvTabLabels
// [0x00020400] ( FUNC_Native )
struct UTgGfxSmiteTv_execUSC_GetSmiteTvTabLabels_Parms
{
};

// Function TgClient.TgGfxSmiteTv.USC_GetSmiteTvTabLabels_Delegate
// [0x00120000] 
struct UTgGfxSmiteTv_execUSC_GetSmiteTvTabLabels_Delegate_Parms
{
};

// Function TgClient.TgGfxSmiteTvLive.UpdateStreamList
// [0x00020802] ( FUNC_Event )
struct UTgGfxSmiteTvLive_eventUpdateStreamList_Parms
{
};

// Function TgClient.TgGfxSmiteTvLive.ASC_UpdateStreamList
// [0x00020003] ( FUNC_Final )
struct UTgGfxSmiteTvLive_execASC_UpdateStreamList_Parms
{
};

// Function TgClient.TgGfxSmiteTvLive.USC_GetStreamData
// [0x00020400] ( FUNC_Native )
struct UTgGfxSmiteTvLive_execUSC_GetStreamData_Parms
{
};

// Function TgClient.TgGfxSmiteTvLive.USC_GetStreamData_Delegate
// [0x00120000] 
struct UTgGfxSmiteTvLive_execUSC_GetStreamData_Delegate_Parms
{
};

// Function TgClient.TgGfxSmiteTvLive.UpdateStreams
// [0x00020400] ( FUNC_Native )
struct UTgGfxSmiteTvLive_execUpdateStreams_Parms
{
};

// Function TgClient.TgGfxSmiteTvLive.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSmiteTvLive_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSocial.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSocial_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSocial.SetSelectedAdminTab
// [0x00020802] ( FUNC_Event )
struct UTgGfxSocial_eventSetSelectedAdminTab_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSocial.ASC_SetSelectedAdminTab
// [0x00020003] ( FUNC_Final )
struct UTgGfxSocial_execASC_SetSelectedAdminTab_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSocial.UpdateSelectedTab
// [0x00020802] ( FUNC_Event )
struct UTgGfxSocial_eventUpdateSelectedTab_Parms
{
	struct FString                                     tabLabel;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxSocial.ASC_UpdateSelectedTab
// [0x00020003] ( FUNC_Final )
struct UTgGfxSocial_execASC_UpdateSelectedTab_Parms
{
	struct FString                                     tabLabel;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxSocial.UpdateClanQuestData
// [0x00020802] ( FUNC_Event )
struct UTgGfxSocial_eventUpdateClanQuestData_Parms
{
};

// Function TgClient.TgGfxSocial.ASC_UpdateClanQuestData
// [0x00020003] ( FUNC_Final )
struct UTgGfxSocial_execASC_UpdateClanQuestData_Parms
{
};

// Function TgClient.TgGfxSocial.UpdateSocialTabLabels
// [0x00020802] ( FUNC_Event )
struct UTgGfxSocial_eventUpdateSocialTabLabels_Parms
{
};

// Function TgClient.TgGfxSocial.ASC_UpdateSocialTabLabels
// [0x00020003] ( FUNC_Final )
struct UTgGfxSocial_execASC_UpdateSocialTabLabels_Parms
{
};

// Function TgClient.TgGfxSocial.USC_TabSelected
// [0x00020400] ( FUNC_Native )
struct UTgGfxSocial_execUSC_TabSelected_Parms
{
	struct FString                                     tabSelected;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxSocial.USC_TabSelected_Delegate
// [0x00120000] 
struct UTgGfxSocial_execUSC_TabSelected_Delegate_Parms
{
};

// Function TgClient.TgGfxSpectatorHud.SendGraphData
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGfxSpectatorHud_eventSendGraphData_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdatePlayerList
// [0x00020400] ( FUNC_Native )
struct UTgGfxSpectatorHud_execUSC_UpdatePlayerList_Parms
{
	class UGFxObject*                                  pPlayerList;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nLength;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdatePlayerList_Delegate
// [0x00120000] 
struct UTgGfxSpectatorHud_execUSC_UpdatePlayerList_Delegate_Parms
{
	class UGFxObject*                                  pPlayerList;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nLength;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.USC_SetMenuIsOpen
// [0x00020400] ( FUNC_Native )
struct UTgGfxSpectatorHud_execUSC_SetMenuIsOpen_Parms
{
	unsigned long                                      bOpen : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.USC_SetMenuIsOpen_Delegate
// [0x00120000] 
struct UTgGfxSpectatorHud_execUSC_SetMenuIsOpen_Delegate_Parms
{
	unsigned long                                      bOpen : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdateStat
// [0x00020400] ( FUNC_Native )
struct UTgGfxSpectatorHud_execUSC_UpdateStat_Parms
{
	int                                                pawnId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdateStat_Delegate
// [0x00120000] 
struct UTgGfxSpectatorHud_execUSC_UpdateStat_Delegate_Parms
{
	int                                                pawnId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.UpdateGraph
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGfxSpectatorHud_execUpdateGraph_Parms
{
};

// Function TgClient.TgGfxSpectatorHud.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSpectatorHud_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pParentMovie;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxStoreChest.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreChest_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxStoreChest.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreChest_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxStoreFeatures.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreFeatures_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxStoreFeatures.SetupFeatureSelector
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGfxStoreFeatures_eventSetupFeatureSelector_Parms
{
};

// Function TgClient.TgGfxStoreFeatures.ASC_UpdateDP
// [0x00020003] ( FUNC_Final )
struct UTgGfxStoreFeatures_execASC_UpdateDP_Parms
{
};

// Function TgClient.TgGfxStoreFeatures.UpdateDP
// [0x00020802] ( FUNC_Event )
struct UTgGfxStoreFeatures_eventUpdateDP_Parms
{
};

// Function TgClient.TgGfxStoreFeatures.USC_ForwardFeature
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreFeatures_execUSC_ForwardFeature_Parms
{
	int                                                pItemType;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     pItemData;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     pItemData2;                                       		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nLocationId;                                      		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxStoreFeatures.USC_ForwardFeature_Delegate
// [0x00120000] 
struct UTgGfxStoreFeatures_execUSC_ForwardFeature_Delegate_Parms
{
	int                                                pItemType;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     pItemData;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     pItemData2;                                       		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nLocationId;                                      		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxStoreFeatures.USC_Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreFeatures_execUSC_Initialize_Parms
{
};

// Function TgClient.TgGfxStoreFeatures.USC_Initialize_Delegate
// [0x00120000] 
struct UTgGfxStoreFeatures_execUSC_Initialize_Delegate_Parms
{
};

// Function TgClient.TgGFxStoreMain.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxStoreMain_execUninitialize_Parms
{
};

// Function TgClient.TgGFxStoreMain.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxStoreMain_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGFxStoreMain.USC_ChangeGameName
// [0x00020400] ( FUNC_Native )
struct UTgGFxStoreMain_execUSC_ChangeGameName_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGFxStoreMain.USC_ChangeGameName_Delegate
// [0x00120000] 
struct UTgGFxStoreMain_execUSC_ChangeGameName_Delegate_Parms
{
};

// Function TgClient.TgGFxStoreMain.USC_RedeemCode
// [0x00020400] ( FUNC_Native )
struct UTgGFxStoreMain_execUSC_RedeemCode_Parms
{
	struct FString                                     sCode;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGFxStoreMain.USC_RedeemCode_Delegate
// [0x00120000] 
struct UTgGFxStoreMain_execUSC_RedeemCode_Delegate_Parms
{
};

// Function TgClient.TgGFxStoreMain.USC_BuyGems
// [0x00020400] ( FUNC_Native )
struct UTgGFxStoreMain_execUSC_BuyGems_Parms
{
};

// Function TgClient.TgGFxStoreMain.USC_BuyGems_Delegate
// [0x00120000] 
struct UTgGFxStoreMain_execUSC_BuyGems_Delegate_Parms
{
};

// Function TgClient.TgGFxStoreMain.UpdateNameChangePrice
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxStoreMain_eventUpdateNameChangePrice_Parms
{
	int                                                nPrice;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGFxStoreMain.SetSelectedTab
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxStoreMain_eventSetSelectedTab_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxStoreViewer.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreViewer_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxStoreViewer.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreViewer_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxTrainingPage.Setup
// [0x00020802] ( FUNC_Event )
struct UTgGfxTrainingPage_eventSetup_Parms
{
};

// Function TgClient.TgGfxTrainingPage.ASC_Setup
// [0x00020003] ( FUNC_Final )
struct UTgGfxTrainingPage_execASC_Setup_Parms
{
};

// Function TgClient.TgGfxTrainingPage.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxTrainingPage_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxTrainingPage.USC_CheckTrainingComplete
// [0x00020400] ( FUNC_Native )
struct UTgGfxTrainingPage_execUSC_CheckTrainingComplete_Parms
{
};

// Function TgClient.TgGfxTrainingPage.USC_StartTraining
// [0x00020400] ( FUNC_Native )
struct UTgGfxTrainingPage_execUSC_StartTraining_Parms
{
	int                                                queueId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxTrainingPage.USC_SkipTraining
// [0x00020400] ( FUNC_Native )
struct UTgGfxTrainingPage_execUSC_SkipTraining_Parms
{
};

// Function TgClient.TgGfxTrainingPage.USC_CheckTrainingComplete_Delegate
// [0x00120000] 
struct UTgGfxTrainingPage_execUSC_CheckTrainingComplete_Delegate_Parms
{
};

// Function TgClient.TgGfxTrainingPage.USC_StartTraining_Delegate
// [0x00120000] 
struct UTgGfxTrainingPage_execUSC_StartTraining_Delegate_Parms
{
	int                                                queueId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxTrainingPage.USC_SkipTraining_Delegate
// [0x00120000] 
struct UTgGfxTrainingPage_execUSC_SkipTraining_Delegate_Parms
{
};

// Function TgClient.TgGfxTutorialManagement.DisplayPopup
// [0x00020802] ( FUNC_Event )
struct UTgGfxTutorialManagement_eventDisplayPopup_Parms
{
};

// Function TgClient.TgGfxTutorialManagement.ASC_DisplayPopup
// [0x00020003] ( FUNC_Final )
struct UTgGfxTutorialManagement_execASC_DisplayPopup_Parms
{
};

// Function TgClient.TgGfxTutorialManagement.USC_AcceptPopup
// [0x00020400] ( FUNC_Native )
struct UTgGfxTutorialManagement_execUSC_AcceptPopup_Parms
{
	unsigned long                                      bAccepted : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxTutorialManagement.USC_AcceptPopup_Delegate
// [0x00120000] 
struct UTgGfxTutorialManagement_execUSC_AcceptPopup_Delegate_Parms
{
};

// Function TgClient.TgGfxTutorialManagement.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxTutorialManagement_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxVendorStore.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStore_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxVendorStore.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStore_execUninitialize_Parms
{
};

// Function TgClient.TgGfxVendorStore.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStore_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxWisdomWeb.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxWisdomWeb_execUninitialize_Parms
{
};

// Function TgClient.TgGfxWisdomWeb.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxWisdomWeb_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxWisdomWeb.ASC_UpdateStreamList
// [0x00020003] ( FUNC_Final )
struct UTgGfxWisdomWeb_execASC_UpdateStreamList_Parms
{
};

// Function TgClient.TgGfxWisdomWeb.UpdateStreamList
// [0x00020802] ( FUNC_Event )
struct UTgGfxWisdomWeb_eventUpdateStreamList_Parms
{
};

// Function TgClient.TgGfxWisdomWeb.USC_StartStreamData
// [0x00020400] ( FUNC_Native )
struct UTgGfxWisdomWeb_execUSC_StartStreamData_Parms
{
	int                                                streamId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      external : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              X;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              widthReal;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              heightReal;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxWisdomWeb.USC_StartStreamData_Delegate
// [0x00120000] 
struct UTgGfxWisdomWeb_execUSC_StartStreamData_Delegate_Parms
{
};

// Function TgClient.TgGfxPlayerProfile.PlayerNameUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxPlayerProfile_eventPlayerNameUpdated_Parms
{
};

// Function TgClient.TgGfxPlayerProfile.ASC_PlayerNameUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxPlayerProfile_execASC_PlayerNameUpdated_Parms
{
};

// Function TgClient.TgGfxPlayerProfile.DropDownUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxPlayerProfile_eventDropDownUpdated_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayerProfile.ASC_DropDownUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxPlayerProfile_execASC_DropDownUpdated_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayerProfile.USC_TabSelected
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayerProfile_execUSC_TabSelected_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayerProfile.USC_SearchByName
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayerProfile_execUSC_SearchByName_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxPlayerProfile.USC_SetFilter
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayerProfile_execUSC_SetFilter_Parms
{
	int                                                filterIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                val;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayerProfile.USC_TabSelected_Delegate
// [0x00120000] 
struct UTgGfxPlayerProfile_execUSC_TabSelected_Delegate_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayerProfile.USC_SearchByName_Delegate
// [0x00120000] 
struct UTgGfxPlayerProfile_execUSC_SearchByName_Delegate_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxPlayerProfile.USC_SetFilter_Delegate
// [0x00120000] 
struct UTgGfxPlayerProfile_execUSC_SetFilter_Delegate_Parms
{
	int                                                filterIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                val;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayerProfile.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayerProfile_execUninitialize_Parms
{
};

// Function TgClient.TgGfxPlayerProfile.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayerProfile_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          theMovie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgMoviePlayer.usc_ClipboardCopy
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execusc_ClipboardCopy_Parms
{
	struct FString                                     Str;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ATgPlayerController*                      TgPC;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgMoviePlayer.usc_ClipboardPaste
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execusc_ClipboardPaste_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// class ATgPlayerController*                      TgPC;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgMoviePlayer.Init
// [0x00024802] ( FUNC_Event )
struct UTgMoviePlayer_eventInit_Parms
{
	class ULocalPlayer*                                LocPlay;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgMoviePlayer.PostWidgetInit
// [0x00020800] ( FUNC_Event )
struct UTgMoviePlayer_eventPostWidgetInit_Parms
{
};

// Function TgClient.TgMoviePlayer.Tick
// [0x00020802] ( FUNC_Event )
struct UTgMoviePlayer_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgMoviePlayer.usc_IME_Exists
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_IME_Exists_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgMoviePlayer.usc_IME_SetEnabled
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_IME_SetEnabled_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgMoviePlayer.usc_getFontSize
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_getFontSize_Parms
{
	struct FString                                     Identifier;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SectionName;                                      		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgMoviePlayer.usc_TranslateMsg
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_TranslateMsg_Parms
{
	struct FString                                     Identifier;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SectionName;                                      		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgMoviePlayer.usc_TranslateMsgId
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_TranslateMsgId_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgMoviePlayer.ShowTransitionScene
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execShowTransitionScene_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgMoviePlayer.usc_playInputLightingEffect
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_playInputLightingEffect_Parms
{
	struct FString                                     PresetName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgMoviePlayer.usc_toggle_key_capture
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_toggle_key_capture_Parms
{
	unsigned long                                      bCapture : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgMoviePlayer.usc_toggle_cursor
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_toggle_cursor_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgMoviePlayer.usc_quit
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_quit_Parms
{
};

// Function TgClient.TgMoviePlayer.usc_Console_Command
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_Console_Command_Parms
{
	struct FString                                     Cmd;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgMoviePlayer.usc_Scene_Manager_Created
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_Scene_Manager_Created_Parms
{
};

// Function TgClient.TgMoviePlayer.usc_Data_Handler_Created
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_Data_Handler_Created_Parms
{
};

// Function TgClient.TgMoviePlayer.UnregisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execUnregisterEngineCallbacks_Parms
{
};

// Function TgClient.TgMoviePlayer.RegisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execRegisterEngineCallbacks_Parms
{
};

// Function TgClient.TgMoviePlayer.GetTranslatedSpecKeyBind
// [0x00024400] ( FUNC_Native )
struct UTgMoviePlayer_execGetTranslatedSpecKeyBind_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nAlternate;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgMoviePlayer.GetTranslatedKeyBind
// [0x00024400] ( FUNC_Native )
struct UTgMoviePlayer_execGetTranslatedKeyBind_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nAlternate;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgMoviePlayer.OnMarshalEvent
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execOnMarshalEvent_Parms
{
	struct FPointer                                    pMarEvent;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgMoviePlayer.UnregisterMarshalCallback
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execUnregisterMarshalCallback_Parms
{
};

// Function TgClient.TgMoviePlayer.RegisterMarshalCallback
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execRegisterMarshalCallback_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgMoviePlayer.NativeTick
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execNativeTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgMoviePlayer.OnClose
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UTgMoviePlayer_eventOnClose_Parms
{
};

// Function TgClient.TgMoviePlayer.PostInit
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execPostInit_Parms
{
};

// Function TgClient.TgMoviePlayer.InitializeSceneManager
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execInitializeSceneManager_Parms
{
};

// Function TgClient.TgMoviePlayer.InitializeDataHandler
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execInitializeDataHandler_Parms
{
};

// Function TgClient.TgMoviePlayer.GetHUD
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execGetHUD_Parms
{
	class ATgClientHUD*                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgMoviePlayer.GetPlayerOwner
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execGetPlayerOwner_Parms
{
	class ATgPlayerController*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgMoviePlayer.DelegateOnMarshalEvent
// [0x00120000] 
struct UTgMoviePlayer_execDelegateOnMarshalEvent_Parms
{
	struct FPointer                                    pMarEvent;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgObjectBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgObjectBase_execUninitialize_Parms
{
};

// Function TgClient.TgObjectBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgObjectBase_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pMoviePlayer;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgRewardCenterManager.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgRewardCenterManager_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pMoviePlayer;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSystemNotificationManager.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgSystemNotificationManager_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pMoviePlayer;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgPagePopup.FillPopupData
// [0x00020400] ( FUNC_Native )
struct UTgPagePopup_execFillPopupData_Parms
{
	class UGFxObject*                                  popupData;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgPopupManager.ClosePopup
// [0x00020400] ( FUNC_Native )
struct UTgPopupManager_execClosePopup_Parms
{
};

// Function TgClient.TgSceneManager.ShowCharacterCard
// [0x00020400] ( FUNC_Native )
struct UTgSceneManager_execShowCharacterCard_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSceneManager.PopKeyCapture
// [0x00020400] ( FUNC_Native )
struct UTgSceneManager_execPopKeyCapture_Parms
{
};

// Function TgClient.TgSceneManager.PushKeyCapture
// [0x00020400] ( FUNC_Native )
struct UTgSceneManager_execPushKeyCapture_Parms
{
};

// Function TgClient.TgSceneManager.PopMouseCapture
// [0x00020400] ( FUNC_Native )
struct UTgSceneManager_execPopMouseCapture_Parms
{
};

// Function TgClient.TgSceneManager.PushMouseCapture
// [0x00020400] ( FUNC_Native )
struct UTgSceneManager_execPushMouseCapture_Parms
{
};

// Function TgClient.TgSceneManager.IsSceneLoaded
// [0x00020400] ( FUNC_Native )
struct UTgSceneManager_execIsSceneLoaded_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgSceneManager.ListOpenScenes
// [0x00020400] ( FUNC_Native )
struct UTgSceneManager_execListOpenScenes_Parms
{
};

// Function TgClient.TgSceneManager.UnloadAllScenes
// [0x00024400] ( FUNC_Native )
struct UTgSceneManager_execUnloadAllScenes_Parms
{
	TArray< struct FString >                           exclusionList;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bKill : 1;                                        		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgSceneManager.ToggleScene
// [0x00020400] ( FUNC_Native )
struct UTgSceneManager_execToggleScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgSceneManager.UnloadScene
// [0x00020400] ( FUNC_Native )
struct UTgSceneManager_execUnloadScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgSceneManager.LoadScene
// [0x00020400] ( FUNC_Native )
struct UTgSceneManager_execLoadScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgSceneManager.KillScene
// [0x00020400] ( FUNC_Native )
struct UTgSceneManager_execKillScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgSceneManager.InitializeSceneManager
// [0x00020400] ( FUNC_Native )
struct UTgSceneManager_execInitializeSceneManager_Parms
{
};

// Function TgClient.TgStreamManager.GetFeatureDescription
// [0x00024002] 
struct UTgStreamManager_execGetFeatureDescription_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgStreamManager.GetFeatureName
// [0x00024002] 
struct UTgStreamManager_execGetFeatureName_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgStreamManager.HaveFeature
// [0x00020002] 
struct UTgStreamManager_execHaveFeature_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgStreamManager.IsLiveAtIndex
// [0x00020002] 
struct UTgStreamManager_execIsLiveAtIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgStreamManager.GetDescriptionAtIndex
// [0x00020002] 
struct UTgStreamManager_execGetDescriptionAtIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  Desc;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClient.TgStreamManager.GetViewersAtIndex
// [0x00020002] 
struct UTgStreamManager_execGetViewersAtIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgStreamManager.GetTitleAtIndex
// [0x00020002] 
struct UTgStreamManager_execGetTitleAtIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgStreamManager.IsStream
// [0x00020002] 
struct UTgStreamManager_execIsStream_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgStreamManager.GetTypeCountWatching
// [0x00020002] 
struct UTgStreamManager_execGetTypeCountWatching_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Count;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgStreamManager.GetTypeCount
// [0x00020002] 
struct UTgStreamManager_execGetTypeCount_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Count;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgStreamManager.LiveSort
// [0x00120002] 
struct UTgStreamManager_execLiveSort_Parms
{
	struct FGameStream                                 A;                                                		// 0x0000 (0x0044) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FGameStream                                 B;                                                		// 0x0044 (0x0044) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0088 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgStreamManager.FeaturedSort
// [0x00120002] 
struct UTgStreamManager_execFeaturedSort_Parms
{
	struct FGameStream                                 A;                                                		// 0x0000 (0x0044) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FGameStream                                 B;                                                		// 0x0044 (0x0044) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0088 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgStreamManager.ViewerSort
// [0x00120002] 
struct UTgStreamManager_execViewerSort_Parms
{
	struct FGameStream                                 A;                                                		// 0x0000 (0x0044) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FGameStream                                 B;                                                		// 0x0044 (0x0044) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0088 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgStreamManager.ResolveChannelName
// [0x00020802] ( FUNC_Event )
struct UTgStreamManager_eventResolveChannelName_Parms
{
	struct FString                                     sChannel;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgStreamManager.CompleteUpdate
// [0x00020802] ( FUNC_Event )
struct UTgStreamManager_eventCompleteUpdate_Parms
{
};

// Function TgClient.TgStreamManager.ViewStreamIndex
// [0x00024802] ( FUNC_Event )
struct UTgStreamManager_eventViewStreamIndex_Parms
{
	int                                                surfaceId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      external : 1;                                     		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              X;                                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Y;                                                		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Width;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Height;                                           		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              widthReal;                                        		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              heightReal;                                       		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      joinChat : 1;                                     		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  watch_end;                                        		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClient.TgStreamManager.UpdateStreams
// [0x00020400] ( FUNC_Native )
struct UTgStreamManager_execUpdateStreams_Parms
{
};

// Function TgClient.TgStreamManager.HasSpecialStreams
// [0x00020400] ( FUNC_Native )
struct UTgStreamManager_execHasSpecialStreams_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgStreamManager.OpenPlayerStream
// [0x00020400] ( FUNC_Native )
struct UTgStreamManager_execOpenPlayerStream_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      external : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              X;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              widthReal;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              heightReal;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgStreamManager.OpenStream
// [0x00024400] ( FUNC_Native )
struct UTgStreamManager_execOpenStream_Parms
{
	int                                                surfaceId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     URL;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      external : 1;                                     		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              X;                                                		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              widthReal;                                        		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              heightReal;                                       		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      joinChat : 1;                                     		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgStreamManager.LoadStreams
// [0x00020400] ( FUNC_Native )
struct UTgStreamManager_execLoadStreams_Parms
{
};

// Function TgClient.TgSynchronizedTimer.IsPaused
// [0x00020400] ( FUNC_Native )
struct UTgSynchronizedTimer_execIsPaused_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgSynchronizedTimer.IsRunning
// [0x00020400] ( FUNC_Native )
struct UTgSynchronizedTimer_execIsRunning_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgSynchronizedTimer.EventCallback
// [0x00020400] ( FUNC_Native )
struct UTgSynchronizedTimer_execEventCallback_Parms
{
	int                                                nTimerId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eEvent;                                           		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSynchronizedTimer.ExpireTimer
// [0x00024400] ( FUNC_Native )
struct UTgSynchronizedTimer_execExpireTimer_Parms
{
	unsigned long                                      bFromCallback : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgSynchronizedTimer.UpdateTimer
// [0x00024400] ( FUNC_Native )
struct UTgSynchronizedTimer_execUpdateTimer_Parms
{
	float                                              fElapsed;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTotal;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPaused : 1;                                      		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFromCallback : 1;                                		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgSynchronizedTimer.StartTimer
// [0x00020400] ( FUNC_Native )
struct UTgSynchronizedTimer_execStartTimer_Parms
{
	float                                              fSeconds;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgBlinder.Draw
// [0x00020400] ( FUNC_Native )
struct UTgBlinder_execDraw_Parms
{
	class UCanvas*                                     DestinationCanvas;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlindnessFactor;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.PlayDeviceFailResponse
// [0x00020002] 
struct ATgGameHUD_execPlayDeviceFailResponse_Parms
{
	unsigned char                                      failType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.ShowGodTargeter
// [0x00020002] 
struct ATgGameHUD_execShowGodTargeter_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameHUD.ShowTargetingMap
// [0x00020002] 
struct ATgGameHUD_execShowTargetingMap_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameHUD.GetGameState
// [0x00020802] ( FUNC_Event )
struct ATgGameHUD_eventGetGameState_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   GameType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
};

// Function TgClient.TgGameHUD.HoverMap
// [0x00020202] ( FUNC_Exec )
struct ATgGameHUD_execHoverMap_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     MapName;                                          		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UTgMiniMap*                               Minimap;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGameHUD.PingMap
// [0x00820202] ( FUNC_Exec )
struct ATgGameHUD_execPingMap_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Type;                                             		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// unsigned long                                   bHandled : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  WorldLoc;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  mapLoc;                                           		// 0x0030 (0x000C) [0x0000000000000000]              
	// unsigned char                                   Pt;                                               		// 0x003C (0x0001) [0x0000000000000000]              
	// TArray< class AReplicationInfo* >               repInfos;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UTgMiniMap*                               Minimap;                                          		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGameHUD.GetMapByName
// [0x00020002] 
struct ATgGameHUD_execGetMapByName_Parms
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTgMiniMap*                                  ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameHUD.UpdateMMTimer
// [0x00020202] ( FUNC_Exec )
struct ATgGameHUD_execUpdateMMTimer_Parms
{
	float                                              fNew;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.ToggleOverlay
// [0x00020202] ( FUNC_Exec )
struct ATgGameHUD_execToggleOverlay_Parms
{
};

// Function TgClient.TgGameHUD.ToggleMiniMap
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct ATgGameHUD_execToggleMiniMap_Parms
{
};

// Function TgClient.TgGameHUD.HideMiniMap
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
struct ATgGameHUD_execHideMiniMap_Parms
{
};

// Function TgClient.TgGameHUD.ShowMiniMap
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
struct ATgGameHUD_execShowMiniMap_Parms
{
};

// Function TgClient.TgGameHUD.UpdateMiniMap
// [0x00020102] 
struct ATgGameHUD_execUpdateMiniMap_Parms
{
};

// Function TgClient.TgGameHUD.DrawMiniMap
// [0x00020102] 
struct ATgGameHUD_execDrawMiniMap_Parms
{
	class UCanvas*                                     theCanvas;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.PreDemoRewind
// [0x00020902] ( FUNC_Event )
struct ATgGameHUD_eventPreDemoRewind_Parms
{
};

// Function TgClient.TgGameHUD.PostRender
// [0x00020802] ( FUNC_Event )
struct ATgGameHUD_eventPostRender_Parms
{
};

// Function TgClient.TgGameHUD.InitCapturePoints
// [0x00020002] 
struct ATgGameHUD_execInitCapturePoints_Parms
{
};

// Function TgClient.TgGameHUD.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ATgGameHUD_eventSetInitialState_Parms
{
};

// Function TgClient.TgGameHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATgGameHUD_eventPostBeginPlay_Parms
{
};

// Function TgClient.TgGameHUD.TogglePassiveMeter
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execTogglePassiveMeter_Parms
{
};

// Function TgClient.TgGameHUD.ToggleHudSection
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execToggleHudSection_Parms
{
	struct FString                                     SectionName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameHUD.ToggleHUD
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execToggleHUD_Parms
{
};

// Function TgClient.TgGameHUD.NotifyInGame
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execNotifyInGame_Parms
{
};

// Function TgClient.TgGameHUD.GetVisibilityMode
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execGetVisibilityMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameHUD.OnMarshalEvent
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execOnMarshalEvent_Parms
{
	struct FPointer                                    pMarEvent;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.HideFinalEOMScene
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execHideFinalEOMScene_Parms
{
};

// Function TgClient.TgGameHUD.HideEOMScene
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execHideEOMScene_Parms
{
};

// Function TgClient.TgGameHUD.FinishIntro
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execFinishIntro_Parms
{
};

// Function TgClient.TgGameHUD.PlayIntro
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execPlayIntro_Parms
{
};

// Function TgClient.TgGameHUD.ToggleViewSkipCinematic
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execToggleViewSkipCinematic_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameHUD.HideGameTip
// [0x00024400] ( FUNC_Native )
struct ATgGameHUD_execHideGameTip_Parms
{
	unsigned long                                      bNoSound : 1;                                     		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameHUD.ShowGameTip
// [0x00024400] ( FUNC_Native )
struct ATgGameHUD_execShowGameTip_Parms
{
	int                                                nTipId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bNoSound : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPopup : 1;                                       		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameHUD.PingWorldLocation
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execPingWorldLocation_Parms
{
	struct FVector                                     PingLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Type;                                             		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.PrecacheClass
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execPrecacheClass_Parms
{
	struct FString                                     godName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     skinName;                                         		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameHUD.TestPrecache
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execTestPrecache_Parms
{
	int                                                nBotId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAll : 1;                                         		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameHUD.TestEquipLobbyPassiveItems
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execTestEquipLobbyPassiveItems_Parms
{
	int                                                nItemId1;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nItemId2;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.TestEquipLobbyActiveItems
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execTestEquipLobbyActiveItems_Parms
{
	int                                                nItemId1;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nItemId2;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.EndMission
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execEndMission_Parms
{
	unsigned long                                      bPlayerAttacker : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      finalWinState;                                    		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.UpdateItemStoreItems
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateItemStoreItems_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameHUD.UpdateScoreboard
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateScoreboard_Parms
{
};

// Function TgClient.TgGameHUD.ToggleScoreBoard
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execToggleScoreBoard_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameHUD.PlayTakeHit
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execPlayTakeHit_Parms
{
	struct FRotator                                    HitDir;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                nDamage;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.SellItem
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execSellItem_Parms
{
	int                                                nInventoryId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.UpgradeItem
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpgradeItem_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nUpgradeInvId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.PurchaseItem
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execPurchaseItem_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nAmount;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.OpenSkillScreen
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execOpenSkillScreen_Parms
{
};

// Function TgClient.TgGameHUD.OpenVendorMenu
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execOpenVendorMenu_Parms
{
};

// Function TgClient.TgGameHUD.DeviceChangeEvent
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execDeviceChangeEvent_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.UpdateReleaseTimeRemaining
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateReleaseTimeRemaining_Parms
{
	float                                              fTimeRemaining;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.UpdatePlayerReady
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdatePlayerReady_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.UpdatePlayerStatUI
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdatePlayerStatUI_Parms
{
	class ATgPawn*                                     changedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameHUD.UpdateTeamUI
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateTeamUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameHUD.UpdatePlayerVitalsUI
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdatePlayerVitalsUI_Parms
{
	class ATgPlayerController*                         PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameHUD.UpdatePlayerSurrender
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdatePlayerSurrender_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameHUD.UpdatePlayerInfoUI
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdatePlayerInfoUI_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameHUD.UpdateGameCapturePointControlUI
// [0x00024400] ( FUNC_Native )
struct ATgGameHUD_execUpdateGameCapturePointControlUI_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameHUD.UpdateGameSiegeUI
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateGameSiegeUI_Parms
{
	TArray< float >                                    friendlyHealth;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< float >                                    enemyHealth;                                      		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameHUD.UpdateGameScoreUI
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateGameScoreUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameHUD.UpdateGameClockUI
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateGameClockUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameHUD.UpdateBuildupTimer
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateBuildupTimer_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.UpdateRefireTimer
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateRefireTimer_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUD.UpdateHoverTarget
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateHoverTarget_Parms
{
};

// Function TgClient.TgGameHUD.UpdateDebugDraws
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateDebugDraws_Parms
{
};

// Function TgClient.TgGameHUD.UpdateOverlay
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateOverlay_Parms
{
};

// Function TgClient.TgGameHUD.UpdateGammaControls
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateGammaControls_Parms
{
};

// Function TgClient.TgGameHUD.InitOverlayMoviePlayer
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execInitOverlayMoviePlayer_Parms
{
};

// Function TgClient.TgGameHUD.RegisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execRegisterEngineCallbacks_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleHUD
// [0x00020202] ( FUNC_Exec )
struct ATgSpectatorHUD_execToggleHUD_Parms
{
};

// Function TgClient.TgSpectatorHUD.Tick
// [0x00020802] ( FUNC_Event )
struct ATgSpectatorHUD_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   ViewTarget;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgSpectatorHUD.GetGameState
// [0x00020802] ( FUNC_Event )
struct ATgSpectatorHUD_eventGetGameState_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgSpectatorHUD.SetVisibilityMode
// [0x00020202] ( FUNC_Exec )
struct ATgSpectatorHUD_execSetVisibilityMode_Parms
{
	unsigned char                                      Mode;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATgRepInfo_Player*                        PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgSpectatorHUD.ToggleVisibilityMode
// [0x00020202] ( FUNC_Exec )
struct ATgSpectatorHUD_execToggleVisibilityMode_Parms
{
	// unsigned char                                   Mode;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function TgClient.TgSpectatorHUD.ShowPreviousInfoPanel
// [0x00020002] 
struct ATgSpectatorHUD_execShowPreviousInfoPanel_Parms
{
};

// Function TgClient.TgSpectatorHUD.ShowNextInfoPanel
// [0x00020002] 
struct ATgSpectatorHUD_execShowNextInfoPanel_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleStatPanel
// [0x00020002] 
struct ATgSpectatorHUD_execToggleStatPanel_Parms
{
};

// Function TgClient.TgSpectatorHUD.ShowPreviousStatPanel
// [0x00020002] 
struct ATgSpectatorHUD_execShowPreviousStatPanel_Parms
{
};

// Function TgClient.TgSpectatorHUD.ShowNextStatPanel
// [0x00020002] 
struct ATgSpectatorHUD_execShowNextStatPanel_Parms
{
};

// Function TgClient.TgSpectatorHUD.UpdatePlayerStatUI
// [0x00020400] ( FUNC_Native )
struct ATgSpectatorHUD_execUpdatePlayerStatUI_Parms
{
	class ATgPawn*                                     changedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgSpectatorHUD.SetStatIndex
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execSetStatIndex_Parms
{
	int                                                StatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSpectatorHUD.SpectatorShowAll
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execSpectatorShowAll_Parms
{
};

// Function TgClient.TgSpectatorHUD.SpectatorHideBottomHalf
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execSpectatorHideBottomHalf_Parms
{
};

// Function TgClient.TgSpectatorHUD.SpectatorHideAll
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execSpectatorHideAll_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorGameStats
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorGameStats_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorMinimap
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorMinimap_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorPlayerPanels
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorPlayerPanels_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorObjectives
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorObjectives_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorTimeline
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorTimeline_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSecretMessage
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSecretMessage_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorControls
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorControls_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorPlayerInformation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorPlayerInformation_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorTicker
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorTicker_Parms
{
};

// Function TgClient.TgSpectatorHUD.SetSpectatorMode
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execSetSpectatorMode_Parms
{
	int                                                nNum;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSpectatorHUD.ToggleBans
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleBans_Parms
{
};

// Function TgClient.TgSpectatorHUD.EndMission
// [0x00020400] ( FUNC_Native )
struct ATgSpectatorHUD_execEndMission_Parms
{
	unsigned long                                      bPlayerAttacker : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      finalWinState;                                    		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSpectatorHUD.UpdateSpectatorViewMode
// [0x00020400] ( FUNC_Native )
struct ATgSpectatorHUD_execUpdateSpectatorViewMode_Parms
{
	unsigned char                                      Mode;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSpectatorHUD.UpdateSpectatorViewTarget
// [0x00020400] ( FUNC_Native )
struct ATgSpectatorHUD_execUpdateSpectatorViewTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSpectatorHUD.GetVisibilityMode
// [0x00020400] ( FUNC_Native )
struct ATgSpectatorHUD_execGetVisibilityMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgDataGroup_Game.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Game_execNotifyMapChange_Parms
{
};

// Function TgClient.TgDataGroup_Game.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Game_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Chat.TokenReplace
// [0x00020802] ( FUNC_Event )
struct UTgGameDC_Chat_eventTokenReplace_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Token;                                            		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sValue;                                           		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0024 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameDC_Chat.SubmitDeferredMessages
// [0x00024400] ( FUNC_Native )
struct UTgGameDC_Chat_execSubmitDeferredMessages_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameDC_Chat.PlayVGSSound
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Chat_execPlayVGSSound_Parms
{
	int                                                nMsgId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPackId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nBotId;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     customSuffix;                                     		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameDC_Chat.PlayMessageSound
// [0x00024400] ( FUNC_Native )
struct UTgGameDC_Chat_execPlayMessageSound_Parms
{
	int                                                nMsgId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPackId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ePriority;                                        		// 0x0008 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameDC_Chat.AddDeferredMessage
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Chat_execAddDeferredMessage_Parms
{
	class UTgChatData*                                 pData;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Chat.AddNotifyMsg
// [0x00024400] ( FUNC_Native )
struct UTgGameDC_Chat_execAddNotifyMsg_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsMain : 1;                                      		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                nDelay;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nColor;                                           		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nSize;                                            		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nFill;                                            		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameDC_Chat.AddAlert
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Chat_execAddAlert_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameDC_Chat.UpdateMessageSoundQueue
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Chat_execUpdateMessageSoundQueue_Parms
{
};

// Function TgClient.TgGameDC_Chat.Update
// [0x00024400] ( FUNC_Native )
struct UTgGameDC_Chat_execUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSkipCallback : 1;                                		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameDC_Chat.AddPopupMsg
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Chat_execAddPopupMsg_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameDC_Chat.AddCombatMsg
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Chat_execAddCombatMsg_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameDC_Chat.AddLocalChatMsg
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Chat_execAddLocalChatMsg_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     senderName;                                       		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameDC_Chat.AddChatMsg
// [0x00024400] ( FUNC_Native )
struct UTgGameDC_Chat_execAddChatMsg_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     senderName;                                       		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nTime;                                            		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nChannel;                                         		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsFeedback : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bIsVGS : 1;                                       		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOnlyIfOpen : 1;                                  		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bHideSender : 1;                                  		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bNew : 1;                                         		// 0x0030 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameDC_Chat.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Chat_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Device.usc_set_cast_mode
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execusc_set_cast_mode_Parms
{
	int                                                nCastMode;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Device.usc_set_cast_mode_delegate
// [0x00120000] 
struct UTgGameDC_Device_execusc_set_cast_mode_delegate_Parms
{
};

// Function TgClient.TgGameDC_Device.usc_get_mode_tooltip
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execusc_get_mode_tooltip_Parms
{
	int                                                nRank;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Device.usc_get_mode_tooltip_delegate
// [0x00120000] 
struct UTgGameDC_Device_execusc_get_mode_tooltip_delegate_Parms
{
};

// Function TgClient.TgGameDC_Device.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execNotifyMapChange_Parms
{
};

// Function TgClient.TgGameDC_Device.UpdateCastMode
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateCastMode_Parms
{
};

// Function TgClient.TgGameDC_Device.UpdateInstanceCount
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateInstanceCount_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Device.UpdateHasBeenTrained
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateHasBeenTrained_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Device.UpdatePtsAlloc
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdatePtsAlloc_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Device.UpdateToggleState
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateToggleState_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Device.UpdateCooldown
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateCooldown_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Device.UpdateCanFire
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateCanFire_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Device.UpdateSelected
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateSelected_Parms
{
	unsigned long                                      bSelected : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameDC_Device.UpdateRelicValues
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateRelicValues_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Device.UpdateValues
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateValues_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Device.DeviceChangeEvent
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execDeviceChangeEvent_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Device.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_DeviceList.SetEmpty
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execSetEmpty_Parms
{
	unsigned char                                      eSlot;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_DeviceList.UpdatePtsAlloc
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execUpdatePtsAlloc_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_DeviceList.UpdateToggleState
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execUpdateToggleState_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_DeviceList.UpdateSelected
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execUpdateSelected_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_DeviceList.UpdateDevice
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execUpdateDevice_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_DeviceList.DeviceChangeEvent
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execDeviceChangeEvent_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_DeviceList.GetDeviceChunk
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execGetDeviceChunk_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgGameDC_Device*                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameDC_DeviceList.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Effect.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Effect_execNotifyMapChange_Parms
{
};

// Function TgClient.TgGameDC_Effect.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Effect_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_EffectList.UpdateEffects
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_EffectList_execUpdateEffects_Parms
{
	class ATgEffectManager*                            effectManager;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                indexChanged;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_EffectList.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_EffectList_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Game.UpdateRound
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execUpdateRound_Parms
{
	int                                                nRound;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Game.UpdateEncounter
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execUpdateEncounter_Parms
{
	struct FString                                     sRoundString;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameDC_Game.UpdateGameCapturePoint
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execUpdateGameCapturePoint_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                taskforce;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Game.UpdateGameClock
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execUpdateGameClock_Parms
{
};

// Function TgClient.TgGameDC_Game.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execNotifyMapChange_Parms
{
};

// Function TgClient.TgGameDC_Game.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_MapEntity.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_MapEntity_execNotifyMapChange_Parms
{
};

// Function TgClient.TgGameDC_MapEntity.UpdateMapPosition
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_MapEntity_execUpdateMapPosition_Parms
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_MapEntity.UpdateActorMapPosition
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_MapEntity_execUpdateActorMapPosition_Parms
{
	class AActor*                                      gameActor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_MapEntity.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_MapEntity_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Player.USC_ForceStatsUpdate
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Player_execUSC_ForceStatsUpdate_Parms
{
};

// Function TgClient.TgGameDC_Player.USC_ForceStatsUpdate_Delegate
// [0x00120000] 
struct UTgGameDC_Player_execUSC_ForceStatsUpdate_Delegate_Parms
{
};

// Function TgClient.TgGameDC_Player.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Player_execNotifyMapChange_Parms
{
};

// Function TgClient.TgGameDC_Player.UpdateItemStoreItems
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Player_execUpdateItemStoreItems_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Player.UpdateStats
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Player_execUpdateStats_Parms
{
	class ATgPawn*                                     changedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Player.UpdatePlayer
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Player_execUpdatePlayer_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Player.SetDirty
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Player_execSetDirty_Parms
{
};

// Function TgClient.TgGameDC_Player.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Player_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_LocalPlayer.UpdateCourierData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_LocalPlayer_execUpdateCourierData_Parms
{
	class ATgPawn*                                     Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_LocalPlayer.UpdateSpectatorViewTarget
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_LocalPlayer_execUpdateSpectatorViewTarget_Parms
{
	class UTgGameDC_MapEntity*                         entity;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_LocalPlayer.SetVendorItemList
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_LocalPlayer_execSetVendorItemList_Parms
{
	TArray< int >                                      nItemIds;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameDC_LocalPlayer.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_LocalPlayer_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_PlayerVitals.UpdateCoreStats
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_PlayerVitals_execUpdateCoreStats_Parms
{
};

// Function TgClient.TgGameDC_PlayerVitals.UpdateDamageDone
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_PlayerVitals_execUpdateDamageDone_Parms
{
};

// Function TgClient.TgGameDC_PlayerVitals.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_PlayerVitals_execNotifyMapChange_Parms
{
};

// Function TgClient.TgGameDC_PlayerVitals.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_PlayerVitals_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Tower.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Tower_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Target.UpdateTarget
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Target_execUpdateTarget_Parms
{
	class AActor*                                      NewTarget;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bHovered : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameDC_Target.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Target_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Team.UpdateMembersTick
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Team_execUpdateMembersTick_Parms
{
};

// Function TgClient.TgGameDC_Team.UpdatePlayerSurrender
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Team_execUpdatePlayerSurrender_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameDC_Team.UpdatePlayerItemStoreItems
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Team_execUpdatePlayerItemStoreItems_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameDC_Team.UpdatePlayerStat
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Team_execUpdatePlayerStat_Parms
{
	class ATgPawn*                                     changedPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Team.UpdateMembers
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Team_execUpdateMembers_Parms
{
	class ATgRepInfo_TaskForce*                        tfri;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDC_Team.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Team_execNotifyMapChange_Parms
{
};

// Function TgClient.TgGameDC_Team.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Team_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameDataHandler.InitializeDataHandler
// [0x00020400] ( FUNC_Native )
struct UTgGameDataHandler_execInitializeDataHandler_Parms
{
	class UTgMoviePlayer*                              mp;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameHUDOverlay.ForceRebuildOverlays
// [0x00020400] ( FUNC_Native )
struct UTgGameHUDOverlay_execForceRebuildOverlays_Parms
{
};

// Function TgClient.TgGfxChatInput.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxChatInput_execUninitialize_Parms
{
};

// Function TgClient.TgGfxChatInput.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxChatInput_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pMP;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxChatInput.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxChatInput_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudChat.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudChat_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pMP;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudChat.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudChat_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxVGS.usc_ForceInput
// [0x00020400] ( FUNC_Native )
struct UTgGfxVGS_execusc_ForceInput_Parms
{
	struct FString                                     Input;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxVGS.usc_ForceInput_Delegate
// [0x00120000] 
struct UTgGfxVGS_execusc_ForceInput_Delegate_Parms
{
};

// Function TgClient.TgGfxVGS.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxVGS_execInitialize_Parms
{
	class UTgGameMoviePlayer*                          pMP;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxVGS.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxVGS_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgMiniMap.CheckSpectatorState
// [0x00020902] ( FUNC_Event )
struct UTgMiniMap_eventCheckSpectatorState_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATgSpectatorController*                   SpectatorController;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgMiniMap.UpdateMapSize
// [0x00020102] 
struct UTgMiniMap_execUpdateMapSize_Parms
{
	int                                                newX;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgMiniMap.UpdateMiniMapTexture
// [0x00020102] 
struct UTgMiniMap_execUpdateMiniMapTexture_Parms
{
	// class UTexture2D*                               mmTexture;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgMiniMap.CreateMiniMapTexture
// [0x00020102] 
struct UTgMiniMap_execCreateMiniMapTexture_Parms
{
};

// Function TgClient.TgMiniMap.RemoveAllEntities
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execRemoveAllEntities_Parms
{
};

// Function TgClient.TgMiniMap.VerifyMapLocation
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execVerifyMapLocation_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgMiniMap.GetRepInfosForLocation
// [0x00420400] ( FUNC_Native )
struct UTgMiniMap_execGetRepInfosForLocation_Parms
{
	struct FVector                                     mapLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	TArray< class AReplicationInfo* >                  repInfos;                                         		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClient.TgMiniMap.WorldToMap
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execWorldToMap_Parms
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgMiniMap.MapToWorld
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execMapToWorld_Parms
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgMiniMap.ClearHover
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execClearHover_Parms
{
};

// Function TgClient.TgMiniMap.HoverMap
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execHoverMap_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgMiniMap.PingMap
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execPingMap_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Pt;                                               		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgMiniMap.ShouldRender
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execShouldRender_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgMiniMap.PingWorldLocation
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execPingWorldLocation_Parms
{
	struct FVector                                     PingLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Pt;                                               		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgMiniMap.Init
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execInit_Parms
{
	class ATgPlayerController*                         PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgMiniMap.Draw
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execDraw_Parms
{
	class UCanvas*                                     theCanvas;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgMiniMap.Update
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execUpdate_Parms
{
};

// Function TgClient.TgGameMoviePlayer.DelegateGFxList
// [0x00120000] 
struct UTgGameMoviePlayer_execDelegateGFxList_Parms
{
	class UGFxObject*                                  List;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.CacheLoggedInGamepad
// [0x00020802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventCacheLoggedInGamepad_Parms
{
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGameMoviePlayer.ShowConsoleLoginUI
// [0x00024802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventShowConsoleLoginUI_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceLoginAfter : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGameMoviePlayer.ToggleAlienFX
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execToggleAlienFX_Parms
{
	// class ATgPlayerController*                      TgPC;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGameMoviePlayer.usc_get_gamestate
// [0x00020002] 
struct UTgGameMoviePlayer_execusc_get_gamestate_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_activate_key
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execusc_activate_key_Parms
{
};

// Function TgClient.TgGameMoviePlayer.SetUISetting
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execSetUISetting_Parms
{
	struct FString                                     Setting;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_minimap_hovered
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execusc_minimap_hovered_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     MapName;                                          		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ATgGameHUD*                               HUD;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGameMoviePlayer.usc_minimap_pinged
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execusc_minimap_pinged_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Type;                                             		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ATgGameHUD*                               HUD;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGameMoviePlayer.FlashCaptureKeyboard
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execFlashCaptureKeyboard_Parms
{
};

// Function TgClient.TgGameMoviePlayer.FlashReleaseKeyboard
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execFlashReleaseKeyboard_Parms
{
};

// Function TgClient.TgGameMoviePlayer.FlashCaptureMouse
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execFlashCaptureMouse_Parms
{
};

// Function TgClient.TgGameMoviePlayer.FlashReleaseMouse
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execFlashReleaseMouse_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_rotate_lobby_model
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execusc_rotate_lobby_model_Parms
{
	float                                              fValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATgLobbyHUD*                              lobby;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGameMoviePlayer.ListOpenScenes
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execListOpenScenes_Parms
{
};

// Function TgClient.TgGameMoviePlayer.EnableItemWarningPopup
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execEnableItemWarningPopup_Parms
{
};

// Function TgClient.TgGameMoviePlayer.DisableItemWarningPopup
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execDisableItemWarningPopup_Parms
{
};

// Function TgClient.TgGameMoviePlayer.CloseAllScenes
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execCloseAllScenes_Parms
{
	// TArray< struct FString >                        exclusion;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.ClosePartyInviteDialog
// [0x00020802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventClosePartyInviteDialog_Parms
{
};

// Function TgClient.TgGameMoviePlayer.CheckSpecialInput
// [0x00020002] 
struct UTgGameMoviePlayer_execCheckSpecialInput_Parms
{
	class ATgPlayerController*                         TgPC;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.DisplayLoginUI
// [0x00020802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventDisplayLoginUI_Parms
{
};

// Function TgClient.TgGameMoviePlayer.DisplayNormalUI
// [0x00020802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventDisplayNormalUI_Parms
{
};

// Function TgClient.TgGameMoviePlayer.DisplayNewUserExperience
// [0x00020802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventDisplayNewUserExperience_Parms
{
};

// Function TgClient.TgGameMoviePlayer.ShouldBlockKey
// [0x00020802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventShouldBlockKey_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATgPlayerController*                      TgPC;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UTgPlayerInput*                           tgpi;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGameMoviePlayer.FilterButtonInput
// [0x00820802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATgPlayerController*                      TgPC;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UTgPlayerInput*                           tgpi;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FKeyBind                                 Bind;                                             		// 0x001C (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ATgSpectatorController*                   SpectatorController;                              		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGameMoviePlayer.PostWidgetInit
// [0x00020802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventPostWidgetInit_Parms
{
};

// Function TgClient.TgGameMoviePlayer.WidgetUnloaded
// [0x00020802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventWidgetUnloaded_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGameMoviePlayer.WidgetInitialized
// [0x00820802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FWidgetBinding                           newWidget;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgGameMoviePlayer.Init
// [0x00024802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventInit_Parms
{
	class ULocalPlayer*                                LocPlay;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_ConfirmHudSkin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_ConfirmHudSkin_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_GetHudSkinPath
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_GetHudSkinPath_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.GetWidget
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGetWidget_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.ASC_SetRoleRequest
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execASC_SetRoleRequest_Parms
{
	struct FString                                     sPlayerNetId;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     roleAbrev;                                        		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_redeem_login_bonus
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_redeem_login_bonus_Parms
{
};

// Function TgClient.TgGameMoviePlayer.GetBrowserType
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGetBrowserType_Parms
{
	int                                                nURLType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_forceFlushActionLog
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_forceFlushActionLog_Parms
{
};

// Function TgClient.TgGameMoviePlayer.RequestPurchase
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execRequestPurchase_Parms
{
	int                                                nVendorId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nItemId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPriceInUI;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCurrencyType;                                    		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nQuantity;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct Fdword                                      locationId;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCouponId;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.ToggleCombatLog
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execToggleCombatLog_Parms
{
};

// Function TgClient.TgGameMoviePlayer.IsLandingPanelAvailable
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execIsLandingPanelAvailable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.SetHUDVisiblity
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execSetHUDVisiblity_Parms
{
};

// Function TgClient.TgGameMoviePlayer.SetLanguage
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execSetLanguage_Parms
{
};

// Function TgClient.TgGameMoviePlayer.GainFocus
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGameMoviePlayer_eventGainFocus_Parms
{
};

// Function TgClient.TgGameMoviePlayer.LostFocus
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGameMoviePlayer_eventLostFocus_Parms
{
};

// Function TgClient.TgGameMoviePlayer.ShowFacebookStream
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGameMoviePlayer_eventShowFacebookStream_Parms
{
	unsigned long                                      bShouldShow : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.HideNotification
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGameMoviePlayer_eventHideNotification_Parms
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.ShowNotification
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct UTgGameMoviePlayer_eventShowNotification_Parms
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message2;                                         		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  Data;                                             		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.TestHideNotification
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execTestHideNotification_Parms
{
};

// Function TgClient.TgGameMoviePlayer.TestShowNotification
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execTestShowNotification_Parms
{
};

// Function TgClient.TgGameMoviePlayer.GetTestNotificationData
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGetTestNotificationData_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_get_ui_display_mode
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execusc_get_ui_display_mode_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.ShowLoginUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execShowLoginUI_Parms
{
};

// Function TgClient.TgGameMoviePlayer.ShowNormalUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execShowNormalUI_Parms
{
};

// Function TgClient.TgGameMoviePlayer.ShowNewUserExperience
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execShowNewUserExperience_Parms
{
};

// Function TgClient.TgGameMoviePlayer.SetUIDisplayMode
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execSetUIDisplayMode_Parms
{
	int                                                displayMode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.TestClearDeferBlacklist
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execTestClearDeferBlacklist_Parms
{
};

// Function TgClient.TgGameMoviePlayer.TestAddDeferBlacklistEntry
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execTestAddDeferBlacklistEntry_Parms
{
	int                                                newEntry;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.TestDeferBlacklist
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execTestDeferBlacklist_Parms
{
	unsigned long                                      bQueue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.TestPurchaseClanNameChange
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execTestPurchaseClanNameChange_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sTag;                                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.TestSendPlayerTrackingEvent
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execTestSendPlayerTrackingEvent_Parms
{
	int                                                nEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSubEvent;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sRefName;                                         		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nRefValue;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.TestShowPopupModal
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execTestShowPopupModal_Parms
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.TestShowAcquisition
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execTestShowAcquisition_Parms
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sHeader;                                          		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sFooter;                                          		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.NativeTick
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execNativeTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.OpenPurchaseGems
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execOpenPurchaseGems_Parms
{
	struct FString                                     SKUCode;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.UpdateTutorialImage
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execUpdateTutorialImage_Parms
{
	unsigned long                                      Show : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                HeaderMsgId;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImageId;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                msgId;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.HandleEscapeKey
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execHandleEscapeKey_Parms
{
};

// Function TgClient.TgGameMoviePlayer.PostInit
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execPostInit_Parms
{
};

// Function TgClient.TgGameMoviePlayer.UpdateQuestUI
// [0x00024400] ( FUNC_Native )
struct UTgGameMoviePlayer_execUpdateQuestUI_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Goal;                                             		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                msgId;                                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.UIChangeEvent
// [0x00024400] ( FUNC_Native )
struct UTgGameMoviePlayer_execUIChangeEvent_Parms
{
	class AActor*                                      refActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUnique : 1;                                      		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                subType;                                          		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_allowSpaceBar
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_allowSpaceBar_Parms
{
	unsigned long                                      bAllow : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.SetSpecState
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execSetSpecState_Parms
{
	struct FString                                     stateString;                                      		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.SetSpecTeamName
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execSetSpecTeamName_Parms
{
	unsigned long                                      bEnemy : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     TeamName;                                         		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.GetHUDTeamName
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execGetHUDTeamName_Parms
{
	unsigned long                                      bEnemy : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_getItemData
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_getItemData_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                quantityCount;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                vendorId;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.OpenWorldScene
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execOpenWorldScene_Parms
{
	struct FString                                     CameraName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.SendCloseAllPopup
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execSendCloseAllPopup_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_getPassiveMeterPath
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_getPassiveMeterPath_Parms
{
	int                                                BotID;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_isLoginReady
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_isLoginReady_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.SetLoginReady
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execSetLoginReady_Parms
{
	unsigned long                                      fromIntro : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.RunIntroMovie
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execRunIntroMovie_Parms
{
	unsigned long                                      bRun : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.GotoItem
// [0x00024400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGotoItem_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nReturnToTarget;                                  		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nReturnToEvent;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUseAltRedirect : 1;                              		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.SetRoleRequest
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execSetRoleRequest_Parms
{
	struct FString                                     senderName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                roleIndex;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.AddRemoveDeferredChannelTab
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execAddRemoveDeferredChannelTab_Parms
{
	unsigned long                                      bAdd : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                nChannelId;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.HandleClanPlayerInviteUpdates
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execHandleClanPlayerInviteUpdates_Parms
{
	struct FPointer                                    pEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.ShowPopupMessage
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execShowPopupMessage_Parms
{
	struct FString                                     sTitle;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sMessage;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.USC_SelectedPopup
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execUSC_SelectedPopup_Parms
{
	int                                                nActionID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sInputValue;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sSecondaryInputValue;                             		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.AddInitialChatMessages
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execAddInitialChatMessages_Parms
{
};

// Function TgClient.TgGameMoviePlayer.SendClosePopup
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execSendClosePopup_Parms
{
};

// Function TgClient.TgGameMoviePlayer.SendOpenPopup
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execSendOpenPopup_Parms
{
	class UTgPagePopup*                                pPopup;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.CloseChatTab
// [0x00024400] ( FUNC_Native )
struct UTgGameMoviePlayer_execCloseChatTab_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sSender;                                          		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.OpenChatTab
// [0x00024400] ( FUNC_Native )
struct UTgGameMoviePlayer_execOpenChatTab_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForce : 1;                                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.UpdateMapBackground
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execUpdateMapBackground_Parms
{
};

// Function TgClient.TgGameMoviePlayer.AttemptAutoReplayDemoRecording
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execAttemptAutoReplayDemoRecording_Parms
{
};

// Function TgClient.TgGameMoviePlayer.AttemptAutoLogin
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execAttemptAutoLogin_Parms
{
};

// Function TgClient.TgGameMoviePlayer.GetCharacterBuilderData
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGetCharacterBuilderData_Parms
{
	class UTgGameDC_Player*                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.GetClanData
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGetClanData_Parms
{
	class UTgDataGroup_Clan*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.GetLobbyDataChunk
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGetLobbyDataChunk_Parms
{
	class UTgLobbyDC_Lobby*                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.GetMatchDataChunk
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGetMatchDataChunk_Parms
{
	class UTgLobbyDC_Match*                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.GetLobbyData
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGetLobbyData_Parms
{
	class UTgDataGroup_Lobby*                          ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.GetGameData
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGetGameData_Parms
{
	class UTgDataGroup_Game*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.GetDataHandler
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGetDataHandler_Parms
{
	class UTgGameDataHandler*                          ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.UnregisterWebPageRegion
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execUnregisterWebPageRegion_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.RegisterWebPageRegion
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execRegisterWebPageRegion_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWidescreen : 1;                                  		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                nStreamId;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sUrl;                                             		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              X;                                                		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              realWidth;                                        		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              realHeight;                                       		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0038 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.USC_OpenExternalBrowser
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execUSC_OpenExternalBrowser_Parms
{
	struct FString                                     externalURL;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_UnregisterCardTexture
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_UnregisterCardTexture_Parms
{
	class UGFxObject*                                  Widget;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_RegisterCardTexture
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_RegisterCardTexture_Parms
{
	class UGFxObject*                                  Widget;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nItemId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.GetFeedback
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGetFeedback_Parms
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_onServerStabilityFeedback
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_onServerStabilityFeedback_Parms
{
};

// Function TgClient.TgGameMoviePlayer.is_item_owned
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execis_item_owned_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_is_item_owned
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_is_item_owned_Parms
{
	struct FString                                     ItemId;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_is_time_between
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_is_time_between_Parms
{
	struct FString                                     Start;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     End;                                              		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_unregister_mouse_region
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_unregister_mouse_region_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_register_mouse_region
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_register_mouse_region_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                X;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Y;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Width;                                            		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Height;                                           		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_is_in_game
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_is_in_game_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_GetRentedTimeLeft
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_GetRentedTimeLeft_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nIdType;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.ShowGodPackPurchase
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execShowGodPackPurchase_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_quit
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execusc_quit_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_request_goto_lobby
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_request_goto_lobby_Parms
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_request_quit
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_request_quit_Parms
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.InvokeRenderTargetReady
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execInvokeRenderTargetReady_Parms
{
};

// Function TgClient.TgGameMoviePlayer.SetRenderTargetCallback
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execSetRenderTargetCallback_Parms
{
	class UGFxObject*                                  targetObj;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      addObj : 1;                                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.SetRenderTargetEnabled
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execSetRenderTargetEnabled_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                surfaceId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                X;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Y;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              widthReal;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              heightReal;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_Scene_Manager_Scene_Unloaded
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execusc_Scene_Manager_Scene_Unloaded_Parms
{
	struct FString                                     sSceneName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_Scene_Manager_Scene_Loaded
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execusc_Scene_Manager_Scene_Loaded_Parms
{
	struct FString                                     sSceneName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_resize_browser
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_resize_browser_Parms
{
	int                                                surfaceId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              widthReal;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              heightReal;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_enable_browser_input
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_enable_browser_input_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.ChangeHudSection
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execChangeHudSection_Parms
{
	struct FString                                     Section;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              percentX;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              percentY;                                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Scale;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              dockX;                                            		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              dockY;                                            		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     dockObj;                                          		// 0x0020 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	float                                              dockObjX;                                         		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              dockObjY;                                         		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      outX : 1;                                         		// 0x0034 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      outY : 1;                                         		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.UnloadHudSection
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execUnloadHudSection_Parms
{
	struct FString                                     Section;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_rejectNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_rejectNotification_Parms
{
	int                                                nNotificationType;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nId;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_acceptNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_acceptNotification_Parms
{
	int                                                nNotificationType;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nId;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.LeavePartyNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execLeavePartyNotification_Parms
{
};

// Function TgClient.TgGameMoviePlayer.DisbandPartyNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execDisbandPartyNotification_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_autoConfigureSettings
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_autoConfigureSettings_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_surrender
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_surrender_Parms
{
	unsigned long                                      bSurrender : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_goto_item
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_goto_item_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUseAltRedirect : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_get_sellback_price
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_get_sellback_price_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_full_sellback_available
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_full_sellback_available_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_chat_close_tab
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_chat_close_tab_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Sender;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_set_chat_channel
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_set_chat_channel_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_get_chat_channel
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_get_chat_channel_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_chat_ready
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_chat_ready_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_resend_private_messages
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_resend_private_messages_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_vgs_command
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_vgs_command_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSubMenu : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_send_chat
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_send_chat_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     msg;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Recipient;                                        		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_toggle_player_mute
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_toggle_player_mute_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_get_class_purchase_pricing
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_get_class_purchase_pricing_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_test_music_theme
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_test_music_theme_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_test_announcer_pack
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_test_announcer_pack_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_test_voice_pack
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_test_voice_pack_Parms
{
	int                                                nVoicePackId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_show_skin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_show_skin_Parms
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_show_god_detail
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_show_god_detail_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_request_treasure_roll
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_request_treasure_roll_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CurrencyType;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_lobbyFeaturesShouldShow
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_lobbyFeaturesShouldShow_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_isFriend
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_isFriend_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_get_server_time
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_get_server_time_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_get_time
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_get_time_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_isInSiege
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_isInSiege_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_isInTutorial
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_isInTutorial_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_isCapsLockActive
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_isCapsLockActive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_isPlayingTutorial
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_isPlayingTutorial_Parms
{
	unsigned long                                      Toggle : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_stopSoundCue
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_stopSoundCue_Parms
{
	struct FString                                     soundTheme;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SoundEventName;                                   		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_join_channel
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_join_channel_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_redeem_reward
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_redeem_reward_Parms
{
	int                                                nActId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nGoalId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCount;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_GetWinningTeamName
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_GetWinningTeamName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_get_device_tooltip
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_get_device_tooltip_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRank;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_set_auto_skill_up
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_set_auto_skill_up_Parms
{
	unsigned long                                      bAutoSkill : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bForMatch : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_set_auto_purchase
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_set_auto_purchase_Parms
{
	unsigned long                                      bAutoPurchase : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bForMatch : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_sell_item
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_sell_item_Parms
{
	int                                                nInventoryId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_upgrade_item
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_upgrade_item_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nUpgradeInvId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_purchase_item
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_purchase_item_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nAmount;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_force_purchase_current_item
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_force_purchase_current_item_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_report_player
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_report_player_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nReasonCode;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sReason;                                          		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nTaskForce;                                       		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nPlayerCount;                                     		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nReportedPlayerTaskForce;                         		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_friend_action
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_friend_action_Parms
{
	struct FString                                     sType;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sInput;                                           		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_get_game_deserter
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execusc_get_game_deserter_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.goto_lobby
// [0x00024400] ( FUNC_Native )
struct UTgGameMoviePlayer_execgoto_lobby_Parms
{
	unsigned long                                      eom : 1;                                          		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_disconnect
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_disconnect_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_is_safe_to_load
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_is_safe_to_load_Parms
{
	struct FString                                     sUrl;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_forward_feature2
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_forward_feature2_Parms
{
	int                                                pItemType;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     pItemData;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     pItemData2;                                       		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_forward_feature
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_forward_feature_Parms
{
	int                                                pItemType;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     pItemData;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.GetSysCounterValue
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execGetSysCounterValue_Parms
{
	int                                                nCounterId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_getBoostedTime
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_getBoostedTime_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_introFinished
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_introFinished_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_ableToSkipTutorial
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_ableToSkipTutorial_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.GetPortalType
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execGetPortalType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.AreDailyQuestsActive
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execAreDailyQuestsActive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.UseAltQueueUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execUseAltQueueUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.UseAltUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execUseAltUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_is_party_leader
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_is_party_leader_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_can_invite_players
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_can_invite_players_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_kick_team_player
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_kick_team_player_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_Decline_Match_Invite
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_Decline_Match_Invite_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_Accept_Match_Invite
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_Accept_Match_Invite_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_CheckForLoginErrorMsg
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_CheckForLoginErrorMsg_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_match_play_emote
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_match_play_emote_Parms
{
	int                                                nEmoteId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_match_purchase_voice_pack
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_match_purchase_voice_pack_Parms
{
	int                                                nVoicePackItemId;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_match_can_purchase_random_class
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_match_can_purchase_random_class_Parms
{
	int                                                nQueueId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_match_close_random_class_popup
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_match_close_random_class_popup_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_match_request_random_class
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_match_request_random_class_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_GetGameName
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_GetGameName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_viewStatsOnline
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_viewStatsOnline_Parms
{
	struct FString                                     sInstanceId;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_watch_eom_replay
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_watch_eom_replay_Parms
{
	struct FString                                     sInstanceId;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_match_cancel_trade
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_match_cancel_trade_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_match_request_trade
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_match_request_trade_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_match_ban_class
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_match_ban_class_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_close_eom_lobby
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_close_eom_lobby_Parms
{
	int                                                nNavigationTarget;                                		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_can_play_again
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_can_play_again_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_play_again
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_play_again_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_match_lock_in
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_match_lock_in_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_match_choose_skin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_match_choose_skin_Parms
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_match_choose_class
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_match_choose_class_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_queue_leave
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_queue_leave_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_queue_create_team
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_queue_create_team_Parms
{
	int                                                nQueueId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sPassword;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_saveTransformSettings
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_saveTransformSettings_Parms
{
	struct FString                                     TransformSettings;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_loadTransformSettings
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_loadTransformSettings_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_clearReferral
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_clearReferral_Parms
{
	struct FString                                     sExtId;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_clearLeagueDC
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_clearLeagueDC_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_passwordInputFocus
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_passwordInputFocus_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_nameInputFocus
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_nameInputFocus_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_CancelQueue
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_CancelQueue_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_request_account_info
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_request_account_info_Parms
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_getEULAText
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_getEULAText_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_acceptEULA
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_acceptEULA_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_createPlayerName
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_createPlayerName_Parms
{
	struct FString                                     sLoginName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPass;                                            		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sNewPlayerName;                                   		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_remember_name_changed
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_remember_name_changed_Parms
{
	unsigned long                                      bNewValue : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_attempt_auto_login
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_attempt_auto_login_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_login
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_login_Parms
{
	struct FString                                     UserName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_loginExits
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_loginExits_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.Replay
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execReplay_Parms
{
	int                                                nInstanceId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sPassword;                                        		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.EndLobbyPlayback
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execEndLobbyPlayback_Parms
{
};

// Function TgClient.TgGameMoviePlayer.CancelPlayback
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execCancelPlayback_Parms
{
};

// Function TgClient.TgGameMoviePlayer.OnDemoReady
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execOnDemoReady_Parms
{
};

// Function TgClient.TgGameMoviePlayer.LoadBrowserScene
// [0x00020002] 
struct UTgGameMoviePlayer_execLoadBrowserScene_Parms
{
};

// Function TgClient.TgOverlayMoviePlayer.WidgetUnloaded
// [0x00020802] ( FUNC_Event )
struct UTgOverlayMoviePlayer_eventWidgetUnloaded_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgOverlayMoviePlayer.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct UTgOverlayMoviePlayer_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgLobbyHUD.Destroyed
// [0x00020902] ( FUNC_Event )
struct ATgLobbyHUD_eventDestroyed_Parms
{
	// class ATgPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgLobbyHUD.PostRender
// [0x00020802] ( FUNC_Event )
struct ATgLobbyHUD_eventPostRender_Parms
{
};

// Function TgClient.TgLobbyHUD.CommitPedestalSelectionChange
// [0x00020802] ( FUNC_Event )
struct ATgLobbyHUD_eventCommitPedestalSelectionChange_Parms
{
	// unsigned long                                   bChangedPedestal : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TgClient.TgLobbyHUD.BeginPedestalSelectionChange
// [0x00024A02] ( FUNC_Exec | FUNC_Event )
struct ATgLobbyHUD_execBeginPedestalSelectionChange_Parms
{
	int                                                nPedestalSkinId;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgLobbyHUD.CommitClassSelectionChange
// [0x00020802] ( FUNC_Event )
struct ATgLobbyHUD_eventCommitClassSelectionChange_Parms
{
	// unsigned long                                   bChangedClass : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bChangedSkin : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TgClient.TgLobbyHUD.BeginClassSelectionChange
// [0x00024A02] ( FUNC_Exec | FUNC_Event )
struct ATgLobbyHUD_execBeginClassSelectionChange_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgLobbyHUD.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ATgLobbyHUD_eventSetInitialState_Parms
{
};

// Function TgClient.TgLobbyHUD.NotifyLoggedIn
// [0x00020802] ( FUNC_Event )
struct ATgLobbyHUD_eventNotifyLoggedIn_Parms
{
};

// Function TgClient.TgLobbyHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATgLobbyHUD_eventPostBeginPlay_Parms
{
	// class ATgPlayerController*                      PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgLobbyHUD.TriggerLazyPrecache
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execTriggerLazyPrecache_Parms
{
};

// Function TgClient.TgLobbyHUD.PreBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATgLobbyHUD_eventPreBeginPlay_Parms
{
	// class UClass*                                   MenuContentDataClass;                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function TgClient.TgLobbyHUD.GetLoginDataType
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execGetLoginDataType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgLobbyHUD.DisableEmoteZoom
// [0x00024400] ( FUNC_Native )
struct ATgLobbyHUD_execDisableEmoteZoom_Parms
{
	unsigned long                                      bImmediate : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgLobbyHUD.EnableEmoteZoom
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execEnableEmoteZoom_Parms
{
};

// Function TgClient.TgLobbyHUD.PlayEmote
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUD_execPlayEmote_Parms
{
	int                                                nVgsId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgLobbyHUD.UpdateCardDraws
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execUpdateCardDraws_Parms
{
	class UCanvas*                                     CanvasIn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgLobbyHUD.UpdateDebugDraws
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execUpdateDebugDraws_Parms
{
};

// Function TgClient.TgLobbyHUD.NotifyLobbyStateChange
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execNotifyLobbyStateChange_Parms
{
};

// Function TgClient.TgLobbyHUD.UpdateGammaControls
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execUpdateGammaControls_Parms
{
};

// Function TgClient.TgLobbyHUD.TestTrayPopup
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUD_execTestTrayPopup_Parms
{
	unsigned char                                      popupType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgLobbyHUD.TestEOMLobby
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUD_execTestEOMLobby_Parms
{
	unsigned long                                      bVictory : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     ClassName;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     skinName;                                         		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgLobbyHUD.TestTransition
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUD_execTestTransition_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgLobbyHUD.SwitchToCamera
// [0x00024400] ( FUNC_Native )
struct ATgLobbyHUD_execSwitchToCamera_Parms
{
	struct FName                                       CamTag;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      camDirection;                                     		// 0x0008 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class ATgLobbyCamera*                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgLobbyHUD.ChangePedestalEnemyModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUD_execChangePedestalEnemyModel_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPedestalSkinId;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      pose;                                             		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAsync : 1;                                       		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgLobbyHUD.ChangeClassEnemyModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUD_execChangeClassEnemyModel_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nClassId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      pose;                                             		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAsync : 1;                                       		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgLobbyHUD.ChangePedestalFriendlyModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUD_execChangePedestalFriendlyModel_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPedestalSkinId;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      pose;                                             		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAsync : 1;                                       		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgLobbyHUD.ChangeClassFriendlyModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUD_execChangeClassFriendlyModel_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nClassId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      pose;                                             		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAsync : 1;                                       		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgLobbyHUD.IsCurrentCameraMatchLobby
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execIsCurrentCameraMatchLobby_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgLobbyHUD.GetMatchLobbyCameraName
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execGetMatchLobbyCameraName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgLobbyHUD.OnPedestalSelected
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUD_execOnPedestalSelected_Parms
{
	int                                                nPedestalSkinId;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bChangedPedestal : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgLobbyHUD.OnClassSelected
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUD_execOnClassSelected_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bChangedClass : 1;                                		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bChangedSkin : 1;                                 		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgLobbyHUD.RotateModel
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUD_execRotateModel_Parms
{
	float                                              fValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgLobbyHUD.ChangeClassModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUD_execChangeClassModel_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPedestalSkinId;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      pose;                                             		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       CameraTag;                                        		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      camDirection;                                     		// 0x0018 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAsync : 1;                                       		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowFlag : 1;                                    		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgLobbyHUD.ChangeMenuModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUD_execChangeMenuModel_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      camDirection;                                     		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgLobbyHUD.AsynchNotifies
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execAsynchNotifies_Parms
{
};

// Function TgClient.TgLobbyHUD.OnMarshalEvent
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execOnMarshalEvent_Parms
{
	struct FPointer                                    pMarEvent;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgLobbyHUD.SetUpEOMLobby
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execSetUpEOMLobby_Parms
{
};

// Function TgClient.TgLobbyHUD.HaveEOMLobbyData
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execHaveEOMLobbyData_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgLobbyHUD.RegisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execRegisterEngineCallbacks_Parms
{
};

// Function TgClient.TgLobbyHUD.IsEulaSigned
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execIsEulaSigned_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgLobbyHUD.InitializeDisconnectedState
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execInitializeDisconnectedState_Parms
{
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateClanNameFormat
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_ClanStats_execusc_UpdateClanNameFormat_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateTag
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_ClanStats_execusc_UpdateTag_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClanDC_ClanStats.usc_ApplicationAction
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_ClanStats_execusc_ApplicationAction_Parms
{
	int                                                nAction;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              nPlayerId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateRecruiting
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_ClanStats_execusc_UpdateRecruiting_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsRecruiting : 1;                                		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateMessage
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_ClanStats_execusc_UpdateMessage_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsDaily : 1;                                     		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateClanNameFormat_Delegate
// [0x00120000] 
struct UTgClanDC_ClanStats_execusc_UpdateClanNameFormat_Delegate_Parms
{
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateTag_Delegate
// [0x00120000] 
struct UTgClanDC_ClanStats_execusc_UpdateTag_Delegate_Parms
{
};

// Function TgClient.TgClanDC_ClanStats.usc_ApplicationAction_Delegate
// [0x00120000] 
struct UTgClanDC_ClanStats_execusc_ApplicationAction_Delegate_Parms
{
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateRecruiting_Delegate
// [0x00120000] 
struct UTgClanDC_ClanStats_execusc_UpdateRecruiting_Delegate_Parms
{
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateMessage_Delegate
// [0x00120000] 
struct UTgClanDC_ClanStats_execusc_UpdateMessage_Delegate_Parms
{
};

// Function TgClient.TgClanDC_ClanStats.UpdateRecruiting
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_ClanStats_execUpdateRecruiting_Parms
{
	struct FString                                     sDesc;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsRecruiting : 1;                                		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanMOTD
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_ClanStats_execUpdateClanMOTD_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanDesc
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_ClanStats_execUpdateClanDesc_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanName
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_ClanStats_execUpdateClanName_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanData
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_ClanStats_execUpdateClanData_Parms
{
};

// Function TgClient.TgClanDC_ClanStats.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_ClanStats_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClanDC_Player.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Player_execNotifyMapChange_Parms
{
};

// Function TgClient.TgClanDC_Player.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Player_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClanDC_Roster.usc_UpdateComment
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Roster_execusc_UpdateComment_Parms
{
	float                                              nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sComment;                                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      isOfficerNote : 1;                                		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgClanDC_Roster.usc_ClanAction
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Roster_execusc_ClanAction_Parms
{
	int                                                nAction;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              nPlayerId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClanDC_Roster.usc_UpdateComment_Delegate
// [0x00120000] 
struct UTgClanDC_Roster_execusc_UpdateComment_Delegate_Parms
{
};

// Function TgClient.TgClanDC_Roster.usc_ClanAction_Delegate
// [0x00120000] 
struct UTgClanDC_Roster_execusc_ClanAction_Delegate_Parms
{
};

// Function TgClient.TgClanDC_Roster.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Roster_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClanDC_Settings.usc_UpdateLeader
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Settings_execusc_UpdateLeader_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClanDC_Settings.usc_UpdateRank
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Settings_execusc_UpdateRank_Parms
{
	float                                              RankId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              rankPermission;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClanDC_Settings.usc_UpdateLeader_Delegate
// [0x00120000] 
struct UTgClanDC_Settings_execusc_UpdateLeader_Delegate_Parms
{
};

// Function TgClient.TgClanDC_Settings.usc_UpdateRank_Delegate
// [0x00120000] 
struct UTgClanDC_Settings_execusc_UpdateRank_Delegate_Parms
{
};

// Function TgClient.TgClanDC_Settings.UpdateRankArray
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Settings_execUpdateRankArray_Parms
{
};

// Function TgClient.TgClanDC_Settings.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Settings_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgDataGroup_Clan.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Clan_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgDataGroup_EOMLobby.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_EOMLobby_execNotifyMapChange_Parms
{
};

// Function TgClient.TgDataGroup_EOMLobby.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_EOMLobby_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgDataGroup_Lobby.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Lobby_execNotifyMapChange_Parms
{
};

// Function TgClient.TgDataGroup_Lobby.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Lobby_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgEOMLobbyDC_ChatLobby.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_ChatLobby_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgEOMLobbyDC_ChatPlayer.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_ChatPlayer_execNotifyMapChange_Parms
{
};

// Function TgClient.TgEOMLobbyDC_ChatPlayer.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_ChatPlayer_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgEOMLobbyDC_Lobby.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_Lobby_execNotifyMapChange_Parms
{
};

// Function TgClient.TgEOMLobbyDC_Lobby.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_Lobby_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgEOMLobbyDC_Player.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_Player_execNotifyMapChange_Parms
{
};

// Function TgClient.TgEOMLobbyDC_Player.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_Player_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgEOMLobbyDC_Team.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_Team_execNotifyMapChange_Parms
{
};

// Function TgClient.TgEOMLobbyDC_Team.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_Team_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgLobbyDC_Class.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Class_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgLobbyDC_Lobby.Update
// [0x00024400] ( FUNC_Native )
struct UTgLobbyDC_Lobby_execUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSkipCallback : 1;                                		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgLobbyDC_Lobby.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Lobby_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgLobbyDC_Login.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Login_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgLobbyDC_Match.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Match_execNotifyMapChange_Parms
{
};

// Function TgClient.TgLobbyDC_Match.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Match_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgLobbyDC_Player.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Player_execNotifyMapChange_Parms
{
};

// Function TgClient.TgLobbyDC_Player.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Player_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgLobbyDC_PlayerTrade.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_PlayerTrade_execNotifyMapChange_Parms
{
};

// Function TgClient.TgLobbyDC_PlayerTrade.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_PlayerTrade_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgLobbyDC_Skin.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Skin_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgLobbyDC_Team.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Team_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgConfigDC_Cached.PrecacheData
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_Cached_execPrecacheData_Parms
{
};

// Function TgClient.TgConfigDC_Cached.CreateDataObject
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_Cached_execCreateDataObject_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgConfigDC_Cached.usc_load_data
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_Cached_execusc_load_data_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgConfigDC_Cached.usc_load_data_Delegate
// [0x00120000] 
struct UTgConfigDC_Cached_execusc_load_data_Delegate_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgConfigDC_Cached.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_Cached_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgConfigDC_Classes.CreateDataObject
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_Classes_execCreateDataObject_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgConfigDC_GameTip.CreateDataObject
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_GameTip_execCreateDataObject_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgConfigDC_Items.CreateDataObject
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_Items_execCreateDataObject_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgConfigDC_LangMessages.usc_load_data
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_LangMessages_execusc_load_data_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgDataGroup_Config.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Config_execNotifyMapChange_Parms
{
};

// Function TgClient.TgDataGroup_Config.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Config_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgDataGroup_Settings.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Settings_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSettingsDC_Audio.usc_requestDeviceList
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Audio_execusc_requestDeviceList_Parms
{
};

// Function TgClient.TgSettingsDC_Audio.usc_SetAudioSettings
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Audio_execusc_SetAudioSettings_Parms
{
	float                                              Master;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              sfx;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              music;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              voice;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              matchNotifier;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      MasterMute : 1;                                   		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      SFXMute : 1;                                      		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      MusicMute : 1;                                    		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      VoiceMute : 1;                                    		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      MatchNotifierMute : 1;                            		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ChatNotifierMute : 1;                             		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     DefaultAudioDevice;                               		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgSettingsDC_Audio.usc_requestDeviceList_Delegate
// [0x00120000] 
struct UTgSettingsDC_Audio_execusc_requestDeviceList_Delegate_Parms
{
};

// Function TgClient.TgSettingsDC_Audio.usc_SetAudioSettings_Delegate
// [0x00120000] 
struct UTgSettingsDC_Audio_execusc_SetAudioSettings_Delegate_Parms
{
};

// Function TgClient.TgSettingsDC_Audio.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Audio_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSettingsDC_KeyBinding.PopulateKeybinding
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_KeyBinding_execPopulateKeybinding_Parms
{
};

// Function TgClient.TgSettingsDC_KeyBinding.InitializeBindingData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_KeyBinding_execInitializeBindingData_Parms
{
};

// Function TgClient.TgSettingsDC_KeyBinding.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_KeyBinding_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSettingsDC_Spectator.PopulateKeybinding
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Spectator_execPopulateKeybinding_Parms
{
};

// Function TgClient.TgSettingsDC_Spectator.InitializeBindingData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Spectator_execInitializeBindingData_Parms
{
};

// Function TgClient.TgSettingsDC_Spectator.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Spectator_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSettingsDC_UI.usc_SetUISettings
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_UI_execusc_SetUISettings_Parms
{
	struct FString                                     SettingName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     settingValue;                                     		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgSettingsDC_UI.usc_SetUISettings_Delegate
// [0x00120000] 
struct UTgSettingsDC_UI_execusc_SetUISettings_Delegate_Parms
{
};

// Function TgClient.TgSettingsDC_UI.UpdateUISettings
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_UI_execUpdateUISettings_Parms
{
};

// Function TgClient.TgSettingsDC_UI.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_UI_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSettingsDC_Video.usc_AutoConfig
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Video_execusc_AutoConfig_Parms
{
};

// Function TgClient.TgSettingsDC_Video.usc_SetGammaValue
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Video_execusc_SetGammaValue_Parms
{
	float                                              nGamma;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSettingsDC_Video.usc_SetVideoSettings
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Video_execusc_SetVideoSettings_Parms
{
	float                                              nWorldDetail;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              nTextureDetail;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              nShadowDetail;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              nParticleDetail;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUseVSync : 1;                                    		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bUseSpecialMatEffects : 1;                        		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bUseRagdollPhysics : 1;                           		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bFullScreen : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bBorderless : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              nResX;                                            		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              nResY;                                            		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nMultiSampleCount;                                		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bD3D11Enabled : 1;                                		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                nFXAAQuality;                                     		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nShaderQuality;                                   		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSettingsDC_Video.usc_AutoConfig_Delegate
// [0x00120000] 
struct UTgSettingsDC_Video_execusc_AutoConfig_Delegate_Parms
{
};

// Function TgClient.TgSettingsDC_Video.usc_SetGammaValue_Delegate
// [0x00120000] 
struct UTgSettingsDC_Video_execusc_SetGammaValue_Delegate_Parms
{
};

// Function TgClient.TgSettingsDC_Video.usc_SetVideoSettings_Delegate
// [0x00120000] 
struct UTgSettingsDC_Video_execusc_SetVideoSettings_Delegate_Parms
{
};

// Function TgClient.TgSettingsDC_Video.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Video_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif