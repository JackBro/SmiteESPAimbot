/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgClient_functions.h
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

// Function TgClient.TgBrowserManager.OpenWebPage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            pageType                       ( CPF_Parm )
// unsigned long                  bExternal                      ( CPF_Parm )
// unsigned long                  bShowNavButtons                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAddLang                       ( CPF_OptionalParm | CPF_Parm )

void UTgBrowserManager::eventOpenWebPage ( int pageType, unsigned long bExternal, unsigned long bShowNavButtons, unsigned long bAddLang )
{
	static UFunction* pFnOpenWebPage = NULL;

	if ( ! pFnOpenWebPage )
		pFnOpenWebPage = (UFunction*) UObject::GObjObjects()->GetIndex( 123375 );

	UTgBrowserManager_eventOpenWebPage_Parms OpenWebPage_Parms;
	OpenWebPage_Parms.pageType = pageType;
	OpenWebPage_Parms.bExternal = bExternal;
	OpenWebPage_Parms.bShowNavButtons = bShowNavButtons;
	OpenWebPage_Parms.bAddLang = bAddLang;

	this->ProcessEvent ( pFnOpenWebPage, &OpenWebPage_Parms, NULL );
};

// Function TgClient.TgBrowserManager.GetURLByPageType
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            pageType                       ( CPF_Parm )

struct FString UTgBrowserManager::GetURLByPageType ( int pageType )
{
	static UFunction* pFnGetURLByPageType = NULL;

	if ( ! pFnGetURLByPageType )
		pFnGetURLByPageType = (UFunction*) UObject::GObjObjects()->GetIndex( 123372 );

	UTgBrowserManager_execGetURLByPageType_Parms GetURLByPageType_Parms;
	GetURLByPageType_Parms.pageType = pageType;

	this->ProcessEvent ( pFnGetURLByPageType, &GetURLByPageType_Parms, NULL );

	return GetURLByPageType_Parms.ReturnValue;
};

// Function TgClient.TgBrowserManager.OpenWebPageWithTarget
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            pageType                       ( CPF_Parm )
// struct FString                 urlTarget                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bExternal                      ( CPF_Parm )
// unsigned long                  bShowNavButtons                ( CPF_OptionalParm | CPF_Parm )

void UTgBrowserManager::eventOpenWebPageWithTarget ( int pageType, struct FString urlTarget, unsigned long bExternal, unsigned long bShowNavButtons )
{
	static UFunction* pFnOpenWebPageWithTarget = NULL;

	if ( ! pFnOpenWebPageWithTarget )
		pFnOpenWebPageWithTarget = (UFunction*) UObject::GObjObjects()->GetIndex( 123366 );

	UTgBrowserManager_eventOpenWebPageWithTarget_Parms OpenWebPageWithTarget_Parms;
	OpenWebPageWithTarget_Parms.pageType = pageType;
	memcpy ( &OpenWebPageWithTarget_Parms.urlTarget, &urlTarget, 0xC );
	OpenWebPageWithTarget_Parms.bExternal = bExternal;
	OpenWebPageWithTarget_Parms.bShowNavButtons = bShowNavButtons;

	this->ProcessEvent ( pFnOpenWebPageWithTarget, &OpenWebPageWithTarget_Parms, NULL );
};

// Function TgClient.TgBrowserManager.SetContainer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGfxBrowser*           container                      ( CPF_Parm )

void UTgBrowserManager::SetContainer ( class UTgGfxBrowser* container )
{
	static UFunction* pFnSetContainer = NULL;

	if ( ! pFnSetContainer )
		pFnSetContainer = (UFunction*) UObject::GObjObjects()->GetIndex( 123364 );

	UTgBrowserManager_execSetContainer_Parms SetContainer_Parms;
	SetContainer_Parms.container = container;

	pFnSetContainer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetContainer, &SetContainer_Parms, NULL );

	pFnSetContainer->FunctionFlags |= 0x400;
};

// Function TgClient.TgBrowserManager.ResizeView
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgBrowserManager::ResizeView ( )
{
	static UFunction* pFnResizeView = NULL;

	if ( ! pFnResizeView )
		pFnResizeView = (UFunction*) UObject::GObjObjects()->GetIndex( 123363 );

	UTgBrowserManager_execResizeView_Parms ResizeView_Parms;

	pFnResizeView->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResizeView, &ResizeView_Parms, NULL );

	pFnResizeView->FunctionFlags |= 0x400;
};

// Function TgClient.TgBrowserManager.Close
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgBrowserManager::Close ( )
{
	static UFunction* pFnClose = NULL;

	if ( ! pFnClose )
		pFnClose = (UFunction*) UObject::GObjObjects()->GetIndex( 123362 );

	UTgBrowserManager_execClose_Parms Close_Parms;

	pFnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClose, &Close_Parms, NULL );

	pFnClose->FunctionFlags |= 0x400;
};

// Function TgClient.TgBrowserManager.OpenVideo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

void UTgBrowserManager::OpenVideo ( struct FString URL )
{
	static UFunction* pFnOpenVideo = NULL;

	if ( ! pFnOpenVideo )
		pFnOpenVideo = (UFunction*) UObject::GObjObjects()->GetIndex( 123360 );

	UTgBrowserManager_execOpenVideo_Parms OpenVideo_Parms;
	memcpy ( &OpenVideo_Parms.URL, &URL, 0xC );

	pFnOpenVideo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenVideo, &OpenVideo_Parms, NULL );

	pFnOpenVideo->FunctionFlags |= 0x400;
};

// Function TgClient.TgBrowserManager.OpenURL
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShowNavButtons                ( CPF_OptionalParm | CPF_Parm )

void UTgBrowserManager::OpenURL ( struct FString URL, unsigned long bShowNavButtons )
{
	static UFunction* pFnOpenURL = NULL;

	if ( ! pFnOpenURL )
		pFnOpenURL = (UFunction*) UObject::GObjObjects()->GetIndex( 123357 );

	UTgBrowserManager_execOpenURL_Parms OpenURL_Parms;
	memcpy ( &OpenURL_Parms.URL, &URL, 0xC );
	OpenURL_Parms.bShowNavButtons = bShowNavButtons;

	pFnOpenURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenURL, &OpenURL_Parms, NULL );

	pFnOpenURL->FunctionFlags |= 0x400;
};

// Function TgClient.TgBrowserManager.ExternalOpenURL
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bAddLang                       ( CPF_OptionalParm | CPF_Parm )

void UTgBrowserManager::ExternalOpenURL ( struct FString URL, unsigned long bAddLang )
{
	static UFunction* pFnExternalOpenURL = NULL;

	if ( ! pFnExternalOpenURL )
		pFnExternalOpenURL = (UFunction*) UObject::GObjObjects()->GetIndex( 123353 );

	UTgBrowserManager_execExternalOpenURL_Parms ExternalOpenURL_Parms;
	memcpy ( &ExternalOpenURL_Parms.URL, &URL, 0xC );
	ExternalOpenURL_Parms.bAddLang = bAddLang;

	pFnExternalOpenURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnExternalOpenURL, &ExternalOpenURL_Parms, NULL );

	pFnExternalOpenURL->FunctionFlags |= 0x400;
};

// Function TgClient.TgBrowserManager.IsBrowserLoaded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgBrowserManager::IsBrowserLoaded ( )
{
	static UFunction* pFnIsBrowserLoaded = NULL;

	if ( ! pFnIsBrowserLoaded )
		pFnIsBrowserLoaded = (UFunction*) UObject::GObjObjects()->GetIndex( 123356 );

	UTgBrowserManager_execIsBrowserLoaded_Parms IsBrowserLoaded_Parms;

	this->ProcessEvent ( pFnIsBrowserLoaded, &IsBrowserLoaded_Parms, NULL );

	return IsBrowserLoaded_Parms.ReturnValue;
};

// Function TgClient.TgChatData.TokenReplace
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Token                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sValue                         ( CPF_Parm | CPF_NeedCtorLink )

struct FString UTgChatData::eventTokenReplace ( struct FString Message, struct FString Token, struct FString sValue )
{
	static UFunction* pFnTokenReplace = NULL;

	if ( ! pFnTokenReplace )
		pFnTokenReplace = (UFunction*) UObject::GObjObjects()->GetIndex( 123403 );

	UTgChatData_eventTokenReplace_Parms TokenReplace_Parms;
	memcpy ( &TokenReplace_Parms.Message, &Message, 0xC );
	memcpy ( &TokenReplace_Parms.Token, &Token, 0xC );
	memcpy ( &TokenReplace_Parms.sValue, &sValue, 0xC );

	this->ProcessEvent ( pFnTokenReplace, &TokenReplace_Parms, NULL );

	return TokenReplace_Parms.ReturnValue;
};

// Function TgClient.TgChatData.CheckWarning
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

bool UTgChatData::eventCheckWarning ( struct FString Message )
{
	static UFunction* pFnCheckWarning = NULL;

	if ( ! pFnCheckWarning )
		pFnCheckWarning = (UFunction*) UObject::GObjObjects()->GetIndex( 123400 );

	UTgChatData_eventCheckWarning_Parms CheckWarning_Parms;
	memcpy ( &CheckWarning_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnCheckWarning, &CheckWarning_Parms, NULL );

	return CheckWarning_Parms.ReturnValue;
};

// Function TgClient.TgClientHUD.GetBulletPoint
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

struct FString ATgClientHUD::eventGetBulletPoint ( int Index, struct FString Message )
{
	static UFunction* pFnGetBulletPoint = NULL;

	if ( ! pFnGetBulletPoint )
		pFnGetBulletPoint = (UFunction*) UObject::GObjObjects()->GetIndex( 123618 );

	ATgClientHUD_eventGetBulletPoint_Parms GetBulletPoint_Parms;
	GetBulletPoint_Parms.Index = Index;
	memcpy ( &GetBulletPoint_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnGetBulletPoint, &GetBulletPoint_Parms, NULL );

	return GetBulletPoint_Parms.ReturnValue;
};

// Function TgClient.TgClientHUD.GetGameState
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATgClientHUD::eventGetGameState ( )
{
	static UFunction* pFnGetGameState = NULL;

	if ( ! pFnGetGameState )
		pFnGetGameState = (UFunction*) UObject::GObjObjects()->GetIndex( 123616 );

	ATgClientHUD_eventGetGameState_Parms GetGameState_Parms;

	this->ProcessEvent ( pFnGetGameState, &GetGameState_Parms, NULL );

	return GetGameState_Parms.ReturnValue;
};

// Function TgClient.TgClientHUD.OnEscapePressed
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATgClientHUD::OnEscapePressed ( )
{
	static UFunction* pFnOnEscapePressed = NULL;

	if ( ! pFnOnEscapePressed )
		pFnOnEscapePressed = (UFunction*) UObject::GObjObjects()->GetIndex( 123615 );

	ATgClientHUD_execOnEscapePressed_Parms OnEscapePressed_Parms;

	this->ProcessEvent ( pFnOnEscapePressed, &OnEscapePressed_Parms, NULL );
};

// Function TgClient.TgClientHUD.ToggleScene
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:
// struct FString                 SceneName                      ( CPF_Parm | CPF_NeedCtorLink )

void ATgClientHUD::ToggleScene ( struct FString SceneName )
{
	static UFunction* pFnToggleScene = NULL;

	if ( ! pFnToggleScene )
		pFnToggleScene = (UFunction*) UObject::GObjObjects()->GetIndex( 123613 );

	ATgClientHUD_execToggleScene_Parms ToggleScene_Parms;
	memcpy ( &ToggleScene_Parms.SceneName, &SceneName, 0xC );

	this->ProcessEvent ( pFnToggleScene, &ToggleScene_Parms, NULL );
};

// Function TgClient.TgClientHUD.UnloadScene
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:
// struct FString                 SceneName                      ( CPF_Parm | CPF_NeedCtorLink )

void ATgClientHUD::UnloadScene ( struct FString SceneName )
{
	static UFunction* pFnUnloadScene = NULL;

	if ( ! pFnUnloadScene )
		pFnUnloadScene = (UFunction*) UObject::GObjObjects()->GetIndex( 123611 );

	ATgClientHUD_execUnloadScene_Parms UnloadScene_Parms;
	memcpy ( &UnloadScene_Parms.SceneName, &SceneName, 0xC );

	this->ProcessEvent ( pFnUnloadScene, &UnloadScene_Parms, NULL );
};

// Function TgClient.TgClientHUD.LoadScene
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:
// struct FString                 SceneName                      ( CPF_Parm | CPF_NeedCtorLink )

void ATgClientHUD::LoadScene ( struct FString SceneName )
{
	static UFunction* pFnLoadScene = NULL;

	if ( ! pFnLoadScene )
		pFnLoadScene = (UFunction*) UObject::GObjObjects()->GetIndex( 123608 );

	ATgClientHUD_execLoadScene_Parms LoadScene_Parms;
	memcpy ( &LoadScene_Parms.SceneName, &SceneName, 0xC );

	this->ProcessEvent ( pFnLoadScene, &LoadScene_Parms, NULL );
};

// Function TgClient.TgClientHUD.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATgClientHUD::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->GetIndex( 123606 );

	ATgClientHUD_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TgClient.TgClientHUD.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ATgClientHUD::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->GetIndex( 123605 );

	ATgClientHUD_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TgClient.TgClientHUD.ToggleHUDScene
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 SceneName                      ( CPF_Parm | CPF_NeedCtorLink )

void ATgClientHUD::ToggleHUDScene ( struct FString SceneName )
{
	static UFunction* pFnToggleHUDScene = NULL;

	if ( ! pFnToggleHUDScene )
		pFnToggleHUDScene = (UFunction*) UObject::GObjObjects()->GetIndex( 123603 );

	ATgClientHUD_execToggleHUDScene_Parms ToggleHUDScene_Parms;
	memcpy ( &ToggleHUDScene_Parms.SceneName, &SceneName, 0xC );

	pFnToggleHUDScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleHUDScene, &ToggleHUDScene_Parms, NULL );

	pFnToggleHUDScene->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.ToggleHUD
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgClientHUD::ToggleHUD ( )
{
	static UFunction* pFnToggleHUD = NULL;

	if ( ! pFnToggleHUD )
		pFnToggleHUD = (UFunction*) UObject::GObjObjects()->GetIndex( 123602 );

	ATgClientHUD_execToggleHUD_Parms ToggleHUD_Parms;

	pFnToggleHUD->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleHUD, &ToggleHUD_Parms, NULL );

	pFnToggleHUD->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.TestDidIt
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nActivityId                    ( CPF_Parm )
// int                            nCount                         ( CPF_Parm )
// int                            n_goalID                       ( CPF_Parm )

void ATgClientHUD::TestDidIt ( int nActivityId, int nCount, int n_goalID )
{
	static UFunction* pFnTestDidIt = NULL;

	if ( ! pFnTestDidIt )
		pFnTestDidIt = (UFunction*) UObject::GObjObjects()->GetIndex( 123598 );

	ATgClientHUD_execTestDidIt_Parms TestDidIt_Parms;
	TestDidIt_Parms.nActivityId = nActivityId;
	TestDidIt_Parms.nCount = nCount;
	TestDidIt_Parms.n_goalID = n_goalID;

	pFnTestDidIt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTestDidIt, &TestDidIt_Parms, NULL );

	pFnTestDidIt->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.UpdateSpectatorSettingsMenu
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgClientHUD::UpdateSpectatorSettingsMenu ( )
{
	static UFunction* pFnUpdateSpectatorSettingsMenu = NULL;

	if ( ! pFnUpdateSpectatorSettingsMenu )
		pFnUpdateSpectatorSettingsMenu = (UFunction*) UObject::GObjObjects()->GetIndex( 123597 );

	ATgClientHUD_execUpdateSpectatorSettingsMenu_Parms UpdateSpectatorSettingsMenu_Parms;

	pFnUpdateSpectatorSettingsMenu->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSpectatorSettingsMenu, &UpdateSpectatorSettingsMenu_Parms, NULL );

	pFnUpdateSpectatorSettingsMenu->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.UpdateKeyBindSettingsMenu
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            settingtype                    ( CPF_OptionalParm | CPF_Parm )

void ATgClientHUD::UpdateKeyBindSettingsMenu ( int settingtype )
{
	static UFunction* pFnUpdateKeyBindSettingsMenu = NULL;

	if ( ! pFnUpdateKeyBindSettingsMenu )
		pFnUpdateKeyBindSettingsMenu = (UFunction*) UObject::GObjObjects()->GetIndex( 123595 );

	ATgClientHUD_execUpdateKeyBindSettingsMenu_Parms UpdateKeyBindSettingsMenu_Parms;
	UpdateKeyBindSettingsMenu_Parms.settingtype = settingtype;

	pFnUpdateKeyBindSettingsMenu->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateKeyBindSettingsMenu, &UpdateKeyBindSettingsMenu_Parms, NULL );

	pFnUpdateKeyBindSettingsMenu->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.UpdateSpecKeyDisplay
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )

void ATgClientHUD::UpdateSpecKeyDisplay ( struct FString Key )
{
	static UFunction* pFnUpdateSpecKeyDisplay = NULL;

	if ( ! pFnUpdateSpecKeyDisplay )
		pFnUpdateSpecKeyDisplay = (UFunction*) UObject::GObjObjects()->GetIndex( 123593 );

	ATgClientHUD_execUpdateSpecKeyDisplay_Parms UpdateSpecKeyDisplay_Parms;
	memcpy ( &UpdateSpecKeyDisplay_Parms.Key, &Key, 0xC );

	pFnUpdateSpecKeyDisplay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSpecKeyDisplay, &UpdateSpecKeyDisplay_Parms, NULL );

	pFnUpdateSpecKeyDisplay->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.UpdateKeyDisplay
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )

void ATgClientHUD::UpdateKeyDisplay ( struct FString Key )
{
	static UFunction* pFnUpdateKeyDisplay = NULL;

	if ( ! pFnUpdateKeyDisplay )
		pFnUpdateKeyDisplay = (UFunction*) UObject::GObjObjects()->GetIndex( 123591 );

	ATgClientHUD_execUpdateKeyDisplay_Parms UpdateKeyDisplay_Parms;
	memcpy ( &UpdateKeyDisplay_Parms.Key, &Key, 0xC );

	pFnUpdateKeyDisplay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateKeyDisplay, &UpdateKeyDisplay_Parms, NULL );

	pFnUpdateKeyDisplay->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.gfxProcessSound
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   aThemeName                     ( CPF_Parm )
// struct FName                   aEventName                     ( CPF_Parm )

void ATgClientHUD::gfxProcessSound ( struct FName aThemeName, struct FName aEventName )
{
	static UFunction* pFngfxProcessSound = NULL;

	if ( ! pFngfxProcessSound )
		pFngfxProcessSound = (UFunction*) UObject::GObjObjects()->GetIndex( 123588 );

	ATgClientHUD_execgfxProcessSound_Parms gfxProcessSound_Parms;
	memcpy ( &gfxProcessSound_Parms.aThemeName, &aThemeName, 0x8 );
	memcpy ( &gfxProcessSound_Parms.aEventName, &aEventName, 0x8 );

	pFngfxProcessSound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngfxProcessSound, &gfxProcessSound_Parms, NULL );

	pFngfxProcessSound->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.IsInGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATgClientHUD::IsInGame ( )
{
	static UFunction* pFnIsInGame = NULL;

	if ( ! pFnIsInGame )
		pFnIsInGame = (UFunction*) UObject::GObjObjects()->GetIndex( 123586 );

	ATgClientHUD_execIsInGame_Parms IsInGame_Parms;

	pFnIsInGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsInGame, &IsInGame_Parms, NULL );

	pFnIsInGame->FunctionFlags |= 0x400;

	return IsInGame_Parms.ReturnValue;
};

// Function TgClient.TgClientHUD.IsLoggedIn
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATgClientHUD::IsLoggedIn ( )
{
	static UFunction* pFnIsLoggedIn = NULL;

	if ( ! pFnIsLoggedIn )
		pFnIsLoggedIn = (UFunction*) UObject::GObjObjects()->GetIndex( 123584 );

	ATgClientHUD_execIsLoggedIn_Parms IsLoggedIn_Parms;

	pFnIsLoggedIn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLoggedIn, &IsLoggedIn_Parms, NULL );

	pFnIsLoggedIn->FunctionFlags |= 0x400;

	return IsLoggedIn_Parms.ReturnValue;
};

// Function TgClient.TgClientHUD.GetSettingsData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataGroup_Settings*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTgDataGroup_Settings* ATgClientHUD::GetSettingsData ( )
{
	static UFunction* pFnGetSettingsData = NULL;

	if ( ! pFnGetSettingsData )
		pFnGetSettingsData = (UFunction*) UObject::GObjObjects()->GetIndex( 123582 );

	ATgClientHUD_execGetSettingsData_Parms GetSettingsData_Parms;

	pFnGetSettingsData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSettingsData, &GetSettingsData_Parms, NULL );

	pFnGetSettingsData->FunctionFlags |= 0x400;

	return GetSettingsData_Parms.ReturnValue;
};

// Function TgClient.TgClientHUD.GetEOMLobbyData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataGroup_EOMLobby*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTgDataGroup_EOMLobby* ATgClientHUD::GetEOMLobbyData ( )
{
	static UFunction* pFnGetEOMLobbyData = NULL;

	if ( ! pFnGetEOMLobbyData )
		pFnGetEOMLobbyData = (UFunction*) UObject::GObjObjects()->GetIndex( 123580 );

	ATgClientHUD_execGetEOMLobbyData_Parms GetEOMLobbyData_Parms;

	pFnGetEOMLobbyData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEOMLobbyData, &GetEOMLobbyData_Parms, NULL );

	pFnGetEOMLobbyData->FunctionFlags |= 0x400;

	return GetEOMLobbyData_Parms.ReturnValue;
};

// Function TgClient.TgClientHUD.GetLobbyData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataGroup_Lobby*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTgDataGroup_Lobby* ATgClientHUD::GetLobbyData ( )
{
	static UFunction* pFnGetLobbyData = NULL;

	if ( ! pFnGetLobbyData )
		pFnGetLobbyData = (UFunction*) UObject::GObjObjects()->GetIndex( 123578 );

	ATgClientHUD_execGetLobbyData_Parms GetLobbyData_Parms;

	pFnGetLobbyData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLobbyData, &GetLobbyData_Parms, NULL );

	pFnGetLobbyData->FunctionFlags |= 0x400;

	return GetLobbyData_Parms.ReturnValue;
};

// Function TgClient.TgClientHUD.GetGameData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataGroup_Game*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTgDataGroup_Game* ATgClientHUD::GetGameData ( )
{
	static UFunction* pFnGetGameData = NULL;

	if ( ! pFnGetGameData )
		pFnGetGameData = (UFunction*) UObject::GObjObjects()->GetIndex( 123576 );

	ATgClientHUD_execGetGameData_Parms GetGameData_Parms;

	pFnGetGameData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGameData, &GetGameData_Parms, NULL );

	pFnGetGameData->FunctionFlags |= 0x400;

	return GetGameData_Parms.ReturnValue;
};

// Function TgClient.TgClientHUD.GetDataHandler
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameDataHandler*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTgGameDataHandler* ATgClientHUD::GetDataHandler ( )
{
	static UFunction* pFnGetDataHandler = NULL;

	if ( ! pFnGetDataHandler )
		pFnGetDataHandler = (UFunction*) UObject::GObjObjects()->GetIndex( 123574 );

	ATgClientHUD_execGetDataHandler_Parms GetDataHandler_Parms;

	pFnGetDataHandler->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDataHandler, &GetDataHandler_Parms, NULL );

	pFnGetDataHandler->FunctionFlags |= 0x400;

	return GetDataHandler_Parms.ReturnValue;
};

// Function TgClient.TgClientHUD.OnMarshalEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FPointer                pMarEvent                      ( CPF_Parm )

void ATgClientHUD::OnMarshalEvent ( struct FPointer pMarEvent )
{
	static UFunction* pFnOnMarshalEvent = NULL;

	if ( ! pFnOnMarshalEvent )
		pFnOnMarshalEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 123572 );

	ATgClientHUD_execOnMarshalEvent_Parms OnMarshalEvent_Parms;
	memcpy ( &OnMarshalEvent_Parms.pMarEvent, &pMarEvent, 0x4 );

	pFnOnMarshalEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnMarshalEvent, &OnMarshalEvent_Parms, NULL );

	pFnOnMarshalEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.UnregisterMarshalCallback
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgClientHUD::UnregisterMarshalCallback ( )
{
	static UFunction* pFnUnregisterMarshalCallback = NULL;

	if ( ! pFnUnregisterMarshalCallback )
		pFnUnregisterMarshalCallback = (UFunction*) UObject::GObjObjects()->GetIndex( 123571 );

	ATgClientHUD_execUnregisterMarshalCallback_Parms UnregisterMarshalCallback_Parms;

	pFnUnregisterMarshalCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterMarshalCallback, &UnregisterMarshalCallback_Parms, NULL );

	pFnUnregisterMarshalCallback->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.RegisterMarshalCallback
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATgClientHUD::RegisterMarshalCallback ( )
{
	static UFunction* pFnRegisterMarshalCallback = NULL;

	if ( ! pFnRegisterMarshalCallback )
		pFnRegisterMarshalCallback = (UFunction*) UObject::GObjObjects()->GetIndex( 123569 );

	ATgClientHUD_execRegisterMarshalCallback_Parms RegisterMarshalCallback_Parms;

	pFnRegisterMarshalCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterMarshalCallback, &RegisterMarshalCallback_Parms, NULL );

	pFnRegisterMarshalCallback->FunctionFlags |= 0x400;

	return RegisterMarshalCallback_Parms.ReturnValue;
};

// Function TgClient.TgClientHUD.TutorialMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            msgId                          ( CPF_Parm )
// unsigned long                  bTips                          ( CPF_Parm )

void ATgClientHUD::TutorialMessage ( int msgId, unsigned long bTips )
{
	static UFunction* pFnTutorialMessage = NULL;

	if ( ! pFnTutorialMessage )
		pFnTutorialMessage = (UFunction*) UObject::GObjObjects()->GetIndex( 123566 );

	ATgClientHUD_execTutorialMessage_Parms TutorialMessage_Parms;
	TutorialMessage_Parms.msgId = msgId;
	TutorialMessage_Parms.bTips = bTips;

	pFnTutorialMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTutorialMessage, &TutorialMessage_Parms, NULL );

	pFnTutorialMessage->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.ResetViewCenterPoint
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgClientHUD::ResetViewCenterPoint ( )
{
	static UFunction* pFnResetViewCenterPoint = NULL;

	if ( ! pFnResetViewCenterPoint )
		pFnResetViewCenterPoint = (UFunction*) UObject::GObjObjects()->GetIndex( 123565 );

	ATgClientHUD_execResetViewCenterPoint_Parms ResetViewCenterPoint_Parms;

	pFnResetViewCenterPoint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetViewCenterPoint, &ResetViewCenterPoint_Parms, NULL );

	pFnResetViewCenterPoint->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.SetViewCenterPoint
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          fScale                         ( CPF_Parm )

void ATgClientHUD::SetViewCenterPoint ( float X, float Y, float fScale )
{
	static UFunction* pFnSetViewCenterPoint = NULL;

	if ( ! pFnSetViewCenterPoint )
		pFnSetViewCenterPoint = (UFunction*) UObject::GObjObjects()->GetIndex( 123561 );

	ATgClientHUD_execSetViewCenterPoint_Parms SetViewCenterPoint_Parms;
	SetViewCenterPoint_Parms.X = X;
	SetViewCenterPoint_Parms.Y = Y;
	SetViewCenterPoint_Parms.fScale = fScale;

	pFnSetViewCenterPoint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetViewCenterPoint, &SetViewCenterPoint_Parms, NULL );

	pFnSetViewCenterPoint->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.DisplayBadConnectionAlert
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgClientHUD::DisplayBadConnectionAlert ( )
{
	static UFunction* pFnDisplayBadConnectionAlert = NULL;

	if ( ! pFnDisplayBadConnectionAlert )
		pFnDisplayBadConnectionAlert = (UFunction*) UObject::GObjObjects()->GetIndex( 123560 );

	ATgClientHUD_execDisplayBadConnectionAlert_Parms DisplayBadConnectionAlert_Parms;

	pFnDisplayBadConnectionAlert->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisplayBadConnectionAlert, &DisplayBadConnectionAlert_Parms, NULL );

	pFnDisplayBadConnectionAlert->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.InitMainMoviePlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgClientHUD::InitMainMoviePlayer ( )
{
	static UFunction* pFnInitMainMoviePlayer = NULL;

	if ( ! pFnInitMainMoviePlayer )
		pFnInitMainMoviePlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 123559 );

	ATgClientHUD_execInitMainMoviePlayer_Parms InitMainMoviePlayer_Parms;

	pFnInitMainMoviePlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitMainMoviePlayer, &InitMainMoviePlayer_Parms, NULL );

	pFnInitMainMoviePlayer->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.ShowCursor
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bShow                          ( CPF_Parm )
// unsigned long                  bUpdateCapture                 ( CPF_OptionalParm | CPF_Parm )

void ATgClientHUD::ShowCursor ( unsigned long bShow, unsigned long bUpdateCapture )
{
	static UFunction* pFnShowCursor = NULL;

	if ( ! pFnShowCursor )
		pFnShowCursor = (UFunction*) UObject::GObjObjects()->GetIndex( 123556 );

	ATgClientHUD_execShowCursor_Parms ShowCursor_Parms;
	ShowCursor_Parms.bShow = bShow;
	ShowCursor_Parms.bUpdateCapture = bUpdateCapture;

	pFnShowCursor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowCursor, &ShowCursor_Parms, NULL );

	pFnShowCursor->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.CloseMovie
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          mp                             ( CPF_Parm )
// unsigned long                  bUnload                        ( CPF_OptionalParm | CPF_Parm )

void ATgClientHUD::CloseMovie ( class UTgMoviePlayer* mp, unsigned long bUnload )
{
	static UFunction* pFnCloseMovie = NULL;

	if ( ! pFnCloseMovie )
		pFnCloseMovie = (UFunction*) UObject::GObjObjects()->GetIndex( 123553 );

	ATgClientHUD_execCloseMovie_Parms CloseMovie_Parms;
	CloseMovie_Parms.mp = mp;
	CloseMovie_Parms.bUnload = bUnload;

	pFnCloseMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseMovie, &CloseMovie_Parms, NULL );

	pFnCloseMovie->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.CreateMovie
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  MovieClass                     ( CPF_Parm )
// unsigned long                  bAutoFocus                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bCaptureInput                  ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  TimingMode                     ( CPF_OptionalParm | CPF_Parm )

class UTgMoviePlayer* ATgClientHUD::CreateMovie ( class UClass* MovieClass, unsigned long bAutoFocus, unsigned long bCaptureInput, unsigned char TimingMode )
{
	static UFunction* pFnCreateMovie = NULL;

	if ( ! pFnCreateMovie )
		pFnCreateMovie = (UFunction*) UObject::GObjObjects()->GetIndex( 123547 );

	ATgClientHUD_execCreateMovie_Parms CreateMovie_Parms;
	CreateMovie_Parms.MovieClass = MovieClass;
	CreateMovie_Parms.bAutoFocus = bAutoFocus;
	CreateMovie_Parms.bCaptureInput = bCaptureInput;
	CreateMovie_Parms.TimingMode = TimingMode;

	pFnCreateMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateMovie, &CreateMovie_Parms, NULL );

	pFnCreateMovie->FunctionFlags |= 0x400;

	return CreateMovie_Parms.ReturnValue;
};

// Function TgClient.TgClientHUD.UnregisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgClientHUD::UnregisterEngineCallbacks ( )
{
	static UFunction* pFnUnregisterEngineCallbacks = NULL;

	if ( ! pFnUnregisterEngineCallbacks )
		pFnUnregisterEngineCallbacks = (UFunction*) UObject::GObjObjects()->GetIndex( 123546 );

	ATgClientHUD_execUnregisterEngineCallbacks_Parms UnregisterEngineCallbacks_Parms;

	pFnUnregisterEngineCallbacks->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterEngineCallbacks, &UnregisterEngineCallbacks_Parms, NULL );

	pFnUnregisterEngineCallbacks->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.RegisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgClientHUD::RegisterEngineCallbacks ( )
{
	static UFunction* pFnRegisterEngineCallbacks = NULL;

	if ( ! pFnRegisterEngineCallbacks )
		pFnRegisterEngineCallbacks = (UFunction*) UObject::GObjObjects()->GetIndex( 123545 );

	ATgClientHUD_execRegisterEngineCallbacks_Parms RegisterEngineCallbacks_Parms;

	pFnRegisterEngineCallbacks->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterEngineCallbacks, &RegisterEngineCallbacks_Parms, NULL );

	pFnRegisterEngineCallbacks->FunctionFlags |= 0x400;
};

// Function TgClient.TgClientHUD.DelegateOnMarshalEvent
// [0x00120000] 
// Parameters infos:
// struct FPointer                pMarEvent                      ( CPF_Parm )

void ATgClientHUD::DelegateOnMarshalEvent ( struct FPointer pMarEvent )
{
	static UFunction* pFnDelegateOnMarshalEvent = NULL;

	if ( ! pFnDelegateOnMarshalEvent )
		pFnDelegateOnMarshalEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 123540 );

	ATgClientHUD_execDelegateOnMarshalEvent_Parms DelegateOnMarshalEvent_Parms;
	memcpy ( &DelegateOnMarshalEvent_Parms.pMarEvent, &pMarEvent, 0x4 );

	this->ProcessEvent ( pFnDelegateOnMarshalEvent, &DelegateOnMarshalEvent_Parms, NULL );
};

// Function TgClient.TgDataChunk.usc_Unsubscribe
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgDataChunk::usc_Unsubscribe ( )
{
	static UFunction* pFnusc_Unsubscribe = NULL;

	if ( ! pFnusc_Unsubscribe )
		pFnusc_Unsubscribe = (UFunction*) UObject::GObjObjects()->GetIndex( 123460 );

	UTgDataChunk_execusc_Unsubscribe_Parms usc_Unsubscribe_Parms;

	pFnusc_Unsubscribe->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_Unsubscribe, &usc_Unsubscribe_Parms, NULL );

	pFnusc_Unsubscribe->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataChunk.usc_Subscribe
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgDataChunk::usc_Subscribe ( )
{
	static UFunction* pFnusc_Subscribe = NULL;

	if ( ! pFnusc_Subscribe )
		pFnusc_Subscribe = (UFunction*) UObject::GObjObjects()->GetIndex( 123459 );

	UTgDataChunk_execusc_Subscribe_Parms usc_Subscribe_Parms;

	pFnusc_Subscribe->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_Subscribe, &usc_Subscribe_Parms, NULL );

	pFnusc_Subscribe->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataChunk.usc_Unsubscribe_Delegate
// [0x00120000] 
// Parameters infos:

void UTgDataChunk::usc_Unsubscribe_Delegate ( )
{
	static UFunction* pFnusc_Unsubscribe_Delegate = NULL;

	if ( ! pFnusc_Unsubscribe_Delegate )
		pFnusc_Unsubscribe_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123418 );

	UTgDataChunk_execusc_Unsubscribe_Delegate_Parms usc_Unsubscribe_Delegate_Parms;

	this->ProcessEvent ( pFnusc_Unsubscribe_Delegate, &usc_Unsubscribe_Delegate_Parms, NULL );
};

// Function TgClient.TgDataChunk.usc_Subscribe_Delegate
// [0x00120000] 
// Parameters infos:

void UTgDataChunk::usc_Subscribe_Delegate ( )
{
	static UFunction* pFnusc_Subscribe_Delegate = NULL;

	if ( ! pFnusc_Subscribe_Delegate )
		pFnusc_Subscribe_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123420 );

	UTgDataChunk_execusc_Subscribe_Delegate_Parms usc_Subscribe_Delegate_Parms;

	this->ProcessEvent ( pFnusc_Subscribe_Delegate, &usc_Subscribe_Delegate_Parms, NULL );
};

// Function TgClient.TgDataChunk.GetPlayerController
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgPlayerController*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ATgPlayerController* UTgDataChunk::GetPlayerController ( )
{
	static UFunction* pFnGetPlayerController = NULL;

	if ( ! pFnGetPlayerController )
		pFnGetPlayerController = (UFunction*) UObject::GObjObjects()->GetIndex( 123457 );

	UTgDataChunk_execGetPlayerController_Parms GetPlayerController_Parms;

	pFnGetPlayerController->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPlayerController, &GetPlayerController_Parms, NULL );

	pFnGetPlayerController->FunctionFlags |= 0x400;

	return GetPlayerController_Parms.ReturnValue;
};

// Function TgClient.TgDataChunk.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgDataChunk::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123456 );

	UTgDataChunk_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataChunk.IsSubscribed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgDataChunk::IsSubscribed ( )
{
	static UFunction* pFnIsSubscribed = NULL;

	if ( ! pFnIsSubscribed )
		pFnIsSubscribed = (UFunction*) UObject::GObjObjects()->GetIndex( 123454 );

	UTgDataChunk_execIsSubscribed_Parms IsSubscribed_Parms;

	pFnIsSubscribed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsSubscribed, &IsSubscribed_Parms, NULL );

	pFnIsSubscribed->FunctionFlags |= 0x400;

	return IsSubscribed_Parms.ReturnValue;
};

// Function TgClient.TgDataChunk.SetDirty
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgDataChunk::SetDirty ( )
{
	static UFunction* pFnSetDirty = NULL;

	if ( ! pFnSetDirty )
		pFnSetDirty = (UFunction*) UObject::GObjObjects()->GetIndex( 123453 );

	UTgDataChunk_execSetDirty_Parms SetDirty_Parms;

	pFnSetDirty->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDirty, &SetDirty_Parms, NULL );

	pFnSetDirty->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataChunk.GetField
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FieldName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FASValue                NewValue                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UTgDataChunk::GetField ( struct FString FieldName, struct FASValue* NewValue )
{
	static UFunction* pFnGetField = NULL;

	if ( ! pFnGetField )
		pFnGetField = (UFunction*) UObject::GObjObjects()->GetIndex( 123449 );

	UTgDataChunk_execGetField_Parms GetField_Parms;
	memcpy ( &GetField_Parms.FieldName, &FieldName, 0xC );

	pFnGetField->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetField, &GetField_Parms, NULL );

	pFnGetField->FunctionFlags |= 0x400;

	if ( NewValue )
		memcpy ( NewValue, &GetField_Parms.NewValue, 0x1C );

	return GetField_Parms.ReturnValue;
};

// Function TgClient.TgDataChunk.SetField
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FieldName                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bCreateIfMissing               ( CPF_OptionalParm | CPF_Parm )
// struct FASValue                NewValue                       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UTgDataChunk::SetField ( struct FString FieldName, unsigned long bCreateIfMissing, struct FASValue* NewValue )
{
	static UFunction* pFnSetField = NULL;

	if ( ! pFnSetField )
		pFnSetField = (UFunction*) UObject::GObjObjects()->GetIndex( 123444 );

	UTgDataChunk_execSetField_Parms SetField_Parms;
	memcpy ( &SetField_Parms.FieldName, &FieldName, 0xC );
	SetField_Parms.bCreateIfMissing = bCreateIfMissing;

	pFnSetField->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetField, &SetField_Parms, NULL );

	pFnSetField->FunctionFlags |= 0x400;

	if ( NewValue )
		memcpy ( NewValue, &SetField_Parms.NewValue, 0x1C );

	return SetField_Parms.ReturnValue;
};

// Function TgClient.TgDataChunk.AddField
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 FieldName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FASValue                NewValue                       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UTgDataChunk::AddField ( struct FString FieldName, struct FASValue* NewValue )
{
	static UFunction* pFnAddField = NULL;

	if ( ! pFnAddField )
		pFnAddField = (UFunction*) UObject::GObjObjects()->GetIndex( 123441 );

	UTgDataChunk_execAddField_Parms AddField_Parms;
	memcpy ( &AddField_Parms.FieldName, &FieldName, 0xC );

	pFnAddField->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddField, &AddField_Parms, NULL );

	pFnAddField->FunctionFlags |= 0x400;

	if ( NewValue )
		memcpy ( NewValue, &AddField_Parms.NewValue, 0x1C );
};

// Function TgClient.TgDataChunk.ClearDelegates
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgDataChunk::ClearDelegates ( )
{
	static UFunction* pFnClearDelegates = NULL;

	if ( ! pFnClearDelegates )
		pFnClearDelegates = (UFunction*) UObject::GObjObjects()->GetIndex( 123440 );

	UTgDataChunk_execClearDelegates_Parms ClearDelegates_Parms;

	pFnClearDelegates->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearDelegates, &ClearDelegates_Parms, NULL );

	pFnClearDelegates->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataChunk.SetDelegates
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgDataChunk::SetDelegates ( )
{
	static UFunction* pFnSetDelegates = NULL;

	if ( ! pFnSetDelegates )
		pFnSetDelegates = (UFunction*) UObject::GObjObjects()->GetIndex( 123439 );

	UTgDataChunk_execSetDelegates_Parms SetDelegates_Parms;

	pFnSetDelegates->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDelegates, &SetDelegates_Parms, NULL );

	pFnSetDelegates->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataChunk.RemoveChild
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class UTgDataChunk*            Child                          ( CPF_Parm )
// unsigned long                  bClearDelegates                ( CPF_OptionalParm | CPF_Parm )

void UTgDataChunk::RemoveChild ( class UTgDataChunk* Child, unsigned long bClearDelegates )
{
	static UFunction* pFnRemoveChild = NULL;

	if ( ! pFnRemoveChild )
		pFnRemoveChild = (UFunction*) UObject::GObjObjects()->GetIndex( 123436 );

	UTgDataChunk_execRemoveChild_Parms RemoveChild_Parms;
	RemoveChild_Parms.Child = Child;
	RemoveChild_Parms.bClearDelegates = bClearDelegates;

	pFnRemoveChild->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveChild, &RemoveChild_Parms, NULL );

	pFnRemoveChild->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataChunk.AddChild
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataChunk*            Child                          ( CPF_Parm )

void UTgDataChunk::AddChild ( class UTgDataChunk* Child )
{
	static UFunction* pFnAddChild = NULL;

	if ( ! pFnAddChild )
		pFnAddChild = (UFunction*) UObject::GObjObjects()->GetIndex( 123434 );

	UTgDataChunk_execAddChild_Parms AddChild_Parms;
	AddChild_Parms.Child = Child;

	pFnAddChild->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddChild, &AddChild_Parms, NULL );

	pFnAddChild->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataChunk.DataUpdateEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgDataChunk::DataUpdateEvent ( )
{
	static UFunction* pFnDataUpdateEvent = NULL;

	if ( ! pFnDataUpdateEvent )
		pFnDataUpdateEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 123433 );

	UTgDataChunk_execDataUpdateEvent_Parms DataUpdateEvent_Parms;

	pFnDataUpdateEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDataUpdateEvent, &DataUpdateEvent_Parms, NULL );

	pFnDataUpdateEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataChunk.Update
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// unsigned long                  bSkipCallback                  ( CPF_OptionalParm | CPF_Parm )

void UTgDataChunk::Update ( float DeltaTime, unsigned long bSkipCallback )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->GetIndex( 123430 );

	UTgDataChunk_execUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;
	Update_Parms.bSkipCallback = bSkipCallback;

	pFnUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	pFnUpdate->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataChunk.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgDataChunk::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123427 );

	UTgDataChunk_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataHandler.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgDataHandler::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123708 );

	UTgDataHandler_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataHandler.QueueDirtyChunks
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataChunk*            Node                           ( CPF_Parm )

void UTgDataHandler::QueueDirtyChunks ( class UTgDataChunk* Node )
{
	static UFunction* pFnQueueDirtyChunks = NULL;

	if ( ! pFnQueueDirtyChunks )
		pFnQueueDirtyChunks = (UFunction*) UObject::GObjObjects()->GetIndex( 123706 );

	UTgDataHandler_execQueueDirtyChunks_Parms QueueDirtyChunks_Parms;
	QueueDirtyChunks_Parms.Node = Node;

	pFnQueueDirtyChunks->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueueDirtyChunks, &QueueDirtyChunks_Parms, NULL );

	pFnQueueDirtyChunks->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataHandler.Update
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// unsigned long                  bImmediate                     ( CPF_OptionalParm | CPF_Parm )

void UTgDataHandler::Update ( float DeltaTime, unsigned long bImmediate )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->GetIndex( 123703 );

	UTgDataHandler_execUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;
	Update_Parms.bImmediate = bImmediate;

	pFnUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	pFnUpdate->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataHandler.InitializeDataHandler
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          mp                             ( CPF_Parm )

void UTgDataHandler::InitializeDataHandler ( class UTgMoviePlayer* mp )
{
	static UFunction* pFnInitializeDataHandler = NULL;

	if ( ! pFnInitializeDataHandler )
		pFnInitializeDataHandler = (UFunction*) UObject::GObjObjects()->GetIndex( 123701 );

	UTgDataHandler_execInitializeDataHandler_Parms InitializeDataHandler_Parms;
	InitializeDataHandler_Parms.mp = mp;

	pFnInitializeDataHandler->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeDataHandler, &InitializeDataHandler_Parms, NULL );

	pFnInitializeDataHandler->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameViewportClient.GetSubtitleRegion
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// struct FVector2D               MinPos                         ( CPF_Parm | CPF_OutParm )
// struct FVector2D               MaxPos                         ( CPF_Parm | CPF_OutParm )

void UTgGameViewportClient::eventGetSubtitleRegion ( struct FVector2D* MinPos, struct FVector2D* MaxPos )
{
	static UFunction* pFnGetSubtitleRegion = NULL;

	if ( ! pFnGetSubtitleRegion )
		pFnGetSubtitleRegion = (UFunction*) UObject::GObjObjects()->GetIndex( 125235 );

	UTgGameViewportClient_eventGetSubtitleRegion_Parms GetSubtitleRegion_Parms;

	this->ProcessEvent ( pFnGetSubtitleRegion, &GetSubtitleRegion_Parms, NULL );

	if ( MinPos )
		memcpy ( MinPos, &GetSubtitleRegion_Parms.MinPos, 0x8 );

	if ( MaxPos )
		memcpy ( MaxPos, &GetSubtitleRegion_Parms.MaxPos, 0x8 );
};

// Function TgClient.TgGameViewportClient.PostRender
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UTgGameViewportClient::eventPostRender ( class UCanvas* Canvas )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->GetIndex( 125230 );

	UTgGameViewportClient_eventPostRender_Parms PostRender_Parms;
	PostRender_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function TgClient.TgGameViewportClient.GameSessionEnded
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGameViewportClient::eventGameSessionEnded ( )
{
	static UFunction* pFnGameSessionEnded = NULL;

	if ( ! pFnGameSessionEnded )
		pFnGameSessionEnded = (UFunction*) UObject::GObjObjects()->GetIndex( 125228 );

	UTgGameViewportClient_eventGameSessionEnded_Parms GameSessionEnded_Parms;

	this->ProcessEvent ( pFnGameSessionEnded, &GameSessionEnded_Parms, NULL );
};

// Function TgClient.TgGameViewportClient.IsGfxMovieCapturingMouseInput
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameViewportClient::IsGfxMovieCapturingMouseInput ( )
{
	static UFunction* pFnIsGfxMovieCapturingMouseInput = NULL;

	if ( ! pFnIsGfxMovieCapturingMouseInput )
		pFnIsGfxMovieCapturingMouseInput = (UFunction*) UObject::GObjObjects()->GetIndex( 125226 );

	UTgGameViewportClient_execIsGfxMovieCapturingMouseInput_Parms IsGfxMovieCapturingMouseInput_Parms;

	pFnIsGfxMovieCapturingMouseInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsGfxMovieCapturingMouseInput, &IsGfxMovieCapturingMouseInput_Parms, NULL );

	pFnIsGfxMovieCapturingMouseInput->FunctionFlags |= 0x400;

	return IsGfxMovieCapturingMouseInput_Parms.ReturnValue;
};

// Function TgClient.TgGameViewportClient.NativeGameSessionEnded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameViewportClient::NativeGameSessionEnded ( )
{
	static UFunction* pFnNativeGameSessionEnded = NULL;

	if ( ! pFnNativeGameSessionEnded )
		pFnNativeGameSessionEnded = (UFunction*) UObject::GObjObjects()->GetIndex( 125225 );

	UTgGameViewportClient_execNativeGameSessionEnded_Parms NativeGameSessionEnded_Parms;

	pFnNativeGameSessionEnded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativeGameSessionEnded, &NativeGameSessionEnded_Parms, NULL );

	pFnNativeGameSessionEnded->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameViewportClient.DrawTransition
// [0x00020000] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UTgGameViewportClient::DrawTransition ( class UCanvas* Canvas )
{
	static UFunction* pFnDrawTransition = NULL;

	if ( ! pFnDrawTransition )
		pFnDrawTransition = (UFunction*) UObject::GObjObjects()->GetIndex( 125223 );

	UTgGameViewportClient_execDrawTransition_Parms DrawTransition_Parms;
	DrawTransition_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDrawTransition, &DrawTransition_Parms, NULL );
};

// Function TgClient.TgGfxScene.SendGFxData
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )

void UTgGfxScene::eventSendGFxData ( class UGFxObject* Data )
{
	static UFunction* pFnSendGFxData = NULL;

	if ( ! pFnSendGFxData )
		pFnSendGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 125268 );

	UTgGfxScene_eventSendGFxData_Parms SendGFxData_Parms;
	SendGFxData_Parms.Data = Data;

	this->ProcessEvent ( pFnSendGFxData, &SendGFxData_Parms, NULL );
};

// Function TgClient.TgGfxScene.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxScene::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125267 );

	UTgGfxScene_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxScene.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pMoviePlayer                   ( CPF_Parm )

void UTgGfxScene::Initialize ( class UTgGameMoviePlayer* pMoviePlayer )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125265 );

	UTgGfxScene_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMoviePlayer = pMoviePlayer;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxScene.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )

void UTgGfxScene::ReceiveGFxData ( class UGFxObject* Data )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 125263 );

	UTgGfxScene_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.Data = Data;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxScene.DelegateGFxData
// [0x00120000] 
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )

void UTgGfxScene::DelegateGFxData ( class UGFxObject* Data )
{
	static UFunction* pFnDelegateGFxData = NULL;

	if ( ! pFnDelegateGFxData )
		pFnDelegateGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 125243 );

	UTgGfxScene_execDelegateGFxData_Parms DelegateGFxData_Parms;
	DelegateGFxData_Parms.Data = Data;

	this->ProcessEvent ( pFnDelegateGFxData, &DelegateGFxData_Parms, NULL );
};

// Function TgClient.TgGfxAchievementPopup.QueueAchievement
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxAchievementPopup::eventQueueAchievement ( )
{
	static UFunction* pFnQueueAchievement = NULL;

	if ( ! pFnQueueAchievement )
		pFnQueueAchievement = (UFunction*) UObject::GObjObjects()->GetIndex( 125273 );

	UTgGfxAchievementPopup_eventQueueAchievement_Parms QueueAchievement_Parms;

	this->ProcessEvent ( pFnQueueAchievement, &QueueAchievement_Parms, NULL );
};

// Function TgClient.TgGfxAchievementPopup.asc_QueueAchievement
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxAchievementPopup::asc_QueueAchievement ( )
{
	static UFunction* pFnasc_QueueAchievement = NULL;

	if ( ! pFnasc_QueueAchievement )
		pFnasc_QueueAchievement = (UFunction*) UObject::GObjObjects()->GetIndex( 125272 );

	UTgGfxAchievementPopup_execasc_QueueAchievement_Parms asc_QueueAchievement_Parms;

	this->ProcessEvent ( pFnasc_QueueAchievement, &asc_QueueAchievement_Parms, NULL );
};

// Function TgClient.TgGfxAchievementPopup.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pMoviePlayer                   ( CPF_Parm )

void UTgGfxAchievementPopup::Initialize ( class UTgGameMoviePlayer* pMoviePlayer )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125270 );

	UTgGfxAchievementPopup_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMoviePlayer = pMoviePlayer;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAchievementSelection.UpdateSelectedAchievements
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxAchievementSelection::eventUpdateSelectedAchievements ( )
{
	static UFunction* pFnUpdateSelectedAchievements = NULL;

	if ( ! pFnUpdateSelectedAchievements )
		pFnUpdateSelectedAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 125292 );

	UTgGfxAchievementSelection_eventUpdateSelectedAchievements_Parms UpdateSelectedAchievements_Parms;

	this->ProcessEvent ( pFnUpdateSelectedAchievements, &UpdateSelectedAchievements_Parms, NULL );
};

// Function TgClient.TgGfxAchievementSelection.ASC_UpdateSelectedAchievements
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxAchievementSelection::ASC_UpdateSelectedAchievements ( )
{
	static UFunction* pFnASC_UpdateSelectedAchievements = NULL;

	if ( ! pFnASC_UpdateSelectedAchievements )
		pFnASC_UpdateSelectedAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 125291 );

	UTgGfxAchievementSelection_execASC_UpdateSelectedAchievements_Parms ASC_UpdateSelectedAchievements_Parms;

	this->ProcessEvent ( pFnASC_UpdateSelectedAchievements, &ASC_UpdateSelectedAchievements_Parms, NULL );
};

// Function TgClient.TgGfxAchievementSelection.UpdateScreen
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxAchievementSelection::eventUpdateScreen ( )
{
	static UFunction* pFnUpdateScreen = NULL;

	if ( ! pFnUpdateScreen )
		pFnUpdateScreen = (UFunction*) UObject::GObjObjects()->GetIndex( 125290 );

	UTgGfxAchievementSelection_eventUpdateScreen_Parms UpdateScreen_Parms;

	this->ProcessEvent ( pFnUpdateScreen, &UpdateScreen_Parms, NULL );
};

// Function TgClient.TgGfxAchievementSelection.ASC_UpdateScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxAchievementSelection::ASC_UpdateScreen ( )
{
	static UFunction* pFnASC_UpdateScreen = NULL;

	if ( ! pFnASC_UpdateScreen )
		pFnASC_UpdateScreen = (UFunction*) UObject::GObjObjects()->GetIndex( 125289 );

	UTgGfxAchievementSelection_execASC_UpdateScreen_Parms ASC_UpdateScreen_Parms;

	this->ProcessEvent ( pFnASC_UpdateScreen, &ASC_UpdateScreen_Parms, NULL );
};

// Function TgClient.TgGfxAchievementSelection.USC_ApplySelections
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            as1                            ( CPF_Parm )
// int                            as2                            ( CPF_Parm )
// int                            as3                            ( CPF_Parm )
// int                            as4                            ( CPF_Parm )

void UTgGfxAchievementSelection::USC_ApplySelections ( int as1, int as2, int as3, int as4 )
{
	static UFunction* pFnUSC_ApplySelections = NULL;

	if ( ! pFnUSC_ApplySelections )
		pFnUSC_ApplySelections = (UFunction*) UObject::GObjObjects()->GetIndex( 125284 );

	UTgGfxAchievementSelection_execUSC_ApplySelections_Parms USC_ApplySelections_Parms;
	USC_ApplySelections_Parms.as1 = as1;
	USC_ApplySelections_Parms.as2 = as2;
	USC_ApplySelections_Parms.as3 = as3;
	USC_ApplySelections_Parms.as4 = as4;

	pFnUSC_ApplySelections->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ApplySelections, &USC_ApplySelections_Parms, NULL );

	pFnUSC_ApplySelections->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAchievementSelection.USC_ApplySelections_Delegate
// [0x00120000] 
// Parameters infos:
// int                            as1                            ( CPF_Parm )
// int                            as2                            ( CPF_Parm )
// int                            as3                            ( CPF_Parm )
// int                            as4                            ( CPF_Parm )

void UTgGfxAchievementSelection::USC_ApplySelections_Delegate ( int as1, int as2, int as3, int as4 )
{
	static UFunction* pFnUSC_ApplySelections_Delegate = NULL;

	if ( ! pFnUSC_ApplySelections_Delegate )
		pFnUSC_ApplySelections_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125275 );

	UTgGfxAchievementSelection_execUSC_ApplySelections_Delegate_Parms USC_ApplySelections_Delegate_Parms;
	USC_ApplySelections_Delegate_Parms.as1 = as1;
	USC_ApplySelections_Delegate_Parms.as2 = as2;
	USC_ApplySelections_Delegate_Parms.as3 = as3;
	USC_ApplySelections_Delegate_Parms.as4 = as4;

	this->ProcessEvent ( pFnUSC_ApplySelections_Delegate, &USC_ApplySelections_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxAchievementSelection.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxAchievementSelection::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125279 );

	UTgGfxAchievementSelection_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAchievementSelection.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxAchievementSelection::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125277 );

	UTgGfxAchievementSelection_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAcquisitionPopup.DoShowAcquisition
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )

void UTgGfxAcquisitionPopup::eventDoShowAcquisition ( class UGFxObject* Data )
{
	static UFunction* pFnDoShowAcquisition = NULL;

	if ( ! pFnDoShowAcquisition )
		pFnDoShowAcquisition = (UFunction*) UObject::GObjObjects()->GetIndex( 125332 );

	UTgGfxAcquisitionPopup_eventDoShowAcquisition_Parms DoShowAcquisition_Parms;
	DoShowAcquisition_Parms.Data = Data;

	this->ProcessEvent ( pFnDoShowAcquisition, &DoShowAcquisition_Parms, NULL );
};

// Function TgClient.TgGfxAcquisitionPopup.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxAcquisitionPopup::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125330 );

	UTgGfxAcquisitionPopup_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAcquisitionPopup.ShowAcquisition
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )

void UTgGfxAcquisitionPopup::ShowAcquisition ( class UGFxObject* Data )
{
	static UFunction* pFnShowAcquisition = NULL;

	if ( ! pFnShowAcquisition )
		pFnShowAcquisition = (UFunction*) UObject::GObjObjects()->GetIndex( 125328 );

	UTgGfxAcquisitionPopup_execShowAcquisition_Parms ShowAcquisition_Parms;
	ShowAcquisition_Parms.Data = Data;

	this->ProcessEvent ( pFnShowAcquisition, &ShowAcquisition_Parms, NULL );
};

// Function TgClient.TgGfxBooster.USC_ShowPurchasePopup
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ItemId                         ( CPF_Parm )
// int                            nQuantity                      ( CPF_Parm )

void UTgGfxBooster::USC_ShowPurchasePopup ( int ItemId, int nQuantity )
{
	static UFunction* pFnUSC_ShowPurchasePopup = NULL;

	if ( ! pFnUSC_ShowPurchasePopup )
		pFnUSC_ShowPurchasePopup = (UFunction*) UObject::GObjObjects()->GetIndex( 125340 );

	UTgGfxBooster_execUSC_ShowPurchasePopup_Parms USC_ShowPurchasePopup_Parms;
	USC_ShowPurchasePopup_Parms.ItemId = ItemId;
	USC_ShowPurchasePopup_Parms.nQuantity = nQuantity;

	pFnUSC_ShowPurchasePopup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ShowPurchasePopup, &USC_ShowPurchasePopup_Parms, NULL );

	pFnUSC_ShowPurchasePopup->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxBooster.USC_ShowPurchasePopup_Delegate
// [0x00120000] 
// Parameters infos:
// int                            ItemId                         ( CPF_Parm )
// int                            nQuantity                      ( CPF_Parm )

void UTgGfxBooster::USC_ShowPurchasePopup_Delegate ( int ItemId, int nQuantity )
{
	static UFunction* pFnUSC_ShowPurchasePopup_Delegate = NULL;

	if ( ! pFnUSC_ShowPurchasePopup_Delegate )
		pFnUSC_ShowPurchasePopup_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125336 );

	UTgGfxBooster_execUSC_ShowPurchasePopup_Delegate_Parms USC_ShowPurchasePopup_Delegate_Parms;
	USC_ShowPurchasePopup_Delegate_Parms.ItemId = ItemId;
	USC_ShowPurchasePopup_Delegate_Parms.nQuantity = nQuantity;

	this->ProcessEvent ( pFnUSC_ShowPurchasePopup_Delegate, &USC_ShowPurchasePopup_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxBooster.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxBooster::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125334 );

	UTgGfxBooster_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxBrowser.SetControls
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  prevDisabled                   ( CPF_Parm )
// unsigned long                  nextDisabled                   ( CPF_Parm )

void UTgGfxBrowser::eventSetControls ( unsigned long prevDisabled, unsigned long nextDisabled )
{
	static UFunction* pFnSetControls = NULL;

	if ( ! pFnSetControls )
		pFnSetControls = (UFunction*) UObject::GObjObjects()->GetIndex( 125368 );

	UTgGfxBrowser_eventSetControls_Parms SetControls_Parms;
	SetControls_Parms.prevDisabled = prevDisabled;
	SetControls_Parms.nextDisabled = nextDisabled;

	this->ProcessEvent ( pFnSetControls, &SetControls_Parms, NULL );
};

// Function TgClient.TgGfxBrowser.ASC_SetControls
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  prevDisabled                   ( CPF_Parm )
// unsigned long                  nextDisabled                   ( CPF_Parm )

void UTgGfxBrowser::ASC_SetControls ( unsigned long prevDisabled, unsigned long nextDisabled )
{
	static UFunction* pFnASC_SetControls = NULL;

	if ( ! pFnASC_SetControls )
		pFnASC_SetControls = (UFunction*) UObject::GObjObjects()->GetIndex( 125365 );

	UTgGfxBrowser_execASC_SetControls_Parms ASC_SetControls_Parms;
	ASC_SetControls_Parms.prevDisabled = prevDisabled;
	ASC_SetControls_Parms.nextDisabled = nextDisabled;

	this->ProcessEvent ( pFnASC_SetControls, &ASC_SetControls_Parms, NULL );
};

// Function TgClient.TgGfxBrowser.ToggleControls
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  showNav                        ( CPF_Parm )

void UTgGfxBrowser::eventToggleControls ( unsigned long showNav )
{
	static UFunction* pFnToggleControls = NULL;

	if ( ! pFnToggleControls )
		pFnToggleControls = (UFunction*) UObject::GObjObjects()->GetIndex( 125363 );

	UTgGfxBrowser_eventToggleControls_Parms ToggleControls_Parms;
	ToggleControls_Parms.showNav = showNav;

	this->ProcessEvent ( pFnToggleControls, &ToggleControls_Parms, NULL );
};

// Function TgClient.TgGfxBrowser.ASC_ToggleControls
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  showNav                        ( CPF_Parm )

void UTgGfxBrowser::ASC_ToggleControls ( unsigned long showNav )
{
	static UFunction* pFnASC_ToggleControls = NULL;

	if ( ! pFnASC_ToggleControls )
		pFnASC_ToggleControls = (UFunction*) UObject::GObjObjects()->GetIndex( 125361 );

	UTgGfxBrowser_execASC_ToggleControls_Parms ASC_ToggleControls_Parms;
	ASC_ToggleControls_Parms.showNav = showNav;

	this->ProcessEvent ( pFnASC_ToggleControls, &ASC_ToggleControls_Parms, NULL );
};

// Function TgClient.TgGfxBrowser.USC_OnNavigate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            navId                          ( CPF_Parm )

void UTgGfxBrowser::USC_OnNavigate ( int navId )
{
	static UFunction* pFnUSC_OnNavigate = NULL;

	if ( ! pFnUSC_OnNavigate )
		pFnUSC_OnNavigate = (UFunction*) UObject::GObjObjects()->GetIndex( 125359 );

	UTgGfxBrowser_execUSC_OnNavigate_Parms USC_OnNavigate_Parms;
	USC_OnNavigate_Parms.navId = navId;

	pFnUSC_OnNavigate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OnNavigate, &USC_OnNavigate_Parms, NULL );

	pFnUSC_OnNavigate->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxBrowser.USC_OnNavigate_Delegate
// [0x00120000] 
// Parameters infos:
// int                            navId                          ( CPF_Parm )

void UTgGfxBrowser::USC_OnNavigate_Delegate ( int navId )
{
	static UFunction* pFnUSC_OnNavigate_Delegate = NULL;

	if ( ! pFnUSC_OnNavigate_Delegate )
		pFnUSC_OnNavigate_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125345 );

	UTgGfxBrowser_execUSC_OnNavigate_Delegate_Parms USC_OnNavigate_Delegate_Parms;
	USC_OnNavigate_Delegate_Parms.navId = navId;

	this->ProcessEvent ( pFnUSC_OnNavigate_Delegate, &USC_OnNavigate_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxBrowser.USC_OnResize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxBrowser::USC_OnResize ( )
{
	static UFunction* pFnUSC_OnResize = NULL;

	if ( ! pFnUSC_OnResize )
		pFnUSC_OnResize = (UFunction*) UObject::GObjObjects()->GetIndex( 125357 );

	UTgGfxBrowser_execUSC_OnResize_Parms USC_OnResize_Parms;

	pFnUSC_OnResize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OnResize, &USC_OnResize_Parms, NULL );

	pFnUSC_OnResize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxBrowser.USC_OnResize_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxBrowser::USC_OnResize_Delegate ( )
{
	static UFunction* pFnUSC_OnResize_Delegate = NULL;

	if ( ! pFnUSC_OnResize_Delegate )
		pFnUSC_OnResize_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125347 );

	UTgGfxBrowser_execUSC_OnResize_Delegate_Parms USC_OnResize_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_OnResize_Delegate, &USC_OnResize_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxBrowser.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxBrowser::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125356 );

	UTgGfxBrowser_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxBrowser.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxBrowser::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125354 );

	UTgGfxBrowser_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChallengeList.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxChallengeList::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 125436 );

	UTgGfxChallengeList_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChallengeList.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxChallengeList::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125434 );

	UTgGfxChallengeList_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChallengeLobby.SortDifficulties
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FBotDifficultyOption    A                              ( CPF_Parm )
// struct FBotDifficultyOption    B                              ( CPF_Parm )

int UTgGfxChallengeLobby::SortDifficulties ( struct FBotDifficultyOption A, struct FBotDifficultyOption B )
{
	static UFunction* pFnSortDifficulties = NULL;

	if ( ! pFnSortDifficulties )
		pFnSortDifficulties = (UFunction*) UObject::GObjObjects()->GetIndex( 125541 );

	UTgGfxChallengeLobby_execSortDifficulties_Parms SortDifficulties_Parms;
	memcpy ( &SortDifficulties_Parms.A, &A, 0x10 );
	memcpy ( &SortDifficulties_Parms.B, &B, 0x10 );

	this->ProcessEvent ( pFnSortDifficulties, &SortDifficulties_Parms, NULL );

	return SortDifficulties_Parms.ReturnValue;
};

// Function TgClient.TgGfxChallengeLobby.SortByBotName
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FBotData                A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FBotData                B                              ( CPF_Parm | CPF_NeedCtorLink )

int UTgGfxChallengeLobby::SortByBotName ( struct FBotData A, struct FBotData B )
{
	static UFunction* pFnSortByBotName = NULL;

	if ( ! pFnSortByBotName )
		pFnSortByBotName = (UFunction*) UObject::GObjObjects()->GetIndex( 125537 );

	UTgGfxChallengeLobby_execSortByBotName_Parms SortByBotName_Parms;
	memcpy ( &SortByBotName_Parms.A, &A, 0x1C );
	memcpy ( &SortByBotName_Parms.B, &B, 0x1C );

	this->ProcessEvent ( pFnSortByBotName, &SortByBotName_Parms, NULL );

	return SortByBotName_Parms.ReturnValue;
};

// Function TgClient.TgGfxChallengeLobby.SortBots
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxChallengeLobby::eventSortBots ( )
{
	static UFunction* pFnSortBots = NULL;

	if ( ! pFnSortBots )
		pFnSortBots = (UFunction*) UObject::GObjObjects()->GetIndex( 125535 );

	UTgGfxChallengeLobby_eventSortBots_Parms SortBots_Parms;

	this->ProcessEvent ( pFnSortBots, &SortBots_Parms, NULL );
};

// Function TgClient.TgGfxChallengeLobby.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxChallengeLobby::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 125533 );

	UTgGfxChallengeLobby_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChallengeLobby.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxChallengeLobby::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125532 );

	UTgGfxChallengeLobby_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChallengeLobby.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxChallengeLobby::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125530 );

	UTgGfxChallengeLobby_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChallengeOptions.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxChallengeOptions::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 125585 );

	UTgGfxChallengeOptions_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChallengeOptions.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxChallengeOptions::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125583 );

	UTgGfxChallengeOptions_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxCharacterBuilder.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxCharacterBuilder::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 125717 );

	UTgGfxCharacterBuilder_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxCharacterBuilder.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxCharacterBuilder::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125716 );

	UTgGfxCharacterBuilder_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxCharacterBuilder.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxCharacterBuilder::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125714 );

	UTgGfxCharacterBuilder_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChatModal.SetChannelMembers
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )

void UTgGfxChatModal::eventSetChannelMembers ( class UGFxObject* Data )
{
	static UFunction* pFnSetChannelMembers = NULL;

	if ( ! pFnSetChannelMembers )
		pFnSetChannelMembers = (UFunction*) UObject::GObjObjects()->GetIndex( 125750 );

	UTgGfxChatModal_eventSetChannelMembers_Parms SetChannelMembers_Parms;
	SetChannelMembers_Parms.Data = Data;

	this->ProcessEvent ( pFnSetChannelMembers, &SetChannelMembers_Parms, NULL );
};

// Function TgClient.TgGfxChatModal.UpdateChannelMembers
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UGFxObject*              Obj                            ( CPF_Parm )

void UTgGfxChatModal::UpdateChannelMembers ( class UGFxObject* Obj )
{
	static UFunction* pFnUpdateChannelMembers = NULL;

	if ( ! pFnUpdateChannelMembers )
		pFnUpdateChannelMembers = (UFunction*) UObject::GObjObjects()->GetIndex( 125748 );

	UTgGfxChatModal_execUpdateChannelMembers_Parms UpdateChannelMembers_Parms;
	UpdateChannelMembers_Parms.Obj = Obj;

	this->ProcessEvent ( pFnUpdateChannelMembers, &UpdateChannelMembers_Parms, NULL );
};

// Function TgClient.TgGfxChatModal.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxChatModal::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125747 );

	UTgGfxChatModal_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChatModal.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxChatModal::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125745 );

	UTgGfxChatModal_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanAdmin.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxClanAdmin::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125788 );

	UTgGfxClanAdmin_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanAdmin.UpdateClanNameChange
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxClanAdmin::eventUpdateClanNameChange ( )
{
	static UFunction* pFnUpdateClanNameChange = NULL;

	if ( ! pFnUpdateClanNameChange )
		pFnUpdateClanNameChange = (UFunction*) UObject::GObjObjects()->GetIndex( 125787 );

	UTgGfxClanAdmin_eventUpdateClanNameChange_Parms UpdateClanNameChange_Parms;

	this->ProcessEvent ( pFnUpdateClanNameChange, &UpdateClanNameChange_Parms, NULL );
};

// Function TgClient.TgGfxClanAdmin.ASC_UpdateClanNameChange
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxClanAdmin::ASC_UpdateClanNameChange ( )
{
	static UFunction* pFnASC_UpdateClanNameChange = NULL;

	if ( ! pFnASC_UpdateClanNameChange )
		pFnASC_UpdateClanNameChange = (UFunction*) UObject::GObjObjects()->GetIndex( 125786 );

	UTgGfxClanAdmin_execASC_UpdateClanNameChange_Parms ASC_UpdateClanNameChange_Parms;

	this->ProcessEvent ( pFnASC_UpdateClanNameChange, &ASC_UpdateClanNameChange_Parms, NULL );
};

// Function TgClient.TgGfxClanAdmin.UpdateApplicationData
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxClanAdmin::eventUpdateApplicationData ( )
{
	static UFunction* pFnUpdateApplicationData = NULL;

	if ( ! pFnUpdateApplicationData )
		pFnUpdateApplicationData = (UFunction*) UObject::GObjObjects()->GetIndex( 125785 );

	UTgGfxClanAdmin_eventUpdateApplicationData_Parms UpdateApplicationData_Parms;

	this->ProcessEvent ( pFnUpdateApplicationData, &UpdateApplicationData_Parms, NULL );
};

// Function TgClient.TgGfxClanAdmin.ASC_UpdateApplicationData
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxClanAdmin::ASC_UpdateApplicationData ( )
{
	static UFunction* pFnASC_UpdateApplicationData = NULL;

	if ( ! pFnASC_UpdateApplicationData )
		pFnASC_UpdateApplicationData = (UFunction*) UObject::GObjObjects()->GetIndex( 125784 );

	UTgGfxClanAdmin_execASC_UpdateApplicationData_Parms ASC_UpdateApplicationData_Parms;

	this->ProcessEvent ( pFnASC_UpdateApplicationData, &ASC_UpdateApplicationData_Parms, NULL );
};

// Function TgClient.TgGfxClanAdmin.UpdatePlayerInvites
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxClanAdmin::eventUpdatePlayerInvites ( )
{
	static UFunction* pFnUpdatePlayerInvites = NULL;

	if ( ! pFnUpdatePlayerInvites )
		pFnUpdatePlayerInvites = (UFunction*) UObject::GObjObjects()->GetIndex( 125783 );

	UTgGfxClanAdmin_eventUpdatePlayerInvites_Parms UpdatePlayerInvites_Parms;

	this->ProcessEvent ( pFnUpdatePlayerInvites, &UpdatePlayerInvites_Parms, NULL );
};

// Function TgClient.TgGfxClanAdmin.ASC_UpdatePlayerInvites
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxClanAdmin::ASC_UpdatePlayerInvites ( )
{
	static UFunction* pFnASC_UpdatePlayerInvites = NULL;

	if ( ! pFnASC_UpdatePlayerInvites )
		pFnASC_UpdatePlayerInvites = (UFunction*) UObject::GObjObjects()->GetIndex( 125782 );

	UTgGfxClanAdmin_execASC_UpdatePlayerInvites_Parms ASC_UpdatePlayerInvites_Parms;

	this->ProcessEvent ( pFnASC_UpdatePlayerInvites, &ASC_UpdatePlayerInvites_Parms, NULL );
};

// Function TgClient.TgGfxClanAdmin.UpdateClanData
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxClanAdmin::eventUpdateClanData ( )
{
	static UFunction* pFnUpdateClanData = NULL;

	if ( ! pFnUpdateClanData )
		pFnUpdateClanData = (UFunction*) UObject::GObjObjects()->GetIndex( 125781 );

	UTgGfxClanAdmin_eventUpdateClanData_Parms UpdateClanData_Parms;

	this->ProcessEvent ( pFnUpdateClanData, &UpdateClanData_Parms, NULL );
};

// Function TgClient.TgGfxClanAdmin.ASC_UpdateClanData
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxClanAdmin::ASC_UpdateClanData ( )
{
	static UFunction* pFnASC_UpdateClanData = NULL;

	if ( ! pFnASC_UpdateClanData )
		pFnASC_UpdateClanData = (UFunction*) UObject::GObjObjects()->GetIndex( 125780 );

	UTgGfxClanAdmin_execASC_UpdateClanData_Parms ASC_UpdateClanData_Parms;

	this->ProcessEvent ( pFnASC_UpdateClanData, &ASC_UpdateClanData_Parms, NULL );
};

// Function TgClient.TgGfxClanAdmin.USC_DeclineClanApp
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nAppId                         ( CPF_Parm )

void UTgGfxClanAdmin::USC_DeclineClanApp ( int nAppId )
{
	static UFunction* pFnUSC_DeclineClanApp = NULL;

	if ( ! pFnUSC_DeclineClanApp )
		pFnUSC_DeclineClanApp = (UFunction*) UObject::GObjObjects()->GetIndex( 125778 );

	UTgGfxClanAdmin_execUSC_DeclineClanApp_Parms USC_DeclineClanApp_Parms;
	USC_DeclineClanApp_Parms.nAppId = nAppId;

	pFnUSC_DeclineClanApp->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_DeclineClanApp, &USC_DeclineClanApp_Parms, NULL );

	pFnUSC_DeclineClanApp->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanAdmin.USC_AcceptClanApp
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nAppId                         ( CPF_Parm )

void UTgGfxClanAdmin::USC_AcceptClanApp ( int nAppId )
{
	static UFunction* pFnUSC_AcceptClanApp = NULL;

	if ( ! pFnUSC_AcceptClanApp )
		pFnUSC_AcceptClanApp = (UFunction*) UObject::GObjObjects()->GetIndex( 125776 );

	UTgGfxClanAdmin_execUSC_AcceptClanApp_Parms USC_AcceptClanApp_Parms;
	USC_AcceptClanApp_Parms.nAppId = nAppId;

	pFnUSC_AcceptClanApp->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_AcceptClanApp, &USC_AcceptClanApp_Parms, NULL );

	pFnUSC_AcceptClanApp->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanAdmin.USC_UpdateJoinTypeRegion
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nJoinTypeId                    ( CPF_Parm )
// int                            nRegionId                      ( CPF_Parm )

void UTgGfxClanAdmin::USC_UpdateJoinTypeRegion ( int nJoinTypeId, int nRegionId )
{
	static UFunction* pFnUSC_UpdateJoinTypeRegion = NULL;

	if ( ! pFnUSC_UpdateJoinTypeRegion )
		pFnUSC_UpdateJoinTypeRegion = (UFunction*) UObject::GObjObjects()->GetIndex( 125773 );

	UTgGfxClanAdmin_execUSC_UpdateJoinTypeRegion_Parms USC_UpdateJoinTypeRegion_Parms;
	USC_UpdateJoinTypeRegion_Parms.nJoinTypeId = nJoinTypeId;
	USC_UpdateJoinTypeRegion_Parms.nRegionId = nRegionId;

	pFnUSC_UpdateJoinTypeRegion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_UpdateJoinTypeRegion, &USC_UpdateJoinTypeRegion_Parms, NULL );

	pFnUSC_UpdateJoinTypeRegion->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanAdmin.USC_UpdateClanNameAndTag
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sTag                           ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxClanAdmin::USC_UpdateClanNameAndTag ( struct FString sName, struct FString sTag )
{
	static UFunction* pFnUSC_UpdateClanNameAndTag = NULL;

	if ( ! pFnUSC_UpdateClanNameAndTag )
		pFnUSC_UpdateClanNameAndTag = (UFunction*) UObject::GObjObjects()->GetIndex( 125770 );

	UTgGfxClanAdmin_execUSC_UpdateClanNameAndTag_Parms USC_UpdateClanNameAndTag_Parms;
	memcpy ( &USC_UpdateClanNameAndTag_Parms.sName, &sName, 0xC );
	memcpy ( &USC_UpdateClanNameAndTag_Parms.sTag, &sTag, 0xC );

	pFnUSC_UpdateClanNameAndTag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_UpdateClanNameAndTag, &USC_UpdateClanNameAndTag_Parms, NULL );

	pFnUSC_UpdateClanNameAndTag->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanAdmin.USC_DeclineClanApp_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nAppId                         ( CPF_Parm )

void UTgGfxClanAdmin::USC_DeclineClanApp_Delegate ( int nAppId )
{
	static UFunction* pFnUSC_DeclineClanApp_Delegate = NULL;

	if ( ! pFnUSC_DeclineClanApp_Delegate )
		pFnUSC_DeclineClanApp_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125757 );

	UTgGfxClanAdmin_execUSC_DeclineClanApp_Delegate_Parms USC_DeclineClanApp_Delegate_Parms;
	USC_DeclineClanApp_Delegate_Parms.nAppId = nAppId;

	this->ProcessEvent ( pFnUSC_DeclineClanApp_Delegate, &USC_DeclineClanApp_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanAdmin.USC_AcceptClanApp_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nAppId                         ( CPF_Parm )

void UTgGfxClanAdmin::USC_AcceptClanApp_Delegate ( int nAppId )
{
	static UFunction* pFnUSC_AcceptClanApp_Delegate = NULL;

	if ( ! pFnUSC_AcceptClanApp_Delegate )
		pFnUSC_AcceptClanApp_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125759 );

	UTgGfxClanAdmin_execUSC_AcceptClanApp_Delegate_Parms USC_AcceptClanApp_Delegate_Parms;
	USC_AcceptClanApp_Delegate_Parms.nAppId = nAppId;

	this->ProcessEvent ( pFnUSC_AcceptClanApp_Delegate, &USC_AcceptClanApp_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanAdmin.USC_UpdateJoinTypeRegion_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nJoinTypeId                    ( CPF_Parm )
// int                            nRegionId                      ( CPF_Parm )

void UTgGfxClanAdmin::USC_UpdateJoinTypeRegion_Delegate ( int nJoinTypeId, int nRegionId )
{
	static UFunction* pFnUSC_UpdateJoinTypeRegion_Delegate = NULL;

	if ( ! pFnUSC_UpdateJoinTypeRegion_Delegate )
		pFnUSC_UpdateJoinTypeRegion_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125761 );

	UTgGfxClanAdmin_execUSC_UpdateJoinTypeRegion_Delegate_Parms USC_UpdateJoinTypeRegion_Delegate_Parms;
	USC_UpdateJoinTypeRegion_Delegate_Parms.nJoinTypeId = nJoinTypeId;
	USC_UpdateJoinTypeRegion_Delegate_Parms.nRegionId = nRegionId;

	this->ProcessEvent ( pFnUSC_UpdateJoinTypeRegion_Delegate, &USC_UpdateJoinTypeRegion_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanAdmin.USC_UpdateClanNameAndTag_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sTag                           ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxClanAdmin::USC_UpdateClanNameAndTag_Delegate ( struct FString sName, struct FString sTag )
{
	static UFunction* pFnUSC_UpdateClanNameAndTag_Delegate = NULL;

	if ( ! pFnUSC_UpdateClanNameAndTag_Delegate )
		pFnUSC_UpdateClanNameAndTag_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125763 );

	UTgGfxClanAdmin_execUSC_UpdateClanNameAndTag_Delegate_Parms USC_UpdateClanNameAndTag_Delegate_Parms;
	memcpy ( &USC_UpdateClanNameAndTag_Delegate_Parms.sName, &sName, 0xC );
	memcpy ( &USC_UpdateClanNameAndTag_Delegate_Parms.sTag, &sTag, 0xC );

	this->ProcessEvent ( pFnUSC_UpdateClanNameAndTag_Delegate, &USC_UpdateClanNameAndTag_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanCreation.Reinit
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxClanCreation::eventReinit ( )
{
	static UFunction* pFnReinit = NULL;

	if ( ! pFnReinit )
		pFnReinit = (UFunction*) UObject::GObjObjects()->GetIndex( 125819 );

	UTgGfxClanCreation_eventReinit_Parms Reinit_Parms;

	this->ProcessEvent ( pFnReinit, &Reinit_Parms, NULL );
};

// Function TgClient.TgGfxClanCreation.ASC_Reinit
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxClanCreation::ASC_Reinit ( )
{
	static UFunction* pFnASC_Reinit = NULL;

	if ( ! pFnASC_Reinit )
		pFnASC_Reinit = (UFunction*) UObject::GObjObjects()->GetIndex( 125818 );

	UTgGfxClanCreation_execASC_Reinit_Parms ASC_Reinit_Parms;

	this->ProcessEvent ( pFnASC_Reinit, &ASC_Reinit_Parms, NULL );
};

// Function TgClient.TgGfxClanCreation.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxClanCreation::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125816 );

	UTgGfxClanCreation_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanCreation.USC_GotoClanList
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxClanCreation::USC_GotoClanList ( )
{
	static UFunction* pFnUSC_GotoClanList = NULL;

	if ( ! pFnUSC_GotoClanList )
		pFnUSC_GotoClanList = (UFunction*) UObject::GObjObjects()->GetIndex( 125815 );

	UTgGfxClanCreation_execUSC_GotoClanList_Parms USC_GotoClanList_Parms;

	pFnUSC_GotoClanList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GotoClanList, &USC_GotoClanList_Parms, NULL );

	pFnUSC_GotoClanList->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanCreation.USC_GetRegionListData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxClanCreation::USC_GetRegionListData ( )
{
	static UFunction* pFnUSC_GetRegionListData = NULL;

	if ( ! pFnUSC_GetRegionListData )
		pFnUSC_GetRegionListData = (UFunction*) UObject::GObjObjects()->GetIndex( 125814 );

	UTgGfxClanCreation_execUSC_GetRegionListData_Parms USC_GetRegionListData_Parms;

	pFnUSC_GetRegionListData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetRegionListData, &USC_GetRegionListData_Parms, NULL );

	pFnUSC_GetRegionListData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanCreation.USC_CancelClanRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nClanId                        ( CPF_Parm )

void UTgGfxClanCreation::USC_CancelClanRequest ( int nClanId )
{
	static UFunction* pFnUSC_CancelClanRequest = NULL;

	if ( ! pFnUSC_CancelClanRequest )
		pFnUSC_CancelClanRequest = (UFunction*) UObject::GObjObjects()->GetIndex( 125812 );

	UTgGfxClanCreation_execUSC_CancelClanRequest_Parms USC_CancelClanRequest_Parms;
	USC_CancelClanRequest_Parms.nClanId = nClanId;

	pFnUSC_CancelClanRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_CancelClanRequest, &USC_CancelClanRequest_Parms, NULL );

	pFnUSC_CancelClanRequest->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanCreation.USC_AcceptClanRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nClanId                        ( CPF_Parm )

void UTgGfxClanCreation::USC_AcceptClanRequest ( int nClanId )
{
	static UFunction* pFnUSC_AcceptClanRequest = NULL;

	if ( ! pFnUSC_AcceptClanRequest )
		pFnUSC_AcceptClanRequest = (UFunction*) UObject::GObjObjects()->GetIndex( 125810 );

	UTgGfxClanCreation_execUSC_AcceptClanRequest_Parms USC_AcceptClanRequest_Parms;
	USC_AcceptClanRequest_Parms.nClanId = nClanId;

	pFnUSC_AcceptClanRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_AcceptClanRequest, &USC_AcceptClanRequest_Parms, NULL );

	pFnUSC_AcceptClanRequest->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanCreation.USC_GetInvitesData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxClanCreation::USC_GetInvitesData ( )
{
	static UFunction* pFnUSC_GetInvitesData = NULL;

	if ( ! pFnUSC_GetInvitesData )
		pFnUSC_GetInvitesData = (UFunction*) UObject::GObjObjects()->GetIndex( 125809 );

	UTgGfxClanCreation_execUSC_GetInvitesData_Parms USC_GetInvitesData_Parms;

	pFnUSC_GetInvitesData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetInvitesData, &USC_GetInvitesData_Parms, NULL );

	pFnUSC_GetInvitesData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanCreation.USC_CreateClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sClanName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sClanTag                       ( CPF_Parm | CPF_NeedCtorLink )
// int                            nRegionId                      ( CPF_Parm )
// int                            nRecruitmentType               ( CPF_Parm )

void UTgGfxClanCreation::USC_CreateClan ( struct FString sClanName, struct FString sClanTag, int nRegionId, int nRecruitmentType )
{
	static UFunction* pFnUSC_CreateClan = NULL;

	if ( ! pFnUSC_CreateClan )
		pFnUSC_CreateClan = (UFunction*) UObject::GObjObjects()->GetIndex( 125804 );

	UTgGfxClanCreation_execUSC_CreateClan_Parms USC_CreateClan_Parms;
	memcpy ( &USC_CreateClan_Parms.sClanName, &sClanName, 0xC );
	memcpy ( &USC_CreateClan_Parms.sClanTag, &sClanTag, 0xC );
	USC_CreateClan_Parms.nRegionId = nRegionId;
	USC_CreateClan_Parms.nRecruitmentType = nRecruitmentType;

	pFnUSC_CreateClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_CreateClan, &USC_CreateClan_Parms, NULL );

	pFnUSC_CreateClan->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanCreation.USC_GotoClanList_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxClanCreation::USC_GotoClanList_Delegate ( )
{
	static UFunction* pFnUSC_GotoClanList_Delegate = NULL;

	if ( ! pFnUSC_GotoClanList_Delegate )
		pFnUSC_GotoClanList_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125792 );

	UTgGfxClanCreation_execUSC_GotoClanList_Delegate_Parms USC_GotoClanList_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_GotoClanList_Delegate, &USC_GotoClanList_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanCreation.USC_GetRegionListData_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxClanCreation::USC_GetRegionListData_Delegate ( )
{
	static UFunction* pFnUSC_GetRegionListData_Delegate = NULL;

	if ( ! pFnUSC_GetRegionListData_Delegate )
		pFnUSC_GetRegionListData_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125794 );

	UTgGfxClanCreation_execUSC_GetRegionListData_Delegate_Parms USC_GetRegionListData_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_GetRegionListData_Delegate, &USC_GetRegionListData_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanCreation.USC_CancelClanRequest_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nClanId                        ( CPF_Parm )

void UTgGfxClanCreation::USC_CancelClanRequest_Delegate ( int nClanId )
{
	static UFunction* pFnUSC_CancelClanRequest_Delegate = NULL;

	if ( ! pFnUSC_CancelClanRequest_Delegate )
		pFnUSC_CancelClanRequest_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125796 );

	UTgGfxClanCreation_execUSC_CancelClanRequest_Delegate_Parms USC_CancelClanRequest_Delegate_Parms;
	USC_CancelClanRequest_Delegate_Parms.nClanId = nClanId;

	this->ProcessEvent ( pFnUSC_CancelClanRequest_Delegate, &USC_CancelClanRequest_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanCreation.USC_AcceptClanRequest_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nClanId                        ( CPF_Parm )

void UTgGfxClanCreation::USC_AcceptClanRequest_Delegate ( int nClanId )
{
	static UFunction* pFnUSC_AcceptClanRequest_Delegate = NULL;

	if ( ! pFnUSC_AcceptClanRequest_Delegate )
		pFnUSC_AcceptClanRequest_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125798 );

	UTgGfxClanCreation_execUSC_AcceptClanRequest_Delegate_Parms USC_AcceptClanRequest_Delegate_Parms;
	USC_AcceptClanRequest_Delegate_Parms.nClanId = nClanId;

	this->ProcessEvent ( pFnUSC_AcceptClanRequest_Delegate, &USC_AcceptClanRequest_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanCreation.USC_GetInvitesData_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxClanCreation::USC_GetInvitesData_Delegate ( )
{
	static UFunction* pFnUSC_GetInvitesData_Delegate = NULL;

	if ( ! pFnUSC_GetInvitesData_Delegate )
		pFnUSC_GetInvitesData_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125800 );

	UTgGfxClanCreation_execUSC_GetInvitesData_Delegate_Parms USC_GetInvitesData_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_GetInvitesData_Delegate, &USC_GetInvitesData_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanCreation.USC_CreateClan_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxClanCreation::USC_CreateClan_Delegate ( )
{
	static UFunction* pFnUSC_CreateClan_Delegate = NULL;

	if ( ! pFnUSC_CreateClan_Delegate )
		pFnUSC_CreateClan_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125790 );

	UTgGfxClanCreation_execUSC_CreateClan_Delegate_Parms USC_CreateClan_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_CreateClan_Delegate, &USC_CreateClan_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanIconPicker.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pMP                            ( CPF_Parm )

void UTgGfxClanIconPicker::Initialize ( class UTgGameMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125824 );

	UTgGfxClanIconPicker_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanIconPicker.USC_SelectIcon
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nIconItemId                    ( CPF_Parm )

void UTgGfxClanIconPicker::USC_SelectIcon ( int nIconItemId )
{
	static UFunction* pFnUSC_SelectIcon = NULL;

	if ( ! pFnUSC_SelectIcon )
		pFnUSC_SelectIcon = (UFunction*) UObject::GObjObjects()->GetIndex( 125822 );

	UTgGfxClanIconPicker_execUSC_SelectIcon_Parms USC_SelectIcon_Parms;
	USC_SelectIcon_Parms.nIconItemId = nIconItemId;

	pFnUSC_SelectIcon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SelectIcon, &USC_SelectIcon_Parms, NULL );

	pFnUSC_SelectIcon->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanIconPicker.USC_SelectIcon_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxClanIconPicker::USC_SelectIcon_Delegate ( )
{
	static UFunction* pFnUSC_SelectIcon_Delegate = NULL;

	if ( ! pFnUSC_SelectIcon_Delegate )
		pFnUSC_SelectIcon_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125820 );

	UTgGfxClanIconPicker_execUSC_SelectIcon_Delegate_Parms USC_SelectIcon_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_SelectIcon_Delegate, &USC_SelectIcon_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanList.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxClanList::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125852 );

	UTgGfxClanList_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanList.UpdateApplicationData
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxClanList::eventUpdateApplicationData ( )
{
	static UFunction* pFnUpdateApplicationData = NULL;

	if ( ! pFnUpdateApplicationData )
		pFnUpdateApplicationData = (UFunction*) UObject::GObjObjects()->GetIndex( 125851 );

	UTgGfxClanList_eventUpdateApplicationData_Parms UpdateApplicationData_Parms;

	this->ProcessEvent ( pFnUpdateApplicationData, &UpdateApplicationData_Parms, NULL );
};

// Function TgClient.TgGfxClanList.ASC_UpdateApplicationData
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxClanList::ASC_UpdateApplicationData ( )
{
	static UFunction* pFnASC_UpdateApplicationData = NULL;

	if ( ! pFnASC_UpdateApplicationData )
		pFnASC_UpdateApplicationData = (UFunction*) UObject::GObjObjects()->GetIndex( 125850 );

	UTgGfxClanList_execASC_UpdateApplicationData_Parms ASC_UpdateApplicationData_Parms;

	this->ProcessEvent ( pFnASC_UpdateApplicationData, &ASC_UpdateApplicationData_Parms, NULL );
};

// Function TgClient.TgGfxClanList.UpdateClanList
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxClanList::eventUpdateClanList ( )
{
	static UFunction* pFnUpdateClanList = NULL;

	if ( ! pFnUpdateClanList )
		pFnUpdateClanList = (UFunction*) UObject::GObjObjects()->GetIndex( 125849 );

	UTgGfxClanList_eventUpdateClanList_Parms UpdateClanList_Parms;

	this->ProcessEvent ( pFnUpdateClanList, &UpdateClanList_Parms, NULL );
};

// Function TgClient.TgGfxClanList.ASC_UpdateClanList
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxClanList::ASC_UpdateClanList ( )
{
	static UFunction* pFnASC_UpdateClanList = NULL;

	if ( ! pFnASC_UpdateClanList )
		pFnASC_UpdateClanList = (UFunction*) UObject::GObjObjects()->GetIndex( 125848 );

	UTgGfxClanList_execASC_UpdateClanList_Parms ASC_UpdateClanList_Parms;

	this->ProcessEvent ( pFnASC_UpdateClanList, &ASC_UpdateClanList_Parms, NULL );
};

// Function TgClient.TgGfxClanList.USC_ApplyToClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nClanId                        ( CPF_Parm )
// unsigned long                  bWithMessage                   ( CPF_Parm )

void UTgGfxClanList::USC_ApplyToClan ( int nClanId, unsigned long bWithMessage )
{
	static UFunction* pFnUSC_ApplyToClan = NULL;

	if ( ! pFnUSC_ApplyToClan )
		pFnUSC_ApplyToClan = (UFunction*) UObject::GObjObjects()->GetIndex( 125845 );

	UTgGfxClanList_execUSC_ApplyToClan_Parms USC_ApplyToClan_Parms;
	USC_ApplyToClan_Parms.nClanId = nClanId;
	USC_ApplyToClan_Parms.bWithMessage = bWithMessage;

	pFnUSC_ApplyToClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ApplyToClan, &USC_ApplyToClan_Parms, NULL );

	pFnUSC_ApplyToClan->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanList.USC_SearchClans
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sSearchString                  ( CPF_Parm | CPF_NeedCtorLink )
// int                            nJoinTypeId                    ( CPF_Parm )
// int                            nRegionId                      ( CPF_Parm )
// unsigned long                  bRecommendedOnly               ( CPF_Parm )

void UTgGfxClanList::USC_SearchClans ( struct FString sSearchString, int nJoinTypeId, int nRegionId, unsigned long bRecommendedOnly )
{
	static UFunction* pFnUSC_SearchClans = NULL;

	if ( ! pFnUSC_SearchClans )
		pFnUSC_SearchClans = (UFunction*) UObject::GObjObjects()->GetIndex( 125840 );

	UTgGfxClanList_execUSC_SearchClans_Parms USC_SearchClans_Parms;
	memcpy ( &USC_SearchClans_Parms.sSearchString, &sSearchString, 0xC );
	USC_SearchClans_Parms.nJoinTypeId = nJoinTypeId;
	USC_SearchClans_Parms.nRegionId = nRegionId;
	USC_SearchClans_Parms.bRecommendedOnly = bRecommendedOnly;

	pFnUSC_SearchClans->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SearchClans, &USC_SearchClans_Parms, NULL );

	pFnUSC_SearchClans->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanList.USC_ApplyToClan_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nClanId                        ( CPF_Parm )
// unsigned long                  bWithMessage                   ( CPF_Parm )

void UTgGfxClanList::USC_ApplyToClan_Delegate ( int nClanId, unsigned long bWithMessage )
{
	static UFunction* pFnUSC_ApplyToClan_Delegate = NULL;

	if ( ! pFnUSC_ApplyToClan_Delegate )
		pFnUSC_ApplyToClan_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125829 );

	UTgGfxClanList_execUSC_ApplyToClan_Delegate_Parms USC_ApplyToClan_Delegate_Parms;
	USC_ApplyToClan_Delegate_Parms.nClanId = nClanId;
	USC_ApplyToClan_Delegate_Parms.bWithMessage = bWithMessage;

	this->ProcessEvent ( pFnUSC_ApplyToClan_Delegate, &USC_ApplyToClan_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanList.USC_SearchClans_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 sSearchString                  ( CPF_Parm | CPF_NeedCtorLink )
// int                            nJoinTypeId                    ( CPF_Parm )
// int                            nRegionId                      ( CPF_Parm )
// unsigned long                  bRecommendedOnly               ( CPF_Parm )

void UTgGfxClanList::USC_SearchClans_Delegate ( struct FString sSearchString, int nJoinTypeId, int nRegionId, unsigned long bRecommendedOnly )
{
	static UFunction* pFnUSC_SearchClans_Delegate = NULL;

	if ( ! pFnUSC_SearchClans_Delegate )
		pFnUSC_SearchClans_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125831 );

	UTgGfxClanList_execUSC_SearchClans_Delegate_Parms USC_SearchClans_Delegate_Parms;
	memcpy ( &USC_SearchClans_Delegate_Parms.sSearchString, &sSearchString, 0xC );
	USC_SearchClans_Delegate_Parms.nJoinTypeId = nJoinTypeId;
	USC_SearchClans_Delegate_Parms.nRegionId = nRegionId;
	USC_SearchClans_Delegate_Parms.bRecommendedOnly = bRecommendedOnly;

	this->ProcessEvent ( pFnUSC_SearchClans_Delegate, &USC_SearchClans_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanManagement.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxClanManagement::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125888 );

	UTgGfxClanManagement_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanManagement.USC_ModifyLeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxClanManagement::USC_ModifyLeader ( int nPlayerId )
{
	static UFunction* pFnUSC_ModifyLeader = NULL;

	if ( ! pFnUSC_ModifyLeader )
		pFnUSC_ModifyLeader = (UFunction*) UObject::GObjObjects()->GetIndex( 125886 );

	UTgGfxClanManagement_execUSC_ModifyLeader_Parms USC_ModifyLeader_Parms;
	USC_ModifyLeader_Parms.nPlayerId = nPlayerId;

	pFnUSC_ModifyLeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ModifyLeader, &USC_ModifyLeader_Parms, NULL );

	pFnUSC_ModifyLeader->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanManagement.USC_ViewProfile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sInputValue                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxClanManagement::USC_ViewProfile ( struct FString sInputValue )
{
	static UFunction* pFnUSC_ViewProfile = NULL;

	if ( ! pFnUSC_ViewProfile )
		pFnUSC_ViewProfile = (UFunction*) UObject::GObjObjects()->GetIndex( 125884 );

	UTgGfxClanManagement_execUSC_ViewProfile_Parms USC_ViewProfile_Parms;
	memcpy ( &USC_ViewProfile_Parms.sInputValue, &sInputValue, 0xC );

	pFnUSC_ViewProfile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ViewProfile, &USC_ViewProfile_Parms, NULL );

	pFnUSC_ViewProfile->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanManagement.USC_InviteToClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sInputValue                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxClanManagement::USC_InviteToClan ( struct FString sInputValue )
{
	static UFunction* pFnUSC_InviteToClan = NULL;

	if ( ! pFnUSC_InviteToClan )
		pFnUSC_InviteToClan = (UFunction*) UObject::GObjObjects()->GetIndex( 125882 );

	UTgGfxClanManagement_execUSC_InviteToClan_Parms USC_InviteToClan_Parms;
	memcpy ( &USC_InviteToClan_Parms.sInputValue, &sInputValue, 0xC );

	pFnUSC_InviteToClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_InviteToClan, &USC_InviteToClan_Parms, NULL );

	pFnUSC_InviteToClan->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanManagement.USC_UpdateClanTag
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxClanManagement::USC_UpdateClanTag ( )
{
	static UFunction* pFnUSC_UpdateClanTag = NULL;

	if ( ! pFnUSC_UpdateClanTag )
		pFnUSC_UpdateClanTag = (UFunction*) UObject::GObjObjects()->GetIndex( 125881 );

	UTgGfxClanManagement_execUSC_UpdateClanTag_Parms USC_UpdateClanTag_Parms;

	pFnUSC_UpdateClanTag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_UpdateClanTag, &USC_UpdateClanTag_Parms, NULL );

	pFnUSC_UpdateClanTag->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanManagement.USC_QuitClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxClanManagement::USC_QuitClan ( )
{
	static UFunction* pFnUSC_QuitClan = NULL;

	if ( ! pFnUSC_QuitClan )
		pFnUSC_QuitClan = (UFunction*) UObject::GObjObjects()->GetIndex( 125880 );

	UTgGfxClanManagement_execUSC_QuitClan_Parms USC_QuitClan_Parms;

	pFnUSC_QuitClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_QuitClan, &USC_QuitClan_Parms, NULL );

	pFnUSC_QuitClan->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanManagement.USC_CancelPlayerInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxClanManagement::USC_CancelPlayerInvite ( int nPlayerId )
{
	static UFunction* pFnUSC_CancelPlayerInvite = NULL;

	if ( ! pFnUSC_CancelPlayerInvite )
		pFnUSC_CancelPlayerInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 125878 );

	UTgGfxClanManagement_execUSC_CancelPlayerInvite_Parms USC_CancelPlayerInvite_Parms;
	USC_CancelPlayerInvite_Parms.nPlayerId = nPlayerId;

	pFnUSC_CancelPlayerInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_CancelPlayerInvite, &USC_CancelPlayerInvite_Parms, NULL );

	pFnUSC_CancelPlayerInvite->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanManagement.USC_ModifyLeader_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxClanManagement::USC_ModifyLeader_Delegate ( )
{
	static UFunction* pFnUSC_ModifyLeader_Delegate = NULL;

	if ( ! pFnUSC_ModifyLeader_Delegate )
		pFnUSC_ModifyLeader_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125855 );

	UTgGfxClanManagement_execUSC_ModifyLeader_Delegate_Parms USC_ModifyLeader_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_ModifyLeader_Delegate, &USC_ModifyLeader_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanManagement.USC_ViewProfile_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxClanManagement::USC_ViewProfile_Delegate ( )
{
	static UFunction* pFnUSC_ViewProfile_Delegate = NULL;

	if ( ! pFnUSC_ViewProfile_Delegate )
		pFnUSC_ViewProfile_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125857 );

	UTgGfxClanManagement_execUSC_ViewProfile_Delegate_Parms USC_ViewProfile_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_ViewProfile_Delegate, &USC_ViewProfile_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanManagement.USC_InviteToClan_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxClanManagement::USC_InviteToClan_Delegate ( )
{
	static UFunction* pFnUSC_InviteToClan_Delegate = NULL;

	if ( ! pFnUSC_InviteToClan_Delegate )
		pFnUSC_InviteToClan_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125859 );

	UTgGfxClanManagement_execUSC_InviteToClan_Delegate_Parms USC_InviteToClan_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_InviteToClan_Delegate, &USC_InviteToClan_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanManagement.USC_UpdateClanTag_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxClanManagement::USC_UpdateClanTag_Delegate ( )
{
	static UFunction* pFnUSC_UpdateClanTag_Delegate = NULL;

	if ( ! pFnUSC_UpdateClanTag_Delegate )
		pFnUSC_UpdateClanTag_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125861 );

	UTgGfxClanManagement_execUSC_UpdateClanTag_Delegate_Parms USC_UpdateClanTag_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_UpdateClanTag_Delegate, &USC_UpdateClanTag_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanManagement.USC_QuitClan_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxClanManagement::USC_QuitClan_Delegate ( )
{
	static UFunction* pFnUSC_QuitClan_Delegate = NULL;

	if ( ! pFnUSC_QuitClan_Delegate )
		pFnUSC_QuitClan_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125863 );

	UTgGfxClanManagement_execUSC_QuitClan_Delegate_Parms USC_QuitClan_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_QuitClan_Delegate, &USC_QuitClan_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxClanManagement.USC_CancelPlayerInvite_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxClanManagement::USC_CancelPlayerInvite_Delegate ( int nPlayerId )
{
	static UFunction* pFnUSC_CancelPlayerInvite_Delegate = NULL;

	if ( ! pFnUSC_CancelPlayerInvite_Delegate )
		pFnUSC_CancelPlayerInvite_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125865 );

	UTgGfxClanManagement_execUSC_CancelPlayerInvite_Delegate_Parms USC_CancelPlayerInvite_Delegate_Parms;
	USC_CancelPlayerInvite_Delegate_Parms.nPlayerId = nPlayerId;

	this->ProcessEvent ( pFnUSC_CancelPlayerInvite_Delegate, &USC_CancelPlayerInvite_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxDailyReward.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxDailyReward::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125895 );

	UTgGfxDailyReward_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxDailyReward.UpdateDailyData
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxDailyReward::eventUpdateDailyData ( )
{
	static UFunction* pFnUpdateDailyData = NULL;

	if ( ! pFnUpdateDailyData )
		pFnUpdateDailyData = (UFunction*) UObject::GObjObjects()->GetIndex( 125894 );

	UTgGfxDailyReward_eventUpdateDailyData_Parms UpdateDailyData_Parms;

	this->ProcessEvent ( pFnUpdateDailyData, &UpdateDailyData_Parms, NULL );
};

// Function TgClient.TgGfxDailyReward.ASC_UpdateDailyData
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxDailyReward::ASC_UpdateDailyData ( )
{
	static UFunction* pFnASC_UpdateDailyData = NULL;

	if ( ! pFnASC_UpdateDailyData )
		pFnASC_UpdateDailyData = (UFunction*) UObject::GObjObjects()->GetIndex( 125893 );

	UTgGfxDailyReward_execASC_UpdateDailyData_Parms ASC_UpdateDailyData_Parms;

	this->ProcessEvent ( pFnASC_UpdateDailyData, &ASC_UpdateDailyData_Parms, NULL );
};

// Function TgClient.TgGfxDailyReward.USC_CollectReward
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxDailyReward::USC_CollectReward ( )
{
	static UFunction* pFnUSC_CollectReward = NULL;

	if ( ! pFnUSC_CollectReward )
		pFnUSC_CollectReward = (UFunction*) UObject::GObjObjects()->GetIndex( 125892 );

	UTgGfxDailyReward_execUSC_CollectReward_Parms USC_CollectReward_Parms;

	pFnUSC_CollectReward->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_CollectReward, &USC_CollectReward_Parms, NULL );

	pFnUSC_CollectReward->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxDailyReward.USC_CollectReward_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxDailyReward::USC_CollectReward_Delegate ( )
{
	static UFunction* pFnUSC_CollectReward_Delegate = NULL;

	if ( ! pFnUSC_CollectReward_Delegate )
		pFnUSC_CollectReward_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125890 );

	UTgGfxDailyReward_execUSC_CollectReward_Delegate_Parms USC_CollectReward_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_CollectReward_Delegate, &USC_CollectReward_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxEventLeaderboard.UpdateFromChunk
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            dataIdx                        ( CPF_Parm )

bool UTgGfxEventLeaderboard::UpdateFromChunk ( int dataIdx )
{
	static UFunction* pFnUpdateFromChunk = NULL;

	if ( ! pFnUpdateFromChunk )
		pFnUpdateFromChunk = (UFunction*) UObject::GObjObjects()->GetIndex( 125902 );

	UTgGfxEventLeaderboard_execUpdateFromChunk_Parms UpdateFromChunk_Parms;
	UpdateFromChunk_Parms.dataIdx = dataIdx;

	pFnUpdateFromChunk->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateFromChunk, &UpdateFromChunk_Parms, NULL );

	pFnUpdateFromChunk->FunctionFlags |= 0x400;

	return UpdateFromChunk_Parms.ReturnValue;
};

// Function TgClient.TgGfxEventLeaderboard.SetDifficulty
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxEventLeaderboard::SetDifficulty ( )
{
	static UFunction* pFnSetDifficulty = NULL;

	if ( ! pFnSetDifficulty )
		pFnSetDifficulty = (UFunction*) UObject::GObjObjects()->GetIndex( 125903 );

	UTgGfxEventLeaderboard_execSetDifficulty_Parms SetDifficulty_Parms;

	pFnSetDifficulty->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDifficulty, &SetDifficulty_Parms, NULL );

	pFnSetDifficulty->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventLeaderboard.ReceivedAllData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxEventLeaderboard::ReceivedAllData ( )
{
	static UFunction* pFnReceivedAllData = NULL;

	if ( ! pFnReceivedAllData )
		pFnReceivedAllData = (UFunction*) UObject::GObjObjects()->GetIndex( 125906 );

	UTgGfxEventLeaderboard_execReceivedAllData_Parms ReceivedAllData_Parms;

	pFnReceivedAllData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceivedAllData, &ReceivedAllData_Parms, NULL );

	pFnReceivedAllData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventLeaderboard.PopulateLeaderboard
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxEventLeaderboard::PopulateLeaderboard ( )
{
	static UFunction* pFnPopulateLeaderboard = NULL;

	if ( ! pFnPopulateLeaderboard )
		pFnPopulateLeaderboard = (UFunction*) UObject::GObjObjects()->GetIndex( 125901 );

	UTgGfxEventLeaderboard_execPopulateLeaderboard_Parms PopulateLeaderboard_Parms;

	pFnPopulateLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopulateLeaderboard, &PopulateLeaderboard_Parms, NULL );

	pFnPopulateLeaderboard->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventLeaderboard.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxEventLeaderboard::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125898 );

	UTgGfxEventLeaderboard_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventLeaderboard.USC_RequestEventLeaderboard
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            EventIdx                       ( CPF_Parm )

void UTgGfxEventLeaderboard::USC_RequestEventLeaderboard ( int EventIdx )
{
	static UFunction* pFnUSC_RequestEventLeaderboard = NULL;

	if ( ! pFnUSC_RequestEventLeaderboard )
		pFnUSC_RequestEventLeaderboard = (UFunction*) UObject::GObjObjects()->GetIndex( 125900 );

	UTgGfxEventLeaderboard_execUSC_RequestEventLeaderboard_Parms USC_RequestEventLeaderboard_Parms;
	USC_RequestEventLeaderboard_Parms.EventIdx = EventIdx;

	pFnUSC_RequestEventLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_RequestEventLeaderboard, &USC_RequestEventLeaderboard_Parms, NULL );

	pFnUSC_RequestEventLeaderboard->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventLeaderboard.USC_RequestEventLeaderboard_Delegate
// [0x00120000] 
// Parameters infos:
// int                            EventIdx                       ( CPF_Parm )

void UTgGfxEventLeaderboard::USC_RequestEventLeaderboard_Delegate ( int EventIdx )
{
	static UFunction* pFnUSC_RequestEventLeaderboard_Delegate = NULL;

	if ( ! pFnUSC_RequestEventLeaderboard_Delegate )
		pFnUSC_RequestEventLeaderboard_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 125907 );

	UTgGfxEventLeaderboard_execUSC_RequestEventLeaderboard_Delegate_Parms USC_RequestEventLeaderboard_Delegate_Parms;
	USC_RequestEventLeaderboard_Delegate_Parms.EventIdx = EventIdx;

	this->ProcessEvent ( pFnUSC_RequestEventLeaderboard_Delegate, &USC_RequestEventLeaderboard_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxEventScene.SceneTick
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// float                          Delta                          ( CPF_Parm )

void UTgGfxEventScene::eventSceneTick ( float Delta )
{
	static UFunction* pFnSceneTick = NULL;

	if ( ! pFnSceneTick )
		pFnSceneTick = (UFunction*) UObject::GObjObjects()->GetIndex( 126062 );

	UTgGfxEventScene_eventSceneTick_Parms SceneTick_Parms;
	SceneTick_Parms.Delta = Delta;

	this->ProcessEvent ( pFnSceneTick, &SceneTick_Parms, NULL );
};

// Function TgClient.TgGfxEventScene.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxEventScene::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126061 );

	UTgGfxEventScene_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventScene.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxEventScene::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 126059 );

	UTgGfxEventScene_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventScene.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxEventScene::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126057 );

	UTgGfxEventScene_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSeasonalEvent.SceneTick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          Delta                          ( CPF_Parm )

void UTgGfxSeasonalEvent::eventSceneTick ( float Delta )
{
	static UFunction* pFnSceneTick = NULL;

	if ( ! pFnSceneTick )
		pFnSceneTick = (UFunction*) UObject::GObjObjects()->GetIndex( 127661 );

	UTgGfxSeasonalEvent_eventSceneTick_Parms SceneTick_Parms;
	SceneTick_Parms.Delta = Delta;

	this->ProcessEvent ( pFnSceneTick, &SceneTick_Parms, NULL );
};

// Function TgClient.TgGfxFacebookStreamDisplay.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxFacebookStreamDisplay::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 130107 );

	UTgGfxFacebookStreamDisplay_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFacebookStreamDisplay.USC_CheckStreamStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxFacebookStreamDisplay::USC_CheckStreamStatus ( )
{
	static UFunction* pFnUSC_CheckStreamStatus = NULL;

	if ( ! pFnUSC_CheckStreamStatus )
		pFnUSC_CheckStreamStatus = (UFunction*) UObject::GObjObjects()->GetIndex( 130106 );

	UTgGfxFacebookStreamDisplay_execUSC_CheckStreamStatus_Parms USC_CheckStreamStatus_Parms;

	pFnUSC_CheckStreamStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_CheckStreamStatus, &USC_CheckStreamStatus_Parms, NULL );

	pFnUSC_CheckStreamStatus->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFacebookStreamDisplay.USC_CheckStreamStatus_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxFacebookStreamDisplay::USC_CheckStreamStatus_Delegate ( )
{
	static UFunction* pFnUSC_CheckStreamStatus_Delegate = NULL;

	if ( ! pFnUSC_CheckStreamStatus_Delegate )
		pFnUSC_CheckStreamStatus_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 130104 );

	UTgGfxFacebookStreamDisplay_execUSC_CheckStreamStatus_Delegate_Parms USC_CheckStreamStatus_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_CheckStreamStatus_Delegate, &USC_CheckStreamStatus_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFacebookStreamPopup.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxFacebookStreamPopup::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 130119 );

	UTgGfxFacebookStreamPopup_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFacebookStreamPopup.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxFacebookStreamPopup::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 130117 );

	UTgGfxFacebookStreamPopup_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFacebookStreamPopup.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxFacebookStreamPopup::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 130115 );

	UTgGfxFacebookStreamPopup_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFeedback.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxFeedback::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 126079 );

	UTgGfxFeedback_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFeedback.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxFeedback::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126077 );

	UTgGfxFeedback_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFooterMain.USC_AddFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxFooterMain::USC_AddFriend ( )
{
	static UFunction* pFnUSC_AddFriend = NULL;

	if ( ! pFnUSC_AddFriend )
		pFnUSC_AddFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 126107 );

	UTgGfxFooterMain_execUSC_AddFriend_Parms USC_AddFriend_Parms;

	pFnUSC_AddFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_AddFriend, &USC_AddFriend_Parms, NULL );

	pFnUSC_AddFriend->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFooterMain.USC_AddFriend_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxFooterMain::USC_AddFriend_Delegate ( )
{
	static UFunction* pFnUSC_AddFriend_Delegate = NULL;

	if ( ! pFnUSC_AddFriend_Delegate )
		pFnUSC_AddFriend_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126088 );

	UTgGfxFooterMain_execUSC_AddFriend_Delegate_Parms USC_AddFriend_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_AddFriend_Delegate, &USC_AddFriend_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFooterMain.USC_Resize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 RegionName                     ( CPF_Parm | CPF_NeedCtorLink )
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxFooterMain::USC_Resize ( struct FString RegionName, class UGFxObject* pObj )
{
	static UFunction* pFnUSC_Resize = NULL;

	if ( ! pFnUSC_Resize )
		pFnUSC_Resize = (UFunction*) UObject::GObjObjects()->GetIndex( 126104 );

	UTgGfxFooterMain_execUSC_Resize_Parms USC_Resize_Parms;
	memcpy ( &USC_Resize_Parms.RegionName, &RegionName, 0xC );
	USC_Resize_Parms.pObj = pObj;

	pFnUSC_Resize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_Resize, &USC_Resize_Parms, NULL );

	pFnUSC_Resize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFooterMain.USC_Resize_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 RegionName                     ( CPF_Parm | CPF_NeedCtorLink )
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxFooterMain::USC_Resize_Delegate ( struct FString RegionName, class UGFxObject* pObj )
{
	static UFunction* pFnUSC_Resize_Delegate = NULL;

	if ( ! pFnUSC_Resize_Delegate )
		pFnUSC_Resize_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126090 );

	UTgGfxFooterMain_execUSC_Resize_Delegate_Parms USC_Resize_Delegate_Parms;
	memcpy ( &USC_Resize_Delegate_Parms.RegionName, &RegionName, 0xC );
	USC_Resize_Delegate_Parms.pObj = pObj;

	this->ProcessEvent ( pFnUSC_Resize_Delegate, &USC_Resize_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFooterMain.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxFooterMain::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126101 );

	UTgGfxFooterMain_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFooterMain.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxFooterMain::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126099 );

	UTgGfxFooterMain_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxFriendManagement::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126264 );

	UTgGfxFriendManagement_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxFriendManagement::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126262 );

	UTgGfxFriendManagement_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.Reinit
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxFriendManagement::eventReinit ( )
{
	static UFunction* pFnReinit = NULL;

	if ( ! pFnReinit )
		pFnReinit = (UFunction*) UObject::GObjObjects()->GetIndex( 126261 );

	UTgGfxFriendManagement_eventReinit_Parms Reinit_Parms;

	this->ProcessEvent ( pFnReinit, &Reinit_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.ASC_Reinit
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxFriendManagement::ASC_Reinit ( )
{
	static UFunction* pFnASC_Reinit = NULL;

	if ( ! pFnASC_Reinit )
		pFnASC_Reinit = (UFunction*) UObject::GObjObjects()->GetIndex( 126260 );

	UTgGfxFriendManagement_execASC_Reinit_Parms ASC_Reinit_Parms;

	this->ProcessEvent ( pFnASC_Reinit, &ASC_Reinit_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.ErrorFeedback
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ErrMsg                         ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::eventErrorFeedback ( struct FString ErrMsg )
{
	static UFunction* pFnErrorFeedback = NULL;

	if ( ! pFnErrorFeedback )
		pFnErrorFeedback = (UFunction*) UObject::GObjObjects()->GetIndex( 126258 );

	UTgGfxFriendManagement_eventErrorFeedback_Parms ErrorFeedback_Parms;
	memcpy ( &ErrorFeedback_Parms.ErrMsg, &ErrMsg, 0xC );

	this->ProcessEvent ( pFnErrorFeedback, &ErrorFeedback_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.ASC_ErrorFeedback
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ErrMsg                         ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::ASC_ErrorFeedback ( struct FString ErrMsg )
{
	static UFunction* pFnASC_ErrorFeedback = NULL;

	if ( ! pFnASC_ErrorFeedback )
		pFnASC_ErrorFeedback = (UFunction*) UObject::GObjObjects()->GetIndex( 126256 );

	UTgGfxFriendManagement_execASC_ErrorFeedback_Parms ASC_ErrorFeedback_Parms;
	memcpy ( &ASC_ErrorFeedback_Parms.ErrMsg, &ErrMsg, 0xC );

	this->ProcessEvent ( pFnASC_ErrorFeedback, &ASC_ErrorFeedback_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_OnCurse
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_OnCurse ( struct FString UserName )
{
	static UFunction* pFnUSC_OnCurse = NULL;

	if ( ! pFnUSC_OnCurse )
		pFnUSC_OnCurse = (UFunction*) UObject::GObjObjects()->GetIndex( 126254 );

	UTgGfxFriendManagement_execUSC_OnCurse_Parms USC_OnCurse_Parms;
	memcpy ( &USC_OnCurse_Parms.UserName, &UserName, 0xC );

	pFnUSC_OnCurse->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OnCurse, &USC_OnCurse_Parms, NULL );

	pFnUSC_OnCurse->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_EditNote
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_EditNote ( int nPlayerId )
{
	static UFunction* pFnUSC_EditNote = NULL;

	if ( ! pFnUSC_EditNote )
		pFnUSC_EditNote = (UFunction*) UObject::GObjObjects()->GetIndex( 126252 );

	UTgGfxFriendManagement_execUSC_EditNote_Parms USC_EditNote_Parms;
	USC_EditNote_Parms.nPlayerId = nPlayerId;

	pFnUSC_EditNote->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_EditNote, &USC_EditNote_Parms, NULL );

	pFnUSC_EditNote->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_BlockPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxFriendManagement::USC_BlockPlayer ( )
{
	static UFunction* pFnUSC_BlockPlayer = NULL;

	if ( ! pFnUSC_BlockPlayer )
		pFnUSC_BlockPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 126251 );

	UTgGfxFriendManagement_execUSC_BlockPlayer_Parms USC_BlockPlayer_Parms;

	pFnUSC_BlockPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_BlockPlayer, &USC_BlockPlayer_Parms, NULL );

	pFnUSC_BlockPlayer->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_InviteClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxFriendManagement::USC_InviteClan ( )
{
	static UFunction* pFnUSC_InviteClan = NULL;

	if ( ! pFnUSC_InviteClan )
		pFnUSC_InviteClan = (UFunction*) UObject::GObjObjects()->GetIndex( 126250 );

	UTgGfxFriendManagement_execUSC_InviteClan_Parms USC_InviteClan_Parms;

	pFnUSC_InviteClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_InviteClan, &USC_InviteClan_Parms, NULL );

	pFnUSC_InviteClan->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_AddFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxFriendManagement::USC_AddFriend ( )
{
	static UFunction* pFnUSC_AddFriend = NULL;

	if ( ! pFnUSC_AddFriend )
		pFnUSC_AddFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 126249 );

	UTgGfxFriendManagement_execUSC_AddFriend_Parms USC_AddFriend_Parms;

	pFnUSC_AddFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_AddFriend, &USC_AddFriend_Parms, NULL );

	pFnUSC_AddFriend->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_Resize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxFriendManagement::USC_Resize ( class UGFxObject* pObj )
{
	static UFunction* pFnUSC_Resize = NULL;

	if ( ! pFnUSC_Resize )
		pFnUSC_Resize = (UFunction*) UObject::GObjObjects()->GetIndex( 126247 );

	UTgGfxFriendManagement_execUSC_Resize_Parms USC_Resize_Parms;
	USC_Resize_Parms.pObj = pObj;

	pFnUSC_Resize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_Resize, &USC_Resize_Parms, NULL );

	pFnUSC_Resize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_ToggleDND
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxFriendManagement::USC_ToggleDND ( )
{
	static UFunction* pFnUSC_ToggleDND = NULL;

	if ( ! pFnUSC_ToggleDND )
		pFnUSC_ToggleDND = (UFunction*) UObject::GObjObjects()->GetIndex( 126246 );

	UTgGfxFriendManagement_execUSC_ToggleDND_Parms USC_ToggleDND_Parms;

	pFnUSC_ToggleDND->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ToggleDND, &USC_ToggleDND_Parms, NULL );

	pFnUSC_ToggleDND->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_UpdateStatusMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sStatus                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_UpdateStatusMessage ( struct FString sStatus )
{
	static UFunction* pFnUSC_UpdateStatusMessage = NULL;

	if ( ! pFnUSC_UpdateStatusMessage )
		pFnUSC_UpdateStatusMessage = (UFunction*) UObject::GObjObjects()->GetIndex( 126244 );

	UTgGfxFriendManagement_execUSC_UpdateStatusMessage_Parms USC_UpdateStatusMessage_Parms;
	memcpy ( &USC_UpdateStatusMessage_Parms.sStatus, &sStatus, 0xC );

	pFnUSC_UpdateStatusMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_UpdateStatusMessage, &USC_UpdateStatusMessage_Parms, NULL );

	pFnUSC_UpdateStatusMessage->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_InviteToClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_InviteToClan ( struct FString sPlayerName )
{
	static UFunction* pFnUSC_InviteToClan = NULL;

	if ( ! pFnUSC_InviteToClan )
		pFnUSC_InviteToClan = (UFunction*) UObject::GObjObjects()->GetIndex( 126242 );

	UTgGfxFriendManagement_execUSC_InviteToClan_Parms USC_InviteToClan_Parms;
	memcpy ( &USC_InviteToClan_Parms.sPlayerName, &sPlayerName, 0xC );

	pFnUSC_InviteToClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_InviteToClan, &USC_InviteToClan_Parms, NULL );

	pFnUSC_InviteToClan->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_BlockByString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_BlockByString ( struct FString sPlayerName )
{
	static UFunction* pFnUSC_BlockByString = NULL;

	if ( ! pFnUSC_BlockByString )
		pFnUSC_BlockByString = (UFunction*) UObject::GObjObjects()->GetIndex( 126240 );

	UTgGfxFriendManagement_execUSC_BlockByString_Parms USC_BlockByString_Parms;
	memcpy ( &USC_BlockByString_Parms.sPlayerName, &sPlayerName, 0xC );

	pFnUSC_BlockByString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_BlockByString, &USC_BlockByString_Parms, NULL );

	pFnUSC_BlockByString->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_InviteFriendByString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_InviteFriendByString ( struct FString sPlayerName )
{
	static UFunction* pFnUSC_InviteFriendByString = NULL;

	if ( ! pFnUSC_InviteFriendByString )
		pFnUSC_InviteFriendByString = (UFunction*) UObject::GObjObjects()->GetIndex( 126238 );

	UTgGfxFriendManagement_execUSC_InviteFriendByString_Parms USC_InviteFriendByString_Parms;
	memcpy ( &USC_InviteFriendByString_Parms.sPlayerName, &sPlayerName, 0xC );

	pFnUSC_InviteFriendByString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_InviteFriendByString, &USC_InviteFriendByString_Parms, NULL );

	pFnUSC_InviteFriendByString->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_AddPlayerNote
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )
// struct FString                 sPlayerNote                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_AddPlayerNote ( int nPlayerId, struct FString sPlayerNote )
{
	static UFunction* pFnUSC_AddPlayerNote = NULL;

	if ( ! pFnUSC_AddPlayerNote )
		pFnUSC_AddPlayerNote = (UFunction*) UObject::GObjObjects()->GetIndex( 126235 );

	UTgGfxFriendManagement_execUSC_AddPlayerNote_Parms USC_AddPlayerNote_Parms;
	USC_AddPlayerNote_Parms.nPlayerId = nPlayerId;
	memcpy ( &USC_AddPlayerNote_Parms.sPlayerNote, &sPlayerNote, 0xC );

	pFnUSC_AddPlayerNote->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_AddPlayerNote, &USC_AddPlayerNote_Parms, NULL );

	pFnUSC_AddPlayerNote->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_RemoveBlocked
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_RemoveBlocked ( int nPlayerId )
{
	static UFunction* pFnUSC_RemoveBlocked = NULL;

	if ( ! pFnUSC_RemoveBlocked )
		pFnUSC_RemoveBlocked = (UFunction*) UObject::GObjObjects()->GetIndex( 126233 );

	UTgGfxFriendManagement_execUSC_RemoveBlocked_Parms USC_RemoveBlocked_Parms;
	USC_RemoveBlocked_Parms.nPlayerId = nPlayerId;

	pFnUSC_RemoveBlocked->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_RemoveBlocked, &USC_RemoveBlocked_Parms, NULL );

	pFnUSC_RemoveBlocked->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_PartyKick
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_PartyKick ( int nPlayerId )
{
	static UFunction* pFnUSC_PartyKick = NULL;

	if ( ! pFnUSC_PartyKick )
		pFnUSC_PartyKick = (UFunction*) UObject::GObjObjects()->GetIndex( 126231 );

	UTgGfxFriendManagement_execUSC_PartyKick_Parms USC_PartyKick_Parms;
	USC_PartyKick_Parms.nPlayerId = nPlayerId;

	pFnUSC_PartyKick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_PartyKick, &USC_PartyKick_Parms, NULL );

	pFnUSC_PartyKick->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_PartyInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_PartyInvite ( int nPlayerId )
{
	static UFunction* pFnUSC_PartyInvite = NULL;

	if ( ! pFnUSC_PartyInvite )
		pFnUSC_PartyInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 126229 );

	UTgGfxFriendManagement_execUSC_PartyInvite_Parms USC_PartyInvite_Parms;
	USC_PartyInvite_Parms.nPlayerId = nPlayerId;

	pFnUSC_PartyInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_PartyInvite, &USC_PartyInvite_Parms, NULL );

	pFnUSC_PartyInvite->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_SpectatePlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_SpectatePlayer ( int nPlayerId )
{
	static UFunction* pFnUSC_SpectatePlayer = NULL;

	if ( ! pFnUSC_SpectatePlayer )
		pFnUSC_SpectatePlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 126227 );

	UTgGfxFriendManagement_execUSC_SpectatePlayer_Parms USC_SpectatePlayer_Parms;
	USC_SpectatePlayer_Parms.nPlayerId = nPlayerId;

	pFnUSC_SpectatePlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SpectatePlayer, &USC_SpectatePlayer_Parms, NULL );

	pFnUSC_SpectatePlayer->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_ViewPlayerClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxFriendManagement::USC_ViewPlayerClan ( )
{
	static UFunction* pFnUSC_ViewPlayerClan = NULL;

	if ( ! pFnUSC_ViewPlayerClan )
		pFnUSC_ViewPlayerClan = (UFunction*) UObject::GObjObjects()->GetIndex( 126226 );

	UTgGfxFriendManagement_execUSC_ViewPlayerClan_Parms USC_ViewPlayerClan_Parms;

	pFnUSC_ViewPlayerClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ViewPlayerClan, &USC_ViewPlayerClan_Parms, NULL );

	pFnUSC_ViewPlayerClan->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_ViewPlayerProfile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_ViewPlayerProfile ( struct FString sPlayerName )
{
	static UFunction* pFnUSC_ViewPlayerProfile = NULL;

	if ( ! pFnUSC_ViewPlayerProfile )
		pFnUSC_ViewPlayerProfile = (UFunction*) UObject::GObjObjects()->GetIndex( 126224 );

	UTgGfxFriendManagement_execUSC_ViewPlayerProfile_Parms USC_ViewPlayerProfile_Parms;
	memcpy ( &USC_ViewPlayerProfile_Parms.sPlayerName, &sPlayerName, 0xC );

	pFnUSC_ViewPlayerProfile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ViewPlayerProfile, &USC_ViewPlayerProfile_Parms, NULL );

	pFnUSC_ViewPlayerProfile->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_CancelAllFriendRequests
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxFriendManagement::USC_CancelAllFriendRequests ( )
{
	static UFunction* pFnUSC_CancelAllFriendRequests = NULL;

	if ( ! pFnUSC_CancelAllFriendRequests )
		pFnUSC_CancelAllFriendRequests = (UFunction*) UObject::GObjObjects()->GetIndex( 126223 );

	UTgGfxFriendManagement_execUSC_CancelAllFriendRequests_Parms USC_CancelAllFriendRequests_Parms;

	pFnUSC_CancelAllFriendRequests->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_CancelAllFriendRequests, &USC_CancelAllFriendRequests_Parms, NULL );

	pFnUSC_CancelAllFriendRequests->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_CancelFriendRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_CancelFriendRequest ( int nPlayerId )
{
	static UFunction* pFnUSC_CancelFriendRequest = NULL;

	if ( ! pFnUSC_CancelFriendRequest )
		pFnUSC_CancelFriendRequest = (UFunction*) UObject::GObjObjects()->GetIndex( 126221 );

	UTgGfxFriendManagement_execUSC_CancelFriendRequest_Parms USC_CancelFriendRequest_Parms;
	USC_CancelFriendRequest_Parms.nPlayerId = nPlayerId;

	pFnUSC_CancelFriendRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_CancelFriendRequest, &USC_CancelFriendRequest_Parms, NULL );

	pFnUSC_CancelFriendRequest->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_AcceptAllFriendRequests
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxFriendManagement::USC_AcceptAllFriendRequests ( )
{
	static UFunction* pFnUSC_AcceptAllFriendRequests = NULL;

	if ( ! pFnUSC_AcceptAllFriendRequests )
		pFnUSC_AcceptAllFriendRequests = (UFunction*) UObject::GObjObjects()->GetIndex( 126220 );

	UTgGfxFriendManagement_execUSC_AcceptAllFriendRequests_Parms USC_AcceptAllFriendRequests_Parms;

	pFnUSC_AcceptAllFriendRequests->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_AcceptAllFriendRequests, &USC_AcceptAllFriendRequests_Parms, NULL );

	pFnUSC_AcceptAllFriendRequests->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_AcceptFriendRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_AcceptFriendRequest ( int nPlayerId )
{
	static UFunction* pFnUSC_AcceptFriendRequest = NULL;

	if ( ! pFnUSC_AcceptFriendRequest )
		pFnUSC_AcceptFriendRequest = (UFunction*) UObject::GObjObjects()->GetIndex( 126218 );

	UTgGfxFriendManagement_execUSC_AcceptFriendRequest_Parms USC_AcceptFriendRequest_Parms;
	USC_AcceptFriendRequest_Parms.nPlayerId = nPlayerId;

	pFnUSC_AcceptFriendRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_AcceptFriendRequest, &USC_AcceptFriendRequest_Parms, NULL );

	pFnUSC_AcceptFriendRequest->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_CancelClanInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nClanId                        ( CPF_Parm )

void UTgGfxFriendManagement::USC_CancelClanInvite ( int nClanId )
{
	static UFunction* pFnUSC_CancelClanInvite = NULL;

	if ( ! pFnUSC_CancelClanInvite )
		pFnUSC_CancelClanInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 126216 );

	UTgGfxFriendManagement_execUSC_CancelClanInvite_Parms USC_CancelClanInvite_Parms;
	USC_CancelClanInvite_Parms.nClanId = nClanId;

	pFnUSC_CancelClanInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_CancelClanInvite, &USC_CancelClanInvite_Parms, NULL );

	pFnUSC_CancelClanInvite->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_AcceptClanInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nClanId                        ( CPF_Parm )

void UTgGfxFriendManagement::USC_AcceptClanInvite ( int nClanId )
{
	static UFunction* pFnUSC_AcceptClanInvite = NULL;

	if ( ! pFnUSC_AcceptClanInvite )
		pFnUSC_AcceptClanInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 126214 );

	UTgGfxFriendManagement_execUSC_AcceptClanInvite_Parms USC_AcceptClanInvite_Parms;
	USC_AcceptClanInvite_Parms.nClanId = nClanId;

	pFnUSC_AcceptClanInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_AcceptClanInvite, &USC_AcceptClanInvite_Parms, NULL );

	pFnUSC_AcceptClanInvite->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_CancelInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_CancelInvite ( int nPlayerId )
{
	static UFunction* pFnUSC_CancelInvite = NULL;

	if ( ! pFnUSC_CancelInvite )
		pFnUSC_CancelInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 126212 );

	UTgGfxFriendManagement_execUSC_CancelInvite_Parms USC_CancelInvite_Parms;
	USC_CancelInvite_Parms.nPlayerId = nPlayerId;

	pFnUSC_CancelInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_CancelInvite, &USC_CancelInvite_Parms, NULL );

	pFnUSC_CancelInvite->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_InviteFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_InviteFriend ( int nPlayerId )
{
	static UFunction* pFnUSC_InviteFriend = NULL;

	if ( ! pFnUSC_InviteFriend )
		pFnUSC_InviteFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 126210 );

	UTgGfxFriendManagement_execUSC_InviteFriend_Parms USC_InviteFriend_Parms;
	USC_InviteFriend_Parms.nPlayerId = nPlayerId;

	pFnUSC_InviteFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_InviteFriend, &USC_InviteFriend_Parms, NULL );

	pFnUSC_InviteFriend->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_GetListData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nId                            ( CPF_Parm )

void UTgGfxFriendManagement::USC_GetListData ( int nId )
{
	static UFunction* pFnUSC_GetListData = NULL;

	if ( ! pFnUSC_GetListData )
		pFnUSC_GetListData = (UFunction*) UObject::GObjObjects()->GetIndex( 126208 );

	UTgGfxFriendManagement_execUSC_GetListData_Parms USC_GetListData_Parms;
	USC_GetListData_Parms.nId = nId;

	pFnUSC_GetListData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetListData, &USC_GetListData_Parms, NULL );

	pFnUSC_GetListData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_SearchByString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_SearchByString ( struct FString PlayerName )
{
	static UFunction* pFnUSC_SearchByString = NULL;

	if ( ! pFnUSC_SearchByString )
		pFnUSC_SearchByString = (UFunction*) UObject::GObjObjects()->GetIndex( 126206 );

	UTgGfxFriendManagement_execUSC_SearchByString_Parms USC_SearchByString_Parms;
	memcpy ( &USC_SearchByString_Parms.PlayerName, &PlayerName, 0xC );

	pFnUSC_SearchByString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SearchByString, &USC_SearchByString_Parms, NULL );

	pFnUSC_SearchByString->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_MessageFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_MessageFriend ( int nPlayerId, struct FString sPlayerName )
{
	static UFunction* pFnUSC_MessageFriend = NULL;

	if ( ! pFnUSC_MessageFriend )
		pFnUSC_MessageFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 126203 );

	UTgGfxFriendManagement_execUSC_MessageFriend_Parms USC_MessageFriend_Parms;
	USC_MessageFriend_Parms.nPlayerId = nPlayerId;
	memcpy ( &USC_MessageFriend_Parms.sPlayerName, &sPlayerName, 0xC );

	pFnUSC_MessageFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_MessageFriend, &USC_MessageFriend_Parms, NULL );

	pFnUSC_MessageFriend->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_RemoveFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_RemoveFriend ( int nPlayerId )
{
	static UFunction* pFnUSC_RemoveFriend = NULL;

	if ( ! pFnUSC_RemoveFriend )
		pFnUSC_RemoveFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 126201 );

	UTgGfxFriendManagement_execUSC_RemoveFriend_Parms USC_RemoveFriend_Parms;
	USC_RemoveFriend_Parms.nPlayerId = nPlayerId;

	pFnUSC_RemoveFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_RemoveFriend, &USC_RemoveFriend_Parms, NULL );

	pFnUSC_RemoveFriend->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_GetFriendsData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxFriendManagement::USC_GetFriendsData ( )
{
	static UFunction* pFnUSC_GetFriendsData = NULL;

	if ( ! pFnUSC_GetFriendsData )
		pFnUSC_GetFriendsData = (UFunction*) UObject::GObjObjects()->GetIndex( 126200 );

	UTgGfxFriendManagement_execUSC_GetFriendsData_Parms USC_GetFriendsData_Parms;

	pFnUSC_GetFriendsData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetFriendsData, &USC_GetFriendsData_Parms, NULL );

	pFnUSC_GetFriendsData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFriendManagement.USC_OnCurse_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_OnCurse_Delegate ( struct FString UserName )
{
	static UFunction* pFnUSC_OnCurse_Delegate = NULL;

	if ( ! pFnUSC_OnCurse_Delegate )
		pFnUSC_OnCurse_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126109 );

	UTgGfxFriendManagement_execUSC_OnCurse_Delegate_Parms USC_OnCurse_Delegate_Parms;
	memcpy ( &USC_OnCurse_Delegate_Parms.UserName, &UserName, 0xC );

	this->ProcessEvent ( pFnUSC_OnCurse_Delegate, &USC_OnCurse_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_EditNote_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_EditNote_Delegate ( int nPlayerId )
{
	static UFunction* pFnUSC_EditNote_Delegate = NULL;

	if ( ! pFnUSC_EditNote_Delegate )
		pFnUSC_EditNote_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126111 );

	UTgGfxFriendManagement_execUSC_EditNote_Delegate_Parms USC_EditNote_Delegate_Parms;
	USC_EditNote_Delegate_Parms.nPlayerId = nPlayerId;

	this->ProcessEvent ( pFnUSC_EditNote_Delegate, &USC_EditNote_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_BlockPlayer_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxFriendManagement::USC_BlockPlayer_Delegate ( )
{
	static UFunction* pFnUSC_BlockPlayer_Delegate = NULL;

	if ( ! pFnUSC_BlockPlayer_Delegate )
		pFnUSC_BlockPlayer_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126113 );

	UTgGfxFriendManagement_execUSC_BlockPlayer_Delegate_Parms USC_BlockPlayer_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_BlockPlayer_Delegate, &USC_BlockPlayer_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_InviteClan_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxFriendManagement::USC_InviteClan_Delegate ( )
{
	static UFunction* pFnUSC_InviteClan_Delegate = NULL;

	if ( ! pFnUSC_InviteClan_Delegate )
		pFnUSC_InviteClan_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126115 );

	UTgGfxFriendManagement_execUSC_InviteClan_Delegate_Parms USC_InviteClan_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_InviteClan_Delegate, &USC_InviteClan_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_AddFriend_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxFriendManagement::USC_AddFriend_Delegate ( )
{
	static UFunction* pFnUSC_AddFriend_Delegate = NULL;

	if ( ! pFnUSC_AddFriend_Delegate )
		pFnUSC_AddFriend_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126117 );

	UTgGfxFriendManagement_execUSC_AddFriend_Delegate_Parms USC_AddFriend_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_AddFriend_Delegate, &USC_AddFriend_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_Resize_Delegate
// [0x00120000] 
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxFriendManagement::USC_Resize_Delegate ( class UGFxObject* pObj )
{
	static UFunction* pFnUSC_Resize_Delegate = NULL;

	if ( ! pFnUSC_Resize_Delegate )
		pFnUSC_Resize_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126119 );

	UTgGfxFriendManagement_execUSC_Resize_Delegate_Parms USC_Resize_Delegate_Parms;
	USC_Resize_Delegate_Parms.pObj = pObj;

	this->ProcessEvent ( pFnUSC_Resize_Delegate, &USC_Resize_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_ToggleDND_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxFriendManagement::USC_ToggleDND_Delegate ( )
{
	static UFunction* pFnUSC_ToggleDND_Delegate = NULL;

	if ( ! pFnUSC_ToggleDND_Delegate )
		pFnUSC_ToggleDND_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126121 );

	UTgGfxFriendManagement_execUSC_ToggleDND_Delegate_Parms USC_ToggleDND_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_ToggleDND_Delegate, &USC_ToggleDND_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_UpdateStatusMessage_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 sStatus                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_UpdateStatusMessage_Delegate ( struct FString sStatus )
{
	static UFunction* pFnUSC_UpdateStatusMessage_Delegate = NULL;

	if ( ! pFnUSC_UpdateStatusMessage_Delegate )
		pFnUSC_UpdateStatusMessage_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126123 );

	UTgGfxFriendManagement_execUSC_UpdateStatusMessage_Delegate_Parms USC_UpdateStatusMessage_Delegate_Parms;
	memcpy ( &USC_UpdateStatusMessage_Delegate_Parms.sStatus, &sStatus, 0xC );

	this->ProcessEvent ( pFnUSC_UpdateStatusMessage_Delegate, &USC_UpdateStatusMessage_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_InviteToClan_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_InviteToClan_Delegate ( struct FString sPlayerName )
{
	static UFunction* pFnUSC_InviteToClan_Delegate = NULL;

	if ( ! pFnUSC_InviteToClan_Delegate )
		pFnUSC_InviteToClan_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126125 );

	UTgGfxFriendManagement_execUSC_InviteToClan_Delegate_Parms USC_InviteToClan_Delegate_Parms;
	memcpy ( &USC_InviteToClan_Delegate_Parms.sPlayerName, &sPlayerName, 0xC );

	this->ProcessEvent ( pFnUSC_InviteToClan_Delegate, &USC_InviteToClan_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_BlockByString_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_BlockByString_Delegate ( struct FString sPlayerName )
{
	static UFunction* pFnUSC_BlockByString_Delegate = NULL;

	if ( ! pFnUSC_BlockByString_Delegate )
		pFnUSC_BlockByString_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126127 );

	UTgGfxFriendManagement_execUSC_BlockByString_Delegate_Parms USC_BlockByString_Delegate_Parms;
	memcpy ( &USC_BlockByString_Delegate_Parms.sPlayerName, &sPlayerName, 0xC );

	this->ProcessEvent ( pFnUSC_BlockByString_Delegate, &USC_BlockByString_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_InviteFriendByString_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_InviteFriendByString_Delegate ( struct FString sPlayerName )
{
	static UFunction* pFnUSC_InviteFriendByString_Delegate = NULL;

	if ( ! pFnUSC_InviteFriendByString_Delegate )
		pFnUSC_InviteFriendByString_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126129 );

	UTgGfxFriendManagement_execUSC_InviteFriendByString_Delegate_Parms USC_InviteFriendByString_Delegate_Parms;
	memcpy ( &USC_InviteFriendByString_Delegate_Parms.sPlayerName, &sPlayerName, 0xC );

	this->ProcessEvent ( pFnUSC_InviteFriendByString_Delegate, &USC_InviteFriendByString_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_AddPlayerNote_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )
// struct FString                 sPlayerNote                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_AddPlayerNote_Delegate ( int nPlayerId, struct FString sPlayerNote )
{
	static UFunction* pFnUSC_AddPlayerNote_Delegate = NULL;

	if ( ! pFnUSC_AddPlayerNote_Delegate )
		pFnUSC_AddPlayerNote_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126131 );

	UTgGfxFriendManagement_execUSC_AddPlayerNote_Delegate_Parms USC_AddPlayerNote_Delegate_Parms;
	USC_AddPlayerNote_Delegate_Parms.nPlayerId = nPlayerId;
	memcpy ( &USC_AddPlayerNote_Delegate_Parms.sPlayerNote, &sPlayerNote, 0xC );

	this->ProcessEvent ( pFnUSC_AddPlayerNote_Delegate, &USC_AddPlayerNote_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_RemoveBlocked_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_RemoveBlocked_Delegate ( int nPlayerId )
{
	static UFunction* pFnUSC_RemoveBlocked_Delegate = NULL;

	if ( ! pFnUSC_RemoveBlocked_Delegate )
		pFnUSC_RemoveBlocked_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126133 );

	UTgGfxFriendManagement_execUSC_RemoveBlocked_Delegate_Parms USC_RemoveBlocked_Delegate_Parms;
	USC_RemoveBlocked_Delegate_Parms.nPlayerId = nPlayerId;

	this->ProcessEvent ( pFnUSC_RemoveBlocked_Delegate, &USC_RemoveBlocked_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_PartyKick_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_PartyKick_Delegate ( int nPlayerId )
{
	static UFunction* pFnUSC_PartyKick_Delegate = NULL;

	if ( ! pFnUSC_PartyKick_Delegate )
		pFnUSC_PartyKick_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126135 );

	UTgGfxFriendManagement_execUSC_PartyKick_Delegate_Parms USC_PartyKick_Delegate_Parms;
	USC_PartyKick_Delegate_Parms.nPlayerId = nPlayerId;

	this->ProcessEvent ( pFnUSC_PartyKick_Delegate, &USC_PartyKick_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_PartyInvite_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_PartyInvite_Delegate ( int nPlayerId )
{
	static UFunction* pFnUSC_PartyInvite_Delegate = NULL;

	if ( ! pFnUSC_PartyInvite_Delegate )
		pFnUSC_PartyInvite_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126137 );

	UTgGfxFriendManagement_execUSC_PartyInvite_Delegate_Parms USC_PartyInvite_Delegate_Parms;
	USC_PartyInvite_Delegate_Parms.nPlayerId = nPlayerId;

	this->ProcessEvent ( pFnUSC_PartyInvite_Delegate, &USC_PartyInvite_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_SpectatePlayer_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_SpectatePlayer_Delegate ( int nPlayerId )
{
	static UFunction* pFnUSC_SpectatePlayer_Delegate = NULL;

	if ( ! pFnUSC_SpectatePlayer_Delegate )
		pFnUSC_SpectatePlayer_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126139 );

	UTgGfxFriendManagement_execUSC_SpectatePlayer_Delegate_Parms USC_SpectatePlayer_Delegate_Parms;
	USC_SpectatePlayer_Delegate_Parms.nPlayerId = nPlayerId;

	this->ProcessEvent ( pFnUSC_SpectatePlayer_Delegate, &USC_SpectatePlayer_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_ViewPlayerClan_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxFriendManagement::USC_ViewPlayerClan_Delegate ( )
{
	static UFunction* pFnUSC_ViewPlayerClan_Delegate = NULL;

	if ( ! pFnUSC_ViewPlayerClan_Delegate )
		pFnUSC_ViewPlayerClan_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126141 );

	UTgGfxFriendManagement_execUSC_ViewPlayerClan_Delegate_Parms USC_ViewPlayerClan_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_ViewPlayerClan_Delegate, &USC_ViewPlayerClan_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_ViewPlayerProfile_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_ViewPlayerProfile_Delegate ( struct FString sPlayerName )
{
	static UFunction* pFnUSC_ViewPlayerProfile_Delegate = NULL;

	if ( ! pFnUSC_ViewPlayerProfile_Delegate )
		pFnUSC_ViewPlayerProfile_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126143 );

	UTgGfxFriendManagement_execUSC_ViewPlayerProfile_Delegate_Parms USC_ViewPlayerProfile_Delegate_Parms;
	memcpy ( &USC_ViewPlayerProfile_Delegate_Parms.sPlayerName, &sPlayerName, 0xC );

	this->ProcessEvent ( pFnUSC_ViewPlayerProfile_Delegate, &USC_ViewPlayerProfile_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_CancelAllFriendRequests_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxFriendManagement::USC_CancelAllFriendRequests_Delegate ( )
{
	static UFunction* pFnUSC_CancelAllFriendRequests_Delegate = NULL;

	if ( ! pFnUSC_CancelAllFriendRequests_Delegate )
		pFnUSC_CancelAllFriendRequests_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126145 );

	UTgGfxFriendManagement_execUSC_CancelAllFriendRequests_Delegate_Parms USC_CancelAllFriendRequests_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_CancelAllFriendRequests_Delegate, &USC_CancelAllFriendRequests_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_CancelFriendRequest_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_CancelFriendRequest_Delegate ( int nPlayerId )
{
	static UFunction* pFnUSC_CancelFriendRequest_Delegate = NULL;

	if ( ! pFnUSC_CancelFriendRequest_Delegate )
		pFnUSC_CancelFriendRequest_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126147 );

	UTgGfxFriendManagement_execUSC_CancelFriendRequest_Delegate_Parms USC_CancelFriendRequest_Delegate_Parms;
	USC_CancelFriendRequest_Delegate_Parms.nPlayerId = nPlayerId;

	this->ProcessEvent ( pFnUSC_CancelFriendRequest_Delegate, &USC_CancelFriendRequest_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_AcceptAllFriendRequests_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxFriendManagement::USC_AcceptAllFriendRequests_Delegate ( )
{
	static UFunction* pFnUSC_AcceptAllFriendRequests_Delegate = NULL;

	if ( ! pFnUSC_AcceptAllFriendRequests_Delegate )
		pFnUSC_AcceptAllFriendRequests_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126149 );

	UTgGfxFriendManagement_execUSC_AcceptAllFriendRequests_Delegate_Parms USC_AcceptAllFriendRequests_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_AcceptAllFriendRequests_Delegate, &USC_AcceptAllFriendRequests_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_AcceptFriendRequest_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_AcceptFriendRequest_Delegate ( int nPlayerId )
{
	static UFunction* pFnUSC_AcceptFriendRequest_Delegate = NULL;

	if ( ! pFnUSC_AcceptFriendRequest_Delegate )
		pFnUSC_AcceptFriendRequest_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126151 );

	UTgGfxFriendManagement_execUSC_AcceptFriendRequest_Delegate_Parms USC_AcceptFriendRequest_Delegate_Parms;
	USC_AcceptFriendRequest_Delegate_Parms.nPlayerId = nPlayerId;

	this->ProcessEvent ( pFnUSC_AcceptFriendRequest_Delegate, &USC_AcceptFriendRequest_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_CancelClanInvite_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nClanId                        ( CPF_Parm )

void UTgGfxFriendManagement::USC_CancelClanInvite_Delegate ( int nClanId )
{
	static UFunction* pFnUSC_CancelClanInvite_Delegate = NULL;

	if ( ! pFnUSC_CancelClanInvite_Delegate )
		pFnUSC_CancelClanInvite_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126153 );

	UTgGfxFriendManagement_execUSC_CancelClanInvite_Delegate_Parms USC_CancelClanInvite_Delegate_Parms;
	USC_CancelClanInvite_Delegate_Parms.nClanId = nClanId;

	this->ProcessEvent ( pFnUSC_CancelClanInvite_Delegate, &USC_CancelClanInvite_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_AcceptClanInvite_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nClanId                        ( CPF_Parm )

void UTgGfxFriendManagement::USC_AcceptClanInvite_Delegate ( int nClanId )
{
	static UFunction* pFnUSC_AcceptClanInvite_Delegate = NULL;

	if ( ! pFnUSC_AcceptClanInvite_Delegate )
		pFnUSC_AcceptClanInvite_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126155 );

	UTgGfxFriendManagement_execUSC_AcceptClanInvite_Delegate_Parms USC_AcceptClanInvite_Delegate_Parms;
	USC_AcceptClanInvite_Delegate_Parms.nClanId = nClanId;

	this->ProcessEvent ( pFnUSC_AcceptClanInvite_Delegate, &USC_AcceptClanInvite_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_CancelInvite_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_CancelInvite_Delegate ( int nPlayerId )
{
	static UFunction* pFnUSC_CancelInvite_Delegate = NULL;

	if ( ! pFnUSC_CancelInvite_Delegate )
		pFnUSC_CancelInvite_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126157 );

	UTgGfxFriendManagement_execUSC_CancelInvite_Delegate_Parms USC_CancelInvite_Delegate_Parms;
	USC_CancelInvite_Delegate_Parms.nPlayerId = nPlayerId;

	this->ProcessEvent ( pFnUSC_CancelInvite_Delegate, &USC_CancelInvite_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_InviteFriend_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_InviteFriend_Delegate ( int nPlayerId )
{
	static UFunction* pFnUSC_InviteFriend_Delegate = NULL;

	if ( ! pFnUSC_InviteFriend_Delegate )
		pFnUSC_InviteFriend_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126159 );

	UTgGfxFriendManagement_execUSC_InviteFriend_Delegate_Parms USC_InviteFriend_Delegate_Parms;
	USC_InviteFriend_Delegate_Parms.nPlayerId = nPlayerId;

	this->ProcessEvent ( pFnUSC_InviteFriend_Delegate, &USC_InviteFriend_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_GetListData_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nId                            ( CPF_Parm )

void UTgGfxFriendManagement::USC_GetListData_Delegate ( int nId )
{
	static UFunction* pFnUSC_GetListData_Delegate = NULL;

	if ( ! pFnUSC_GetListData_Delegate )
		pFnUSC_GetListData_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126161 );

	UTgGfxFriendManagement_execUSC_GetListData_Delegate_Parms USC_GetListData_Delegate_Parms;
	USC_GetListData_Delegate_Parms.nId = nId;

	this->ProcessEvent ( pFnUSC_GetListData_Delegate, &USC_GetListData_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_SearchByString_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_SearchByString_Delegate ( struct FString PlayerName )
{
	static UFunction* pFnUSC_SearchByString_Delegate = NULL;

	if ( ! pFnUSC_SearchByString_Delegate )
		pFnUSC_SearchByString_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126163 );

	UTgGfxFriendManagement_execUSC_SearchByString_Delegate_Parms USC_SearchByString_Delegate_Parms;
	memcpy ( &USC_SearchByString_Delegate_Parms.PlayerName, &PlayerName, 0xC );

	this->ProcessEvent ( pFnUSC_SearchByString_Delegate, &USC_SearchByString_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_MessageFriend_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxFriendManagement::USC_MessageFriend_Delegate ( int nPlayerId, struct FString sPlayerName )
{
	static UFunction* pFnUSC_MessageFriend_Delegate = NULL;

	if ( ! pFnUSC_MessageFriend_Delegate )
		pFnUSC_MessageFriend_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126165 );

	UTgGfxFriendManagement_execUSC_MessageFriend_Delegate_Parms USC_MessageFriend_Delegate_Parms;
	USC_MessageFriend_Delegate_Parms.nPlayerId = nPlayerId;
	memcpy ( &USC_MessageFriend_Delegate_Parms.sPlayerName, &sPlayerName, 0xC );

	this->ProcessEvent ( pFnUSC_MessageFriend_Delegate, &USC_MessageFriend_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_RemoveFriend_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGfxFriendManagement::USC_RemoveFriend_Delegate ( int nPlayerId )
{
	static UFunction* pFnUSC_RemoveFriend_Delegate = NULL;

	if ( ! pFnUSC_RemoveFriend_Delegate )
		pFnUSC_RemoveFriend_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126167 );

	UTgGfxFriendManagement_execUSC_RemoveFriend_Delegate_Parms USC_RemoveFriend_Delegate_Parms;
	USC_RemoveFriend_Delegate_Parms.nPlayerId = nPlayerId;

	this->ProcessEvent ( pFnUSC_RemoveFriend_Delegate, &USC_RemoveFriend_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxFriendManagement.USC_GetFriendsData_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxFriendManagement::USC_GetFriendsData_Delegate ( )
{
	static UFunction* pFnUSC_GetFriendsData_Delegate = NULL;

	if ( ! pFnUSC_GetFriendsData_Delegate )
		pFnUSC_GetFriendsData_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126169 );

	UTgGfxFriendManagement_execUSC_GetFriendsData_Delegate_Parms USC_GetFriendsData_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_GetFriendsData_Delegate, &USC_GetFriendsData_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxGammaControls.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxGammaControls::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126271 );

	UTgGfxGammaControls_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGammaControls.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxGammaControls::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126269 );

	UTgGfxGammaControls_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGammaControls.DrawGammaLogo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UTgGfxGammaControls::DrawGammaLogo ( class UCanvas* Canvas )
{
	static UFunction* pFnDrawGammaLogo = NULL;

	if ( ! pFnDrawGammaLogo )
		pFnDrawGammaLogo = (UFunction*) UObject::GObjObjects()->GetIndex( 126267 );

	UTgGfxGammaControls_execDrawGammaLogo_Parms DrawGammaLogo_Parms;
	DrawGammaLogo_Parms.Canvas = Canvas;

	pFnDrawGammaLogo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawGammaLogo, &DrawGammaLogo_Parms, NULL );

	pFnDrawGammaLogo->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGods.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxGods::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 126507 );

	UTgGfxGods_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGods.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxGods::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126506 );

	UTgGfxGods_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGods.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxGods::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126504 );

	UTgGfxGods_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGods.USC_PlayGodVideo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 demoURL                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxGods::USC_PlayGodVideo ( struct FString demoURL )
{
	static UFunction* pFnUSC_PlayGodVideo = NULL;

	if ( ! pFnUSC_PlayGodVideo )
		pFnUSC_PlayGodVideo = (UFunction*) UObject::GObjObjects()->GetIndex( 126502 );

	UTgGfxGods_execUSC_PlayGodVideo_Parms USC_PlayGodVideo_Parms;
	memcpy ( &USC_PlayGodVideo_Parms.demoURL, &demoURL, 0xC );

	pFnUSC_PlayGodVideo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_PlayGodVideo, &USC_PlayGodVideo_Parms, NULL );

	pFnUSC_PlayGodVideo->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGods.USC_PlayGodVideo_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxGods::USC_PlayGodVideo_Delegate ( )
{
	static UFunction* pFnUSC_PlayGodVideo_Delegate = NULL;

	if ( ! pFnUSC_PlayGodVideo_Delegate )
		pFnUSC_PlayGodVideo_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126303 );

	UTgGfxGods_execUSC_PlayGodVideo_Delegate_Parms USC_PlayGodVideo_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_PlayGodVideo_Delegate, &USC_PlayGodVideo_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxGods.USC_UpdateEmoteSelection
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 emoteName                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxGods::USC_UpdateEmoteSelection ( struct FString emoteName )
{
	static UFunction* pFnUSC_UpdateEmoteSelection = NULL;

	if ( ! pFnUSC_UpdateEmoteSelection )
		pFnUSC_UpdateEmoteSelection = (UFunction*) UObject::GObjObjects()->GetIndex( 126500 );

	UTgGfxGods_execUSC_UpdateEmoteSelection_Parms USC_UpdateEmoteSelection_Parms;
	memcpy ( &USC_UpdateEmoteSelection_Parms.emoteName, &emoteName, 0xC );

	pFnUSC_UpdateEmoteSelection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_UpdateEmoteSelection, &USC_UpdateEmoteSelection_Parms, NULL );

	pFnUSC_UpdateEmoteSelection->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGods.USC_UpdateEmoteSelection_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 emoteName                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxGods::USC_UpdateEmoteSelection_Delegate ( struct FString emoteName )
{
	static UFunction* pFnUSC_UpdateEmoteSelection_Delegate = NULL;

	if ( ! pFnUSC_UpdateEmoteSelection_Delegate )
		pFnUSC_UpdateEmoteSelection_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126305 );

	UTgGfxGods_execUSC_UpdateEmoteSelection_Delegate_Parms USC_UpdateEmoteSelection_Delegate_Parms;
	memcpy ( &USC_UpdateEmoteSelection_Delegate_Parms.emoteName, &emoteName, 0xC );

	this->ProcessEvent ( pFnUSC_UpdateEmoteSelection_Delegate, &USC_UpdateEmoteSelection_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxGodsHistory.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxGodsHistory::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126532 );

	UTgGfxGodsHistory_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGodsHistory.UpdateGodHistory
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxGodsHistory::eventUpdateGodHistory ( )
{
	static UFunction* pFnUpdateGodHistory = NULL;

	if ( ! pFnUpdateGodHistory )
		pFnUpdateGodHistory = (UFunction*) UObject::GObjObjects()->GetIndex( 126531 );

	UTgGfxGodsHistory_eventUpdateGodHistory_Parms UpdateGodHistory_Parms;

	this->ProcessEvent ( pFnUpdateGodHistory, &UpdateGodHistory_Parms, NULL );
};

// Function TgClient.TgGfxGodsHistory.ASC_UpdateGodHistory
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxGodsHistory::ASC_UpdateGodHistory ( )
{
	static UFunction* pFnASC_UpdateGodHistory = NULL;

	if ( ! pFnASC_UpdateGodHistory )
		pFnASC_UpdateGodHistory = (UFunction*) UObject::GObjObjects()->GetIndex( 126530 );

	UTgGfxGodsHistory_execASC_UpdateGodHistory_Parms ASC_UpdateGodHistory_Parms;

	this->ProcessEvent ( pFnASC_UpdateGodHistory, &ASC_UpdateGodHistory_Parms, NULL );
};

// Function TgClient.TgGfxGodsHistory.UpdateQueueData
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxGodsHistory::eventUpdateQueueData ( )
{
	static UFunction* pFnUpdateQueueData = NULL;

	if ( ! pFnUpdateQueueData )
		pFnUpdateQueueData = (UFunction*) UObject::GObjObjects()->GetIndex( 126529 );

	UTgGfxGodsHistory_eventUpdateQueueData_Parms UpdateQueueData_Parms;

	this->ProcessEvent ( pFnUpdateQueueData, &UpdateQueueData_Parms, NULL );
};

// Function TgClient.TgGfxGodsHistory.ASC_UpdateQueueData
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxGodsHistory::ASC_UpdateQueueData ( )
{
	static UFunction* pFnASC_UpdateQueueData = NULL;

	if ( ! pFnASC_UpdateQueueData )
		pFnASC_UpdateQueueData = (UFunction*) UObject::GObjObjects()->GetIndex( 126528 );

	UTgGfxGodsHistory_execASC_UpdateQueueData_Parms ASC_UpdateQueueData_Parms;

	this->ProcessEvent ( pFnASC_UpdateQueueData, &ASC_UpdateQueueData_Parms, NULL );
};

// Function TgClient.TgGfxGodsHistory.USC_ShowMatchDetails
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            pMatchID                       ( CPF_Parm )

void UTgGfxGodsHistory::USC_ShowMatchDetails ( int pMatchID )
{
	static UFunction* pFnUSC_ShowMatchDetails = NULL;

	if ( ! pFnUSC_ShowMatchDetails )
		pFnUSC_ShowMatchDetails = (UFunction*) UObject::GObjObjects()->GetIndex( 126526 );

	UTgGfxGodsHistory_execUSC_ShowMatchDetails_Parms USC_ShowMatchDetails_Parms;
	USC_ShowMatchDetails_Parms.pMatchID = pMatchID;

	pFnUSC_ShowMatchDetails->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ShowMatchDetails, &USC_ShowMatchDetails_Parms, NULL );

	pFnUSC_ShowMatchDetails->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGodsHistory.USC_GetHistoryData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            queueId                        ( CPF_Parm )

void UTgGfxGodsHistory::USC_GetHistoryData ( int queueId )
{
	static UFunction* pFnUSC_GetHistoryData = NULL;

	if ( ! pFnUSC_GetHistoryData )
		pFnUSC_GetHistoryData = (UFunction*) UObject::GObjObjects()->GetIndex( 126524 );

	UTgGfxGodsHistory_execUSC_GetHistoryData_Parms USC_GetHistoryData_Parms;
	USC_GetHistoryData_Parms.queueId = queueId;

	pFnUSC_GetHistoryData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetHistoryData, &USC_GetHistoryData_Parms, NULL );

	pFnUSC_GetHistoryData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGodsHistory.USC_GetQueuesDropdown
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            godId                          ( CPF_Parm )

void UTgGfxGodsHistory::USC_GetQueuesDropdown ( int godId )
{
	static UFunction* pFnUSC_GetQueuesDropdown = NULL;

	if ( ! pFnUSC_GetQueuesDropdown )
		pFnUSC_GetQueuesDropdown = (UFunction*) UObject::GObjObjects()->GetIndex( 126522 );

	UTgGfxGodsHistory_execUSC_GetQueuesDropdown_Parms USC_GetQueuesDropdown_Parms;
	USC_GetQueuesDropdown_Parms.godId = godId;

	pFnUSC_GetQueuesDropdown->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetQueuesDropdown, &USC_GetQueuesDropdown_Parms, NULL );

	pFnUSC_GetQueuesDropdown->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGodsHistory.USC_ShowMatchDetails_Delegate
// [0x00120000] 
// Parameters infos:
// int                            pMatchID                       ( CPF_Parm )

void UTgGfxGodsHistory::USC_ShowMatchDetails_Delegate ( int pMatchID )
{
	static UFunction* pFnUSC_ShowMatchDetails_Delegate = NULL;

	if ( ! pFnUSC_ShowMatchDetails_Delegate )
		pFnUSC_ShowMatchDetails_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126510 );

	UTgGfxGodsHistory_execUSC_ShowMatchDetails_Delegate_Parms USC_ShowMatchDetails_Delegate_Parms;
	USC_ShowMatchDetails_Delegate_Parms.pMatchID = pMatchID;

	this->ProcessEvent ( pFnUSC_ShowMatchDetails_Delegate, &USC_ShowMatchDetails_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxGodsHistory.USC_GetHistoryData_Delegate
// [0x00120000] 
// Parameters infos:
// int                            queueId                        ( CPF_Parm )

void UTgGfxGodsHistory::USC_GetHistoryData_Delegate ( int queueId )
{
	static UFunction* pFnUSC_GetHistoryData_Delegate = NULL;

	if ( ! pFnUSC_GetHistoryData_Delegate )
		pFnUSC_GetHistoryData_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126512 );

	UTgGfxGodsHistory_execUSC_GetHistoryData_Delegate_Parms USC_GetHistoryData_Delegate_Parms;
	USC_GetHistoryData_Delegate_Parms.queueId = queueId;

	this->ProcessEvent ( pFnUSC_GetHistoryData_Delegate, &USC_GetHistoryData_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxGodsHistory.USC_GetQueuesDropdown_Delegate
// [0x00120000] 
// Parameters infos:
// int                            godId                          ( CPF_Parm )

void UTgGfxGodsHistory::USC_GetQueuesDropdown_Delegate ( int godId )
{
	static UFunction* pFnUSC_GetQueuesDropdown_Delegate = NULL;

	if ( ! pFnUSC_GetQueuesDropdown_Delegate )
		pFnUSC_GetQueuesDropdown_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126514 );

	UTgGfxGodsHistory_execUSC_GetQueuesDropdown_Delegate_Parms USC_GetQueuesDropdown_Delegate_Parms;
	USC_GetQueuesDropdown_Delegate_Parms.godId = godId;

	this->ProcessEvent ( pFnUSC_GetQueuesDropdown_Delegate, &USC_GetQueuesDropdown_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxGodTargeter.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxGodTargeter::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126534 );

	UTgGfxGodTargeter_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGodTargeter.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxGodTargeter::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 126536 );

	UTgGfxGodTargeter_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGuides.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxGuides::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126548 );

	UTgGfxGuides_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHomePage.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxHomePage::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 126553 );

	UTgGfxHomePage_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHomePage.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxHomePage::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126551 );

	UTgGfxHomePage_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHUD.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxHUD::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126557 );

	UTgGfxHUD_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHUD.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxHUD::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126555 );

	UTgGfxHUD_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudItems.UpdateGlow
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// unsigned long                  Visibility                     ( CPF_Parm )

void UTgGfxHudItems::eventUpdateGlow ( int Index, unsigned long Visibility )
{
	static UFunction* pFnUpdateGlow = NULL;

	if ( ! pFnUpdateGlow )
		pFnUpdateGlow = (UFunction*) UObject::GObjObjects()->GetIndex( 126604 );

	UTgGfxHudItems_eventUpdateGlow_Parms UpdateGlow_Parms;
	UpdateGlow_Parms.Index = Index;
	UpdateGlow_Parms.Visibility = Visibility;

	this->ProcessEvent ( pFnUpdateGlow, &UpdateGlow_Parms, NULL );
};

// Function TgClient.TgGfxHudItems.ASC_UpdateGlow
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// unsigned long                  Visibility                     ( CPF_Parm )

void UTgGfxHudItems::ASC_UpdateGlow ( int Index, unsigned long Visibility )
{
	static UFunction* pFnASC_UpdateGlow = NULL;

	if ( ! pFnASC_UpdateGlow )
		pFnASC_UpdateGlow = (UFunction*) UObject::GObjObjects()->GetIndex( 126601 );

	UTgGfxHudItems_execASC_UpdateGlow_Parms ASC_UpdateGlow_Parms;
	ASC_UpdateGlow_Parms.Index = Index;
	ASC_UpdateGlow_Parms.Visibility = Visibility;

	this->ProcessEvent ( pFnASC_UpdateGlow, &ASC_UpdateGlow_Parms, NULL );
};

// Function TgClient.TgGfxHudItems.USC_SetupItemDisplay
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxHudItems::USC_SetupItemDisplay ( )
{
	static UFunction* pFnUSC_SetupItemDisplay = NULL;

	if ( ! pFnUSC_SetupItemDisplay )
		pFnUSC_SetupItemDisplay = (UFunction*) UObject::GObjObjects()->GetIndex( 126600 );

	UTgGfxHudItems_execUSC_SetupItemDisplay_Parms USC_SetupItemDisplay_Parms;

	pFnUSC_SetupItemDisplay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SetupItemDisplay, &USC_SetupItemDisplay_Parms, NULL );

	pFnUSC_SetupItemDisplay->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudItems.USC_SetupItemDisplay_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxHudItems::USC_SetupItemDisplay_Delegate ( )
{
	static UFunction* pFnUSC_SetupItemDisplay_Delegate = NULL;

	if ( ! pFnUSC_SetupItemDisplay_Delegate )
		pFnUSC_SetupItemDisplay_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126590 );

	UTgGfxHudItems_execUSC_SetupItemDisplay_Delegate_Parms USC_SetupItemDisplay_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_SetupItemDisplay_Delegate, &USC_SetupItemDisplay_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxHudItems.CheckWishList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bPurge                         ( CPF_Parm )

void UTgGfxHudItems::CheckWishList ( unsigned long bPurge )
{
	static UFunction* pFnCheckWishList = NULL;

	if ( ! pFnCheckWishList )
		pFnCheckWishList = (UFunction*) UObject::GObjObjects()->GetIndex( 126598 );

	UTgGfxHudItems_execCheckWishList_Parms CheckWishList_Parms;
	CheckWishList_Parms.bPurge = bPurge;

	pFnCheckWishList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckWishList, &CheckWishList_Parms, NULL );

	pFnCheckWishList->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudItems.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxHudItems::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 126596 );

	UTgGfxHudItems_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudItems.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxHudItems::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126594 );

	UTgGfxHudItems_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudNotify.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pMP                            ( CPF_Parm )

void UTgGfxHudNotify::Initialize ( class UTgGameMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126675 );

	UTgGfxHudNotify_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudNotify.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxHudNotify::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 126673 );

	UTgGfxHudNotify_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudUpgrade.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pMP                            ( CPF_Parm )

void UTgGfxHudUpgrade::Initialize ( class UTgGameMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126695 );

	UTgGfxHudUpgrade_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudUpgrade.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxHudUpgrade::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 126693 );

	UTgGfxHudUpgrade_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxIntro.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxIntro::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126697 );

	UTgGfxIntro_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLandingPanelWeb.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxLandingPanelWeb::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126701 );

	UTgGfxLandingPanelWeb_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLandingPanelWeb.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxLandingPanelWeb::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126699 );

	UTgGfxLandingPanelWeb_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLeagueMenu.UpdateFriends
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxLeagueMenu::eventUpdateFriends ( )
{
	static UFunction* pFnUpdateFriends = NULL;

	if ( ! pFnUpdateFriends )
		pFnUpdateFriends = (UFunction*) UObject::GObjObjects()->GetIndex( 126740 );

	UTgGfxLeagueMenu_eventUpdateFriends_Parms UpdateFriends_Parms;

	this->ProcessEvent ( pFnUpdateFriends, &UpdateFriends_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.ASC_UpdateFriends
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxLeagueMenu::ASC_UpdateFriends ( )
{
	static UFunction* pFnASC_UpdateFriends = NULL;

	if ( ! pFnASC_UpdateFriends )
		pFnASC_UpdateFriends = (UFunction*) UObject::GObjObjects()->GetIndex( 126739 );

	UTgGfxLeagueMenu_execASC_UpdateFriends_Parms ASC_UpdateFriends_Parms;

	this->ProcessEvent ( pFnASC_UpdateFriends, &ASC_UpdateFriends_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.UpdateStanding
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxLeagueMenu::eventUpdateStanding ( )
{
	static UFunction* pFnUpdateStanding = NULL;

	if ( ! pFnUpdateStanding )
		pFnUpdateStanding = (UFunction*) UObject::GObjObjects()->GetIndex( 126738 );

	UTgGfxLeagueMenu_eventUpdateStanding_Parms UpdateStanding_Parms;

	this->ProcessEvent ( pFnUpdateStanding, &UpdateStanding_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.ASC_UpdateStanding
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxLeagueMenu::ASC_UpdateStanding ( )
{
	static UFunction* pFnASC_UpdateStanding = NULL;

	if ( ! pFnASC_UpdateStanding )
		pFnASC_UpdateStanding = (UFunction*) UObject::GObjObjects()->GetIndex( 126737 );

	UTgGfxLeagueMenu_execASC_UpdateStanding_Parms ASC_UpdateStanding_Parms;

	this->ProcessEvent ( pFnASC_UpdateStanding, &ASC_UpdateStanding_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.UpdateLeaderboard
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxLeagueMenu::eventUpdateLeaderboard ( )
{
	static UFunction* pFnUpdateLeaderboard = NULL;

	if ( ! pFnUpdateLeaderboard )
		pFnUpdateLeaderboard = (UFunction*) UObject::GObjObjects()->GetIndex( 126736 );

	UTgGfxLeagueMenu_eventUpdateLeaderboard_Parms UpdateLeaderboard_Parms;

	this->ProcessEvent ( pFnUpdateLeaderboard, &UpdateLeaderboard_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.ASC_UpdateLeaderboard
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxLeagueMenu::ASC_UpdateLeaderboard ( )
{
	static UFunction* pFnASC_UpdateLeaderboard = NULL;

	if ( ! pFnASC_UpdateLeaderboard )
		pFnASC_UpdateLeaderboard = (UFunction*) UObject::GObjObjects()->GetIndex( 126735 );

	UTgGfxLeagueMenu_execASC_UpdateLeaderboard_Parms ASC_UpdateLeaderboard_Parms;

	this->ProcessEvent ( pFnASC_UpdateLeaderboard, &ASC_UpdateLeaderboard_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.UpdateCurrentLeagueStats
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxLeagueMenu::eventUpdateCurrentLeagueStats ( )
{
	static UFunction* pFnUpdateCurrentLeagueStats = NULL;

	if ( ! pFnUpdateCurrentLeagueStats )
		pFnUpdateCurrentLeagueStats = (UFunction*) UObject::GObjObjects()->GetIndex( 126734 );

	UTgGfxLeagueMenu_eventUpdateCurrentLeagueStats_Parms UpdateCurrentLeagueStats_Parms;

	this->ProcessEvent ( pFnUpdateCurrentLeagueStats, &UpdateCurrentLeagueStats_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.ASC_UpdateCurrentLeagueStats
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxLeagueMenu::ASC_UpdateCurrentLeagueStats ( )
{
	static UFunction* pFnASC_UpdateCurrentLeagueStats = NULL;

	if ( ! pFnASC_UpdateCurrentLeagueStats )
		pFnASC_UpdateCurrentLeagueStats = (UFunction*) UObject::GObjObjects()->GetIndex( 126733 );

	UTgGfxLeagueMenu_execASC_UpdateCurrentLeagueStats_Parms ASC_UpdateCurrentLeagueStats_Parms;

	this->ProcessEvent ( pFnASC_UpdateCurrentLeagueStats, &ASC_UpdateCurrentLeagueStats_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.UpdateLeagueListing
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxLeagueMenu::eventUpdateLeagueListing ( )
{
	static UFunction* pFnUpdateLeagueListing = NULL;

	if ( ! pFnUpdateLeagueListing )
		pFnUpdateLeagueListing = (UFunction*) UObject::GObjObjects()->GetIndex( 126732 );

	UTgGfxLeagueMenu_eventUpdateLeagueListing_Parms UpdateLeagueListing_Parms;

	this->ProcessEvent ( pFnUpdateLeagueListing, &UpdateLeagueListing_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.ASC_UpdateLeagueListing
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxLeagueMenu::ASC_UpdateLeagueListing ( )
{
	static UFunction* pFnASC_UpdateLeagueListing = NULL;

	if ( ! pFnASC_UpdateLeagueListing )
		pFnASC_UpdateLeagueListing = (UFunction*) UObject::GObjObjects()->GetIndex( 126731 );

	UTgGfxLeagueMenu_execASC_UpdateLeagueListing_Parms ASC_UpdateLeagueListing_Parms;

	this->ProcessEvent ( pFnASC_UpdateLeagueListing, &ASC_UpdateLeagueListing_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.UpdateSelectedTab
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 tabLabel                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxLeagueMenu::eventUpdateSelectedTab ( struct FString tabLabel )
{
	static UFunction* pFnUpdateSelectedTab = NULL;

	if ( ! pFnUpdateSelectedTab )
		pFnUpdateSelectedTab = (UFunction*) UObject::GObjObjects()->GetIndex( 126729 );

	UTgGfxLeagueMenu_eventUpdateSelectedTab_Parms UpdateSelectedTab_Parms;
	memcpy ( &UpdateSelectedTab_Parms.tabLabel, &tabLabel, 0xC );

	this->ProcessEvent ( pFnUpdateSelectedTab, &UpdateSelectedTab_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.ASC_UpdateSelectedTab
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 tabLabel                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxLeagueMenu::ASC_UpdateSelectedTab ( struct FString tabLabel )
{
	static UFunction* pFnASC_UpdateSelectedTab = NULL;

	if ( ! pFnASC_UpdateSelectedTab )
		pFnASC_UpdateSelectedTab = (UFunction*) UObject::GObjObjects()->GetIndex( 126727 );

	UTgGfxLeagueMenu_execASC_UpdateSelectedTab_Parms ASC_UpdateSelectedTab_Parms;
	memcpy ( &ASC_UpdateSelectedTab_Parms.tabLabel, &tabLabel, 0xC );

	this->ProcessEvent ( pFnASC_UpdateSelectedTab, &ASC_UpdateSelectedTab_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.UpdateTabLabels
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxLeagueMenu::eventUpdateTabLabels ( )
{
	static UFunction* pFnUpdateTabLabels = NULL;

	if ( ! pFnUpdateTabLabels )
		pFnUpdateTabLabels = (UFunction*) UObject::GObjObjects()->GetIndex( 126726 );

	UTgGfxLeagueMenu_eventUpdateTabLabels_Parms UpdateTabLabels_Parms;

	this->ProcessEvent ( pFnUpdateTabLabels, &UpdateTabLabels_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.ASC_UpdateTabLabels
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxLeagueMenu::ASC_UpdateTabLabels ( )
{
	static UFunction* pFnASC_UpdateTabLabels = NULL;

	if ( ! pFnASC_UpdateTabLabels )
		pFnASC_UpdateTabLabels = (UFunction*) UObject::GObjObjects()->GetIndex( 126725 );

	UTgGfxLeagueMenu_execASC_UpdateTabLabels_Parms ASC_UpdateTabLabels_Parms;

	this->ProcessEvent ( pFnASC_UpdateTabLabels, &ASC_UpdateTabLabels_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.USC_SaveTabIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            tierTabIndex                   ( CPF_Parm )

void UTgGfxLeagueMenu::USC_SaveTabIndex ( int tierTabIndex )
{
	static UFunction* pFnUSC_SaveTabIndex = NULL;

	if ( ! pFnUSC_SaveTabIndex )
		pFnUSC_SaveTabIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 126723 );

	UTgGfxLeagueMenu_execUSC_SaveTabIndex_Parms USC_SaveTabIndex_Parms;
	USC_SaveTabIndex_Parms.tierTabIndex = tierTabIndex;

	pFnUSC_SaveTabIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SaveTabIndex, &USC_SaveTabIndex_Parms, NULL );

	pFnUSC_SaveTabIndex->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLeagueMenu.USC_GetLeaderboard
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nLeagueId                      ( CPF_Parm )
// int                            nTierId                        ( CPF_Parm )

void UTgGfxLeagueMenu::USC_GetLeaderboard ( int nLeagueId, int nTierId )
{
	static UFunction* pFnUSC_GetLeaderboard = NULL;

	if ( ! pFnUSC_GetLeaderboard )
		pFnUSC_GetLeaderboard = (UFunction*) UObject::GObjObjects()->GetIndex( 126720 );

	UTgGfxLeagueMenu_execUSC_GetLeaderboard_Parms USC_GetLeaderboard_Parms;
	USC_GetLeaderboard_Parms.nLeagueId = nLeagueId;
	USC_GetLeaderboard_Parms.nTierId = nTierId;

	pFnUSC_GetLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetLeaderboard, &USC_GetLeaderboard_Parms, NULL );

	pFnUSC_GetLeaderboard->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLeagueMenu.USC_GetTopTen
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nLeagueId                      ( CPF_Parm )
// int                            nTierId                        ( CPF_Parm )

void UTgGfxLeagueMenu::USC_GetTopTen ( int nLeagueId, int nTierId )
{
	static UFunction* pFnUSC_GetTopTen = NULL;

	if ( ! pFnUSC_GetTopTen )
		pFnUSC_GetTopTen = (UFunction*) UObject::GObjObjects()->GetIndex( 126717 );

	UTgGfxLeagueMenu_execUSC_GetTopTen_Parms USC_GetTopTen_Parms;
	USC_GetTopTen_Parms.nLeagueId = nLeagueId;
	USC_GetTopTen_Parms.nTierId = nTierId;

	pFnUSC_GetTopTen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetTopTen, &USC_GetTopTen_Parms, NULL );

	pFnUSC_GetTopTen->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLeagueMenu.USC_TabSelected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 tabSelected                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxLeagueMenu::USC_TabSelected ( struct FString tabSelected )
{
	static UFunction* pFnUSC_TabSelected = NULL;

	if ( ! pFnUSC_TabSelected )
		pFnUSC_TabSelected = (UFunction*) UObject::GObjObjects()->GetIndex( 126715 );

	UTgGfxLeagueMenu_execUSC_TabSelected_Parms USC_TabSelected_Parms;
	memcpy ( &USC_TabSelected_Parms.tabSelected, &tabSelected, 0xC );

	pFnUSC_TabSelected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_TabSelected, &USC_TabSelected_Parms, NULL );

	pFnUSC_TabSelected->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLeagueMenu.USC_GetTabLabels
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxLeagueMenu::USC_GetTabLabels ( )
{
	static UFunction* pFnUSC_GetTabLabels = NULL;

	if ( ! pFnUSC_GetTabLabels )
		pFnUSC_GetTabLabels = (UFunction*) UObject::GObjObjects()->GetIndex( 126714 );

	UTgGfxLeagueMenu_execUSC_GetTabLabels_Parms USC_GetTabLabels_Parms;

	pFnUSC_GetTabLabels->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetTabLabels, &USC_GetTabLabels_Parms, NULL );

	pFnUSC_GetTabLabels->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLeagueMenu.USC_SaveTabIndex_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxLeagueMenu::USC_SaveTabIndex_Delegate ( )
{
	static UFunction* pFnUSC_SaveTabIndex_Delegate = NULL;

	if ( ! pFnUSC_SaveTabIndex_Delegate )
		pFnUSC_SaveTabIndex_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126706 );

	UTgGfxLeagueMenu_execUSC_SaveTabIndex_Delegate_Parms USC_SaveTabIndex_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_SaveTabIndex_Delegate, &USC_SaveTabIndex_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.USC_GetLeaderboard_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxLeagueMenu::USC_GetLeaderboard_Delegate ( )
{
	static UFunction* pFnUSC_GetLeaderboard_Delegate = NULL;

	if ( ! pFnUSC_GetLeaderboard_Delegate )
		pFnUSC_GetLeaderboard_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126708 );

	UTgGfxLeagueMenu_execUSC_GetLeaderboard_Delegate_Parms USC_GetLeaderboard_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_GetLeaderboard_Delegate, &USC_GetLeaderboard_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.USC_GetTopTen_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxLeagueMenu::USC_GetTopTen_Delegate ( )
{
	static UFunction* pFnUSC_GetTopTen_Delegate = NULL;

	if ( ! pFnUSC_GetTopTen_Delegate )
		pFnUSC_GetTopTen_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126710 );

	UTgGfxLeagueMenu_execUSC_GetTopTen_Delegate_Parms USC_GetTopTen_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_GetTopTen_Delegate, &USC_GetTopTen_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.USC_TabSelected_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxLeagueMenu::USC_TabSelected_Delegate ( )
{
	static UFunction* pFnUSC_TabSelected_Delegate = NULL;

	if ( ! pFnUSC_TabSelected_Delegate )
		pFnUSC_TabSelected_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126712 );

	UTgGfxLeagueMenu_execUSC_TabSelected_Delegate_Parms USC_TabSelected_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_TabSelected_Delegate, &USC_TabSelected_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.USC_GetTabLabels_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxLeagueMenu::USC_GetTabLabels_Delegate ( )
{
	static UFunction* pFnUSC_GetTabLabels_Delegate = NULL;

	if ( ! pFnUSC_GetTabLabels_Delegate )
		pFnUSC_GetTabLabels_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126704 );

	UTgGfxLeagueMenu_execUSC_GetTabLabels_Delegate_Parms USC_GetTabLabels_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_GetTabLabels_Delegate, &USC_GetTabLabels_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxLeagueMenu.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxLeagueMenu::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126702 );

	UTgGfxLeagueMenu_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLoadouts.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxLoadouts::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 126846 );

	UTgGfxLoadouts_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLoadouts.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxLoadouts::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126845 );

	UTgGfxLoadouts_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLoadouts.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxLoadouts::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126843 );

	UTgGfxLoadouts_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLobbyMain.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxLobbyMain::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126851 );

	UTgGfxLobbyMain_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLobbyMain.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxLobbyMain::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126849 );

	UTgGfxLobbyMain_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMainMenu.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxMainMenu::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126855 );

	UTgGfxMainMenu_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMainMenu.USC_GotoLobby
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxMainMenu::USC_GotoLobby ( )
{
	static UFunction* pFnUSC_GotoLobby = NULL;

	if ( ! pFnUSC_GotoLobby )
		pFnUSC_GotoLobby = (UFunction*) UObject::GObjObjects()->GetIndex( 126854 );

	UTgGfxMainMenu_execUSC_GotoLobby_Parms USC_GotoLobby_Parms;

	pFnUSC_GotoLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GotoLobby, &USC_GotoLobby_Parms, NULL );

	pFnUSC_GotoLobby->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMainMenu.USC_GotoLobby_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxMainMenu::USC_GotoLobby_Delegate ( )
{
	static UFunction* pFnUSC_GotoLobby_Delegate = NULL;

	if ( ! pFnUSC_GotoLobby_Delegate )
		pFnUSC_GotoLobby_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126852 );

	UTgGfxMainMenu_execUSC_GotoLobby_Delegate_Parms USC_GotoLobby_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_GotoLobby_Delegate, &USC_GotoLobby_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxMassInvite.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxMassInvite::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 126890 );

	UTgGfxMassInvite_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMassInvite.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxMassInvite::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126888 );

	UTgGfxMassInvite_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMatchDetails.MatchDataUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxMatchDetails::eventMatchDataUpdated ( )
{
	static UFunction* pFnMatchDataUpdated = NULL;

	if ( ! pFnMatchDataUpdated )
		pFnMatchDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 126900 );

	UTgGfxMatchDetails_eventMatchDataUpdated_Parms MatchDataUpdated_Parms;

	this->ProcessEvent ( pFnMatchDataUpdated, &MatchDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxMatchDetails.ASC_MatchDataUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxMatchDetails::ASC_MatchDataUpdated ( )
{
	static UFunction* pFnASC_MatchDataUpdated = NULL;

	if ( ! pFnASC_MatchDataUpdated )
		pFnASC_MatchDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 126899 );

	UTgGfxMatchDetails_execASC_MatchDataUpdated_Parms ASC_MatchDataUpdated_Parms;

	this->ProcessEvent ( pFnASC_MatchDataUpdated, &ASC_MatchDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxMatchDetails.USC_SearchByMatchId
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 matchId                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxMatchDetails::USC_SearchByMatchId ( struct FString matchId )
{
	static UFunction* pFnUSC_SearchByMatchId = NULL;

	if ( ! pFnUSC_SearchByMatchId )
		pFnUSC_SearchByMatchId = (UFunction*) UObject::GObjObjects()->GetIndex( 126897 );

	UTgGfxMatchDetails_execUSC_SearchByMatchId_Parms USC_SearchByMatchId_Parms;
	memcpy ( &USC_SearchByMatchId_Parms.matchId, &matchId, 0xC );

	pFnUSC_SearchByMatchId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SearchByMatchId, &USC_SearchByMatchId_Parms, NULL );

	pFnUSC_SearchByMatchId->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMatchDetails.USC_SearchByMatchId_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 matchId                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxMatchDetails::USC_SearchByMatchId_Delegate ( struct FString matchId )
{
	static UFunction* pFnUSC_SearchByMatchId_Delegate = NULL;

	if ( ! pFnUSC_SearchByMatchId_Delegate )
		pFnUSC_SearchByMatchId_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126894 );

	UTgGfxMatchDetails_execUSC_SearchByMatchId_Delegate_Parms USC_SearchByMatchId_Delegate_Parms;
	memcpy ( &USC_SearchByMatchId_Delegate_Parms.matchId, &matchId, 0xC );

	this->ProcessEvent ( pFnUSC_SearchByMatchId_Delegate, &USC_SearchByMatchId_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxMatchDetails.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxMatchDetails::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126892 );

	UTgGfxMatchDetails_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxMatchInvite.Update
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGFxMatchInvite::eventUpdate ( )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->GetIndex( 126935 );

	UTgGFxMatchInvite_eventUpdate_Parms Update_Parms;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );
};

// Function TgClient.TgGFxMatchInvite.Hide
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGFxMatchInvite::eventHide ( )
{
	static UFunction* pFnHide = NULL;

	if ( ! pFnHide )
		pFnHide = (UFunction*) UObject::GObjObjects()->GetIndex( 126934 );

	UTgGFxMatchInvite_eventHide_Parms Hide_Parms;

	this->ProcessEvent ( pFnHide, &Hide_Parms, NULL );
};

// Function TgClient.TgGFxMatchInvite.Show
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGFxMatchInvite::eventShow ( )
{
	static UFunction* pFnShow = NULL;

	if ( ! pFnShow )
		pFnShow = (UFunction*) UObject::GObjObjects()->GetIndex( 126933 );

	UTgGFxMatchInvite_eventShow_Parms Show_Parms;

	this->ProcessEvent ( pFnShow, &Show_Parms, NULL );
};

// Function TgClient.TgGFxMatchInvite.DisableBrowserInput
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGFxMatchInvite::DisableBrowserInput ( )
{
	static UFunction* pFnDisableBrowserInput = NULL;

	if ( ! pFnDisableBrowserInput )
		pFnDisableBrowserInput = (UFunction*) UObject::GObjObjects()->GetIndex( 126932 );

	UTgGFxMatchInvite_execDisableBrowserInput_Parms DisableBrowserInput_Parms;

	pFnDisableBrowserInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisableBrowserInput, &DisableBrowserInput_Parms, NULL );

	pFnDisableBrowserInput->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxMatchInvite.EnableBrowserInput
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGFxMatchInvite::EnableBrowserInput ( )
{
	static UFunction* pFnEnableBrowserInput = NULL;

	if ( ! pFnEnableBrowserInput )
		pFnEnableBrowserInput = (UFunction*) UObject::GObjObjects()->GetIndex( 126931 );

	UTgGFxMatchInvite_execEnableBrowserInput_Parms EnableBrowserInput_Parms;

	pFnEnableBrowserInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnableBrowserInput, &EnableBrowserInput_Parms, NULL );

	pFnEnableBrowserInput->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxMatchInvite.GetMatchInviteData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGFxObject* UTgGFxMatchInvite::GetMatchInviteData ( )
{
	static UFunction* pFnGetMatchInviteData = NULL;

	if ( ! pFnGetMatchInviteData )
		pFnGetMatchInviteData = (UFunction*) UObject::GObjObjects()->GetIndex( 126929 );

	UTgGFxMatchInvite_execGetMatchInviteData_Parms GetMatchInviteData_Parms;

	pFnGetMatchInviteData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMatchInviteData, &GetMatchInviteData_Parms, NULL );

	pFnGetMatchInviteData->FunctionFlags |= 0x400;

	return GetMatchInviteData_Parms.ReturnValue;
};

// Function TgClient.TgGFxMatchInvite.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGFxMatchInvite::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126927 );

	UTgGFxMatchInvite_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxMatchInvite.HideMatchInvite
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGFxMatchInvite::HideMatchInvite ( )
{
	static UFunction* pFnHideMatchInvite = NULL;

	if ( ! pFnHideMatchInvite )
		pFnHideMatchInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 126926 );

	UTgGFxMatchInvite_execHideMatchInvite_Parms HideMatchInvite_Parms;

	this->ProcessEvent ( pFnHideMatchInvite, &HideMatchInvite_Parms, NULL );
};

// Function TgClient.TgGFxMatchInvite.UpdateMatchInvite
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UGFxObject*              Obj                            ( CPF_Parm )

void UTgGFxMatchInvite::UpdateMatchInvite ( class UGFxObject* Obj )
{
	static UFunction* pFnUpdateMatchInvite = NULL;

	if ( ! pFnUpdateMatchInvite )
		pFnUpdateMatchInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 126924 );

	UTgGFxMatchInvite_execUpdateMatchInvite_Parms UpdateMatchInvite_Parms;
	UpdateMatchInvite_Parms.Obj = Obj;

	this->ProcessEvent ( pFnUpdateMatchInvite, &UpdateMatchInvite_Parms, NULL );
};

// Function TgClient.TgGFxMatchInvite.ShowMatchInvite
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UGFxObject*              Obj                            ( CPF_Parm )

void UTgGFxMatchInvite::ShowMatchInvite ( class UGFxObject* Obj )
{
	static UFunction* pFnShowMatchInvite = NULL;

	if ( ! pFnShowMatchInvite )
		pFnShowMatchInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 126922 );

	UTgGFxMatchInvite_execShowMatchInvite_Parms ShowMatchInvite_Parms;
	ShowMatchInvite_Parms.Obj = Obj;

	this->ProcessEvent ( pFnShowMatchInvite, &ShowMatchInvite_Parms, NULL );
};

// Function TgClient.TgGfxMatchLobby.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxMatchLobby::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 126942 );

	UTgGfxMatchLobby_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMatchLobby.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxMatchLobby::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126941 );

	UTgGfxMatchLobby_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMatchLobby.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxMatchLobby::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126939 );

	UTgGfxMatchLobby_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMatchLobbyClassSelection.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxMatchLobbyClassSelection::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126983 );

	UTgGfxMatchLobbyClassSelection_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMatchLobbyClassSelection.UpdateEmoteData
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxMatchLobbyClassSelection::eventUpdateEmoteData ( )
{
	static UFunction* pFnUpdateEmoteData = NULL;

	if ( ! pFnUpdateEmoteData )
		pFnUpdateEmoteData = (UFunction*) UObject::GObjObjects()->GetIndex( 126982 );

	UTgGfxMatchLobbyClassSelection_eventUpdateEmoteData_Parms UpdateEmoteData_Parms;

	this->ProcessEvent ( pFnUpdateEmoteData, &UpdateEmoteData_Parms, NULL );
};

// Function TgClient.TgGfxMatchLobbyClassSelection.ASC_UpdateEmoteData
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxMatchLobbyClassSelection::ASC_UpdateEmoteData ( )
{
	static UFunction* pFnASC_UpdateEmoteData = NULL;

	if ( ! pFnASC_UpdateEmoteData )
		pFnASC_UpdateEmoteData = (UFunction*) UObject::GObjObjects()->GetIndex( 126981 );

	UTgGfxMatchLobbyClassSelection_execASC_UpdateEmoteData_Parms ASC_UpdateEmoteData_Parms;

	this->ProcessEvent ( pFnASC_UpdateEmoteData, &ASC_UpdateEmoteData_Parms, NULL );
};

// Function TgClient.TgGfxMatchLobbyClassSelection.SetSelectedSkin
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            SkinId                         ( CPF_Parm )

void UTgGfxMatchLobbyClassSelection::eventSetSelectedSkin ( int SkinId )
{
	static UFunction* pFnSetSelectedSkin = NULL;

	if ( ! pFnSetSelectedSkin )
		pFnSetSelectedSkin = (UFunction*) UObject::GObjObjects()->GetIndex( 126979 );

	UTgGfxMatchLobbyClassSelection_eventSetSelectedSkin_Parms SetSelectedSkin_Parms;
	SetSelectedSkin_Parms.SkinId = SkinId;

	this->ProcessEvent ( pFnSetSelectedSkin, &SetSelectedSkin_Parms, NULL );
};

// Function TgClient.TgGfxMatchLobbyClassSelection.ASC_SetSelectedSkin
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            SkinId                         ( CPF_Parm )

void UTgGfxMatchLobbyClassSelection::ASC_SetSelectedSkin ( int SkinId )
{
	static UFunction* pFnASC_SetSelectedSkin = NULL;

	if ( ! pFnASC_SetSelectedSkin )
		pFnASC_SetSelectedSkin = (UFunction*) UObject::GObjObjects()->GetIndex( 126977 );

	UTgGfxMatchLobbyClassSelection_execASC_SetSelectedSkin_Parms ASC_SetSelectedSkin_Parms;
	ASC_SetSelectedSkin_Parms.SkinId = SkinId;

	this->ProcessEvent ( pFnASC_SetSelectedSkin, &ASC_SetSelectedSkin_Parms, NULL );
};

// Function TgClient.TgGfxMatchLobbyClassSelection.VoicePackPurchased
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            godId                          ( CPF_Parm )
// int                            voicePackItemId                ( CPF_Parm )

void UTgGfxMatchLobbyClassSelection::eventVoicePackPurchased ( int godId, int voicePackItemId )
{
	static UFunction* pFnVoicePackPurchased = NULL;

	if ( ! pFnVoicePackPurchased )
		pFnVoicePackPurchased = (UFunction*) UObject::GObjObjects()->GetIndex( 126974 );

	UTgGfxMatchLobbyClassSelection_eventVoicePackPurchased_Parms VoicePackPurchased_Parms;
	VoicePackPurchased_Parms.godId = godId;
	VoicePackPurchased_Parms.voicePackItemId = voicePackItemId;

	this->ProcessEvent ( pFnVoicePackPurchased, &VoicePackPurchased_Parms, NULL );
};

// Function TgClient.TgGfxMatchLobbyClassSelection.ASC_VoicePackPurchased
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            godId                          ( CPF_Parm )
// int                            voicePackItemId                ( CPF_Parm )

void UTgGfxMatchLobbyClassSelection::ASC_VoicePackPurchased ( int godId, int voicePackItemId )
{
	static UFunction* pFnASC_VoicePackPurchased = NULL;

	if ( ! pFnASC_VoicePackPurchased )
		pFnASC_VoicePackPurchased = (UFunction*) UObject::GObjObjects()->GetIndex( 126971 );

	UTgGfxMatchLobbyClassSelection_execASC_VoicePackPurchased_Parms ASC_VoicePackPurchased_Parms;
	ASC_VoicePackPurchased_Parms.godId = godId;
	ASC_VoicePackPurchased_Parms.voicePackItemId = voicePackItemId;

	this->ProcessEvent ( pFnASC_VoicePackPurchased, &ASC_VoicePackPurchased_Parms, NULL );
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_ShowEmotePurchase
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ItemId                         ( CPF_Parm )

void UTgGfxMatchLobbyClassSelection::USC_ShowEmotePurchase ( int ItemId )
{
	static UFunction* pFnUSC_ShowEmotePurchase = NULL;

	if ( ! pFnUSC_ShowEmotePurchase )
		pFnUSC_ShowEmotePurchase = (UFunction*) UObject::GObjObjects()->GetIndex( 126969 );

	UTgGfxMatchLobbyClassSelection_execUSC_ShowEmotePurchase_Parms USC_ShowEmotePurchase_Parms;
	USC_ShowEmotePurchase_Parms.ItemId = ItemId;

	pFnUSC_ShowEmotePurchase->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ShowEmotePurchase, &USC_ShowEmotePurchase_Parms, NULL );

	pFnUSC_ShowEmotePurchase->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_ShowEmotePurchase_Delegate
// [0x00120000] 
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ItemId                         ( CPF_Parm )

class UGFxObject* UTgGfxMatchLobbyClassSelection::USC_ShowEmotePurchase_Delegate ( int ItemId )
{
	static UFunction* pFnUSC_ShowEmotePurchase_Delegate = NULL;

	if ( ! pFnUSC_ShowEmotePurchase_Delegate )
		pFnUSC_ShowEmotePurchase_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126947 );

	UTgGfxMatchLobbyClassSelection_execUSC_ShowEmotePurchase_Delegate_Parms USC_ShowEmotePurchase_Delegate_Parms;
	USC_ShowEmotePurchase_Delegate_Parms.ItemId = ItemId;

	this->ProcessEvent ( pFnUSC_ShowEmotePurchase_Delegate, &USC_ShowEmotePurchase_Delegate_Parms, NULL );

	return USC_ShowEmotePurchase_Delegate_Parms.ReturnValue;
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_GetEmoteData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            godId                          ( CPF_Parm )

class UGFxObject* UTgGfxMatchLobbyClassSelection::USC_GetEmoteData ( int godId )
{
	static UFunction* pFnUSC_GetEmoteData = NULL;

	if ( ! pFnUSC_GetEmoteData )
		pFnUSC_GetEmoteData = (UFunction*) UObject::GObjObjects()->GetIndex( 126964 );

	UTgGfxMatchLobbyClassSelection_execUSC_GetEmoteData_Parms USC_GetEmoteData_Parms;
	USC_GetEmoteData_Parms.godId = godId;

	pFnUSC_GetEmoteData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetEmoteData, &USC_GetEmoteData_Parms, NULL );

	pFnUSC_GetEmoteData->FunctionFlags |= 0x400;

	return USC_GetEmoteData_Parms.ReturnValue;
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_GetEmoteData_Delegate
// [0x00120000] 
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            godId                          ( CPF_Parm )

class UGFxObject* UTgGfxMatchLobbyClassSelection::USC_GetEmoteData_Delegate ( int godId )
{
	static UFunction* pFnUSC_GetEmoteData_Delegate = NULL;

	if ( ! pFnUSC_GetEmoteData_Delegate )
		pFnUSC_GetEmoteData_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126949 );

	UTgGfxMatchLobbyClassSelection_execUSC_GetEmoteData_Delegate_Parms USC_GetEmoteData_Delegate_Parms;
	USC_GetEmoteData_Delegate_Parms.godId = godId;

	this->ProcessEvent ( pFnUSC_GetEmoteData_Delegate, &USC_GetEmoteData_Delegate_Parms, NULL );

	return USC_GetEmoteData_Delegate_Parms.ReturnValue;
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_SetVPSelection
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Selection                      ( CPF_Parm )

void UTgGfxMatchLobbyClassSelection::USC_SetVPSelection ( int Selection )
{
	static UFunction* pFnUSC_SetVPSelection = NULL;

	if ( ! pFnUSC_SetVPSelection )
		pFnUSC_SetVPSelection = (UFunction*) UObject::GObjObjects()->GetIndex( 126960 );

	UTgGfxMatchLobbyClassSelection_execUSC_SetVPSelection_Parms USC_SetVPSelection_Parms;
	USC_SetVPSelection_Parms.Selection = Selection;

	pFnUSC_SetVPSelection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SetVPSelection, &USC_SetVPSelection_Parms, NULL );

	pFnUSC_SetVPSelection->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_SetVPSelection_Delegate
// [0x00120000] 
// Parameters infos:
// int                            Selection                      ( CPF_Parm )

void UTgGfxMatchLobbyClassSelection::USC_SetVPSelection_Delegate ( int Selection )
{
	static UFunction* pFnUSC_SetVPSelection_Delegate = NULL;

	if ( ! pFnUSC_SetVPSelection_Delegate )
		pFnUSC_SetVPSelection_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126951 );

	UTgGfxMatchLobbyClassSelection_execUSC_SetVPSelection_Delegate_Parms USC_SetVPSelection_Delegate_Parms;
	USC_SetVPSelection_Delegate_Parms.Selection = Selection;

	this->ProcessEvent ( pFnUSC_SetVPSelection_Delegate, &USC_SetVPSelection_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_GetVoicePackInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            godId                          ( CPF_Parm )

class UGFxObject* UTgGfxMatchLobbyClassSelection::USC_GetVoicePackInfo ( int godId )
{
	static UFunction* pFnUSC_GetVoicePackInfo = NULL;

	if ( ! pFnUSC_GetVoicePackInfo )
		pFnUSC_GetVoicePackInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 126956 );

	UTgGfxMatchLobbyClassSelection_execUSC_GetVoicePackInfo_Parms USC_GetVoicePackInfo_Parms;
	USC_GetVoicePackInfo_Parms.godId = godId;

	pFnUSC_GetVoicePackInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetVoicePackInfo, &USC_GetVoicePackInfo_Parms, NULL );

	pFnUSC_GetVoicePackInfo->FunctionFlags |= 0x400;

	return USC_GetVoicePackInfo_Parms.ReturnValue;
};

// Function TgClient.TgGfxMatchLobbyClassSelection.USC_GetVoicePackInfo_Delegate
// [0x00120000] 
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            godId                          ( CPF_Parm )

class UGFxObject* UTgGfxMatchLobbyClassSelection::USC_GetVoicePackInfo_Delegate ( int godId )
{
	static UFunction* pFnUSC_GetVoicePackInfo_Delegate = NULL;

	if ( ! pFnUSC_GetVoicePackInfo_Delegate )
		pFnUSC_GetVoicePackInfo_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126953 );

	UTgGfxMatchLobbyClassSelection_execUSC_GetVoicePackInfo_Delegate_Parms USC_GetVoicePackInfo_Delegate_Parms;
	USC_GetVoicePackInfo_Delegate_Parms.godId = godId;

	this->ProcessEvent ( pFnUSC_GetVoicePackInfo_Delegate, &USC_GetVoicePackInfo_Delegate_Parms, NULL );

	return USC_GetVoicePackInfo_Delegate_Parms.ReturnValue;
};

// Function TgClient.TgGfxMenuBar.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxMenuBar::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 127051 );

	UTgGfxMenuBar_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMenuBar.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxMenuBar::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127049 );

	UTgGfxMenuBar_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMenuBar.USC_StopWindowMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxMenuBar::USC_StopWindowMove ( )
{
	static UFunction* pFnUSC_StopWindowMove = NULL;

	if ( ! pFnUSC_StopWindowMove )
		pFnUSC_StopWindowMove = (UFunction*) UObject::GObjObjects()->GetIndex( 127048 );

	UTgGfxMenuBar_execUSC_StopWindowMove_Parms USC_StopWindowMove_Parms;

	pFnUSC_StopWindowMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_StopWindowMove, &USC_StopWindowMove_Parms, NULL );

	pFnUSC_StopWindowMove->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMenuBar.USC_StopWindowMove_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxMenuBar::USC_StopWindowMove_Delegate ( )
{
	static UFunction* pFnUSC_StopWindowMove_Delegate = NULL;

	if ( ! pFnUSC_StopWindowMove_Delegate )
		pFnUSC_StopWindowMove_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126987 );

	UTgGfxMenuBar_execUSC_StopWindowMove_Delegate_Parms USC_StopWindowMove_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_StopWindowMove_Delegate, &USC_StopWindowMove_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxMenuBar.USC_StartWindowMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxMenuBar::USC_StartWindowMove ( )
{
	static UFunction* pFnUSC_StartWindowMove = NULL;

	if ( ! pFnUSC_StartWindowMove )
		pFnUSC_StartWindowMove = (UFunction*) UObject::GObjObjects()->GetIndex( 127047 );

	UTgGfxMenuBar_execUSC_StartWindowMove_Parms USC_StartWindowMove_Parms;

	pFnUSC_StartWindowMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_StartWindowMove, &USC_StartWindowMove_Parms, NULL );

	pFnUSC_StartWindowMove->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMenuBar.USC_StartWindowMove_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxMenuBar::USC_StartWindowMove_Delegate ( )
{
	static UFunction* pFnUSC_StartWindowMove_Delegate = NULL;

	if ( ! pFnUSC_StartWindowMove_Delegate )
		pFnUSC_StartWindowMove_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 126989 );

	UTgGfxMenuBar_execUSC_StartWindowMove_Delegate_Parms USC_StartWindowMove_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_StartWindowMove_Delegate, &USC_StartWindowMove_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxNotificationList.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxNotificationList::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 127116 );

	UTgGfxNotificationList_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxNotificationList.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxNotificationList::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127114 );

	UTgGfxNotificationList_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxParty.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxParty::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127158 );

	UTgGfxParty_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxParty.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pMP                            ( CPF_Parm )

void UTgGfxParty::Initialize ( class UTgGameMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127156 );

	UTgGfxParty_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxParty.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxParty::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 127154 );

	UTgGfxParty_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPartyManagement.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxPartyManagement::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127189 );

	UTgGfxPartyManagement_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPartyManagement.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxPartyManagement::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 127187 );

	UTgGfxPartyManagement_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPartyManagement.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pMP                            ( CPF_Parm )

void UTgGfxPartyManagement::Initialize ( class UTgGameMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127185 );

	UTgGfxPartyManagement_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayNowV2.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxPlayNowV2::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127330 );

	UTgGfxPlayNowV2_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayNowV2.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pMP                            ( CPF_Parm )

void UTgGfxPlayNowV2::Initialize ( class UTgGameMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127328 );

	UTgGfxPlayNowV2_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayNowV2.ToggleParty
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  Show                           ( CPF_Parm )

void UTgGfxPlayNowV2::eventToggleParty ( unsigned long Show )
{
	static UFunction* pFnToggleParty = NULL;

	if ( ! pFnToggleParty )
		pFnToggleParty = (UFunction*) UObject::GObjObjects()->GetIndex( 127326 );

	UTgGfxPlayNowV2_eventToggleParty_Parms ToggleParty_Parms;
	ToggleParty_Parms.Show = Show;

	this->ProcessEvent ( pFnToggleParty, &ToggleParty_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.ASC_ToggleParty
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  Show                           ( CPF_Parm )

void UTgGfxPlayNowV2::ASC_ToggleParty ( unsigned long Show )
{
	static UFunction* pFnASC_ToggleParty = NULL;

	if ( ! pFnASC_ToggleParty )
		pFnASC_ToggleParty = (UFunction*) UObject::GObjObjects()->GetIndex( 127324 );

	UTgGfxPlayNowV2_execASC_ToggleParty_Parms ASC_ToggleParty_Parms;
	ASC_ToggleParty_Parms.Show = Show;

	this->ProcessEvent ( pFnASC_ToggleParty, &ASC_ToggleParty_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.AutoNavTo
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            tabI                           ( CPF_Parm )
// int                            queueI                         ( CPF_Parm )

void UTgGfxPlayNowV2::eventAutoNavTo ( int tabI, int queueI )
{
	static UFunction* pFnAutoNavTo = NULL;

	if ( ! pFnAutoNavTo )
		pFnAutoNavTo = (UFunction*) UObject::GObjObjects()->GetIndex( 127321 );

	UTgGfxPlayNowV2_eventAutoNavTo_Parms AutoNavTo_Parms;
	AutoNavTo_Parms.tabI = tabI;
	AutoNavTo_Parms.queueI = queueI;

	this->ProcessEvent ( pFnAutoNavTo, &AutoNavTo_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.ASC_AutoNavTo
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            tabI                           ( CPF_Parm )
// int                            queueI                         ( CPF_Parm )

void UTgGfxPlayNowV2::ASC_AutoNavTo ( int tabI, int queueI )
{
	static UFunction* pFnASC_AutoNavTo = NULL;

	if ( ! pFnASC_AutoNavTo )
		pFnASC_AutoNavTo = (UFunction*) UObject::GObjObjects()->GetIndex( 127318 );

	UTgGfxPlayNowV2_execASC_AutoNavTo_Parms ASC_AutoNavTo_Parms;
	ASC_AutoNavTo_Parms.tabI = tabI;
	ASC_AutoNavTo_Parms.queueI = queueI;

	this->ProcessEvent ( pFnASC_AutoNavTo, &ASC_AutoNavTo_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.UpdateTabQueues
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  Disable                        ( CPF_Parm )

void UTgGfxPlayNowV2::eventUpdateTabQueues ( unsigned long Disable )
{
	static UFunction* pFnUpdateTabQueues = NULL;

	if ( ! pFnUpdateTabQueues )
		pFnUpdateTabQueues = (UFunction*) UObject::GObjObjects()->GetIndex( 127316 );

	UTgGfxPlayNowV2_eventUpdateTabQueues_Parms UpdateTabQueues_Parms;
	UpdateTabQueues_Parms.Disable = Disable;

	this->ProcessEvent ( pFnUpdateTabQueues, &UpdateTabQueues_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.ASC_UpdateTabQueues
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  Disable                        ( CPF_Parm )

void UTgGfxPlayNowV2::ASC_UpdateTabQueues ( unsigned long Disable )
{
	static UFunction* pFnASC_UpdateTabQueues = NULL;

	if ( ! pFnASC_UpdateTabQueues )
		pFnASC_UpdateTabQueues = (UFunction*) UObject::GObjObjects()->GetIndex( 127314 );

	UTgGfxPlayNowV2_execASC_UpdateTabQueues_Parms ASC_UpdateTabQueues_Parms;
	ASC_UpdateTabQueues_Parms.Disable = Disable;

	this->ProcessEvent ( pFnASC_UpdateTabQueues, &ASC_UpdateTabQueues_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.UpdateQueueInfo
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxPlayNowV2::eventUpdateQueueInfo ( )
{
	static UFunction* pFnUpdateQueueInfo = NULL;

	if ( ! pFnUpdateQueueInfo )
		pFnUpdateQueueInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 127313 );

	UTgGfxPlayNowV2_eventUpdateQueueInfo_Parms UpdateQueueInfo_Parms;

	this->ProcessEvent ( pFnUpdateQueueInfo, &UpdateQueueInfo_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.ASC_UpdateQueueInfo
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxPlayNowV2::ASC_UpdateQueueInfo ( )
{
	static UFunction* pFnASC_UpdateQueueInfo = NULL;

	if ( ! pFnASC_UpdateQueueInfo )
		pFnASC_UpdateQueueInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 127312 );

	UTgGfxPlayNowV2_execASC_UpdateQueueInfo_Parms ASC_UpdateQueueInfo_Parms;

	this->ProcessEvent ( pFnASC_UpdateQueueInfo, &ASC_UpdateQueueInfo_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.UpdateQueueList
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxPlayNowV2::eventUpdateQueueList ( )
{
	static UFunction* pFnUpdateQueueList = NULL;

	if ( ! pFnUpdateQueueList )
		pFnUpdateQueueList = (UFunction*) UObject::GObjObjects()->GetIndex( 127311 );

	UTgGfxPlayNowV2_eventUpdateQueueList_Parms UpdateQueueList_Parms;

	this->ProcessEvent ( pFnUpdateQueueList, &UpdateQueueList_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.ASC_UpdateQueueList
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxPlayNowV2::ASC_UpdateQueueList ( )
{
	static UFunction* pFnASC_UpdateQueueList = NULL;

	if ( ! pFnASC_UpdateQueueList )
		pFnASC_UpdateQueueList = (UFunction*) UObject::GObjObjects()->GetIndex( 127310 );

	UTgGfxPlayNowV2_execASC_UpdateQueueList_Parms ASC_UpdateQueueList_Parms;

	this->ProcessEvent ( pFnASC_UpdateQueueList, &ASC_UpdateQueueList_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.USC_ShowFeatureScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Show                           ( CPF_Parm )

void UTgGfxPlayNowV2::USC_ShowFeatureScene ( unsigned long Show )
{
	static UFunction* pFnUSC_ShowFeatureScene = NULL;

	if ( ! pFnUSC_ShowFeatureScene )
		pFnUSC_ShowFeatureScene = (UFunction*) UObject::GObjObjects()->GetIndex( 127308 );

	UTgGfxPlayNowV2_execUSC_ShowFeatureScene_Parms USC_ShowFeatureScene_Parms;
	USC_ShowFeatureScene_Parms.Show = Show;

	pFnUSC_ShowFeatureScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ShowFeatureScene, &USC_ShowFeatureScene_Parms, NULL );

	pFnUSC_ShowFeatureScene->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayNowV2.USC_ShowFeatureScene_Delegate
// [0x00120000] 
// Parameters infos:
// unsigned long                  Show                           ( CPF_Parm )

void UTgGfxPlayNowV2::USC_ShowFeatureScene_Delegate ( unsigned long Show )
{
	static UFunction* pFnUSC_ShowFeatureScene_Delegate = NULL;

	if ( ! pFnUSC_ShowFeatureScene_Delegate )
		pFnUSC_ShowFeatureScene_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127239 );

	UTgGfxPlayNowV2_execUSC_ShowFeatureScene_Delegate_Parms USC_ShowFeatureScene_Delegate_Parms;
	USC_ShowFeatureScene_Delegate_Parms.Show = Show;

	this->ProcessEvent ( pFnUSC_ShowFeatureScene_Delegate, &USC_ShowFeatureScene_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.USC_JoinQueue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            queueId                        ( CPF_Parm )

void UTgGfxPlayNowV2::USC_JoinQueue ( int queueId )
{
	static UFunction* pFnUSC_JoinQueue = NULL;

	if ( ! pFnUSC_JoinQueue )
		pFnUSC_JoinQueue = (UFunction*) UObject::GObjObjects()->GetIndex( 127305 );

	UTgGfxPlayNowV2_execUSC_JoinQueue_Parms USC_JoinQueue_Parms;
	USC_JoinQueue_Parms.queueId = queueId;

	pFnUSC_JoinQueue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_JoinQueue, &USC_JoinQueue_Parms, NULL );

	pFnUSC_JoinQueue->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayNowV2.USC_JoinQueue_Delegate
// [0x00120000] 
// Parameters infos:
// int                            queueId                        ( CPF_Parm )

void UTgGfxPlayNowV2::USC_JoinQueue_Delegate ( int queueId )
{
	static UFunction* pFnUSC_JoinQueue_Delegate = NULL;

	if ( ! pFnUSC_JoinQueue_Delegate )
		pFnUSC_JoinQueue_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127241 );

	UTgGfxPlayNowV2_execUSC_JoinQueue_Delegate_Parms USC_JoinQueue_Delegate_Parms;
	USC_JoinQueue_Delegate_Parms.queueId = queueId;

	this->ProcessEvent ( pFnUSC_JoinQueue_Delegate, &USC_JoinQueue_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.USC_OnInfoBtn
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            btnId                          ( CPF_Parm )

void UTgGfxPlayNowV2::USC_OnInfoBtn ( int btnId )
{
	static UFunction* pFnUSC_OnInfoBtn = NULL;

	if ( ! pFnUSC_OnInfoBtn )
		pFnUSC_OnInfoBtn = (UFunction*) UObject::GObjObjects()->GetIndex( 127302 );

	UTgGfxPlayNowV2_execUSC_OnInfoBtn_Parms USC_OnInfoBtn_Parms;
	USC_OnInfoBtn_Parms.btnId = btnId;

	pFnUSC_OnInfoBtn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OnInfoBtn, &USC_OnInfoBtn_Parms, NULL );

	pFnUSC_OnInfoBtn->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayNowV2.USC_OnInfoBtn_Delegate
// [0x00120000] 
// Parameters infos:
// int                            btnId                          ( CPF_Parm )

void UTgGfxPlayNowV2::USC_OnInfoBtn_Delegate ( int btnId )
{
	static UFunction* pFnUSC_OnInfoBtn_Delegate = NULL;

	if ( ! pFnUSC_OnInfoBtn_Delegate )
		pFnUSC_OnInfoBtn_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127243 );

	UTgGfxPlayNowV2_execUSC_OnInfoBtn_Delegate_Parms USC_OnInfoBtn_Delegate_Parms;
	USC_OnInfoBtn_Delegate_Parms.btnId = btnId;

	this->ProcessEvent ( pFnUSC_OnInfoBtn_Delegate, &USC_OnInfoBtn_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.USC_SelectQueue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            qId                            ( CPF_Parm )

void UTgGfxPlayNowV2::USC_SelectQueue ( int qId )
{
	static UFunction* pFnUSC_SelectQueue = NULL;

	if ( ! pFnUSC_SelectQueue )
		pFnUSC_SelectQueue = (UFunction*) UObject::GObjObjects()->GetIndex( 127299 );

	UTgGfxPlayNowV2_execUSC_SelectQueue_Parms USC_SelectQueue_Parms;
	USC_SelectQueue_Parms.qId = qId;

	pFnUSC_SelectQueue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SelectQueue, &USC_SelectQueue_Parms, NULL );

	pFnUSC_SelectQueue->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayNowV2.USC_SelectQueue_Delegate
// [0x00120000] 
// Parameters infos:
// int                            qId                            ( CPF_Parm )

void UTgGfxPlayNowV2::USC_SelectQueue_Delegate ( int qId )
{
	static UFunction* pFnUSC_SelectQueue_Delegate = NULL;

	if ( ! pFnUSC_SelectQueue_Delegate )
		pFnUSC_SelectQueue_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127245 );

	UTgGfxPlayNowV2_execUSC_SelectQueue_Delegate_Parms USC_SelectQueue_Delegate_Parms;
	USC_SelectQueue_Delegate_Parms.qId = qId;

	this->ProcessEvent ( pFnUSC_SelectQueue_Delegate, &USC_SelectQueue_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.USC_SelectRegion
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void UTgGfxPlayNowV2::USC_SelectRegion ( int Index )
{
	static UFunction* pFnUSC_SelectRegion = NULL;

	if ( ! pFnUSC_SelectRegion )
		pFnUSC_SelectRegion = (UFunction*) UObject::GObjObjects()->GetIndex( 127296 );

	UTgGfxPlayNowV2_execUSC_SelectRegion_Parms USC_SelectRegion_Parms;
	USC_SelectRegion_Parms.Index = Index;

	pFnUSC_SelectRegion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SelectRegion, &USC_SelectRegion_Parms, NULL );

	pFnUSC_SelectRegion->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayNowV2.USC_SelectRegion_Delegate
// [0x00120000] 
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void UTgGfxPlayNowV2::USC_SelectRegion_Delegate ( int Index )
{
	static UFunction* pFnUSC_SelectRegion_Delegate = NULL;

	if ( ! pFnUSC_SelectRegion_Delegate )
		pFnUSC_SelectRegion_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127247 );

	UTgGfxPlayNowV2_execUSC_SelectRegion_Delegate_Parms USC_SelectRegion_Delegate_Parms;
	USC_SelectRegion_Delegate_Parms.Index = Index;

	this->ProcessEvent ( pFnUSC_SelectRegion_Delegate, &USC_SelectRegion_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPlayNowV2.USC_GetQueueList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            tabVV                          ( CPF_Parm )

void UTgGfxPlayNowV2::USC_GetQueueList ( int tabVV )
{
	static UFunction* pFnUSC_GetQueueList = NULL;

	if ( ! pFnUSC_GetQueueList )
		pFnUSC_GetQueueList = (UFunction*) UObject::GObjObjects()->GetIndex( 127293 );

	UTgGfxPlayNowV2_execUSC_GetQueueList_Parms USC_GetQueueList_Parms;
	USC_GetQueueList_Parms.tabVV = tabVV;

	pFnUSC_GetQueueList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetQueueList, &USC_GetQueueList_Parms, NULL );

	pFnUSC_GetQueueList->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayNowV2.USC_GetQueueList_Delegate
// [0x00120000] 
// Parameters infos:
// int                            tabVV                          ( CPF_Parm )

void UTgGfxPlayNowV2::USC_GetQueueList_Delegate ( int tabVV )
{
	static UFunction* pFnUSC_GetQueueList_Delegate = NULL;

	if ( ! pFnUSC_GetQueueList_Delegate )
		pFnUSC_GetQueueList_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127249 );

	UTgGfxPlayNowV2_execUSC_GetQueueList_Delegate_Parms USC_GetQueueList_Delegate_Parms;
	USC_GetQueueList_Delegate_Parms.tabVV = tabVV;

	this->ProcessEvent ( pFnUSC_GetQueueList_Delegate, &USC_GetQueueList_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPopupModal.SendAnnounceReportPlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 reportedName                   ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxPopupModal::eventSendAnnounceReportPlayer ( struct FString reportedName )
{
	static UFunction* pFnSendAnnounceReportPlayer = NULL;

	if ( ! pFnSendAnnounceReportPlayer )
		pFnSendAnnounceReportPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 127350 );

	UTgGfxPopupModal_eventSendAnnounceReportPlayer_Parms SendAnnounceReportPlayer_Parms;
	memcpy ( &SendAnnounceReportPlayer_Parms.reportedName, &reportedName, 0xC );

	this->ProcessEvent ( pFnSendAnnounceReportPlayer, &SendAnnounceReportPlayer_Parms, NULL );
};

// Function TgClient.TgGfxPopupModal.SendClosePopup
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxPopupModal::eventSendClosePopup ( )
{
	static UFunction* pFnSendClosePopup = NULL;

	if ( ! pFnSendClosePopup )
		pFnSendClosePopup = (UFunction*) UObject::GObjObjects()->GetIndex( 127349 );

	UTgGfxPopupModal_eventSendClosePopup_Parms SendClosePopup_Parms;

	this->ProcessEvent ( pFnSendClosePopup, &SendClosePopup_Parms, NULL );
};

// Function TgClient.TgGfxPopupModal.SendOpenPopup
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )

void UTgGfxPopupModal::eventSendOpenPopup ( class UGFxObject* Data )
{
	static UFunction* pFnSendOpenPopup = NULL;

	if ( ! pFnSendOpenPopup )
		pFnSendOpenPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 127347 );

	UTgGfxPopupModal_eventSendOpenPopup_Parms SendOpenPopup_Parms;
	SendOpenPopup_Parms.Data = Data;

	this->ProcessEvent ( pFnSendOpenPopup, &SendOpenPopup_Parms, NULL );
};

// Function TgClient.TgGfxPopupModal.USC_SelectedPopup
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nActionID                      ( CPF_Parm )
// struct FString                 sInputValue                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sSecondaryInputValue           ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxPopupModal::USC_SelectedPopup ( int nActionID, struct FString sInputValue, struct FString sSecondaryInputValue )
{
	static UFunction* pFnUSC_SelectedPopup = NULL;

	if ( ! pFnUSC_SelectedPopup )
		pFnUSC_SelectedPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 127343 );

	UTgGfxPopupModal_execUSC_SelectedPopup_Parms USC_SelectedPopup_Parms;
	USC_SelectedPopup_Parms.nActionID = nActionID;
	memcpy ( &USC_SelectedPopup_Parms.sInputValue, &sInputValue, 0xC );
	memcpy ( &USC_SelectedPopup_Parms.sSecondaryInputValue, &sSecondaryInputValue, 0xC );

	pFnUSC_SelectedPopup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SelectedPopup, &USC_SelectedPopup_Parms, NULL );

	pFnUSC_SelectedPopup->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPopupModal.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxPopupModal::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127341 );

	UTgGfxPopupModal_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPopupModal.USC_SelectedPopup_Delegate
// [0x00120000] 
// Parameters infos:
// int                            nActionID                      ( CPF_Parm )
// struct FString                 sInputValue                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sSecondaryInputValue           ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxPopupModal::USC_SelectedPopup_Delegate ( int nActionID, struct FString sInputValue, struct FString sSecondaryInputValue )
{
	static UFunction* pFnUSC_SelectedPopup_Delegate = NULL;

	if ( ! pFnUSC_SelectedPopup_Delegate )
		pFnUSC_SelectedPopup_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127336 );

	UTgGfxPopupModal_execUSC_SelectedPopup_Delegate_Parms USC_SelectedPopup_Delegate_Parms;
	USC_SelectedPopup_Delegate_Parms.nActionID = nActionID;
	memcpy ( &USC_SelectedPopup_Delegate_Parms.sInputValue, &sInputValue, 0xC );
	memcpy ( &USC_SelectedPopup_Delegate_Parms.sSecondaryInputValue, &sSecondaryInputValue, 0xC );

	this->ProcessEvent ( pFnUSC_SelectedPopup_Delegate, &USC_SelectedPopup_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPopupModal.AnnounceReportPlayer
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 reportedName                   ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxPopupModal::AnnounceReportPlayer ( struct FString reportedName )
{
	static UFunction* pFnAnnounceReportPlayer = NULL;

	if ( ! pFnAnnounceReportPlayer )
		pFnAnnounceReportPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 127334 );

	UTgGfxPopupModal_execAnnounceReportPlayer_Parms AnnounceReportPlayer_Parms;
	memcpy ( &AnnounceReportPlayer_Parms.reportedName, &reportedName, 0xC );

	this->ProcessEvent ( pFnAnnounceReportPlayer, &AnnounceReportPlayer_Parms, NULL );
};

// Function TgClient.TgGfxPopupModal.ClosePopup
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxPopupModal::ClosePopup ( )
{
	static UFunction* pFnClosePopup = NULL;

	if ( ! pFnClosePopup )
		pFnClosePopup = (UFunction*) UObject::GObjObjects()->GetIndex( 127333 );

	UTgGfxPopupModal_execClosePopup_Parms ClosePopup_Parms;

	this->ProcessEvent ( pFnClosePopup, &ClosePopup_Parms, NULL );
};

// Function TgClient.TgGfxPopupModal.OpenPopup
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UGFxObject*              Obj                            ( CPF_Parm )

void UTgGfxPopupModal::OpenPopup ( class UGFxObject* Obj )
{
	static UFunction* pFnOpenPopup = NULL;

	if ( ! pFnOpenPopup )
		pFnOpenPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 127331 );

	UTgGfxPopupModal_execOpenPopup_Parms OpenPopup_Parms;
	OpenPopup_Parms.Obj = Obj;

	this->ProcessEvent ( pFnOpenPopup, &OpenPopup_Parms, NULL );
};

// Function TgClient.TgGfxProfileAccolade.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxProfileAccolade::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127355 );

	UTgGfxProfileAccolade_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileAccolade.AccoladeDataUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileAccolade::eventAccoladeDataUpdated ( )
{
	static UFunction* pFnAccoladeDataUpdated = NULL;

	if ( ! pFnAccoladeDataUpdated )
		pFnAccoladeDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127354 );

	UTgGfxProfileAccolade_eventAccoladeDataUpdated_Parms AccoladeDataUpdated_Parms;

	this->ProcessEvent ( pFnAccoladeDataUpdated, &AccoladeDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileAccolade.ASC_AccoladeDataUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileAccolade::ASC_AccoladeDataUpdated ( )
{
	static UFunction* pFnASC_AccoladeDataUpdated = NULL;

	if ( ! pFnASC_AccoladeDataUpdated )
		pFnASC_AccoladeDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127353 );

	UTgGfxProfileAccolade_execASC_AccoladeDataUpdated_Parms ASC_AccoladeDataUpdated_Parms;

	this->ProcessEvent ( pFnASC_AccoladeDataUpdated, &ASC_AccoladeDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileAchievements.CheckIfHasMasterList
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileAchievements::eventCheckIfHasMasterList ( )
{
	static UFunction* pFnCheckIfHasMasterList = NULL;

	if ( ! pFnCheckIfHasMasterList )
		pFnCheckIfHasMasterList = (UFunction*) UObject::GObjObjects()->GetIndex( 127385 );

	UTgGfxProfileAchievements_eventCheckIfHasMasterList_Parms CheckIfHasMasterList_Parms;

	this->ProcessEvent ( pFnCheckIfHasMasterList, &CheckIfHasMasterList_Parms, NULL );
};

// Function TgClient.TgGfxProfileAchievements.ASC_CheckIfHasMasterList
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileAchievements::ASC_CheckIfHasMasterList ( )
{
	static UFunction* pFnASC_CheckIfHasMasterList = NULL;

	if ( ! pFnASC_CheckIfHasMasterList )
		pFnASC_CheckIfHasMasterList = (UFunction*) UObject::GObjObjects()->GetIndex( 127384 );

	UTgGfxProfileAchievements_execASC_CheckIfHasMasterList_Parms ASC_CheckIfHasMasterList_Parms;

	this->ProcessEvent ( pFnASC_CheckIfHasMasterList, &ASC_CheckIfHasMasterList_Parms, NULL );
};

// Function TgClient.TgGfxProfileAchievements.UpdateAchievements
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileAchievements::eventUpdateAchievements ( )
{
	static UFunction* pFnUpdateAchievements = NULL;

	if ( ! pFnUpdateAchievements )
		pFnUpdateAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 127383 );

	UTgGfxProfileAchievements_eventUpdateAchievements_Parms UpdateAchievements_Parms;

	this->ProcessEvent ( pFnUpdateAchievements, &UpdateAchievements_Parms, NULL );
};

// Function TgClient.TgGfxProfileAchievements.ASC_UpdateAchievements
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileAchievements::ASC_UpdateAchievements ( )
{
	static UFunction* pFnASC_UpdateAchievements = NULL;

	if ( ! pFnASC_UpdateAchievements )
		pFnASC_UpdateAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 127382 );

	UTgGfxProfileAchievements_execASC_UpdateAchievements_Parms ASC_UpdateAchievements_Parms;

	this->ProcessEvent ( pFnASC_UpdateAchievements, &ASC_UpdateAchievements_Parms, NULL );
};

// Function TgClient.TgGfxProfileAchievements.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxProfileAchievements::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127380 );

	UTgGfxProfileAchievements_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileHistory.QueueDataUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileHistory::eventQueueDataUpdated ( )
{
	static UFunction* pFnQueueDataUpdated = NULL;

	if ( ! pFnQueueDataUpdated )
		pFnQueueDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127409 );

	UTgGfxProfileHistory_eventQueueDataUpdated_Parms QueueDataUpdated_Parms;

	this->ProcessEvent ( pFnQueueDataUpdated, &QueueDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileHistory.ASC_QueueDataUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileHistory::ASC_QueueDataUpdated ( )
{
	static UFunction* pFnASC_QueueDataUpdated = NULL;

	if ( ! pFnASC_QueueDataUpdated )
		pFnASC_QueueDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127408 );

	UTgGfxProfileHistory_execASC_QueueDataUpdated_Parms ASC_QueueDataUpdated_Parms;

	this->ProcessEvent ( pFnASC_QueueDataUpdated, &ASC_QueueDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileHistory.MatchesDataUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileHistory::eventMatchesDataUpdated ( )
{
	static UFunction* pFnMatchesDataUpdated = NULL;

	if ( ! pFnMatchesDataUpdated )
		pFnMatchesDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127407 );

	UTgGfxProfileHistory_eventMatchesDataUpdated_Parms MatchesDataUpdated_Parms;

	this->ProcessEvent ( pFnMatchesDataUpdated, &MatchesDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileHistory.ASC_MatchesDataUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileHistory::ASC_MatchesDataUpdated ( )
{
	static UFunction* pFnASC_MatchesDataUpdated = NULL;

	if ( ! pFnASC_MatchesDataUpdated )
		pFnASC_MatchesDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127406 );

	UTgGfxProfileHistory_execASC_MatchesDataUpdated_Parms ASC_MatchesDataUpdated_Parms;

	this->ProcessEvent ( pFnASC_MatchesDataUpdated, &ASC_MatchesDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileHistory.USC_ShowDetails
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 matchId                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfileHistory::USC_ShowDetails ( struct FString matchId )
{
	static UFunction* pFnUSC_ShowDetails = NULL;

	if ( ! pFnUSC_ShowDetails )
		pFnUSC_ShowDetails = (UFunction*) UObject::GObjObjects()->GetIndex( 127404 );

	UTgGfxProfileHistory_execUSC_ShowDetails_Parms USC_ShowDetails_Parms;
	memcpy ( &USC_ShowDetails_Parms.matchId, &matchId, 0xC );

	pFnUSC_ShowDetails->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ShowDetails, &USC_ShowDetails_Parms, NULL );

	pFnUSC_ShowDetails->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileHistory.USC_SetQueueFilter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            queueId                        ( CPF_Parm )

void UTgGfxProfileHistory::USC_SetQueueFilter ( int queueId )
{
	static UFunction* pFnUSC_SetQueueFilter = NULL;

	if ( ! pFnUSC_SetQueueFilter )
		pFnUSC_SetQueueFilter = (UFunction*) UObject::GObjObjects()->GetIndex( 127402 );

	UTgGfxProfileHistory_execUSC_SetQueueFilter_Parms USC_SetQueueFilter_Parms;
	USC_SetQueueFilter_Parms.queueId = queueId;

	pFnUSC_SetQueueFilter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SetQueueFilter, &USC_SetQueueFilter_Parms, NULL );

	pFnUSC_SetQueueFilter->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileHistory.USC_SetGodsFilter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sFilterGod                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfileHistory::USC_SetGodsFilter ( struct FString sFilterGod )
{
	static UFunction* pFnUSC_SetGodsFilter = NULL;

	if ( ! pFnUSC_SetGodsFilter )
		pFnUSC_SetGodsFilter = (UFunction*) UObject::GObjObjects()->GetIndex( 127400 );

	UTgGfxProfileHistory_execUSC_SetGodsFilter_Parms USC_SetGodsFilter_Parms;
	memcpy ( &USC_SetGodsFilter_Parms.sFilterGod, &sFilterGod, 0xC );

	pFnUSC_SetGodsFilter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SetGodsFilter, &USC_SetGodsFilter_Parms, NULL );

	pFnUSC_SetGodsFilter->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileHistory.USC_ShowDetails_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 matchId                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfileHistory::USC_ShowDetails_Delegate ( struct FString matchId )
{
	static UFunction* pFnUSC_ShowDetails_Delegate = NULL;

	if ( ! pFnUSC_ShowDetails_Delegate )
		pFnUSC_ShowDetails_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127387 );

	UTgGfxProfileHistory_execUSC_ShowDetails_Delegate_Parms USC_ShowDetails_Delegate_Parms;
	memcpy ( &USC_ShowDetails_Delegate_Parms.matchId, &matchId, 0xC );

	this->ProcessEvent ( pFnUSC_ShowDetails_Delegate, &USC_ShowDetails_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfileHistory.USC_SetQueueFilter_Delegate
// [0x00120000] 
// Parameters infos:
// int                            queueId                        ( CPF_Parm )

void UTgGfxProfileHistory::USC_SetQueueFilter_Delegate ( int queueId )
{
	static UFunction* pFnUSC_SetQueueFilter_Delegate = NULL;

	if ( ! pFnUSC_SetQueueFilter_Delegate )
		pFnUSC_SetQueueFilter_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127389 );

	UTgGfxProfileHistory_execUSC_SetQueueFilter_Delegate_Parms USC_SetQueueFilter_Delegate_Parms;
	USC_SetQueueFilter_Delegate_Parms.queueId = queueId;

	this->ProcessEvent ( pFnUSC_SetQueueFilter_Delegate, &USC_SetQueueFilter_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfileHistory.USC_SetGodsFilter_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 sFilterGod                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfileHistory::USC_SetGodsFilter_Delegate ( struct FString sFilterGod )
{
	static UFunction* pFnUSC_SetGodsFilter_Delegate = NULL;

	if ( ! pFnUSC_SetGodsFilter_Delegate )
		pFnUSC_SetGodsFilter_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127391 );

	UTgGfxProfileHistory_execUSC_SetGodsFilter_Delegate_Parms USC_SetGodsFilter_Delegate_Parms;
	memcpy ( &USC_SetGodsFilter_Delegate_Parms.sFilterGod, &sFilterGod, 0xC );

	this->ProcessEvent ( pFnUSC_SetGodsFilter_Delegate, &USC_SetGodsFilter_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfileHistory.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxProfileHistory::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127395 );

	UTgGfxProfileHistory_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileLeagueStats.UpdateLeagueStats
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileLeagueStats::eventUpdateLeagueStats ( )
{
	static UFunction* pFnUpdateLeagueStats = NULL;

	if ( ! pFnUpdateLeagueStats )
		pFnUpdateLeagueStats = (UFunction*) UObject::GObjObjects()->GetIndex( 127423 );

	UTgGfxProfileLeagueStats_eventUpdateLeagueStats_Parms UpdateLeagueStats_Parms;

	this->ProcessEvent ( pFnUpdateLeagueStats, &UpdateLeagueStats_Parms, NULL );
};

// Function TgClient.TgGfxProfileLeagueStats.ASC_UpdateLeagueStats
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileLeagueStats::ASC_UpdateLeagueStats ( )
{
	static UFunction* pFnASC_UpdateLeagueStats = NULL;

	if ( ! pFnASC_UpdateLeagueStats )
		pFnASC_UpdateLeagueStats = (UFunction*) UObject::GObjObjects()->GetIndex( 127422 );

	UTgGfxProfileLeagueStats_execASC_UpdateLeagueStats_Parms ASC_UpdateLeagueStats_Parms;

	this->ProcessEvent ( pFnASC_UpdateLeagueStats, &ASC_UpdateLeagueStats_Parms, NULL );
};

// Function TgClient.TgGfxProfileLeagueStats.UpdateCurrentLeagueStats
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileLeagueStats::eventUpdateCurrentLeagueStats ( )
{
	static UFunction* pFnUpdateCurrentLeagueStats = NULL;

	if ( ! pFnUpdateCurrentLeagueStats )
		pFnUpdateCurrentLeagueStats = (UFunction*) UObject::GObjObjects()->GetIndex( 127421 );

	UTgGfxProfileLeagueStats_eventUpdateCurrentLeagueStats_Parms UpdateCurrentLeagueStats_Parms;

	this->ProcessEvent ( pFnUpdateCurrentLeagueStats, &UpdateCurrentLeagueStats_Parms, NULL );
};

// Function TgClient.TgGfxProfileLeagueStats.ASC_UpdateCurrentLeagueStats
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileLeagueStats::ASC_UpdateCurrentLeagueStats ( )
{
	static UFunction* pFnASC_UpdateCurrentLeagueStats = NULL;

	if ( ! pFnASC_UpdateCurrentLeagueStats )
		pFnASC_UpdateCurrentLeagueStats = (UFunction*) UObject::GObjObjects()->GetIndex( 127420 );

	UTgGfxProfileLeagueStats_execASC_UpdateCurrentLeagueStats_Parms ASC_UpdateCurrentLeagueStats_Parms;

	this->ProcessEvent ( pFnASC_UpdateCurrentLeagueStats, &ASC_UpdateCurrentLeagueStats_Parms, NULL );
};

// Function TgClient.TgGfxProfileLeagueStats.UpdateLeagueListing
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileLeagueStats::eventUpdateLeagueListing ( )
{
	static UFunction* pFnUpdateLeagueListing = NULL;

	if ( ! pFnUpdateLeagueListing )
		pFnUpdateLeagueListing = (UFunction*) UObject::GObjObjects()->GetIndex( 127419 );

	UTgGfxProfileLeagueStats_eventUpdateLeagueListing_Parms UpdateLeagueListing_Parms;

	this->ProcessEvent ( pFnUpdateLeagueListing, &UpdateLeagueListing_Parms, NULL );
};

// Function TgClient.TgGfxProfileLeagueStats.ASC_UpdateLeagueListing
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileLeagueStats::ASC_UpdateLeagueListing ( )
{
	static UFunction* pFnASC_UpdateLeagueListing = NULL;

	if ( ! pFnASC_UpdateLeagueListing )
		pFnASC_UpdateLeagueListing = (UFunction*) UObject::GObjObjects()->GetIndex( 127418 );

	UTgGfxProfileLeagueStats_execASC_UpdateLeagueListing_Parms ASC_UpdateLeagueListing_Parms;

	this->ProcessEvent ( pFnASC_UpdateLeagueListing, &ASC_UpdateLeagueListing_Parms, NULL );
};

// Function TgClient.TgGfxProfileLeagueStats.USC_NavToAboutLeague
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxProfileLeagueStats::USC_NavToAboutLeague ( )
{
	static UFunction* pFnUSC_NavToAboutLeague = NULL;

	if ( ! pFnUSC_NavToAboutLeague )
		pFnUSC_NavToAboutLeague = (UFunction*) UObject::GObjObjects()->GetIndex( 127417 );

	UTgGfxProfileLeagueStats_execUSC_NavToAboutLeague_Parms USC_NavToAboutLeague_Parms;

	pFnUSC_NavToAboutLeague->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_NavToAboutLeague, &USC_NavToAboutLeague_Parms, NULL );

	pFnUSC_NavToAboutLeague->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileLeagueStats.USC_GetLeagueStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxProfileLeagueStats::USC_GetLeagueStats ( )
{
	static UFunction* pFnUSC_GetLeagueStats = NULL;

	if ( ! pFnUSC_GetLeagueStats )
		pFnUSC_GetLeagueStats = (UFunction*) UObject::GObjObjects()->GetIndex( 127416 );

	UTgGfxProfileLeagueStats_execUSC_GetLeagueStats_Parms USC_GetLeagueStats_Parms;

	pFnUSC_GetLeagueStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetLeagueStats, &USC_GetLeagueStats_Parms, NULL );

	pFnUSC_GetLeagueStats->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileLeagueStats.USC_NavToAboutLeague_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxProfileLeagueStats::USC_NavToAboutLeague_Delegate ( )
{
	static UFunction* pFnUSC_NavToAboutLeague_Delegate = NULL;

	if ( ! pFnUSC_NavToAboutLeague_Delegate )
		pFnUSC_NavToAboutLeague_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127414 );

	UTgGfxProfileLeagueStats_execUSC_NavToAboutLeague_Delegate_Parms USC_NavToAboutLeague_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_NavToAboutLeague_Delegate, &USC_NavToAboutLeague_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfileLeagueStats.USC_GetLeagueStats_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxProfileLeagueStats::USC_GetLeagueStats_Delegate ( )
{
	static UFunction* pFnUSC_GetLeagueStats_Delegate = NULL;

	if ( ! pFnUSC_GetLeagueStats_Delegate )
		pFnUSC_GetLeagueStats_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127412 );

	UTgGfxProfileLeagueStats_execUSC_GetLeagueStats_Delegate_Parms USC_GetLeagueStats_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_GetLeagueStats_Delegate, &USC_GetLeagueStats_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfileLeagueStats.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxProfileLeagueStats::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127410 );

	UTgGfxProfileLeagueStats_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileOverview.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxProfileOverview::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127444 );

	UTgGfxProfileOverview_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileOverview.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxProfileOverview::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127442 );

	UTgGfxProfileOverview_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileOverview.UpdateSelectedAchievements
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileOverview::eventUpdateSelectedAchievements ( )
{
	static UFunction* pFnUpdateSelectedAchievements = NULL;

	if ( ! pFnUpdateSelectedAchievements )
		pFnUpdateSelectedAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 127441 );

	UTgGfxProfileOverview_eventUpdateSelectedAchievements_Parms UpdateSelectedAchievements_Parms;

	this->ProcessEvent ( pFnUpdateSelectedAchievements, &UpdateSelectedAchievements_Parms, NULL );
};

// Function TgClient.TgGfxProfileOverview.ASC_UpdateSelectedAchievements
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileOverview::ASC_UpdateSelectedAchievements ( )
{
	static UFunction* pFnASC_UpdateSelectedAchievements = NULL;

	if ( ! pFnASC_UpdateSelectedAchievements )
		pFnASC_UpdateSelectedAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 127440 );

	UTgGfxProfileOverview_execASC_UpdateSelectedAchievements_Parms ASC_UpdateSelectedAchievements_Parms;

	this->ProcessEvent ( pFnASC_UpdateSelectedAchievements, &ASC_UpdateSelectedAchievements_Parms, NULL );
};

// Function TgClient.TgGfxProfileOverview.LeagueDataUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileOverview::eventLeagueDataUpdated ( )
{
	static UFunction* pFnLeagueDataUpdated = NULL;

	if ( ! pFnLeagueDataUpdated )
		pFnLeagueDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127439 );

	UTgGfxProfileOverview_eventLeagueDataUpdated_Parms LeagueDataUpdated_Parms;

	this->ProcessEvent ( pFnLeagueDataUpdated, &LeagueDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileOverview.ASC_LeagueDataUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileOverview::ASC_LeagueDataUpdated ( )
{
	static UFunction* pFnASC_LeagueDataUpdated = NULL;

	if ( ! pFnASC_LeagueDataUpdated )
		pFnASC_LeagueDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127438 );

	UTgGfxProfileOverview_execASC_LeagueDataUpdated_Parms ASC_LeagueDataUpdated_Parms;

	this->ProcessEvent ( pFnASC_LeagueDataUpdated, &ASC_LeagueDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileOverview.ProfileDataUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileOverview::eventProfileDataUpdated ( )
{
	static UFunction* pFnProfileDataUpdated = NULL;

	if ( ! pFnProfileDataUpdated )
		pFnProfileDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127437 );

	UTgGfxProfileOverview_eventProfileDataUpdated_Parms ProfileDataUpdated_Parms;

	this->ProcessEvent ( pFnProfileDataUpdated, &ProfileDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileOverview.ASC_ProfileDataUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileOverview::ASC_ProfileDataUpdated ( )
{
	static UFunction* pFnASC_ProfileDataUpdated = NULL;

	if ( ! pFnASC_ProfileDataUpdated )
		pFnASC_ProfileDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127436 );

	UTgGfxProfileOverview_execASC_ProfileDataUpdated_Parms ASC_ProfileDataUpdated_Parms;

	this->ProcessEvent ( pFnASC_ProfileDataUpdated, &ASC_ProfileDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileOverview.USC_NavigateToClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxProfileOverview::USC_NavigateToClan ( )
{
	static UFunction* pFnUSC_NavigateToClan = NULL;

	if ( ! pFnUSC_NavigateToClan )
		pFnUSC_NavigateToClan = (UFunction*) UObject::GObjObjects()->GetIndex( 127435 );

	UTgGfxProfileOverview_execUSC_NavigateToClan_Parms USC_NavigateToClan_Parms;

	pFnUSC_NavigateToClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_NavigateToClan, &USC_NavigateToClan_Parms, NULL );

	pFnUSC_NavigateToClan->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileOverview.USC_NavigateToClan_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxProfileOverview::USC_NavigateToClan_Delegate ( )
{
	static UFunction* pFnUSC_NavigateToClan_Delegate = NULL;

	if ( ! pFnUSC_NavigateToClan_Delegate )
		pFnUSC_NavigateToClan_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127425 );

	UTgGfxProfileOverview_execUSC_NavigateToClan_Delegate_Parms USC_NavigateToClan_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_NavigateToClan_Delegate, &USC_NavigateToClan_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.UpdateAvailable
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  vis                            ( CPF_Parm )

void UTgGfxProfilePage::eventUpdateAvailable ( unsigned long vis )
{
	static UFunction* pFnUpdateAvailable = NULL;

	if ( ! pFnUpdateAvailable )
		pFnUpdateAvailable = (UFunction*) UObject::GObjObjects()->GetIndex( 127474 );

	UTgGfxProfilePage_eventUpdateAvailable_Parms UpdateAvailable_Parms;
	UpdateAvailable_Parms.vis = vis;

	this->ProcessEvent ( pFnUpdateAvailable, &UpdateAvailable_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateAvailable
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  vis                            ( CPF_Parm )

void UTgGfxProfilePage::ASC_UpdateAvailable ( unsigned long vis )
{
	static UFunction* pFnASC_UpdateAvailable = NULL;

	if ( ! pFnASC_UpdateAvailable )
		pFnASC_UpdateAvailable = (UFunction*) UObject::GObjObjects()->GetIndex( 127472 );

	UTgGfxProfilePage_execASC_UpdateAvailable_Parms ASC_UpdateAvailable_Parms;
	ASC_UpdateAvailable_Parms.vis = vis;

	this->ProcessEvent ( pFnASC_UpdateAvailable, &ASC_UpdateAvailable_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.UpdateCallout
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfilePage::eventUpdateCallout ( )
{
	static UFunction* pFnUpdateCallout = NULL;

	if ( ! pFnUpdateCallout )
		pFnUpdateCallout = (UFunction*) UObject::GObjObjects()->GetIndex( 127471 );

	UTgGfxProfilePage_eventUpdateCallout_Parms UpdateCallout_Parms;

	this->ProcessEvent ( pFnUpdateCallout, &UpdateCallout_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateCallout
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfilePage::ASC_UpdateCallout ( )
{
	static UFunction* pFnASC_UpdateCallout = NULL;

	if ( ! pFnASC_UpdateCallout )
		pFnASC_UpdateCallout = (UFunction*) UObject::GObjObjects()->GetIndex( 127470 );

	UTgGfxProfilePage_execASC_UpdateCallout_Parms ASC_UpdateCallout_Parms;

	this->ProcessEvent ( pFnASC_UpdateCallout, &ASC_UpdateCallout_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.UpdatePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfilePage::eventUpdatePlayer ( )
{
	static UFunction* pFnUpdatePlayer = NULL;

	if ( ! pFnUpdatePlayer )
		pFnUpdatePlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 127469 );

	UTgGfxProfilePage_eventUpdatePlayer_Parms UpdatePlayer_Parms;

	this->ProcessEvent ( pFnUpdatePlayer, &UpdatePlayer_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.ASC_UpdatePlayer
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfilePage::ASC_UpdatePlayer ( )
{
	static UFunction* pFnASC_UpdatePlayer = NULL;

	if ( ! pFnASC_UpdatePlayer )
		pFnASC_UpdatePlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 127468 );

	UTgGfxProfilePage_execASC_UpdatePlayer_Parms ASC_UpdatePlayer_Parms;

	this->ProcessEvent ( pFnASC_UpdatePlayer, &ASC_UpdatePlayer_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.UpdateTab
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfilePage::eventUpdateTab ( )
{
	static UFunction* pFnUpdateTab = NULL;

	if ( ! pFnUpdateTab )
		pFnUpdateTab = (UFunction*) UObject::GObjObjects()->GetIndex( 127467 );

	UTgGfxProfilePage_eventUpdateTab_Parms UpdateTab_Parms;

	this->ProcessEvent ( pFnUpdateTab, &UpdateTab_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateTab
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfilePage::ASC_UpdateTab ( )
{
	static UFunction* pFnASC_UpdateTab = NULL;

	if ( ! pFnASC_UpdateTab )
		pFnASC_UpdateTab = (UFunction*) UObject::GObjObjects()->GetIndex( 127466 );

	UTgGfxProfilePage_execASC_UpdateTab_Parms ASC_UpdateTab_Parms;

	this->ProcessEvent ( pFnASC_UpdateTab, &ASC_UpdateTab_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.USC_UpdatePrivacy
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxProfilePage::USC_UpdatePrivacy ( )
{
	static UFunction* pFnUSC_UpdatePrivacy = NULL;

	if ( ! pFnUSC_UpdatePrivacy )
		pFnUSC_UpdatePrivacy = (UFunction*) UObject::GObjObjects()->GetIndex( 127465 );

	UTgGfxProfilePage_execUSC_UpdatePrivacy_Parms USC_UpdatePrivacy_Parms;

	pFnUSC_UpdatePrivacy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_UpdatePrivacy, &USC_UpdatePrivacy_Parms, NULL );

	pFnUSC_UpdatePrivacy->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfilePage.USC_UpdatePrivacy_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxProfilePage::USC_UpdatePrivacy_Delegate ( )
{
	static UFunction* pFnUSC_UpdatePrivacy_Delegate = NULL;

	if ( ! pFnUSC_UpdatePrivacy_Delegate )
		pFnUSC_UpdatePrivacy_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127446 );

	UTgGfxProfilePage_execUSC_UpdatePrivacy_Delegate_Parms USC_UpdatePrivacy_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_UpdatePrivacy_Delegate, &USC_UpdatePrivacy_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.USC_AddFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxProfilePage::USC_AddFriend ( )
{
	static UFunction* pFnUSC_AddFriend = NULL;

	if ( ! pFnUSC_AddFriend )
		pFnUSC_AddFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 127464 );

	UTgGfxProfilePage_execUSC_AddFriend_Parms USC_AddFriend_Parms;

	pFnUSC_AddFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_AddFriend, &USC_AddFriend_Parms, NULL );

	pFnUSC_AddFriend->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfilePage.USC_AddFriend_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxProfilePage::USC_AddFriend_Delegate ( )
{
	static UFunction* pFnUSC_AddFriend_Delegate = NULL;

	if ( ! pFnUSC_AddFriend_Delegate )
		pFnUSC_AddFriend_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127448 );

	UTgGfxProfilePage_execUSC_AddFriend_Delegate_Parms USC_AddFriend_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_AddFriend_Delegate, &USC_AddFriend_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.USC_TabSelected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            tabId                          ( CPF_Parm )

void UTgGfxProfilePage::USC_TabSelected ( int tabId )
{
	static UFunction* pFnUSC_TabSelected = NULL;

	if ( ! pFnUSC_TabSelected )
		pFnUSC_TabSelected = (UFunction*) UObject::GObjObjects()->GetIndex( 127462 );

	UTgGfxProfilePage_execUSC_TabSelected_Parms USC_TabSelected_Parms;
	USC_TabSelected_Parms.tabId = tabId;

	pFnUSC_TabSelected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_TabSelected, &USC_TabSelected_Parms, NULL );

	pFnUSC_TabSelected->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfilePage.USC_TabSelected_Delegate
// [0x00120000] 
// Parameters infos:
// int                            tabId                          ( CPF_Parm )

void UTgGfxProfilePage::USC_TabSelected_Delegate ( int tabId )
{
	static UFunction* pFnUSC_TabSelected_Delegate = NULL;

	if ( ! pFnUSC_TabSelected_Delegate )
		pFnUSC_TabSelected_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127450 );

	UTgGfxProfilePage_execUSC_TabSelected_Delegate_Parms USC_TabSelected_Delegate_Parms;
	USC_TabSelected_Delegate_Parms.tabId = tabId;

	this->ProcessEvent ( pFnUSC_TabSelected_Delegate, &USC_TabSelected_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.USC_SearchPlayerByName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfilePage::USC_SearchPlayerByName ( struct FString PlayerName )
{
	static UFunction* pFnUSC_SearchPlayerByName = NULL;

	if ( ! pFnUSC_SearchPlayerByName )
		pFnUSC_SearchPlayerByName = (UFunction*) UObject::GObjObjects()->GetIndex( 127459 );

	UTgGfxProfilePage_execUSC_SearchPlayerByName_Parms USC_SearchPlayerByName_Parms;
	memcpy ( &USC_SearchPlayerByName_Parms.PlayerName, &PlayerName, 0xC );

	pFnUSC_SearchPlayerByName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SearchPlayerByName, &USC_SearchPlayerByName_Parms, NULL );

	pFnUSC_SearchPlayerByName->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfilePage.USC_SearchPlayerByName_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfilePage::USC_SearchPlayerByName_Delegate ( struct FString PlayerName )
{
	static UFunction* pFnUSC_SearchPlayerByName_Delegate = NULL;

	if ( ! pFnUSC_SearchPlayerByName_Delegate )
		pFnUSC_SearchPlayerByName_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127452 );

	UTgGfxProfilePage_execUSC_SearchPlayerByName_Delegate_Parms USC_SearchPlayerByName_Delegate_Parms;
	memcpy ( &USC_SearchPlayerByName_Delegate_Parms.PlayerName, &PlayerName, 0xC );

	this->ProcessEvent ( pFnUSC_SearchPlayerByName_Delegate, &USC_SearchPlayerByName_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxProfilePage::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127456 );

	UTgGfxProfilePage_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileWorshiper.FilterDataUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileWorshiper::eventFilterDataUpdated ( )
{
	static UFunction* pFnFilterDataUpdated = NULL;

	if ( ! pFnFilterDataUpdated )
		pFnFilterDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127495 );

	UTgGfxProfileWorshiper_eventFilterDataUpdated_Parms FilterDataUpdated_Parms;

	this->ProcessEvent ( pFnFilterDataUpdated, &FilterDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileWorshiper.ASC_FilterDataUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileWorshiper::ASC_FilterDataUpdated ( )
{
	static UFunction* pFnASC_FilterDataUpdated = NULL;

	if ( ! pFnASC_FilterDataUpdated )
		pFnASC_FilterDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127494 );

	UTgGfxProfileWorshiper_execASC_FilterDataUpdated_Parms ASC_FilterDataUpdated_Parms;

	this->ProcessEvent ( pFnASC_FilterDataUpdated, &ASC_FilterDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileWorshiper.GodMasteryUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileWorshiper::eventGodMasteryUpdated ( )
{
	static UFunction* pFnGodMasteryUpdated = NULL;

	if ( ! pFnGodMasteryUpdated )
		pFnGodMasteryUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127493 );

	UTgGfxProfileWorshiper_eventGodMasteryUpdated_Parms GodMasteryUpdated_Parms;

	this->ProcessEvent ( pFnGodMasteryUpdated, &GodMasteryUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileWorshiper.ASC_GodMasteryUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileWorshiper::ASC_GodMasteryUpdated ( )
{
	static UFunction* pFnASC_GodMasteryUpdated = NULL;

	if ( ! pFnASC_GodMasteryUpdated )
		pFnASC_GodMasteryUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127492 );

	UTgGfxProfileWorshiper_execASC_GodMasteryUpdated_Parms ASC_GodMasteryUpdated_Parms;

	this->ProcessEvent ( pFnASC_GodMasteryUpdated, &ASC_GodMasteryUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileWorshiper.USC_Search
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 searchText                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfileWorshiper::USC_Search ( struct FString searchText )
{
	static UFunction* pFnUSC_Search = NULL;

	if ( ! pFnUSC_Search )
		pFnUSC_Search = (UFunction*) UObject::GObjObjects()->GetIndex( 127490 );

	UTgGfxProfileWorshiper_execUSC_Search_Parms USC_Search_Parms;
	memcpy ( &USC_Search_Parms.searchText, &searchText, 0xC );

	pFnUSC_Search->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_Search, &USC_Search_Parms, NULL );

	pFnUSC_Search->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileWorshiper.USC_Search_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 searchText                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfileWorshiper::USC_Search_Delegate ( struct FString searchText )
{
	static UFunction* pFnUSC_Search_Delegate = NULL;

	if ( ! pFnUSC_Search_Delegate )
		pFnUSC_Search_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127478 );

	UTgGfxProfileWorshiper_execUSC_Search_Delegate_Parms USC_Search_Delegate_Parms;
	memcpy ( &USC_Search_Delegate_Parms.searchText, &searchText, 0xC );

	this->ProcessEvent ( pFnUSC_Search_Delegate, &USC_Search_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfileWorshiper.USC_SetGodMasteryFilter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            filterId                       ( CPF_Parm )

void UTgGfxProfileWorshiper::USC_SetGodMasteryFilter ( int filterId )
{
	static UFunction* pFnUSC_SetGodMasteryFilter = NULL;

	if ( ! pFnUSC_SetGodMasteryFilter )
		pFnUSC_SetGodMasteryFilter = (UFunction*) UObject::GObjObjects()->GetIndex( 127487 );

	UTgGfxProfileWorshiper_execUSC_SetGodMasteryFilter_Parms USC_SetGodMasteryFilter_Parms;
	USC_SetGodMasteryFilter_Parms.filterId = filterId;

	pFnUSC_SetGodMasteryFilter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SetGodMasteryFilter, &USC_SetGodMasteryFilter_Parms, NULL );

	pFnUSC_SetGodMasteryFilter->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileWorshiper.USC_SetGodMasteryFilter_Delegate
// [0x00120000] 
// Parameters infos:
// int                            filterId                       ( CPF_Parm )

void UTgGfxProfileWorshiper::USC_SetGodMasteryFilter_Delegate ( int filterId )
{
	static UFunction* pFnUSC_SetGodMasteryFilter_Delegate = NULL;

	if ( ! pFnUSC_SetGodMasteryFilter_Delegate )
		pFnUSC_SetGodMasteryFilter_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127480 );

	UTgGfxProfileWorshiper_execUSC_SetGodMasteryFilter_Delegate_Parms USC_SetGodMasteryFilter_Delegate_Parms;
	USC_SetGodMasteryFilter_Delegate_Parms.filterId = filterId;

	this->ProcessEvent ( pFnUSC_SetGodMasteryFilter_Delegate, &USC_SetGodMasteryFilter_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfileWorshiper.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxProfileWorshiper::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127484 );

	UTgGfxProfileWorshiper_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPurchaseGems.UpdateData
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxPurchaseGems::eventUpdateData ( )
{
	static UFunction* pFnUpdateData = NULL;

	if ( ! pFnUpdateData )
		pFnUpdateData = (UFunction*) UObject::GObjObjects()->GetIndex( 127512 );

	UTgGfxPurchaseGems_eventUpdateData_Parms UpdateData_Parms;

	this->ProcessEvent ( pFnUpdateData, &UpdateData_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseGems.ASC_UpdateData
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxPurchaseGems::ASC_UpdateData ( )
{
	static UFunction* pFnASC_UpdateData = NULL;

	if ( ! pFnASC_UpdateData )
		pFnASC_UpdateData = (UFunction*) UObject::GObjObjects()->GetIndex( 127511 );

	UTgGfxPurchaseGems_execASC_UpdateData_Parms ASC_UpdateData_Parms;

	this->ProcessEvent ( pFnASC_UpdateData, &ASC_UpdateData_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseGems.HideOverlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxPurchaseGems::eventHideOverlay ( )
{
	static UFunction* pFnHideOverlay = NULL;

	if ( ! pFnHideOverlay )
		pFnHideOverlay = (UFunction*) UObject::GObjObjects()->GetIndex( 127510 );

	UTgGfxPurchaseGems_eventHideOverlay_Parms HideOverlay_Parms;

	this->ProcessEvent ( pFnHideOverlay, &HideOverlay_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseGems.ASC_HideOverlay
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxPurchaseGems::ASC_HideOverlay ( )
{
	static UFunction* pFnASC_HideOverlay = NULL;

	if ( ! pFnASC_HideOverlay )
		pFnASC_HideOverlay = (UFunction*) UObject::GObjObjects()->GetIndex( 127509 );

	UTgGfxPurchaseGems_execASC_HideOverlay_Parms ASC_HideOverlay_Parms;

	this->ProcessEvent ( pFnASC_HideOverlay, &ASC_HideOverlay_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseGems.ShowOverlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxPurchaseGems::eventShowOverlay ( )
{
	static UFunction* pFnShowOverlay = NULL;

	if ( ! pFnShowOverlay )
		pFnShowOverlay = (UFunction*) UObject::GObjObjects()->GetIndex( 127508 );

	UTgGfxPurchaseGems_eventShowOverlay_Parms ShowOverlay_Parms;

	this->ProcessEvent ( pFnShowOverlay, &ShowOverlay_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseGems.ASC_ShowOverlay
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxPurchaseGems::ASC_ShowOverlay ( )
{
	static UFunction* pFnASC_ShowOverlay = NULL;

	if ( ! pFnASC_ShowOverlay )
		pFnASC_ShowOverlay = (UFunction*) UObject::GObjObjects()->GetIndex( 127507 );

	UTgGfxPurchaseGems_execASC_ShowOverlay_Parms ASC_ShowOverlay_Parms;

	this->ProcessEvent ( pFnASC_ShowOverlay, &ASC_ShowOverlay_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseGems.USC_PurchaseItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 SKUCode                        ( CPF_Parm | CPF_NeedCtorLink )
// int                            lootId                         ( CPF_Parm )

void UTgGfxPurchaseGems::USC_PurchaseItem ( struct FString SKUCode, int lootId )
{
	static UFunction* pFnUSC_PurchaseItem = NULL;

	if ( ! pFnUSC_PurchaseItem )
		pFnUSC_PurchaseItem = (UFunction*) UObject::GObjObjects()->GetIndex( 127504 );

	UTgGfxPurchaseGems_execUSC_PurchaseItem_Parms USC_PurchaseItem_Parms;
	memcpy ( &USC_PurchaseItem_Parms.SKUCode, &SKUCode, 0xC );
	USC_PurchaseItem_Parms.lootId = lootId;

	pFnUSC_PurchaseItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_PurchaseItem, &USC_PurchaseItem_Parms, NULL );

	pFnUSC_PurchaseItem->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPurchaseGems.USC_PurchaseItem_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 SKUCode                        ( CPF_Parm | CPF_NeedCtorLink )
// int                            lootId                         ( CPF_Parm )

void UTgGfxPurchaseGems::USC_PurchaseItem_Delegate ( struct FString SKUCode, int lootId )
{
	static UFunction* pFnUSC_PurchaseItem_Delegate = NULL;

	if ( ! pFnUSC_PurchaseItem_Delegate )
		pFnUSC_PurchaseItem_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127497 );

	UTgGfxPurchaseGems_execUSC_PurchaseItem_Delegate_Parms USC_PurchaseItem_Delegate_Parms;
	memcpy ( &USC_PurchaseItem_Delegate_Parms.SKUCode, &SKUCode, 0xC );
	USC_PurchaseItem_Delegate_Parms.lootId = lootId;

	this->ProcessEvent ( pFnUSC_PurchaseItem_Delegate, &USC_PurchaseItem_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseGems.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxPurchaseGems::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127500 );

	UTgGfxPurchaseGems_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPurchaseModal.SetupBundleCompare
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )
// class UGFxObject*              Data2                          ( CPF_Parm )

void UTgGfxPurchaseModal::eventSetupBundleCompare ( class UGFxObject* Data, class UGFxObject* Data2 )
{
	static UFunction* pFnSetupBundleCompare = NULL;

	if ( ! pFnSetupBundleCompare )
		pFnSetupBundleCompare = (UFunction*) UObject::GObjObjects()->GetIndex( 127550 );

	UTgGfxPurchaseModal_eventSetupBundleCompare_Parms SetupBundleCompare_Parms;
	SetupBundleCompare_Parms.Data = Data;
	SetupBundleCompare_Parms.Data2 = Data2;

	this->ProcessEvent ( pFnSetupBundleCompare, &SetupBundleCompare_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseModal.asc_SetupBundleCompare
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )
// class UGFxObject*              Data2                          ( CPF_Parm )

void UTgGfxPurchaseModal::asc_SetupBundleCompare ( class UGFxObject* Data, class UGFxObject* Data2 )
{
	static UFunction* pFnasc_SetupBundleCompare = NULL;

	if ( ! pFnasc_SetupBundleCompare )
		pFnasc_SetupBundleCompare = (UFunction*) UObject::GObjObjects()->GetIndex( 127547 );

	UTgGfxPurchaseModal_execasc_SetupBundleCompare_Parms asc_SetupBundleCompare_Parms;
	asc_SetupBundleCompare_Parms.Data = Data;
	asc_SetupBundleCompare_Parms.Data2 = Data2;

	this->ProcessEvent ( pFnasc_SetupBundleCompare, &asc_SetupBundleCompare_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseModal.SetupData
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )
// int                            popupType                      ( CPF_Parm )

void UTgGfxPurchaseModal::eventSetupData ( class UGFxObject* Data, int popupType )
{
	static UFunction* pFnSetupData = NULL;

	if ( ! pFnSetupData )
		pFnSetupData = (UFunction*) UObject::GObjObjects()->GetIndex( 127544 );

	UTgGfxPurchaseModal_eventSetupData_Parms SetupData_Parms;
	SetupData_Parms.Data = Data;
	SetupData_Parms.popupType = popupType;

	this->ProcessEvent ( pFnSetupData, &SetupData_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseModal.asc_SetupData
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )
// int                            popupType                      ( CPF_Parm )

void UTgGfxPurchaseModal::asc_SetupData ( class UGFxObject* Data, int popupType )
{
	static UFunction* pFnasc_SetupData = NULL;

	if ( ! pFnasc_SetupData )
		pFnasc_SetupData = (UFunction*) UObject::GObjObjects()->GetIndex( 127541 );

	UTgGfxPurchaseModal_execasc_SetupData_Parms asc_SetupData_Parms;
	asc_SetupData_Parms.Data = Data;
	asc_SetupData_Parms.popupType = popupType;

	this->ProcessEvent ( pFnasc_SetupData, &asc_SetupData_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseModal.USC_ShowNotEnoughCurrency
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            CurrencyType                   ( CPF_Parm )

void UTgGfxPurchaseModal::USC_ShowNotEnoughCurrency ( int CurrencyType )
{
	static UFunction* pFnUSC_ShowNotEnoughCurrency = NULL;

	if ( ! pFnUSC_ShowNotEnoughCurrency )
		pFnUSC_ShowNotEnoughCurrency = (UFunction*) UObject::GObjObjects()->GetIndex( 127539 );

	UTgGfxPurchaseModal_execUSC_ShowNotEnoughCurrency_Parms USC_ShowNotEnoughCurrency_Parms;
	USC_ShowNotEnoughCurrency_Parms.CurrencyType = CurrencyType;

	pFnUSC_ShowNotEnoughCurrency->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ShowNotEnoughCurrency, &USC_ShowNotEnoughCurrency_Parms, NULL );

	pFnUSC_ShowNotEnoughCurrency->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPurchaseModal.USC_ShowNotEnoughCurrency_Delegate
// [0x00120000] 
// Parameters infos:
// int                            CurrencyType                   ( CPF_Parm )

void UTgGfxPurchaseModal::USC_ShowNotEnoughCurrency_Delegate ( int CurrencyType )
{
	static UFunction* pFnUSC_ShowNotEnoughCurrency_Delegate = NULL;

	if ( ! pFnUSC_ShowNotEnoughCurrency_Delegate )
		pFnUSC_ShowNotEnoughCurrency_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127514 );

	UTgGfxPurchaseModal_execUSC_ShowNotEnoughCurrency_Delegate_Parms USC_ShowNotEnoughCurrency_Delegate_Parms;
	USC_ShowNotEnoughCurrency_Delegate_Parms.CurrencyType = CurrencyType;

	this->ProcessEvent ( pFnUSC_ShowNotEnoughCurrency_Delegate, &USC_ShowNotEnoughCurrency_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseModal.USC_OnClickConfirm
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxPurchaseModal::USC_OnClickConfirm ( )
{
	static UFunction* pFnUSC_OnClickConfirm = NULL;

	if ( ! pFnUSC_OnClickConfirm )
		pFnUSC_OnClickConfirm = (UFunction*) UObject::GObjObjects()->GetIndex( 127538 );

	UTgGfxPurchaseModal_execUSC_OnClickConfirm_Parms USC_OnClickConfirm_Parms;

	pFnUSC_OnClickConfirm->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OnClickConfirm, &USC_OnClickConfirm_Parms, NULL );

	pFnUSC_OnClickConfirm->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPurchaseModal.USC_OnClickConfirm_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxPurchaseModal::USC_OnClickConfirm_Delegate ( )
{
	static UFunction* pFnUSC_OnClickConfirm_Delegate = NULL;

	if ( ! pFnUSC_OnClickConfirm_Delegate )
		pFnUSC_OnClickConfirm_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127553 );

	UTgGfxPurchaseModal_execUSC_OnClickConfirm_Delegate_Parms USC_OnClickConfirm_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_OnClickConfirm_Delegate, &USC_OnClickConfirm_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseModal.USC_OnCloseScreen
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxPurchaseModal::USC_OnCloseScreen ( )
{
	static UFunction* pFnUSC_OnCloseScreen = NULL;

	if ( ! pFnUSC_OnCloseScreen )
		pFnUSC_OnCloseScreen = (UFunction*) UObject::GObjObjects()->GetIndex( 127536 );

	UTgGfxPurchaseModal_execUSC_OnCloseScreen_Parms USC_OnCloseScreen_Parms;

	pFnUSC_OnCloseScreen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OnCloseScreen, &USC_OnCloseScreen_Parms, NULL );

	pFnUSC_OnCloseScreen->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPurchaseModal.USC_OnCloseScreen_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxPurchaseModal::USC_OnCloseScreen_Delegate ( )
{
	static UFunction* pFnUSC_OnCloseScreen_Delegate = NULL;

	if ( ! pFnUSC_OnCloseScreen_Delegate )
		pFnUSC_OnCloseScreen_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127517 );

	UTgGfxPurchaseModal_execUSC_OnCloseScreen_Delegate_Parms USC_OnCloseScreen_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_OnCloseScreen_Delegate, &USC_OnCloseScreen_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseModal.USC_PurchaseItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ItemId                         ( CPF_Parm )
// int                            nPriceInUI                     ( CPF_Parm )
// int                            CurrencyType                   ( CPF_Parm )
// int                            Quantity                       ( CPF_Parm )
// int                            nCouponId                      ( CPF_Parm )

void UTgGfxPurchaseModal::USC_PurchaseItem ( int ItemId, int nPriceInUI, int CurrencyType, int Quantity, int nCouponId )
{
	static UFunction* pFnUSC_PurchaseItem = NULL;

	if ( ! pFnUSC_PurchaseItem )
		pFnUSC_PurchaseItem = (UFunction*) UObject::GObjObjects()->GetIndex( 127530 );

	UTgGfxPurchaseModal_execUSC_PurchaseItem_Parms USC_PurchaseItem_Parms;
	USC_PurchaseItem_Parms.ItemId = ItemId;
	USC_PurchaseItem_Parms.nPriceInUI = nPriceInUI;
	USC_PurchaseItem_Parms.CurrencyType = CurrencyType;
	USC_PurchaseItem_Parms.Quantity = Quantity;
	USC_PurchaseItem_Parms.nCouponId = nCouponId;

	pFnUSC_PurchaseItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_PurchaseItem, &USC_PurchaseItem_Parms, NULL );

	pFnUSC_PurchaseItem->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPurchaseModal.USC_PurchaseItem_Delegate
// [0x00120000] 
// Parameters infos:
// int                            ItemId                         ( CPF_Parm )
// int                            nPriceInUI                     ( CPF_Parm )
// int                            CurrencyType                   ( CPF_Parm )
// int                            Quantity                       ( CPF_Parm )
// int                            nCouponId                      ( CPF_Parm )

void UTgGfxPurchaseModal::USC_PurchaseItem_Delegate ( int ItemId, int nPriceInUI, int CurrencyType, int Quantity, int nCouponId )
{
	static UFunction* pFnUSC_PurchaseItem_Delegate = NULL;

	if ( ! pFnUSC_PurchaseItem_Delegate )
		pFnUSC_PurchaseItem_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127519 );

	UTgGfxPurchaseModal_execUSC_PurchaseItem_Delegate_Parms USC_PurchaseItem_Delegate_Parms;
	USC_PurchaseItem_Delegate_Parms.ItemId = ItemId;
	USC_PurchaseItem_Delegate_Parms.nPriceInUI = nPriceInUI;
	USC_PurchaseItem_Delegate_Parms.CurrencyType = CurrencyType;
	USC_PurchaseItem_Delegate_Parms.Quantity = Quantity;
	USC_PurchaseItem_Delegate_Parms.nCouponId = nCouponId;

	this->ProcessEvent ( pFnUSC_PurchaseItem_Delegate, &USC_PurchaseItem_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPurchaseModal.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxPurchaseModal::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127523 );

	UTgGfxPurchaseModal_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxQuestAcquisition.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxQuestAcquisition::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 127557 );

	UTgGfxQuestAcquisition_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxQuestAcquisition.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxQuestAcquisition::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127555 );

	UTgGfxQuestAcquisition_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxQuestList.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxQuestList::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 127566 );

	UTgGfxQuestList_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxQuestList.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxQuestList::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127565 );

	UTgGfxQuestList_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxQuestList.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxQuestList::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127563 );

	UTgGfxQuestList_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxQuestWindow.UpdateQuest
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            Id                             ( CPF_Parm )
// int                            Count                          ( CPF_Parm )
// int                            Goal                           ( CPF_Parm )
// struct FString                 msg                            ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxQuestWindow::eventUpdateQuest ( int Id, int Count, int Goal, struct FString msg )
{
	static UFunction* pFnUpdateQuest = NULL;

	if ( ! pFnUpdateQuest )
		pFnUpdateQuest = (UFunction*) UObject::GObjObjects()->GetIndex( 127575 );

	UTgGfxQuestWindow_eventUpdateQuest_Parms UpdateQuest_Parms;
	UpdateQuest_Parms.Id = Id;
	UpdateQuest_Parms.Count = Count;
	UpdateQuest_Parms.Goal = Goal;
	memcpy ( &UpdateQuest_Parms.msg, &msg, 0xC );

	this->ProcessEvent ( pFnUpdateQuest, &UpdateQuest_Parms, NULL );
};

// Function TgClient.TgGfxQuestWindow.ASC_UpdateQuest
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            Id                             ( CPF_Parm )
// int                            Count                          ( CPF_Parm )
// int                            Goal                           ( CPF_Parm )
// struct FString                 msg                            ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxQuestWindow::ASC_UpdateQuest ( int Id, int Count, int Goal, struct FString msg )
{
	static UFunction* pFnASC_UpdateQuest = NULL;

	if ( ! pFnASC_UpdateQuest )
		pFnASC_UpdateQuest = (UFunction*) UObject::GObjObjects()->GetIndex( 127570 );

	UTgGfxQuestWindow_execASC_UpdateQuest_Parms ASC_UpdateQuest_Parms;
	ASC_UpdateQuest_Parms.Id = Id;
	ASC_UpdateQuest_Parms.Count = Count;
	ASC_UpdateQuest_Parms.Goal = Goal;
	memcpy ( &ASC_UpdateQuest_Parms.msg, &msg, 0xC );

	this->ProcessEvent ( pFnASC_UpdateQuest, &ASC_UpdateQuest_Parms, NULL );
};

// Function TgClient.TgGfxQuestWindow.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxQuestWindow::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127568 );

	UTgGfxQuestWindow_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferralPopup.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxReferralPopup::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127588 );

	UTgGfxReferralPopup_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferralPopup.UpdateFriendList
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxReferralPopup::eventUpdateFriendList ( )
{
	static UFunction* pFnUpdateFriendList = NULL;

	if ( ! pFnUpdateFriendList )
		pFnUpdateFriendList = (UFunction*) UObject::GObjObjects()->GetIndex( 127587 );

	UTgGfxReferralPopup_eventUpdateFriendList_Parms UpdateFriendList_Parms;

	this->ProcessEvent ( pFnUpdateFriendList, &UpdateFriendList_Parms, NULL );
};

// Function TgClient.TgGfxReferralPopup.ASC_UpdateFriendList
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxReferralPopup::ASC_UpdateFriendList ( )
{
	static UFunction* pFnASC_UpdateFriendList = NULL;

	if ( ! pFnASC_UpdateFriendList )
		pFnASC_UpdateFriendList = (UFunction*) UObject::GObjObjects()->GetIndex( 127586 );

	UTgGfxReferralPopup_execASC_UpdateFriendList_Parms ASC_UpdateFriendList_Parms;

	this->ProcessEvent ( pFnASC_UpdateFriendList, &ASC_UpdateFriendList_Parms, NULL );
};

// Function TgClient.TgGfxReferralPopup.USC_SendFriendReferral
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sQQId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxReferralPopup::USC_SendFriendReferral ( struct FString sQQId, struct FString sMessage, struct FString sPlayerName )
{
	static UFunction* pFnUSC_SendFriendReferral = NULL;

	if ( ! pFnUSC_SendFriendReferral )
		pFnUSC_SendFriendReferral = (UFunction*) UObject::GObjObjects()->GetIndex( 127582 );

	UTgGfxReferralPopup_execUSC_SendFriendReferral_Parms USC_SendFriendReferral_Parms;
	memcpy ( &USC_SendFriendReferral_Parms.sQQId, &sQQId, 0xC );
	memcpy ( &USC_SendFriendReferral_Parms.sMessage, &sMessage, 0xC );
	memcpy ( &USC_SendFriendReferral_Parms.sPlayerName, &sPlayerName, 0xC );

	pFnUSC_SendFriendReferral->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SendFriendReferral, &USC_SendFriendReferral_Parms, NULL );

	pFnUSC_SendFriendReferral->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferralPopup.USC_SendFriendReferral_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxReferralPopup::USC_SendFriendReferral_Delegate ( )
{
	static UFunction* pFnUSC_SendFriendReferral_Delegate = NULL;

	if ( ! pFnUSC_SendFriendReferral_Delegate )
		pFnUSC_SendFriendReferral_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127580 );

	UTgGfxReferralPopup_execUSC_SendFriendReferral_Delegate_Parms USC_SendFriendReferral_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_SendFriendReferral_Delegate, &USC_SendFriendReferral_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxReferralReward.USC_OpenReferFriendReward
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxReferralReward::USC_OpenReferFriendReward ( )
{
	static UFunction* pFnUSC_OpenReferFriendReward = NULL;

	if ( ! pFnUSC_OpenReferFriendReward )
		pFnUSC_OpenReferFriendReward = (UFunction*) UObject::GObjObjects()->GetIndex( 127594 );

	UTgGfxReferralReward_execUSC_OpenReferFriendReward_Parms USC_OpenReferFriendReward_Parms;

	pFnUSC_OpenReferFriendReward->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OpenReferFriendReward, &USC_OpenReferFriendReward_Parms, NULL );

	pFnUSC_OpenReferFriendReward->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferralReward.USC_OpenReferFriendReward_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxReferralReward::USC_OpenReferFriendReward_Delegate ( )
{
	static UFunction* pFnUSC_OpenReferFriendReward_Delegate = NULL;

	if ( ! pFnUSC_OpenReferFriendReward_Delegate )
		pFnUSC_OpenReferFriendReward_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127592 );

	UTgGfxReferralReward_execUSC_OpenReferFriendReward_Delegate_Parms USC_OpenReferFriendReward_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_OpenReferFriendReward_Delegate, &USC_OpenReferFriendReward_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxReferralReward.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxReferralReward::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127590 );

	UTgGfxReferralReward_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferrals.UpdateAchievements
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxReferrals::eventUpdateAchievements ( )
{
	static UFunction* pFnUpdateAchievements = NULL;

	if ( ! pFnUpdateAchievements )
		pFnUpdateAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 127617 );

	UTgGfxReferrals_eventUpdateAchievements_Parms UpdateAchievements_Parms;

	this->ProcessEvent ( pFnUpdateAchievements, &UpdateAchievements_Parms, NULL );
};

// Function TgClient.TgGfxReferrals.ASC_UpdateAchievements
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxReferrals::ASC_UpdateAchievements ( )
{
	static UFunction* pFnASC_UpdateAchievements = NULL;

	if ( ! pFnASC_UpdateAchievements )
		pFnASC_UpdateAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 127616 );

	UTgGfxReferrals_execASC_UpdateAchievements_Parms ASC_UpdateAchievements_Parms;

	this->ProcessEvent ( pFnASC_UpdateAchievements, &ASC_UpdateAchievements_Parms, NULL );
};

// Function TgClient.TgGfxReferrals.UpdatePlayerList
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxReferrals::eventUpdatePlayerList ( )
{
	static UFunction* pFnUpdatePlayerList = NULL;

	if ( ! pFnUpdatePlayerList )
		pFnUpdatePlayerList = (UFunction*) UObject::GObjObjects()->GetIndex( 127615 );

	UTgGfxReferrals_eventUpdatePlayerList_Parms UpdatePlayerList_Parms;

	this->ProcessEvent ( pFnUpdatePlayerList, &UpdatePlayerList_Parms, NULL );
};

// Function TgClient.TgGfxReferrals.ASC_UpdatePlayerList
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxReferrals::ASC_UpdatePlayerList ( )
{
	static UFunction* pFnASC_UpdatePlayerList = NULL;

	if ( ! pFnASC_UpdatePlayerList )
		pFnASC_UpdatePlayerList = (UFunction*) UObject::GObjObjects()->GetIndex( 127614 );

	UTgGfxReferrals_execASC_UpdatePlayerList_Parms ASC_UpdatePlayerList_Parms;

	this->ProcessEvent ( pFnASC_UpdatePlayerList, &ASC_UpdatePlayerList_Parms, NULL );
};

// Function TgClient.TgGfxReferrals.USC_OpenReferFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxReferrals::USC_OpenReferFriend ( )
{
	static UFunction* pFnUSC_OpenReferFriend = NULL;

	if ( ! pFnUSC_OpenReferFriend )
		pFnUSC_OpenReferFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 127613 );

	UTgGfxReferrals_execUSC_OpenReferFriend_Parms USC_OpenReferFriend_Parms;

	pFnUSC_OpenReferFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OpenReferFriend, &USC_OpenReferFriend_Parms, NULL );

	pFnUSC_OpenReferFriend->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferrals.USC_OpenReferFriend_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxReferrals::USC_OpenReferFriend_Delegate ( )
{
	static UFunction* pFnUSC_OpenReferFriend_Delegate = NULL;

	if ( ! pFnUSC_OpenReferFriend_Delegate )
		pFnUSC_OpenReferFriend_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127610 );

	UTgGfxReferrals_execUSC_OpenReferFriend_Delegate_Parms USC_OpenReferFriend_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_OpenReferFriend_Delegate, &USC_OpenReferFriend_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxReferrals.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxReferrals::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127611 );

	UTgGfxReferrals_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferralSelector.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxReferralSelector::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127628 );

	UTgGfxReferralSelector_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferralSelector.UpdateFriendList
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxReferralSelector::eventUpdateFriendList ( )
{
	static UFunction* pFnUpdateFriendList = NULL;

	if ( ! pFnUpdateFriendList )
		pFnUpdateFriendList = (UFunction*) UObject::GObjObjects()->GetIndex( 127627 );

	UTgGfxReferralSelector_eventUpdateFriendList_Parms UpdateFriendList_Parms;

	this->ProcessEvent ( pFnUpdateFriendList, &UpdateFriendList_Parms, NULL );
};

// Function TgClient.TgGfxReferralSelector.ASC_UpdateFriendList
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxReferralSelector::ASC_UpdateFriendList ( )
{
	static UFunction* pFnASC_UpdateFriendList = NULL;

	if ( ! pFnASC_UpdateFriendList )
		pFnASC_UpdateFriendList = (UFunction*) UObject::GObjObjects()->GetIndex( 127626 );

	UTgGfxReferralSelector_execASC_UpdateFriendList_Parms ASC_UpdateFriendList_Parms;

	this->ProcessEvent ( pFnASC_UpdateFriendList, &ASC_UpdateFriendList_Parms, NULL );
};

// Function TgClient.TgGfxReferralSelector.USC_SelectReferral
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sQQId                          ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxReferralSelector::USC_SelectReferral ( struct FString sQQId )
{
	static UFunction* pFnUSC_SelectReferral = NULL;

	if ( ! pFnUSC_SelectReferral )
		pFnUSC_SelectReferral = (UFunction*) UObject::GObjObjects()->GetIndex( 127624 );

	UTgGfxReferralSelector_execUSC_SelectReferral_Parms USC_SelectReferral_Parms;
	memcpy ( &USC_SelectReferral_Parms.sQQId, &sQQId, 0xC );

	pFnUSC_SelectReferral->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SelectReferral, &USC_SelectReferral_Parms, NULL );

	pFnUSC_SelectReferral->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferralSelector.USC_SelectReferral_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxReferralSelector::USC_SelectReferral_Delegate ( )
{
	static UFunction* pFnUSC_SelectReferral_Delegate = NULL;

	if ( ! pFnUSC_SelectReferral_Delegate )
		pFnUSC_SelectReferral_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127619 );

	UTgGfxReferralSelector_execUSC_SelectReferral_Delegate_Parms USC_SelectReferral_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_SelectReferral_Delegate, &USC_SelectReferral_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxRewardCenter.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxRewardCenter::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 127639 );

	UTgGfxRewardCenter_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxRewardCenter.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxRewardCenter::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127637 );

	UTgGfxRewardCenter_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSeasonTicket.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxSeasonTicket::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127677 );

	UTgGfxSeasonTicket_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSeasonTicket.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxSeasonTicket::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 127675 );

	UTgGfxSeasonTicket_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSeasonTicket.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxSeasonTicket::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127673 );

	UTgGfxSeasonTicket_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSecurityManagement.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxSecurityManagement::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127685 );

	UTgGfxSecurityManagement_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSecurityManagement.USC_SubmitSecurity
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 securityquestion               ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 securityanswer                 ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxSecurityManagement::USC_SubmitSecurity ( struct FString securityquestion, struct FString securityanswer )
{
	static UFunction* pFnUSC_SubmitSecurity = NULL;

	if ( ! pFnUSC_SubmitSecurity )
		pFnUSC_SubmitSecurity = (UFunction*) UObject::GObjObjects()->GetIndex( 127682 );

	UTgGfxSecurityManagement_execUSC_SubmitSecurity_Parms USC_SubmitSecurity_Parms;
	memcpy ( &USC_SubmitSecurity_Parms.securityquestion, &securityquestion, 0xC );
	memcpy ( &USC_SubmitSecurity_Parms.securityanswer, &securityanswer, 0xC );

	pFnUSC_SubmitSecurity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SubmitSecurity, &USC_SubmitSecurity_Parms, NULL );

	pFnUSC_SubmitSecurity->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSecurityManagement.USC_SubmitSecurity_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 securityquestion               ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 securityanswer                 ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxSecurityManagement::USC_SubmitSecurity_Delegate ( struct FString securityquestion, struct FString securityanswer )
{
	static UFunction* pFnUSC_SubmitSecurity_Delegate = NULL;

	if ( ! pFnUSC_SubmitSecurity_Delegate )
		pFnUSC_SubmitSecurity_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127678 );

	UTgGfxSecurityManagement_execUSC_SubmitSecurity_Delegate_Parms USC_SubmitSecurity_Delegate_Parms;
	memcpy ( &USC_SubmitSecurity_Delegate_Parms.securityquestion, &securityquestion, 0xC );
	memcpy ( &USC_SubmitSecurity_Delegate_Parms.securityanswer, &securityanswer, 0xC );

	this->ProcessEvent ( pFnUSC_SubmitSecurity_Delegate, &USC_SubmitSecurity_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxSmiteTv.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxSmiteTv::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127700 );

	UTgGfxSmiteTv_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSmiteTv.UpdateSelectedTab
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 tabLabel                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxSmiteTv::eventUpdateSelectedTab ( struct FString tabLabel )
{
	static UFunction* pFnUpdateSelectedTab = NULL;

	if ( ! pFnUpdateSelectedTab )
		pFnUpdateSelectedTab = (UFunction*) UObject::GObjObjects()->GetIndex( 127698 );

	UTgGfxSmiteTv_eventUpdateSelectedTab_Parms UpdateSelectedTab_Parms;
	memcpy ( &UpdateSelectedTab_Parms.tabLabel, &tabLabel, 0xC );

	this->ProcessEvent ( pFnUpdateSelectedTab, &UpdateSelectedTab_Parms, NULL );
};

// Function TgClient.TgGfxSmiteTv.ASC_UpdateSelectedTab
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 tabLabel                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxSmiteTv::ASC_UpdateSelectedTab ( struct FString tabLabel )
{
	static UFunction* pFnASC_UpdateSelectedTab = NULL;

	if ( ! pFnASC_UpdateSelectedTab )
		pFnASC_UpdateSelectedTab = (UFunction*) UObject::GObjObjects()->GetIndex( 127696 );

	UTgGfxSmiteTv_execASC_UpdateSelectedTab_Parms ASC_UpdateSelectedTab_Parms;
	memcpy ( &ASC_UpdateSelectedTab_Parms.tabLabel, &tabLabel, 0xC );

	this->ProcessEvent ( pFnASC_UpdateSelectedTab, &ASC_UpdateSelectedTab_Parms, NULL );
};

// Function TgClient.TgGfxSmiteTv.UpdateSmiteTvTabLabels
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxSmiteTv::eventUpdateSmiteTvTabLabels ( )
{
	static UFunction* pFnUpdateSmiteTvTabLabels = NULL;

	if ( ! pFnUpdateSmiteTvTabLabels )
		pFnUpdateSmiteTvTabLabels = (UFunction*) UObject::GObjObjects()->GetIndex( 127695 );

	UTgGfxSmiteTv_eventUpdateSmiteTvTabLabels_Parms UpdateSmiteTvTabLabels_Parms;

	this->ProcessEvent ( pFnUpdateSmiteTvTabLabels, &UpdateSmiteTvTabLabels_Parms, NULL );
};

// Function TgClient.TgGfxSmiteTv.ASC_UpdateSmiteTvTabLabels
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxSmiteTv::ASC_UpdateSmiteTvTabLabels ( )
{
	static UFunction* pFnASC_UpdateSmiteTvTabLabels = NULL;

	if ( ! pFnASC_UpdateSmiteTvTabLabels )
		pFnASC_UpdateSmiteTvTabLabels = (UFunction*) UObject::GObjObjects()->GetIndex( 127694 );

	UTgGfxSmiteTv_execASC_UpdateSmiteTvTabLabels_Parms ASC_UpdateSmiteTvTabLabels_Parms;

	this->ProcessEvent ( pFnASC_UpdateSmiteTvTabLabels, &ASC_UpdateSmiteTvTabLabels_Parms, NULL );
};

// Function TgClient.TgGfxSmiteTv.USC_TabSelected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 tabSelected                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxSmiteTv::USC_TabSelected ( struct FString tabSelected )
{
	static UFunction* pFnUSC_TabSelected = NULL;

	if ( ! pFnUSC_TabSelected )
		pFnUSC_TabSelected = (UFunction*) UObject::GObjObjects()->GetIndex( 127692 );

	UTgGfxSmiteTv_execUSC_TabSelected_Parms USC_TabSelected_Parms;
	memcpy ( &USC_TabSelected_Parms.tabSelected, &tabSelected, 0xC );

	pFnUSC_TabSelected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_TabSelected, &USC_TabSelected_Parms, NULL );

	pFnUSC_TabSelected->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSmiteTv.USC_TabSelected_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxSmiteTv::USC_TabSelected_Delegate ( )
{
	static UFunction* pFnUSC_TabSelected_Delegate = NULL;

	if ( ! pFnUSC_TabSelected_Delegate )
		pFnUSC_TabSelected_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127689 );

	UTgGfxSmiteTv_execUSC_TabSelected_Delegate_Parms USC_TabSelected_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_TabSelected_Delegate, &USC_TabSelected_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxSmiteTv.USC_GetSmiteTvTabLabels
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxSmiteTv::USC_GetSmiteTvTabLabels ( )
{
	static UFunction* pFnUSC_GetSmiteTvTabLabels = NULL;

	if ( ! pFnUSC_GetSmiteTvTabLabels )
		pFnUSC_GetSmiteTvTabLabels = (UFunction*) UObject::GObjObjects()->GetIndex( 127691 );

	UTgGfxSmiteTv_execUSC_GetSmiteTvTabLabels_Parms USC_GetSmiteTvTabLabels_Parms;

	pFnUSC_GetSmiteTvTabLabels->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetSmiteTvTabLabels, &USC_GetSmiteTvTabLabels_Parms, NULL );

	pFnUSC_GetSmiteTvTabLabels->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSmiteTv.USC_GetSmiteTvTabLabels_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxSmiteTv::USC_GetSmiteTvTabLabels_Delegate ( )
{
	static UFunction* pFnUSC_GetSmiteTvTabLabels_Delegate = NULL;

	if ( ! pFnUSC_GetSmiteTvTabLabels_Delegate )
		pFnUSC_GetSmiteTvTabLabels_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127687 );

	UTgGfxSmiteTv_execUSC_GetSmiteTvTabLabels_Delegate_Parms USC_GetSmiteTvTabLabels_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_GetSmiteTvTabLabels_Delegate, &USC_GetSmiteTvTabLabels_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxSmiteTvLive.UpdateStreamList
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxSmiteTvLive::eventUpdateStreamList ( )
{
	static UFunction* pFnUpdateStreamList = NULL;

	if ( ! pFnUpdateStreamList )
		pFnUpdateStreamList = (UFunction*) UObject::GObjObjects()->GetIndex( 127712 );

	UTgGfxSmiteTvLive_eventUpdateStreamList_Parms UpdateStreamList_Parms;

	this->ProcessEvent ( pFnUpdateStreamList, &UpdateStreamList_Parms, NULL );
};

// Function TgClient.TgGfxSmiteTvLive.ASC_UpdateStreamList
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxSmiteTvLive::ASC_UpdateStreamList ( )
{
	static UFunction* pFnASC_UpdateStreamList = NULL;

	if ( ! pFnASC_UpdateStreamList )
		pFnASC_UpdateStreamList = (UFunction*) UObject::GObjObjects()->GetIndex( 127711 );

	UTgGfxSmiteTvLive_execASC_UpdateStreamList_Parms ASC_UpdateStreamList_Parms;

	this->ProcessEvent ( pFnASC_UpdateStreamList, &ASC_UpdateStreamList_Parms, NULL );
};

// Function TgClient.TgGfxSmiteTvLive.USC_GetStreamData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxSmiteTvLive::USC_GetStreamData ( )
{
	static UFunction* pFnUSC_GetStreamData = NULL;

	if ( ! pFnUSC_GetStreamData )
		pFnUSC_GetStreamData = (UFunction*) UObject::GObjObjects()->GetIndex( 127710 );

	UTgGfxSmiteTvLive_execUSC_GetStreamData_Parms USC_GetStreamData_Parms;

	pFnUSC_GetStreamData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetStreamData, &USC_GetStreamData_Parms, NULL );

	pFnUSC_GetStreamData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSmiteTvLive.USC_GetStreamData_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxSmiteTvLive::USC_GetStreamData_Delegate ( )
{
	static UFunction* pFnUSC_GetStreamData_Delegate = NULL;

	if ( ! pFnUSC_GetStreamData_Delegate )
		pFnUSC_GetStreamData_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127703 );

	UTgGfxSmiteTvLive_execUSC_GetStreamData_Delegate_Parms USC_GetStreamData_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_GetStreamData_Delegate, &USC_GetStreamData_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxSmiteTvLive.UpdateStreams
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxSmiteTvLive::UpdateStreams ( )
{
	static UFunction* pFnUpdateStreams = NULL;

	if ( ! pFnUpdateStreams )
		pFnUpdateStreams = (UFunction*) UObject::GObjObjects()->GetIndex( 127709 );

	UTgGfxSmiteTvLive_execUpdateStreams_Parms UpdateStreams_Parms;

	pFnUpdateStreams->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateStreams, &UpdateStreams_Parms, NULL );

	pFnUpdateStreams->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSmiteTvLive.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxSmiteTvLive::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127707 );

	UTgGfxSmiteTvLive_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSocial.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxSocial::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127730 );

	UTgGfxSocial_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSocial.SetSelectedAdminTab
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            nIndex                         ( CPF_Parm )

void UTgGfxSocial::eventSetSelectedAdminTab ( int nIndex )
{
	static UFunction* pFnSetSelectedAdminTab = NULL;

	if ( ! pFnSetSelectedAdminTab )
		pFnSetSelectedAdminTab = (UFunction*) UObject::GObjObjects()->GetIndex( 127728 );

	UTgGfxSocial_eventSetSelectedAdminTab_Parms SetSelectedAdminTab_Parms;
	SetSelectedAdminTab_Parms.nIndex = nIndex;

	this->ProcessEvent ( pFnSetSelectedAdminTab, &SetSelectedAdminTab_Parms, NULL );
};

// Function TgClient.TgGfxSocial.ASC_SetSelectedAdminTab
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nIndex                         ( CPF_Parm )

void UTgGfxSocial::ASC_SetSelectedAdminTab ( int nIndex )
{
	static UFunction* pFnASC_SetSelectedAdminTab = NULL;

	if ( ! pFnASC_SetSelectedAdminTab )
		pFnASC_SetSelectedAdminTab = (UFunction*) UObject::GObjObjects()->GetIndex( 127726 );

	UTgGfxSocial_execASC_SetSelectedAdminTab_Parms ASC_SetSelectedAdminTab_Parms;
	ASC_SetSelectedAdminTab_Parms.nIndex = nIndex;

	this->ProcessEvent ( pFnASC_SetSelectedAdminTab, &ASC_SetSelectedAdminTab_Parms, NULL );
};

// Function TgClient.TgGfxSocial.UpdateSelectedTab
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 tabLabel                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxSocial::eventUpdateSelectedTab ( struct FString tabLabel )
{
	static UFunction* pFnUpdateSelectedTab = NULL;

	if ( ! pFnUpdateSelectedTab )
		pFnUpdateSelectedTab = (UFunction*) UObject::GObjObjects()->GetIndex( 127724 );

	UTgGfxSocial_eventUpdateSelectedTab_Parms UpdateSelectedTab_Parms;
	memcpy ( &UpdateSelectedTab_Parms.tabLabel, &tabLabel, 0xC );

	this->ProcessEvent ( pFnUpdateSelectedTab, &UpdateSelectedTab_Parms, NULL );
};

// Function TgClient.TgGfxSocial.ASC_UpdateSelectedTab
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 tabLabel                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxSocial::ASC_UpdateSelectedTab ( struct FString tabLabel )
{
	static UFunction* pFnASC_UpdateSelectedTab = NULL;

	if ( ! pFnASC_UpdateSelectedTab )
		pFnASC_UpdateSelectedTab = (UFunction*) UObject::GObjObjects()->GetIndex( 127722 );

	UTgGfxSocial_execASC_UpdateSelectedTab_Parms ASC_UpdateSelectedTab_Parms;
	memcpy ( &ASC_UpdateSelectedTab_Parms.tabLabel, &tabLabel, 0xC );

	this->ProcessEvent ( pFnASC_UpdateSelectedTab, &ASC_UpdateSelectedTab_Parms, NULL );
};

// Function TgClient.TgGfxSocial.UpdateClanQuestData
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxSocial::eventUpdateClanQuestData ( )
{
	static UFunction* pFnUpdateClanQuestData = NULL;

	if ( ! pFnUpdateClanQuestData )
		pFnUpdateClanQuestData = (UFunction*) UObject::GObjObjects()->GetIndex( 127721 );

	UTgGfxSocial_eventUpdateClanQuestData_Parms UpdateClanQuestData_Parms;

	this->ProcessEvent ( pFnUpdateClanQuestData, &UpdateClanQuestData_Parms, NULL );
};

// Function TgClient.TgGfxSocial.ASC_UpdateClanQuestData
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxSocial::ASC_UpdateClanQuestData ( )
{
	static UFunction* pFnASC_UpdateClanQuestData = NULL;

	if ( ! pFnASC_UpdateClanQuestData )
		pFnASC_UpdateClanQuestData = (UFunction*) UObject::GObjObjects()->GetIndex( 127720 );

	UTgGfxSocial_execASC_UpdateClanQuestData_Parms ASC_UpdateClanQuestData_Parms;

	this->ProcessEvent ( pFnASC_UpdateClanQuestData, &ASC_UpdateClanQuestData_Parms, NULL );
};

// Function TgClient.TgGfxSocial.UpdateSocialTabLabels
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxSocial::eventUpdateSocialTabLabels ( )
{
	static UFunction* pFnUpdateSocialTabLabels = NULL;

	if ( ! pFnUpdateSocialTabLabels )
		pFnUpdateSocialTabLabels = (UFunction*) UObject::GObjObjects()->GetIndex( 127719 );

	UTgGfxSocial_eventUpdateSocialTabLabels_Parms UpdateSocialTabLabels_Parms;

	this->ProcessEvent ( pFnUpdateSocialTabLabels, &UpdateSocialTabLabels_Parms, NULL );
};

// Function TgClient.TgGfxSocial.ASC_UpdateSocialTabLabels
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxSocial::ASC_UpdateSocialTabLabels ( )
{
	static UFunction* pFnASC_UpdateSocialTabLabels = NULL;

	if ( ! pFnASC_UpdateSocialTabLabels )
		pFnASC_UpdateSocialTabLabels = (UFunction*) UObject::GObjObjects()->GetIndex( 127718 );

	UTgGfxSocial_execASC_UpdateSocialTabLabels_Parms ASC_UpdateSocialTabLabels_Parms;

	this->ProcessEvent ( pFnASC_UpdateSocialTabLabels, &ASC_UpdateSocialTabLabels_Parms, NULL );
};

// Function TgClient.TgGfxSocial.USC_TabSelected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 tabSelected                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxSocial::USC_TabSelected ( struct FString tabSelected )
{
	static UFunction* pFnUSC_TabSelected = NULL;

	if ( ! pFnUSC_TabSelected )
		pFnUSC_TabSelected = (UFunction*) UObject::GObjObjects()->GetIndex( 127716 );

	UTgGfxSocial_execUSC_TabSelected_Parms USC_TabSelected_Parms;
	memcpy ( &USC_TabSelected_Parms.tabSelected, &tabSelected, 0xC );

	pFnUSC_TabSelected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_TabSelected, &USC_TabSelected_Parms, NULL );

	pFnUSC_TabSelected->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSocial.USC_TabSelected_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxSocial::USC_TabSelected_Delegate ( )
{
	static UFunction* pFnUSC_TabSelected_Delegate = NULL;

	if ( ! pFnUSC_TabSelected_Delegate )
		pFnUSC_TabSelected_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127714 );

	UTgGfxSocial_execUSC_TabSelected_Delegate_Parms USC_TabSelected_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_TabSelected_Delegate, &USC_TabSelected_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxSpectatorHud.SendGraphData
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// class UGFxObject*              Obj                            ( CPF_Parm )

void UTgGfxSpectatorHud::eventSendGraphData ( class UGFxObject* Obj )
{
	static UFunction* pFnSendGraphData = NULL;

	if ( ! pFnSendGraphData )
		pFnSendGraphData = (UFunction*) UObject::GObjObjects()->GetIndex( 127764 );

	UTgGfxSpectatorHud_eventSendGraphData_Parms SendGraphData_Parms;
	SendGraphData_Parms.Obj = Obj;

	this->ProcessEvent ( pFnSendGraphData, &SendGraphData_Parms, NULL );
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdatePlayerList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pPlayerList                    ( CPF_Parm )
// int                            nLength                        ( CPF_Parm )

void UTgGfxSpectatorHud::USC_UpdatePlayerList ( class UGFxObject* pPlayerList, int nLength )
{
	static UFunction* pFnUSC_UpdatePlayerList = NULL;

	if ( ! pFnUSC_UpdatePlayerList )
		pFnUSC_UpdatePlayerList = (UFunction*) UObject::GObjObjects()->GetIndex( 127761 );

	UTgGfxSpectatorHud_execUSC_UpdatePlayerList_Parms USC_UpdatePlayerList_Parms;
	USC_UpdatePlayerList_Parms.pPlayerList = pPlayerList;
	USC_UpdatePlayerList_Parms.nLength = nLength;

	pFnUSC_UpdatePlayerList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_UpdatePlayerList, &USC_UpdatePlayerList_Parms, NULL );

	pFnUSC_UpdatePlayerList->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdatePlayerList_Delegate
// [0x00120000] 
// Parameters infos:
// class UGFxObject*              pPlayerList                    ( CPF_Parm )
// int                            nLength                        ( CPF_Parm )

void UTgGfxSpectatorHud::USC_UpdatePlayerList_Delegate ( class UGFxObject* pPlayerList, int nLength )
{
	static UFunction* pFnUSC_UpdatePlayerList_Delegate = NULL;

	if ( ! pFnUSC_UpdatePlayerList_Delegate )
		pFnUSC_UpdatePlayerList_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127739 );

	UTgGfxSpectatorHud_execUSC_UpdatePlayerList_Delegate_Parms USC_UpdatePlayerList_Delegate_Parms;
	USC_UpdatePlayerList_Delegate_Parms.pPlayerList = pPlayerList;
	USC_UpdatePlayerList_Delegate_Parms.nLength = nLength;

	this->ProcessEvent ( pFnUSC_UpdatePlayerList_Delegate, &USC_UpdatePlayerList_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxSpectatorHud.USC_SetMenuIsOpen
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bOpen                          ( CPF_Parm )

void UTgGfxSpectatorHud::USC_SetMenuIsOpen ( unsigned long bOpen )
{
	static UFunction* pFnUSC_SetMenuIsOpen = NULL;

	if ( ! pFnUSC_SetMenuIsOpen )
		pFnUSC_SetMenuIsOpen = (UFunction*) UObject::GObjObjects()->GetIndex( 127760 );

	UTgGfxSpectatorHud_execUSC_SetMenuIsOpen_Parms USC_SetMenuIsOpen_Parms;
	USC_SetMenuIsOpen_Parms.bOpen = bOpen;

	pFnUSC_SetMenuIsOpen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SetMenuIsOpen, &USC_SetMenuIsOpen_Parms, NULL );

	pFnUSC_SetMenuIsOpen->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSpectatorHud.USC_SetMenuIsOpen_Delegate
// [0x00120000] 
// Parameters infos:
// unsigned long                  bOpen                          ( CPF_Parm )

void UTgGfxSpectatorHud::USC_SetMenuIsOpen_Delegate ( unsigned long bOpen )
{
	static UFunction* pFnUSC_SetMenuIsOpen_Delegate = NULL;

	if ( ! pFnUSC_SetMenuIsOpen_Delegate )
		pFnUSC_SetMenuIsOpen_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127766 );

	UTgGfxSpectatorHud_execUSC_SetMenuIsOpen_Delegate_Parms USC_SetMenuIsOpen_Delegate_Parms;
	USC_SetMenuIsOpen_Delegate_Parms.bOpen = bOpen;

	this->ProcessEvent ( pFnUSC_SetMenuIsOpen_Delegate, &USC_SetMenuIsOpen_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdateStat
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            pawnId                         ( CPF_Parm )

void UTgGfxSpectatorHud::USC_UpdateStat ( int pawnId )
{
	static UFunction* pFnUSC_UpdateStat = NULL;

	if ( ! pFnUSC_UpdateStat )
		pFnUSC_UpdateStat = (UFunction*) UObject::GObjObjects()->GetIndex( 127756 );

	UTgGfxSpectatorHud_execUSC_UpdateStat_Parms USC_UpdateStat_Parms;
	USC_UpdateStat_Parms.pawnId = pawnId;

	pFnUSC_UpdateStat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_UpdateStat, &USC_UpdateStat_Parms, NULL );

	pFnUSC_UpdateStat->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdateStat_Delegate
// [0x00120000] 
// Parameters infos:
// int                            pawnId                         ( CPF_Parm )

void UTgGfxSpectatorHud::USC_UpdateStat_Delegate ( int pawnId )
{
	static UFunction* pFnUSC_UpdateStat_Delegate = NULL;

	if ( ! pFnUSC_UpdateStat_Delegate )
		pFnUSC_UpdateStat_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127742 );

	UTgGfxSpectatorHud_execUSC_UpdateStat_Delegate_Parms USC_UpdateStat_Delegate_Parms;
	USC_UpdateStat_Delegate_Parms.pawnId = pawnId;

	this->ProcessEvent ( pFnUSC_UpdateStat_Delegate, &USC_UpdateStat_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxSpectatorHud.UpdateGraph
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGfxSpectatorHud::UpdateGraph ( )
{
	static UFunction* pFnUpdateGraph = NULL;

	if ( ! pFnUpdateGraph )
		pFnUpdateGraph = (UFunction*) UObject::GObjObjects()->GetIndex( 127754 );

	UTgGfxSpectatorHud_execUpdateGraph_Parms UpdateGraph_Parms;

	pFnUpdateGraph->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateGraph, &UpdateGraph_Parms, NULL );

	pFnUpdateGraph->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSpectatorHud.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pParentMovie                   ( CPF_Parm )

void UTgGfxSpectatorHud::Initialize ( class UTgGameMoviePlayer* pParentMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127752 );

	UTgGfxSpectatorHud_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pParentMovie = pParentMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxStoreChest.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxStoreChest::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 127774 );

	UTgGfxStoreChest_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxStoreChest.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxStoreChest::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127772 );

	UTgGfxStoreChest_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxStoreFeatures.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxStoreFeatures::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127793 );

	UTgGfxStoreFeatures_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxStoreFeatures.SetupFeatureSelector
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UTgGfxStoreFeatures::eventSetupFeatureSelector ( )
{
	static UFunction* pFnSetupFeatureSelector = NULL;

	if ( ! pFnSetupFeatureSelector )
		pFnSetupFeatureSelector = (UFunction*) UObject::GObjObjects()->GetIndex( 127792 );

	UTgGfxStoreFeatures_eventSetupFeatureSelector_Parms SetupFeatureSelector_Parms;

	this->ProcessEvent ( pFnSetupFeatureSelector, &SetupFeatureSelector_Parms, NULL );
};

// Function TgClient.TgGfxStoreFeatures.ASC_UpdateDP
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxStoreFeatures::ASC_UpdateDP ( )
{
	static UFunction* pFnASC_UpdateDP = NULL;

	if ( ! pFnASC_UpdateDP )
		pFnASC_UpdateDP = (UFunction*) UObject::GObjObjects()->GetIndex( 127791 );

	UTgGfxStoreFeatures_execASC_UpdateDP_Parms ASC_UpdateDP_Parms;

	this->ProcessEvent ( pFnASC_UpdateDP, &ASC_UpdateDP_Parms, NULL );
};

// Function TgClient.TgGfxStoreFeatures.UpdateDP
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxStoreFeatures::eventUpdateDP ( )
{
	static UFunction* pFnUpdateDP = NULL;

	if ( ! pFnUpdateDP )
		pFnUpdateDP = (UFunction*) UObject::GObjObjects()->GetIndex( 127790 );

	UTgGfxStoreFeatures_eventUpdateDP_Parms UpdateDP_Parms;

	this->ProcessEvent ( pFnUpdateDP, &UpdateDP_Parms, NULL );
};

// Function TgClient.TgGfxStoreFeatures.USC_ForwardFeature
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            pItemType                      ( CPF_Parm )
// struct FString                 pItemData                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 pItemData2                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            nLocationId                    ( CPF_Parm )

void UTgGfxStoreFeatures::USC_ForwardFeature ( int pItemType, struct FString pItemData, struct FString pItemData2, int nLocationId )
{
	static UFunction* pFnUSC_ForwardFeature = NULL;

	if ( ! pFnUSC_ForwardFeature )
		pFnUSC_ForwardFeature = (UFunction*) UObject::GObjObjects()->GetIndex( 127785 );

	UTgGfxStoreFeatures_execUSC_ForwardFeature_Parms USC_ForwardFeature_Parms;
	USC_ForwardFeature_Parms.pItemType = pItemType;
	memcpy ( &USC_ForwardFeature_Parms.pItemData, &pItemData, 0xC );
	memcpy ( &USC_ForwardFeature_Parms.pItemData2, &pItemData2, 0xC );
	USC_ForwardFeature_Parms.nLocationId = nLocationId;

	pFnUSC_ForwardFeature->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ForwardFeature, &USC_ForwardFeature_Parms, NULL );

	pFnUSC_ForwardFeature->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxStoreFeatures.USC_ForwardFeature_Delegate
// [0x00120000] 
// Parameters infos:
// int                            pItemType                      ( CPF_Parm )
// struct FString                 pItemData                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 pItemData2                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            nLocationId                    ( CPF_Parm )

void UTgGfxStoreFeatures::USC_ForwardFeature_Delegate ( int pItemType, struct FString pItemData, struct FString pItemData2, int nLocationId )
{
	static UFunction* pFnUSC_ForwardFeature_Delegate = NULL;

	if ( ! pFnUSC_ForwardFeature_Delegate )
		pFnUSC_ForwardFeature_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127778 );

	UTgGfxStoreFeatures_execUSC_ForwardFeature_Delegate_Parms USC_ForwardFeature_Delegate_Parms;
	USC_ForwardFeature_Delegate_Parms.pItemType = pItemType;
	memcpy ( &USC_ForwardFeature_Delegate_Parms.pItemData, &pItemData, 0xC );
	memcpy ( &USC_ForwardFeature_Delegate_Parms.pItemData2, &pItemData2, 0xC );
	USC_ForwardFeature_Delegate_Parms.nLocationId = nLocationId;

	this->ProcessEvent ( pFnUSC_ForwardFeature_Delegate, &USC_ForwardFeature_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxStoreFeatures.USC_Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxStoreFeatures::USC_Initialize ( )
{
	static UFunction* pFnUSC_Initialize = NULL;

	if ( ! pFnUSC_Initialize )
		pFnUSC_Initialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127780 );

	UTgGfxStoreFeatures_execUSC_Initialize_Parms USC_Initialize_Parms;

	pFnUSC_Initialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_Initialize, &USC_Initialize_Parms, NULL );

	pFnUSC_Initialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxStoreFeatures.USC_Initialize_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxStoreFeatures::USC_Initialize_Delegate ( )
{
	static UFunction* pFnUSC_Initialize_Delegate = NULL;

	if ( ! pFnUSC_Initialize_Delegate )
		pFnUSC_Initialize_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127776 );

	UTgGfxStoreFeatures_execUSC_Initialize_Delegate_Parms USC_Initialize_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_Initialize_Delegate, &USC_Initialize_Delegate_Parms, NULL );
};

// Function TgClient.TgGFxStoreMain.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGFxStoreMain::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127815 );

	UTgGFxStoreMain_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxStoreMain.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGFxStoreMain::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127813 );

	UTgGFxStoreMain_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxStoreMain.USC_ChangeGameName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )

void UTgGFxStoreMain::USC_ChangeGameName ( struct FString sName )
{
	static UFunction* pFnUSC_ChangeGameName = NULL;

	if ( ! pFnUSC_ChangeGameName )
		pFnUSC_ChangeGameName = (UFunction*) UObject::GObjObjects()->GetIndex( 127811 );

	UTgGFxStoreMain_execUSC_ChangeGameName_Parms USC_ChangeGameName_Parms;
	memcpy ( &USC_ChangeGameName_Parms.sName, &sName, 0xC );

	pFnUSC_ChangeGameName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ChangeGameName, &USC_ChangeGameName_Parms, NULL );

	pFnUSC_ChangeGameName->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxStoreMain.USC_ChangeGameName_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGFxStoreMain::USC_ChangeGameName_Delegate ( )
{
	static UFunction* pFnUSC_ChangeGameName_Delegate = NULL;

	if ( ! pFnUSC_ChangeGameName_Delegate )
		pFnUSC_ChangeGameName_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127797 );

	UTgGFxStoreMain_execUSC_ChangeGameName_Delegate_Parms USC_ChangeGameName_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_ChangeGameName_Delegate, &USC_ChangeGameName_Delegate_Parms, NULL );
};

// Function TgClient.TgGFxStoreMain.USC_RedeemCode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sCode                          ( CPF_Parm | CPF_NeedCtorLink )

void UTgGFxStoreMain::USC_RedeemCode ( struct FString sCode )
{
	static UFunction* pFnUSC_RedeemCode = NULL;

	if ( ! pFnUSC_RedeemCode )
		pFnUSC_RedeemCode = (UFunction*) UObject::GObjObjects()->GetIndex( 127809 );

	UTgGFxStoreMain_execUSC_RedeemCode_Parms USC_RedeemCode_Parms;
	memcpy ( &USC_RedeemCode_Parms.sCode, &sCode, 0xC );

	pFnUSC_RedeemCode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_RedeemCode, &USC_RedeemCode_Parms, NULL );

	pFnUSC_RedeemCode->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxStoreMain.USC_RedeemCode_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGFxStoreMain::USC_RedeemCode_Delegate ( )
{
	static UFunction* pFnUSC_RedeemCode_Delegate = NULL;

	if ( ! pFnUSC_RedeemCode_Delegate )
		pFnUSC_RedeemCode_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127799 );

	UTgGFxStoreMain_execUSC_RedeemCode_Delegate_Parms USC_RedeemCode_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_RedeemCode_Delegate, &USC_RedeemCode_Delegate_Parms, NULL );
};

// Function TgClient.TgGFxStoreMain.USC_BuyGems
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGFxStoreMain::USC_BuyGems ( )
{
	static UFunction* pFnUSC_BuyGems = NULL;

	if ( ! pFnUSC_BuyGems )
		pFnUSC_BuyGems = (UFunction*) UObject::GObjObjects()->GetIndex( 127808 );

	UTgGFxStoreMain_execUSC_BuyGems_Parms USC_BuyGems_Parms;

	pFnUSC_BuyGems->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_BuyGems, &USC_BuyGems_Parms, NULL );

	pFnUSC_BuyGems->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxStoreMain.USC_BuyGems_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGFxStoreMain::USC_BuyGems_Delegate ( )
{
	static UFunction* pFnUSC_BuyGems_Delegate = NULL;

	if ( ! pFnUSC_BuyGems_Delegate )
		pFnUSC_BuyGems_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127801 );

	UTgGFxStoreMain_execUSC_BuyGems_Delegate_Parms USC_BuyGems_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_BuyGems_Delegate, &USC_BuyGems_Delegate_Parms, NULL );
};

// Function TgClient.TgGFxStoreMain.UpdateNameChangePrice
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// int                            nPrice                         ( CPF_Parm )

void UTgGFxStoreMain::eventUpdateNameChangePrice ( int nPrice )
{
	static UFunction* pFnUpdateNameChangePrice = NULL;

	if ( ! pFnUpdateNameChangePrice )
		pFnUpdateNameChangePrice = (UFunction*) UObject::GObjObjects()->GetIndex( 127806 );

	UTgGFxStoreMain_eventUpdateNameChangePrice_Parms UpdateNameChangePrice_Parms;
	UpdateNameChangePrice_Parms.nPrice = nPrice;

	this->ProcessEvent ( pFnUpdateNameChangePrice, &UpdateNameChangePrice_Parms, NULL );
};

// Function TgClient.TgGFxStoreMain.SetSelectedTab
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// int                            nIndex                         ( CPF_Parm )

void UTgGFxStoreMain::eventSetSelectedTab ( int nIndex )
{
	static UFunction* pFnSetSelectedTab = NULL;

	if ( ! pFnSetSelectedTab )
		pFnSetSelectedTab = (UFunction*) UObject::GObjObjects()->GetIndex( 127804 );

	UTgGFxStoreMain_eventSetSelectedTab_Parms SetSelectedTab_Parms;
	SetSelectedTab_Parms.nIndex = nIndex;

	this->ProcessEvent ( pFnSetSelectedTab, &SetSelectedTab_Parms, NULL );
};

// Function TgClient.TgGfxStoreViewer.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxStoreViewer::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 127821 );

	UTgGfxStoreViewer_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxStoreViewer.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxStoreViewer::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127819 );

	UTgGfxStoreViewer_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxTrainingPage.Setup
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxTrainingPage::eventSetup ( )
{
	static UFunction* pFnSetup = NULL;

	if ( ! pFnSetup )
		pFnSetup = (UFunction*) UObject::GObjObjects()->GetIndex( 127848 );

	UTgGfxTrainingPage_eventSetup_Parms Setup_Parms;

	this->ProcessEvent ( pFnSetup, &Setup_Parms, NULL );
};

// Function TgClient.TgGfxTrainingPage.ASC_Setup
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxTrainingPage::ASC_Setup ( )
{
	static UFunction* pFnASC_Setup = NULL;

	if ( ! pFnASC_Setup )
		pFnASC_Setup = (UFunction*) UObject::GObjObjects()->GetIndex( 127847 );

	UTgGfxTrainingPage_execASC_Setup_Parms ASC_Setup_Parms;

	this->ProcessEvent ( pFnASC_Setup, &ASC_Setup_Parms, NULL );
};

// Function TgClient.TgGfxTrainingPage.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxTrainingPage::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127845 );

	UTgGfxTrainingPage_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxTrainingPage.USC_CheckTrainingComplete
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxTrainingPage::USC_CheckTrainingComplete ( )
{
	static UFunction* pFnUSC_CheckTrainingComplete = NULL;

	if ( ! pFnUSC_CheckTrainingComplete )
		pFnUSC_CheckTrainingComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 127844 );

	UTgGfxTrainingPage_execUSC_CheckTrainingComplete_Parms USC_CheckTrainingComplete_Parms;

	pFnUSC_CheckTrainingComplete->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_CheckTrainingComplete, &USC_CheckTrainingComplete_Parms, NULL );

	pFnUSC_CheckTrainingComplete->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxTrainingPage.USC_StartTraining
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            queueId                        ( CPF_Parm )

void UTgGfxTrainingPage::USC_StartTraining ( int queueId )
{
	static UFunction* pFnUSC_StartTraining = NULL;

	if ( ! pFnUSC_StartTraining )
		pFnUSC_StartTraining = (UFunction*) UObject::GObjObjects()->GetIndex( 127842 );

	UTgGfxTrainingPage_execUSC_StartTraining_Parms USC_StartTraining_Parms;
	USC_StartTraining_Parms.queueId = queueId;

	pFnUSC_StartTraining->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_StartTraining, &USC_StartTraining_Parms, NULL );

	pFnUSC_StartTraining->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxTrainingPage.USC_SkipTraining
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxTrainingPage::USC_SkipTraining ( )
{
	static UFunction* pFnUSC_SkipTraining = NULL;

	if ( ! pFnUSC_SkipTraining )
		pFnUSC_SkipTraining = (UFunction*) UObject::GObjObjects()->GetIndex( 127841 );

	UTgGfxTrainingPage_execUSC_SkipTraining_Parms USC_SkipTraining_Parms;

	pFnUSC_SkipTraining->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SkipTraining, &USC_SkipTraining_Parms, NULL );

	pFnUSC_SkipTraining->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxTrainingPage.USC_CheckTrainingComplete_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxTrainingPage::USC_CheckTrainingComplete_Delegate ( )
{
	static UFunction* pFnUSC_CheckTrainingComplete_Delegate = NULL;

	if ( ! pFnUSC_CheckTrainingComplete_Delegate )
		pFnUSC_CheckTrainingComplete_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127834 );

	UTgGfxTrainingPage_execUSC_CheckTrainingComplete_Delegate_Parms USC_CheckTrainingComplete_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_CheckTrainingComplete_Delegate, &USC_CheckTrainingComplete_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxTrainingPage.USC_StartTraining_Delegate
// [0x00120000] 
// Parameters infos:
// int                            queueId                        ( CPF_Parm )

void UTgGfxTrainingPage::USC_StartTraining_Delegate ( int queueId )
{
	static UFunction* pFnUSC_StartTraining_Delegate = NULL;

	if ( ! pFnUSC_StartTraining_Delegate )
		pFnUSC_StartTraining_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127836 );

	UTgGfxTrainingPage_execUSC_StartTraining_Delegate_Parms USC_StartTraining_Delegate_Parms;
	USC_StartTraining_Delegate_Parms.queueId = queueId;

	this->ProcessEvent ( pFnUSC_StartTraining_Delegate, &USC_StartTraining_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxTrainingPage.USC_SkipTraining_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxTrainingPage::USC_SkipTraining_Delegate ( )
{
	static UFunction* pFnUSC_SkipTraining_Delegate = NULL;

	if ( ! pFnUSC_SkipTraining_Delegate )
		pFnUSC_SkipTraining_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127838 );

	UTgGfxTrainingPage_execUSC_SkipTraining_Delegate_Parms USC_SkipTraining_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_SkipTraining_Delegate, &USC_SkipTraining_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxTutorialManagement.DisplayPopup
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxTutorialManagement::eventDisplayPopup ( )
{
	static UFunction* pFnDisplayPopup = NULL;

	if ( ! pFnDisplayPopup )
		pFnDisplayPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 127857 );

	UTgGfxTutorialManagement_eventDisplayPopup_Parms DisplayPopup_Parms;

	this->ProcessEvent ( pFnDisplayPopup, &DisplayPopup_Parms, NULL );
};

// Function TgClient.TgGfxTutorialManagement.ASC_DisplayPopup
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxTutorialManagement::ASC_DisplayPopup ( )
{
	static UFunction* pFnASC_DisplayPopup = NULL;

	if ( ! pFnASC_DisplayPopup )
		pFnASC_DisplayPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 127856 );

	UTgGfxTutorialManagement_execASC_DisplayPopup_Parms ASC_DisplayPopup_Parms;

	this->ProcessEvent ( pFnASC_DisplayPopup, &ASC_DisplayPopup_Parms, NULL );
};

// Function TgClient.TgGfxTutorialManagement.USC_AcceptPopup
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bAccepted                      ( CPF_Parm )

void UTgGfxTutorialManagement::USC_AcceptPopup ( unsigned long bAccepted )
{
	static UFunction* pFnUSC_AcceptPopup = NULL;

	if ( ! pFnUSC_AcceptPopup )
		pFnUSC_AcceptPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 127854 );

	UTgGfxTutorialManagement_execUSC_AcceptPopup_Parms USC_AcceptPopup_Parms;
	USC_AcceptPopup_Parms.bAccepted = bAccepted;

	pFnUSC_AcceptPopup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_AcceptPopup, &USC_AcceptPopup_Parms, NULL );

	pFnUSC_AcceptPopup->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxTutorialManagement.USC_AcceptPopup_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxTutorialManagement::USC_AcceptPopup_Delegate ( )
{
	static UFunction* pFnUSC_AcceptPopup_Delegate = NULL;

	if ( ! pFnUSC_AcceptPopup_Delegate )
		pFnUSC_AcceptPopup_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127850 );

	UTgGfxTutorialManagement_execUSC_AcceptPopup_Delegate_Parms USC_AcceptPopup_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_AcceptPopup_Delegate, &USC_AcceptPopup_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxTutorialManagement.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxTutorialManagement::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127852 );

	UTgGfxTutorialManagement_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxVendorStore.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxVendorStore::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 128079 );

	UTgGfxVendorStore_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxVendorStore.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxVendorStore::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 128078 );

	UTgGfxVendorStore_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxVendorStore.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxVendorStore::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 128076 );

	UTgGfxVendorStore_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxWisdomWeb.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxWisdomWeb::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 128119 );

	UTgGfxWisdomWeb_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxWisdomWeb.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxWisdomWeb::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 128117 );

	UTgGfxWisdomWeb_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxWisdomWeb.ASC_UpdateStreamList
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxWisdomWeb::ASC_UpdateStreamList ( )
{
	static UFunction* pFnASC_UpdateStreamList = NULL;

	if ( ! pFnASC_UpdateStreamList )
		pFnASC_UpdateStreamList = (UFunction*) UObject::GObjObjects()->GetIndex( 128116 );

	UTgGfxWisdomWeb_execASC_UpdateStreamList_Parms ASC_UpdateStreamList_Parms;

	this->ProcessEvent ( pFnASC_UpdateStreamList, &ASC_UpdateStreamList_Parms, NULL );
};

// Function TgClient.TgGfxWisdomWeb.UpdateStreamList
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxWisdomWeb::eventUpdateStreamList ( )
{
	static UFunction* pFnUpdateStreamList = NULL;

	if ( ! pFnUpdateStreamList )
		pFnUpdateStreamList = (UFunction*) UObject::GObjObjects()->GetIndex( 128115 );

	UTgGfxWisdomWeb_eventUpdateStreamList_Parms UpdateStreamList_Parms;

	this->ProcessEvent ( pFnUpdateStreamList, &UpdateStreamList_Parms, NULL );
};

// Function TgClient.TgGfxWisdomWeb.USC_StartStreamData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            streamId                       ( CPF_Parm )
// unsigned long                  external                       ( CPF_Parm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          Height                         ( CPF_Parm )
// float                          widthReal                      ( CPF_Parm )
// float                          heightReal                     ( CPF_Parm )

void UTgGfxWisdomWeb::USC_StartStreamData ( int streamId, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal )
{
	static UFunction* pFnUSC_StartStreamData = NULL;

	if ( ! pFnUSC_StartStreamData )
		pFnUSC_StartStreamData = (UFunction*) UObject::GObjObjects()->GetIndex( 128106 );

	UTgGfxWisdomWeb_execUSC_StartStreamData_Parms USC_StartStreamData_Parms;
	USC_StartStreamData_Parms.streamId = streamId;
	USC_StartStreamData_Parms.external = external;
	USC_StartStreamData_Parms.X = X;
	USC_StartStreamData_Parms.Y = Y;
	USC_StartStreamData_Parms.Width = Width;
	USC_StartStreamData_Parms.Height = Height;
	USC_StartStreamData_Parms.widthReal = widthReal;
	USC_StartStreamData_Parms.heightReal = heightReal;

	pFnUSC_StartStreamData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_StartStreamData, &USC_StartStreamData_Parms, NULL );

	pFnUSC_StartStreamData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxWisdomWeb.USC_StartStreamData_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxWisdomWeb::USC_StartStreamData_Delegate ( )
{
	static UFunction* pFnUSC_StartStreamData_Delegate = NULL;

	if ( ! pFnUSC_StartStreamData_Delegate )
		pFnUSC_StartStreamData_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 128104 );

	UTgGfxWisdomWeb_execUSC_StartStreamData_Delegate_Parms USC_StartStreamData_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_StartStreamData_Delegate, &USC_StartStreamData_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPlayerProfile.PlayerNameUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxPlayerProfile::eventPlayerNameUpdated ( )
{
	static UFunction* pFnPlayerNameUpdated = NULL;

	if ( ! pFnPlayerNameUpdated )
		pFnPlayerNameUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127231 );

	UTgGfxPlayerProfile_eventPlayerNameUpdated_Parms PlayerNameUpdated_Parms;

	this->ProcessEvent ( pFnPlayerNameUpdated, &PlayerNameUpdated_Parms, NULL );
};

// Function TgClient.TgGfxPlayerProfile.ASC_PlayerNameUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxPlayerProfile::ASC_PlayerNameUpdated ( )
{
	static UFunction* pFnASC_PlayerNameUpdated = NULL;

	if ( ! pFnASC_PlayerNameUpdated )
		pFnASC_PlayerNameUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127230 );

	UTgGfxPlayerProfile_execASC_PlayerNameUpdated_Parms ASC_PlayerNameUpdated_Parms;

	this->ProcessEvent ( pFnASC_PlayerNameUpdated, &ASC_PlayerNameUpdated_Parms, NULL );
};

// Function TgClient.TgGfxPlayerProfile.DropDownUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void UTgGfxPlayerProfile::eventDropDownUpdated ( int Index )
{
	static UFunction* pFnDropDownUpdated = NULL;

	if ( ! pFnDropDownUpdated )
		pFnDropDownUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127228 );

	UTgGfxPlayerProfile_eventDropDownUpdated_Parms DropDownUpdated_Parms;
	DropDownUpdated_Parms.Index = Index;

	this->ProcessEvent ( pFnDropDownUpdated, &DropDownUpdated_Parms, NULL );
};

// Function TgClient.TgGfxPlayerProfile.ASC_DropDownUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void UTgGfxPlayerProfile::ASC_DropDownUpdated ( int Index )
{
	static UFunction* pFnASC_DropDownUpdated = NULL;

	if ( ! pFnASC_DropDownUpdated )
		pFnASC_DropDownUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 127226 );

	UTgGfxPlayerProfile_execASC_DropDownUpdated_Parms ASC_DropDownUpdated_Parms;
	ASC_DropDownUpdated_Parms.Index = Index;

	this->ProcessEvent ( pFnASC_DropDownUpdated, &ASC_DropDownUpdated_Parms, NULL );
};

// Function TgClient.TgGfxPlayerProfile.USC_TabSelected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void UTgGfxPlayerProfile::USC_TabSelected ( int Index )
{
	static UFunction* pFnUSC_TabSelected = NULL;

	if ( ! pFnUSC_TabSelected )
		pFnUSC_TabSelected = (UFunction*) UObject::GObjObjects()->GetIndex( 127224 );

	UTgGfxPlayerProfile_execUSC_TabSelected_Parms USC_TabSelected_Parms;
	USC_TabSelected_Parms.Index = Index;

	pFnUSC_TabSelected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_TabSelected, &USC_TabSelected_Parms, NULL );

	pFnUSC_TabSelected->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayerProfile.USC_SearchByName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxPlayerProfile::USC_SearchByName ( struct FString PlayerName )
{
	static UFunction* pFnUSC_SearchByName = NULL;

	if ( ! pFnUSC_SearchByName )
		pFnUSC_SearchByName = (UFunction*) UObject::GObjObjects()->GetIndex( 127222 );

	UTgGfxPlayerProfile_execUSC_SearchByName_Parms USC_SearchByName_Parms;
	memcpy ( &USC_SearchByName_Parms.PlayerName, &PlayerName, 0xC );

	pFnUSC_SearchByName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SearchByName, &USC_SearchByName_Parms, NULL );

	pFnUSC_SearchByName->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayerProfile.USC_SetFilter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            filterIndex                    ( CPF_Parm )
// int                            val                            ( CPF_Parm )

void UTgGfxPlayerProfile::USC_SetFilter ( int filterIndex, int val )
{
	static UFunction* pFnUSC_SetFilter = NULL;

	if ( ! pFnUSC_SetFilter )
		pFnUSC_SetFilter = (UFunction*) UObject::GObjObjects()->GetIndex( 127219 );

	UTgGfxPlayerProfile_execUSC_SetFilter_Parms USC_SetFilter_Parms;
	USC_SetFilter_Parms.filterIndex = filterIndex;
	USC_SetFilter_Parms.val = val;

	pFnUSC_SetFilter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SetFilter, &USC_SetFilter_Parms, NULL );

	pFnUSC_SetFilter->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayerProfile.USC_TabSelected_Delegate
// [0x00120000] 
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void UTgGfxPlayerProfile::USC_TabSelected_Delegate ( int Index )
{
	static UFunction* pFnUSC_TabSelected_Delegate = NULL;

	if ( ! pFnUSC_TabSelected_Delegate )
		pFnUSC_TabSelected_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127194 );

	UTgGfxPlayerProfile_execUSC_TabSelected_Delegate_Parms USC_TabSelected_Delegate_Parms;
	USC_TabSelected_Delegate_Parms.Index = Index;

	this->ProcessEvent ( pFnUSC_TabSelected_Delegate, &USC_TabSelected_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPlayerProfile.USC_SearchByName_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxPlayerProfile::USC_SearchByName_Delegate ( struct FString PlayerName )
{
	static UFunction* pFnUSC_SearchByName_Delegate = NULL;

	if ( ! pFnUSC_SearchByName_Delegate )
		pFnUSC_SearchByName_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127196 );

	UTgGfxPlayerProfile_execUSC_SearchByName_Delegate_Parms USC_SearchByName_Delegate_Parms;
	memcpy ( &USC_SearchByName_Delegate_Parms.PlayerName, &PlayerName, 0xC );

	this->ProcessEvent ( pFnUSC_SearchByName_Delegate, &USC_SearchByName_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPlayerProfile.USC_SetFilter_Delegate
// [0x00120000] 
// Parameters infos:
// int                            filterIndex                    ( CPF_Parm )
// int                            val                            ( CPF_Parm )

void UTgGfxPlayerProfile::USC_SetFilter_Delegate ( int filterIndex, int val )
{
	static UFunction* pFnUSC_SetFilter_Delegate = NULL;

	if ( ! pFnUSC_SetFilter_Delegate )
		pFnUSC_SetFilter_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 127198 );

	UTgGfxPlayerProfile_execUSC_SetFilter_Delegate_Parms USC_SetFilter_Delegate_Parms;
	USC_SetFilter_Delegate_Parms.filterIndex = filterIndex;
	USC_SetFilter_Delegate_Parms.val = val;

	this->ProcessEvent ( pFnUSC_SetFilter_Delegate, &USC_SetFilter_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxPlayerProfile.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxPlayerProfile::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127214 );

	UTgGfxPlayerProfile_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayerProfile.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      theMovie                       ( CPF_Parm )

void UTgGfxPlayerProfile::Initialize ( class UTgGameMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 127212 );

	UTgGfxPlayerProfile_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.usc_ClipboardCopy
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Str                            ( CPF_Parm | CPF_NeedCtorLink )

void UTgMoviePlayer::usc_ClipboardCopy ( struct FString Str )
{
	static UFunction* pFnusc_ClipboardCopy = NULL;

	if ( ! pFnusc_ClipboardCopy )
		pFnusc_ClipboardCopy = (UFunction*) UObject::GObjObjects()->GetIndex( 124338 );

	UTgMoviePlayer_execusc_ClipboardCopy_Parms usc_ClipboardCopy_Parms;
	memcpy ( &usc_ClipboardCopy_Parms.Str, &Str, 0xC );

	this->ProcessEvent ( pFnusc_ClipboardCopy, &usc_ClipboardCopy_Parms, NULL );
};

// Function TgClient.TgMoviePlayer.usc_ClipboardPaste
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UTgMoviePlayer::usc_ClipboardPaste ( )
{
	static UFunction* pFnusc_ClipboardPaste = NULL;

	if ( ! pFnusc_ClipboardPaste )
		pFnusc_ClipboardPaste = (UFunction*) UObject::GObjObjects()->GetIndex( 124335 );

	UTgMoviePlayer_execusc_ClipboardPaste_Parms usc_ClipboardPaste_Parms;

	this->ProcessEvent ( pFnusc_ClipboardPaste, &usc_ClipboardPaste_Parms, NULL );

	return usc_ClipboardPaste_Parms.ReturnValue;
};

// Function TgClient.TgMoviePlayer.Init
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class ULocalPlayer*            LocPlay                        ( CPF_OptionalParm | CPF_Parm )

void UTgMoviePlayer::eventInit ( class ULocalPlayer* LocPlay )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->GetIndex( 124333 );

	UTgMoviePlayer_eventInit_Parms Init_Parms;
	Init_Parms.LocPlay = LocPlay;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function TgClient.TgMoviePlayer.PostWidgetInit
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UTgMoviePlayer::eventPostWidgetInit ( )
{
	static UFunction* pFnPostWidgetInit = NULL;

	if ( ! pFnPostWidgetInit )
		pFnPostWidgetInit = (UFunction*) UObject::GObjObjects()->GetIndex( 124332 );

	UTgMoviePlayer_eventPostWidgetInit_Parms PostWidgetInit_Parms;

	this->ProcessEvent ( pFnPostWidgetInit, &PostWidgetInit_Parms, NULL );
};

// Function TgClient.TgMoviePlayer.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UTgMoviePlayer::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->GetIndex( 124330 );

	UTgMoviePlayer_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TgClient.TgMoviePlayer.usc_IME_Exists
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgMoviePlayer::usc_IME_Exists ( )
{
	static UFunction* pFnusc_IME_Exists = NULL;

	if ( ! pFnusc_IME_Exists )
		pFnusc_IME_Exists = (UFunction*) UObject::GObjObjects()->GetIndex( 124328 );

	UTgMoviePlayer_execusc_IME_Exists_Parms usc_IME_Exists_Parms;

	pFnusc_IME_Exists->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_IME_Exists, &usc_IME_Exists_Parms, NULL );

	pFnusc_IME_Exists->FunctionFlags |= 0x400;

	return usc_IME_Exists_Parms.ReturnValue;
};

// Function TgClient.TgMoviePlayer.usc_IME_SetEnabled
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bEnabled                       ( CPF_Parm )

bool UTgMoviePlayer::usc_IME_SetEnabled ( unsigned long bEnabled )
{
	static UFunction* pFnusc_IME_SetEnabled = NULL;

	if ( ! pFnusc_IME_SetEnabled )
		pFnusc_IME_SetEnabled = (UFunction*) UObject::GObjObjects()->GetIndex( 124325 );

	UTgMoviePlayer_execusc_IME_SetEnabled_Parms usc_IME_SetEnabled_Parms;
	usc_IME_SetEnabled_Parms.bEnabled = bEnabled;

	pFnusc_IME_SetEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_IME_SetEnabled, &usc_IME_SetEnabled_Parms, NULL );

	pFnusc_IME_SetEnabled->FunctionFlags |= 0x400;

	return usc_IME_SetEnabled_Parms.ReturnValue;
};

// Function TgClient.TgMoviePlayer.usc_getFontSize
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Identifier                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SectionName                    ( CPF_Parm | CPF_NeedCtorLink )

struct FString UTgMoviePlayer::usc_getFontSize ( struct FString Identifier, struct FString SectionName )
{
	static UFunction* pFnusc_getFontSize = NULL;

	if ( ! pFnusc_getFontSize )
		pFnusc_getFontSize = (UFunction*) UObject::GObjObjects()->GetIndex( 124321 );

	UTgMoviePlayer_execusc_getFontSize_Parms usc_getFontSize_Parms;
	memcpy ( &usc_getFontSize_Parms.Identifier, &Identifier, 0xC );
	memcpy ( &usc_getFontSize_Parms.SectionName, &SectionName, 0xC );

	pFnusc_getFontSize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_getFontSize, &usc_getFontSize_Parms, NULL );

	pFnusc_getFontSize->FunctionFlags |= 0x400;

	return usc_getFontSize_Parms.ReturnValue;
};

// Function TgClient.TgMoviePlayer.usc_TranslateMsg
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Identifier                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SectionName                    ( CPF_Parm | CPF_NeedCtorLink )

struct FString UTgMoviePlayer::usc_TranslateMsg ( struct FString Identifier, struct FString SectionName )
{
	static UFunction* pFnusc_TranslateMsg = NULL;

	if ( ! pFnusc_TranslateMsg )
		pFnusc_TranslateMsg = (UFunction*) UObject::GObjObjects()->GetIndex( 124317 );

	UTgMoviePlayer_execusc_TranslateMsg_Parms usc_TranslateMsg_Parms;
	memcpy ( &usc_TranslateMsg_Parms.Identifier, &Identifier, 0xC );
	memcpy ( &usc_TranslateMsg_Parms.SectionName, &SectionName, 0xC );

	pFnusc_TranslateMsg->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_TranslateMsg, &usc_TranslateMsg_Parms, NULL );

	pFnusc_TranslateMsg->FunctionFlags |= 0x400;

	return usc_TranslateMsg_Parms.ReturnValue;
};

// Function TgClient.TgMoviePlayer.usc_TranslateMsgId
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            nId                            ( CPF_Parm )

struct FString UTgMoviePlayer::usc_TranslateMsgId ( int nId )
{
	static UFunction* pFnusc_TranslateMsgId = NULL;

	if ( ! pFnusc_TranslateMsgId )
		pFnusc_TranslateMsgId = (UFunction*) UObject::GObjObjects()->GetIndex( 124314 );

	UTgMoviePlayer_execusc_TranslateMsgId_Parms usc_TranslateMsgId_Parms;
	usc_TranslateMsgId_Parms.nId = nId;

	pFnusc_TranslateMsgId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_TranslateMsgId, &usc_TranslateMsgId_Parms, NULL );

	pFnusc_TranslateMsgId->FunctionFlags |= 0x400;

	return usc_TranslateMsgId_Parms.ReturnValue;
};

// Function TgClient.TgMoviePlayer.ShowTransitionScene
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bShow                          ( CPF_Parm )

void UTgMoviePlayer::ShowTransitionScene ( unsigned long bShow )
{
	static UFunction* pFnShowTransitionScene = NULL;

	if ( ! pFnShowTransitionScene )
		pFnShowTransitionScene = (UFunction*) UObject::GObjObjects()->GetIndex( 124312 );

	UTgMoviePlayer_execShowTransitionScene_Parms ShowTransitionScene_Parms;
	ShowTransitionScene_Parms.bShow = bShow;

	pFnShowTransitionScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowTransitionScene, &ShowTransitionScene_Parms, NULL );

	pFnShowTransitionScene->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.usc_playInputLightingEffect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 PresetName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgMoviePlayer::usc_playInputLightingEffect ( struct FString PresetName )
{
	static UFunction* pFnusc_playInputLightingEffect = NULL;

	if ( ! pFnusc_playInputLightingEffect )
		pFnusc_playInputLightingEffect = (UFunction*) UObject::GObjObjects()->GetIndex( 124310 );

	UTgMoviePlayer_execusc_playInputLightingEffect_Parms usc_playInputLightingEffect_Parms;
	memcpy ( &usc_playInputLightingEffect_Parms.PresetName, &PresetName, 0xC );

	pFnusc_playInputLightingEffect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_playInputLightingEffect, &usc_playInputLightingEffect_Parms, NULL );

	pFnusc_playInputLightingEffect->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.usc_toggle_key_capture
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bCapture                       ( CPF_Parm )

void UTgMoviePlayer::usc_toggle_key_capture ( unsigned long bCapture )
{
	static UFunction* pFnusc_toggle_key_capture = NULL;

	if ( ! pFnusc_toggle_key_capture )
		pFnusc_toggle_key_capture = (UFunction*) UObject::GObjObjects()->GetIndex( 124308 );

	UTgMoviePlayer_execusc_toggle_key_capture_Parms usc_toggle_key_capture_Parms;
	usc_toggle_key_capture_Parms.bCapture = bCapture;

	pFnusc_toggle_key_capture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_toggle_key_capture, &usc_toggle_key_capture_Parms, NULL );

	pFnusc_toggle_key_capture->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.usc_toggle_cursor
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bShow                          ( CPF_Parm )

void UTgMoviePlayer::usc_toggle_cursor ( unsigned long bShow )
{
	static UFunction* pFnusc_toggle_cursor = NULL;

	if ( ! pFnusc_toggle_cursor )
		pFnusc_toggle_cursor = (UFunction*) UObject::GObjObjects()->GetIndex( 124306 );

	UTgMoviePlayer_execusc_toggle_cursor_Parms usc_toggle_cursor_Parms;
	usc_toggle_cursor_Parms.bShow = bShow;

	pFnusc_toggle_cursor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_toggle_cursor, &usc_toggle_cursor_Parms, NULL );

	pFnusc_toggle_cursor->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.usc_quit
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgMoviePlayer::usc_quit ( )
{
	static UFunction* pFnusc_quit = NULL;

	if ( ! pFnusc_quit )
		pFnusc_quit = (UFunction*) UObject::GObjObjects()->GetIndex( 124305 );

	UTgMoviePlayer_execusc_quit_Parms usc_quit_Parms;

	pFnusc_quit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_quit, &usc_quit_Parms, NULL );

	pFnusc_quit->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.usc_Console_Command
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Cmd                            ( CPF_Parm | CPF_NeedCtorLink )

void UTgMoviePlayer::usc_Console_Command ( struct FString Cmd )
{
	static UFunction* pFnusc_Console_Command = NULL;

	if ( ! pFnusc_Console_Command )
		pFnusc_Console_Command = (UFunction*) UObject::GObjObjects()->GetIndex( 124303 );

	UTgMoviePlayer_execusc_Console_Command_Parms usc_Console_Command_Parms;
	memcpy ( &usc_Console_Command_Parms.Cmd, &Cmd, 0xC );

	pFnusc_Console_Command->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_Console_Command, &usc_Console_Command_Parms, NULL );

	pFnusc_Console_Command->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.usc_Scene_Manager_Created
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgMoviePlayer::usc_Scene_Manager_Created ( )
{
	static UFunction* pFnusc_Scene_Manager_Created = NULL;

	if ( ! pFnusc_Scene_Manager_Created )
		pFnusc_Scene_Manager_Created = (UFunction*) UObject::GObjObjects()->GetIndex( 124302 );

	UTgMoviePlayer_execusc_Scene_Manager_Created_Parms usc_Scene_Manager_Created_Parms;

	pFnusc_Scene_Manager_Created->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_Scene_Manager_Created, &usc_Scene_Manager_Created_Parms, NULL );

	pFnusc_Scene_Manager_Created->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.usc_Data_Handler_Created
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgMoviePlayer::usc_Data_Handler_Created ( )
{
	static UFunction* pFnusc_Data_Handler_Created = NULL;

	if ( ! pFnusc_Data_Handler_Created )
		pFnusc_Data_Handler_Created = (UFunction*) UObject::GObjObjects()->GetIndex( 124301 );

	UTgMoviePlayer_execusc_Data_Handler_Created_Parms usc_Data_Handler_Created_Parms;

	pFnusc_Data_Handler_Created->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_Data_Handler_Created, &usc_Data_Handler_Created_Parms, NULL );

	pFnusc_Data_Handler_Created->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.UnregisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgMoviePlayer::UnregisterEngineCallbacks ( )
{
	static UFunction* pFnUnregisterEngineCallbacks = NULL;

	if ( ! pFnUnregisterEngineCallbacks )
		pFnUnregisterEngineCallbacks = (UFunction*) UObject::GObjObjects()->GetIndex( 124300 );

	UTgMoviePlayer_execUnregisterEngineCallbacks_Parms UnregisterEngineCallbacks_Parms;

	pFnUnregisterEngineCallbacks->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterEngineCallbacks, &UnregisterEngineCallbacks_Parms, NULL );

	pFnUnregisterEngineCallbacks->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.RegisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgMoviePlayer::RegisterEngineCallbacks ( )
{
	static UFunction* pFnRegisterEngineCallbacks = NULL;

	if ( ! pFnRegisterEngineCallbacks )
		pFnRegisterEngineCallbacks = (UFunction*) UObject::GObjObjects()->GetIndex( 124299 );

	UTgMoviePlayer_execRegisterEngineCallbacks_Parms RegisterEngineCallbacks_Parms;

	pFnRegisterEngineCallbacks->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterEngineCallbacks, &RegisterEngineCallbacks_Parms, NULL );

	pFnRegisterEngineCallbacks->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.GetTranslatedSpecKeyBind
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// int                            nAlternate                     ( CPF_OptionalParm | CPF_Parm )

struct FString UTgMoviePlayer::GetTranslatedSpecKeyBind ( struct FString Command, int nAlternate )
{
	static UFunction* pFnGetTranslatedSpecKeyBind = NULL;

	if ( ! pFnGetTranslatedSpecKeyBind )
		pFnGetTranslatedSpecKeyBind = (UFunction*) UObject::GObjObjects()->GetIndex( 124295 );

	UTgMoviePlayer_execGetTranslatedSpecKeyBind_Parms GetTranslatedSpecKeyBind_Parms;
	memcpy ( &GetTranslatedSpecKeyBind_Parms.Command, &Command, 0xC );
	GetTranslatedSpecKeyBind_Parms.nAlternate = nAlternate;

	pFnGetTranslatedSpecKeyBind->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTranslatedSpecKeyBind, &GetTranslatedSpecKeyBind_Parms, NULL );

	pFnGetTranslatedSpecKeyBind->FunctionFlags |= 0x400;

	return GetTranslatedSpecKeyBind_Parms.ReturnValue;
};

// Function TgClient.TgMoviePlayer.GetTranslatedKeyBind
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// int                            nAlternate                     ( CPF_OptionalParm | CPF_Parm )

struct FString UTgMoviePlayer::GetTranslatedKeyBind ( struct FString Command, int nAlternate )
{
	static UFunction* pFnGetTranslatedKeyBind = NULL;

	if ( ! pFnGetTranslatedKeyBind )
		pFnGetTranslatedKeyBind = (UFunction*) UObject::GObjObjects()->GetIndex( 124291 );

	UTgMoviePlayer_execGetTranslatedKeyBind_Parms GetTranslatedKeyBind_Parms;
	memcpy ( &GetTranslatedKeyBind_Parms.Command, &Command, 0xC );
	GetTranslatedKeyBind_Parms.nAlternate = nAlternate;

	pFnGetTranslatedKeyBind->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTranslatedKeyBind, &GetTranslatedKeyBind_Parms, NULL );

	pFnGetTranslatedKeyBind->FunctionFlags |= 0x400;

	return GetTranslatedKeyBind_Parms.ReturnValue;
};

// Function TgClient.TgMoviePlayer.OnMarshalEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FPointer                pMarEvent                      ( CPF_Parm )

void UTgMoviePlayer::OnMarshalEvent ( struct FPointer pMarEvent )
{
	static UFunction* pFnOnMarshalEvent = NULL;

	if ( ! pFnOnMarshalEvent )
		pFnOnMarshalEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 124289 );

	UTgMoviePlayer_execOnMarshalEvent_Parms OnMarshalEvent_Parms;
	memcpy ( &OnMarshalEvent_Parms.pMarEvent, &pMarEvent, 0x4 );

	pFnOnMarshalEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnMarshalEvent, &OnMarshalEvent_Parms, NULL );

	pFnOnMarshalEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.UnregisterMarshalCallback
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgMoviePlayer::UnregisterMarshalCallback ( )
{
	static UFunction* pFnUnregisterMarshalCallback = NULL;

	if ( ! pFnUnregisterMarshalCallback )
		pFnUnregisterMarshalCallback = (UFunction*) UObject::GObjObjects()->GetIndex( 124288 );

	UTgMoviePlayer_execUnregisterMarshalCallback_Parms UnregisterMarshalCallback_Parms;

	pFnUnregisterMarshalCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterMarshalCallback, &UnregisterMarshalCallback_Parms, NULL );

	pFnUnregisterMarshalCallback->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.RegisterMarshalCallback
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgMoviePlayer::RegisterMarshalCallback ( )
{
	static UFunction* pFnRegisterMarshalCallback = NULL;

	if ( ! pFnRegisterMarshalCallback )
		pFnRegisterMarshalCallback = (UFunction*) UObject::GObjObjects()->GetIndex( 124286 );

	UTgMoviePlayer_execRegisterMarshalCallback_Parms RegisterMarshalCallback_Parms;

	pFnRegisterMarshalCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterMarshalCallback, &RegisterMarshalCallback_Parms, NULL );

	pFnRegisterMarshalCallback->FunctionFlags |= 0x400;

	return RegisterMarshalCallback_Parms.ReturnValue;
};

// Function TgClient.TgMoviePlayer.NativeTick
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UTgMoviePlayer::NativeTick ( float DeltaTime )
{
	static UFunction* pFnNativeTick = NULL;

	if ( ! pFnNativeTick )
		pFnNativeTick = (UFunction*) UObject::GObjObjects()->GetIndex( 124284 );

	UTgMoviePlayer_execNativeTick_Parms NativeTick_Parms;
	NativeTick_Parms.DeltaTime = DeltaTime;

	pFnNativeTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativeTick, &NativeTick_Parms, NULL );

	pFnNativeTick->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.OnClose
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UTgMoviePlayer::eventOnClose ( )
{
	static UFunction* pFnOnClose = NULL;

	if ( ! pFnOnClose )
		pFnOnClose = (UFunction*) UObject::GObjObjects()->GetIndex( 124283 );

	UTgMoviePlayer_eventOnClose_Parms OnClose_Parms;

	pFnOnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnClose, &OnClose_Parms, NULL );

	pFnOnClose->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.PostInit
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgMoviePlayer::PostInit ( )
{
	static UFunction* pFnPostInit = NULL;

	if ( ! pFnPostInit )
		pFnPostInit = (UFunction*) UObject::GObjObjects()->GetIndex( 124282 );

	UTgMoviePlayer_execPostInit_Parms PostInit_Parms;

	pFnPostInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPostInit, &PostInit_Parms, NULL );

	pFnPostInit->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.InitializeSceneManager
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgMoviePlayer::InitializeSceneManager ( )
{
	static UFunction* pFnInitializeSceneManager = NULL;

	if ( ! pFnInitializeSceneManager )
		pFnInitializeSceneManager = (UFunction*) UObject::GObjObjects()->GetIndex( 124281 );

	UTgMoviePlayer_execInitializeSceneManager_Parms InitializeSceneManager_Parms;

	pFnInitializeSceneManager->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeSceneManager, &InitializeSceneManager_Parms, NULL );

	pFnInitializeSceneManager->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.InitializeDataHandler
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgMoviePlayer::InitializeDataHandler ( )
{
	static UFunction* pFnInitializeDataHandler = NULL;

	if ( ! pFnInitializeDataHandler )
		pFnInitializeDataHandler = (UFunction*) UObject::GObjObjects()->GetIndex( 124280 );

	UTgMoviePlayer_execInitializeDataHandler_Parms InitializeDataHandler_Parms;

	pFnInitializeDataHandler->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeDataHandler, &InitializeDataHandler_Parms, NULL );

	pFnInitializeDataHandler->FunctionFlags |= 0x400;
};

// Function TgClient.TgMoviePlayer.GetHUD
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgClientHUD*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ATgClientHUD* UTgMoviePlayer::GetHUD ( )
{
	static UFunction* pFnGetHUD = NULL;

	if ( ! pFnGetHUD )
		pFnGetHUD = (UFunction*) UObject::GObjObjects()->GetIndex( 124278 );

	UTgMoviePlayer_execGetHUD_Parms GetHUD_Parms;

	pFnGetHUD->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHUD, &GetHUD_Parms, NULL );

	pFnGetHUD->FunctionFlags |= 0x400;

	return GetHUD_Parms.ReturnValue;
};

// Function TgClient.TgMoviePlayer.GetPlayerOwner
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgPlayerController*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ATgPlayerController* UTgMoviePlayer::GetPlayerOwner ( )
{
	static UFunction* pFnGetPlayerOwner = NULL;

	if ( ! pFnGetPlayerOwner )
		pFnGetPlayerOwner = (UFunction*) UObject::GObjObjects()->GetIndex( 124276 );

	UTgMoviePlayer_execGetPlayerOwner_Parms GetPlayerOwner_Parms;

	pFnGetPlayerOwner->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPlayerOwner, &GetPlayerOwner_Parms, NULL );

	pFnGetPlayerOwner->FunctionFlags |= 0x400;

	return GetPlayerOwner_Parms.ReturnValue;
};

// Function TgClient.TgMoviePlayer.DelegateOnMarshalEvent
// [0x00120000] 
// Parameters infos:
// struct FPointer                pMarEvent                      ( CPF_Parm )

void UTgMoviePlayer::DelegateOnMarshalEvent ( struct FPointer pMarEvent )
{
	static UFunction* pFnDelegateOnMarshalEvent = NULL;

	if ( ! pFnDelegateOnMarshalEvent )
		pFnDelegateOnMarshalEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 124263 );

	UTgMoviePlayer_execDelegateOnMarshalEvent_Parms DelegateOnMarshalEvent_Parms;
	memcpy ( &DelegateOnMarshalEvent_Parms.pMarEvent, &pMarEvent, 0x4 );

	this->ProcessEvent ( pFnDelegateOnMarshalEvent, &DelegateOnMarshalEvent_Parms, NULL );
};

// Function TgClient.TgObjectBase.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgObjectBase::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 128612 );

	UTgObjectBase_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgObjectBase.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pMoviePlayer                   ( CPF_Parm )

void UTgObjectBase::Initialize ( class UTgGameMoviePlayer* pMoviePlayer )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 128610 );

	UTgObjectBase_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMoviePlayer = pMoviePlayer;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgRewardCenterManager.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pMoviePlayer                   ( CPF_Parm )

void UTgRewardCenterManager::Initialize ( class UTgGameMoviePlayer* pMoviePlayer )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 128843 );

	UTgRewardCenterManager_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMoviePlayer = pMoviePlayer;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgSystemNotificationManager.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pMoviePlayer                   ( CPF_Parm )

void UTgSystemNotificationManager::Initialize ( class UTgGameMoviePlayer* pMoviePlayer )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 129158 );

	UTgSystemNotificationManager_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMoviePlayer = pMoviePlayer;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgPagePopup.FillPopupData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              popupData                      ( CPF_Parm )

void UTgPagePopup::FillPopupData ( class UGFxObject* popupData )
{
	static UFunction* pFnFillPopupData = NULL;

	if ( ! pFnFillPopupData )
		pFnFillPopupData = (UFunction*) UObject::GObjObjects()->GetIndex( 128688 );

	UTgPagePopup_execFillPopupData_Parms FillPopupData_Parms;
	FillPopupData_Parms.popupData = popupData;

	pFnFillPopupData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFillPopupData, &FillPopupData_Parms, NULL );

	pFnFillPopupData->FunctionFlags |= 0x400;
};

// Function TgClient.TgPopupManager.ClosePopup
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgPopupManager::ClosePopup ( )
{
	static UFunction* pFnClosePopup = NULL;

	if ( ! pFnClosePopup )
		pFnClosePopup = (UFunction*) UObject::GObjObjects()->GetIndex( 128697 );

	UTgPopupManager_execClosePopup_Parms ClosePopup_Parms;

	pFnClosePopup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClosePopup, &ClosePopup_Parms, NULL );

	pFnClosePopup->FunctionFlags |= 0x400;
};

// Function TgClient.TgSceneManager.ShowCharacterCard
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nClassId                       ( CPF_Parm )

void UTgSceneManager::ShowCharacterCard ( int nClassId )
{
	static UFunction* pFnShowCharacterCard = NULL;

	if ( ! pFnShowCharacterCard )
		pFnShowCharacterCard = (UFunction*) UObject::GObjObjects()->GetIndex( 125217 );

	UTgSceneManager_execShowCharacterCard_Parms ShowCharacterCard_Parms;
	ShowCharacterCard_Parms.nClassId = nClassId;

	pFnShowCharacterCard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowCharacterCard, &ShowCharacterCard_Parms, NULL );

	pFnShowCharacterCard->FunctionFlags |= 0x400;
};

// Function TgClient.TgSceneManager.PopKeyCapture
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgSceneManager::PopKeyCapture ( )
{
	static UFunction* pFnPopKeyCapture = NULL;

	if ( ! pFnPopKeyCapture )
		pFnPopKeyCapture = (UFunction*) UObject::GObjObjects()->GetIndex( 125216 );

	UTgSceneManager_execPopKeyCapture_Parms PopKeyCapture_Parms;

	pFnPopKeyCapture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopKeyCapture, &PopKeyCapture_Parms, NULL );

	pFnPopKeyCapture->FunctionFlags |= 0x400;
};

// Function TgClient.TgSceneManager.PushKeyCapture
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgSceneManager::PushKeyCapture ( )
{
	static UFunction* pFnPushKeyCapture = NULL;

	if ( ! pFnPushKeyCapture )
		pFnPushKeyCapture = (UFunction*) UObject::GObjObjects()->GetIndex( 125215 );

	UTgSceneManager_execPushKeyCapture_Parms PushKeyCapture_Parms;

	pFnPushKeyCapture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPushKeyCapture, &PushKeyCapture_Parms, NULL );

	pFnPushKeyCapture->FunctionFlags |= 0x400;
};

// Function TgClient.TgSceneManager.PopMouseCapture
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgSceneManager::PopMouseCapture ( )
{
	static UFunction* pFnPopMouseCapture = NULL;

	if ( ! pFnPopMouseCapture )
		pFnPopMouseCapture = (UFunction*) UObject::GObjObjects()->GetIndex( 125214 );

	UTgSceneManager_execPopMouseCapture_Parms PopMouseCapture_Parms;

	pFnPopMouseCapture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopMouseCapture, &PopMouseCapture_Parms, NULL );

	pFnPopMouseCapture->FunctionFlags |= 0x400;
};

// Function TgClient.TgSceneManager.PushMouseCapture
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgSceneManager::PushMouseCapture ( )
{
	static UFunction* pFnPushMouseCapture = NULL;

	if ( ! pFnPushMouseCapture )
		pFnPushMouseCapture = (UFunction*) UObject::GObjObjects()->GetIndex( 125213 );

	UTgSceneManager_execPushMouseCapture_Parms PushMouseCapture_Parms;

	pFnPushMouseCapture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPushMouseCapture, &PushMouseCapture_Parms, NULL );

	pFnPushMouseCapture->FunctionFlags |= 0x400;
};

// Function TgClient.TgSceneManager.IsSceneLoaded
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SceneName                      ( CPF_Parm | CPF_NeedCtorLink )

bool UTgSceneManager::IsSceneLoaded ( struct FString SceneName )
{
	static UFunction* pFnIsSceneLoaded = NULL;

	if ( ! pFnIsSceneLoaded )
		pFnIsSceneLoaded = (UFunction*) UObject::GObjObjects()->GetIndex( 125210 );

	UTgSceneManager_execIsSceneLoaded_Parms IsSceneLoaded_Parms;
	memcpy ( &IsSceneLoaded_Parms.SceneName, &SceneName, 0xC );

	pFnIsSceneLoaded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsSceneLoaded, &IsSceneLoaded_Parms, NULL );

	pFnIsSceneLoaded->FunctionFlags |= 0x400;

	return IsSceneLoaded_Parms.ReturnValue;
};

// Function TgClient.TgSceneManager.ListOpenScenes
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgSceneManager::ListOpenScenes ( )
{
	static UFunction* pFnListOpenScenes = NULL;

	if ( ! pFnListOpenScenes )
		pFnListOpenScenes = (UFunction*) UObject::GObjObjects()->GetIndex( 125209 );

	UTgSceneManager_execListOpenScenes_Parms ListOpenScenes_Parms;

	pFnListOpenScenes->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnListOpenScenes, &ListOpenScenes_Parms, NULL );

	pFnListOpenScenes->FunctionFlags |= 0x400;
};

// Function TgClient.TgSceneManager.UnloadAllScenes
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FString >       exclusionList                  ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bKill                          ( CPF_OptionalParm | CPF_Parm )

void UTgSceneManager::UnloadAllScenes ( TArray< struct FString > exclusionList, unsigned long bKill )
{
	static UFunction* pFnUnloadAllScenes = NULL;

	if ( ! pFnUnloadAllScenes )
		pFnUnloadAllScenes = (UFunction*) UObject::GObjObjects()->GetIndex( 125205 );

	UTgSceneManager_execUnloadAllScenes_Parms UnloadAllScenes_Parms;
	memcpy ( &UnloadAllScenes_Parms.exclusionList, &exclusionList, 0xC );
	UnloadAllScenes_Parms.bKill = bKill;

	pFnUnloadAllScenes->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnloadAllScenes, &UnloadAllScenes_Parms, NULL );

	pFnUnloadAllScenes->FunctionFlags |= 0x400;
};

// Function TgClient.TgSceneManager.ToggleScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 SceneName                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgSceneManager::ToggleScene ( struct FString SceneName )
{
	static UFunction* pFnToggleScene = NULL;

	if ( ! pFnToggleScene )
		pFnToggleScene = (UFunction*) UObject::GObjObjects()->GetIndex( 125203 );

	UTgSceneManager_execToggleScene_Parms ToggleScene_Parms;
	memcpy ( &ToggleScene_Parms.SceneName, &SceneName, 0xC );

	pFnToggleScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleScene, &ToggleScene_Parms, NULL );

	pFnToggleScene->FunctionFlags |= 0x400;
};

// Function TgClient.TgSceneManager.UnloadScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 SceneName                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgSceneManager::UnloadScene ( struct FString SceneName )
{
	static UFunction* pFnUnloadScene = NULL;

	if ( ! pFnUnloadScene )
		pFnUnloadScene = (UFunction*) UObject::GObjObjects()->GetIndex( 125201 );

	UTgSceneManager_execUnloadScene_Parms UnloadScene_Parms;
	memcpy ( &UnloadScene_Parms.SceneName, &SceneName, 0xC );

	pFnUnloadScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnloadScene, &UnloadScene_Parms, NULL );

	pFnUnloadScene->FunctionFlags |= 0x400;
};

// Function TgClient.TgSceneManager.LoadScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 SceneName                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgSceneManager::LoadScene ( struct FString SceneName )
{
	static UFunction* pFnLoadScene = NULL;

	if ( ! pFnLoadScene )
		pFnLoadScene = (UFunction*) UObject::GObjObjects()->GetIndex( 125199 );

	UTgSceneManager_execLoadScene_Parms LoadScene_Parms;
	memcpy ( &LoadScene_Parms.SceneName, &SceneName, 0xC );

	pFnLoadScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoadScene, &LoadScene_Parms, NULL );

	pFnLoadScene->FunctionFlags |= 0x400;
};

// Function TgClient.TgSceneManager.KillScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 SceneName                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgSceneManager::KillScene ( struct FString SceneName )
{
	static UFunction* pFnKillScene = NULL;

	if ( ! pFnKillScene )
		pFnKillScene = (UFunction*) UObject::GObjObjects()->GetIndex( 125197 );

	UTgSceneManager_execKillScene_Parms KillScene_Parms;
	memcpy ( &KillScene_Parms.SceneName, &SceneName, 0xC );

	pFnKillScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnKillScene, &KillScene_Parms, NULL );

	pFnKillScene->FunctionFlags |= 0x400;
};

// Function TgClient.TgSceneManager.InitializeSceneManager
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgSceneManager::InitializeSceneManager ( )
{
	static UFunction* pFnInitializeSceneManager = NULL;

	if ( ! pFnInitializeSceneManager )
		pFnInitializeSceneManager = (UFunction*) UObject::GObjObjects()->GetIndex( 125196 );

	UTgSceneManager_execInitializeSceneManager_Parms InitializeSceneManager_Parms;

	pFnInitializeSceneManager->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeSceneManager, &InitializeSceneManager_Parms, NULL );

	pFnInitializeSceneManager->FunctionFlags |= 0x400;
};

// Function TgClient.TgStreamManager.GetFeatureDescription
// [0x00024002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )

struct FString UTgStreamManager::GetFeatureDescription ( int Count )
{
	static UFunction* pFnGetFeatureDescription = NULL;

	if ( ! pFnGetFeatureDescription )
		pFnGetFeatureDescription = (UFunction*) UObject::GObjObjects()->GetIndex( 129110 );

	UTgStreamManager_execGetFeatureDescription_Parms GetFeatureDescription_Parms;
	GetFeatureDescription_Parms.Count = Count;

	this->ProcessEvent ( pFnGetFeatureDescription, &GetFeatureDescription_Parms, NULL );

	return GetFeatureDescription_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.GetFeatureName
// [0x00024002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )

struct FString UTgStreamManager::GetFeatureName ( int Count )
{
	static UFunction* pFnGetFeatureName = NULL;

	if ( ! pFnGetFeatureName )
		pFnGetFeatureName = (UFunction*) UObject::GObjObjects()->GetIndex( 129106 );

	UTgStreamManager_execGetFeatureName_Parms GetFeatureName_Parms;
	GetFeatureName_Parms.Count = Count;

	this->ProcessEvent ( pFnGetFeatureName, &GetFeatureName_Parms, NULL );

	return GetFeatureName_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.HaveFeature
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgStreamManager::HaveFeature ( )
{
	static UFunction* pFnHaveFeature = NULL;

	if ( ! pFnHaveFeature )
		pFnHaveFeature = (UFunction*) UObject::GObjObjects()->GetIndex( 129103 );

	UTgStreamManager_execHaveFeature_Parms HaveFeature_Parms;

	this->ProcessEvent ( pFnHaveFeature, &HaveFeature_Parms, NULL );

	return HaveFeature_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.IsLiveAtIndex
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

bool UTgStreamManager::IsLiveAtIndex ( int Index )
{
	static UFunction* pFnIsLiveAtIndex = NULL;

	if ( ! pFnIsLiveAtIndex )
		pFnIsLiveAtIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 129100 );

	UTgStreamManager_execIsLiveAtIndex_Parms IsLiveAtIndex_Parms;
	IsLiveAtIndex_Parms.Index = Index;

	this->ProcessEvent ( pFnIsLiveAtIndex, &IsLiveAtIndex_Parms, NULL );

	return IsLiveAtIndex_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.GetDescriptionAtIndex
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )

struct FString UTgStreamManager::GetDescriptionAtIndex ( int Index )
{
	static UFunction* pFnGetDescriptionAtIndex = NULL;

	if ( ! pFnGetDescriptionAtIndex )
		pFnGetDescriptionAtIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 129096 );

	UTgStreamManager_execGetDescriptionAtIndex_Parms GetDescriptionAtIndex_Parms;
	GetDescriptionAtIndex_Parms.Index = Index;

	this->ProcessEvent ( pFnGetDescriptionAtIndex, &GetDescriptionAtIndex_Parms, NULL );

	return GetDescriptionAtIndex_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.GetViewersAtIndex
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )

struct FString UTgStreamManager::GetViewersAtIndex ( int Index )
{
	static UFunction* pFnGetViewersAtIndex = NULL;

	if ( ! pFnGetViewersAtIndex )
		pFnGetViewersAtIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 129093 );

	UTgStreamManager_execGetViewersAtIndex_Parms GetViewersAtIndex_Parms;
	GetViewersAtIndex_Parms.Index = Index;

	this->ProcessEvent ( pFnGetViewersAtIndex, &GetViewersAtIndex_Parms, NULL );

	return GetViewersAtIndex_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.GetTitleAtIndex
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )

struct FString UTgStreamManager::GetTitleAtIndex ( int Index )
{
	static UFunction* pFnGetTitleAtIndex = NULL;

	if ( ! pFnGetTitleAtIndex )
		pFnGetTitleAtIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 129090 );

	UTgStreamManager_execGetTitleAtIndex_Parms GetTitleAtIndex_Parms;
	GetTitleAtIndex_Parms.Index = Index;

	this->ProcessEvent ( pFnGetTitleAtIndex, &GetTitleAtIndex_Parms, NULL );

	return GetTitleAtIndex_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.IsStream
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

bool UTgStreamManager::IsStream ( int Index )
{
	static UFunction* pFnIsStream = NULL;

	if ( ! pFnIsStream )
		pFnIsStream = (UFunction*) UObject::GObjObjects()->GetIndex( 129087 );

	UTgStreamManager_execIsStream_Parms IsStream_Parms;
	IsStream_Parms.Index = Index;

	this->ProcessEvent ( pFnIsStream, &IsStream_Parms, NULL );

	return IsStream_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.GetTypeCountWatching
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Type                           ( CPF_Parm )

int UTgStreamManager::GetTypeCountWatching ( unsigned char Type )
{
	static UFunction* pFnGetTypeCountWatching = NULL;

	if ( ! pFnGetTypeCountWatching )
		pFnGetTypeCountWatching = (UFunction*) UObject::GObjObjects()->GetIndex( 129082 );

	UTgStreamManager_execGetTypeCountWatching_Parms GetTypeCountWatching_Parms;
	GetTypeCountWatching_Parms.Type = Type;

	this->ProcessEvent ( pFnGetTypeCountWatching, &GetTypeCountWatching_Parms, NULL );

	return GetTypeCountWatching_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.GetTypeCount
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Type                           ( CPF_Parm )

int UTgStreamManager::GetTypeCount ( unsigned char Type )
{
	static UFunction* pFnGetTypeCount = NULL;

	if ( ! pFnGetTypeCount )
		pFnGetTypeCount = (UFunction*) UObject::GObjObjects()->GetIndex( 129077 );

	UTgStreamManager_execGetTypeCount_Parms GetTypeCount_Parms;
	GetTypeCount_Parms.Type = Type;

	this->ProcessEvent ( pFnGetTypeCount, &GetTypeCount_Parms, NULL );

	return GetTypeCount_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.LiveSort
// [0x00120002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGameStream             A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FGameStream             B                              ( CPF_Parm | CPF_NeedCtorLink )

int UTgStreamManager::LiveSort ( struct FGameStream A, struct FGameStream B )
{
	static UFunction* pFnLiveSort = NULL;

	if ( ! pFnLiveSort )
		pFnLiveSort = (UFunction*) UObject::GObjObjects()->GetIndex( 129005 );

	UTgStreamManager_execLiveSort_Parms LiveSort_Parms;
	memcpy ( &LiveSort_Parms.A, &A, 0x44 );
	memcpy ( &LiveSort_Parms.B, &B, 0x44 );

	this->ProcessEvent ( pFnLiveSort, &LiveSort_Parms, NULL );

	return LiveSort_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.FeaturedSort
// [0x00120002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGameStream             A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FGameStream             B                              ( CPF_Parm | CPF_NeedCtorLink )

int UTgStreamManager::FeaturedSort ( struct FGameStream A, struct FGameStream B )
{
	static UFunction* pFnFeaturedSort = NULL;

	if ( ! pFnFeaturedSort )
		pFnFeaturedSort = (UFunction*) UObject::GObjObjects()->GetIndex( 129007 );

	UTgStreamManager_execFeaturedSort_Parms FeaturedSort_Parms;
	memcpy ( &FeaturedSort_Parms.A, &A, 0x44 );
	memcpy ( &FeaturedSort_Parms.B, &B, 0x44 );

	this->ProcessEvent ( pFnFeaturedSort, &FeaturedSort_Parms, NULL );

	return FeaturedSort_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.ViewerSort
// [0x00120002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FGameStream             A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FGameStream             B                              ( CPF_Parm | CPF_NeedCtorLink )

int UTgStreamManager::ViewerSort ( struct FGameStream A, struct FGameStream B )
{
	static UFunction* pFnViewerSort = NULL;

	if ( ! pFnViewerSort )
		pFnViewerSort = (UFunction*) UObject::GObjObjects()->GetIndex( 129009 );

	UTgStreamManager_execViewerSort_Parms ViewerSort_Parms;
	memcpy ( &ViewerSort_Parms.A, &A, 0x44 );
	memcpy ( &ViewerSort_Parms.B, &B, 0x44 );

	this->ProcessEvent ( pFnViewerSort, &ViewerSort_Parms, NULL );

	return ViewerSort_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.ResolveChannelName
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 sChannel                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgStreamManager::eventResolveChannelName ( struct FString sChannel )
{
	static UFunction* pFnResolveChannelName = NULL;

	if ( ! pFnResolveChannelName )
		pFnResolveChannelName = (UFunction*) UObject::GObjObjects()->GetIndex( 129066 );

	UTgStreamManager_eventResolveChannelName_Parms ResolveChannelName_Parms;
	memcpy ( &ResolveChannelName_Parms.sChannel, &sChannel, 0xC );

	this->ProcessEvent ( pFnResolveChannelName, &ResolveChannelName_Parms, NULL );
};

// Function TgClient.TgStreamManager.CompleteUpdate
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgStreamManager::eventCompleteUpdate ( )
{
	static UFunction* pFnCompleteUpdate = NULL;

	if ( ! pFnCompleteUpdate )
		pFnCompleteUpdate = (UFunction*) UObject::GObjObjects()->GetIndex( 129065 );

	UTgStreamManager_eventCompleteUpdate_Parms CompleteUpdate_Parms;

	this->ProcessEvent ( pFnCompleteUpdate, &CompleteUpdate_Parms, NULL );
};

// Function TgClient.TgStreamManager.ViewStreamIndex
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            surfaceId                      ( CPF_Parm )
// int                            Index                          ( CPF_Parm )
// unsigned long                  external                       ( CPF_OptionalParm | CPF_Parm )
// float                          X                              ( CPF_OptionalParm | CPF_Parm )
// float                          Y                              ( CPF_OptionalParm | CPF_Parm )
// float                          Width                          ( CPF_OptionalParm | CPF_Parm )
// float                          Height                         ( CPF_OptionalParm | CPF_Parm )
// float                          widthReal                      ( CPF_OptionalParm | CPF_Parm )
// float                          heightReal                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  joinChat                       ( CPF_OptionalParm | CPF_Parm )

bool UTgStreamManager::eventViewStreamIndex ( int surfaceId, int Index, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal, unsigned long joinChat )
{
	static UFunction* pFnViewStreamIndex = NULL;

	if ( ! pFnViewStreamIndex )
		pFnViewStreamIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 129052 );

	UTgStreamManager_eventViewStreamIndex_Parms ViewStreamIndex_Parms;
	ViewStreamIndex_Parms.surfaceId = surfaceId;
	ViewStreamIndex_Parms.Index = Index;
	ViewStreamIndex_Parms.external = external;
	ViewStreamIndex_Parms.X = X;
	ViewStreamIndex_Parms.Y = Y;
	ViewStreamIndex_Parms.Width = Width;
	ViewStreamIndex_Parms.Height = Height;
	ViewStreamIndex_Parms.widthReal = widthReal;
	ViewStreamIndex_Parms.heightReal = heightReal;
	ViewStreamIndex_Parms.joinChat = joinChat;

	this->ProcessEvent ( pFnViewStreamIndex, &ViewStreamIndex_Parms, NULL );

	return ViewStreamIndex_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.UpdateStreams
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgStreamManager::UpdateStreams ( )
{
	static UFunction* pFnUpdateStreams = NULL;

	if ( ! pFnUpdateStreams )
		pFnUpdateStreams = (UFunction*) UObject::GObjObjects()->GetIndex( 129051 );

	UTgStreamManager_execUpdateStreams_Parms UpdateStreams_Parms;

	pFnUpdateStreams->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateStreams, &UpdateStreams_Parms, NULL );

	pFnUpdateStreams->FunctionFlags |= 0x400;
};

// Function TgClient.TgStreamManager.HasSpecialStreams
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgStreamManager::HasSpecialStreams ( )
{
	static UFunction* pFnHasSpecialStreams = NULL;

	if ( ! pFnHasSpecialStreams )
		pFnHasSpecialStreams = (UFunction*) UObject::GObjObjects()->GetIndex( 129049 );

	UTgStreamManager_execHasSpecialStreams_Parms HasSpecialStreams_Parms;

	pFnHasSpecialStreams->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasSpecialStreams, &HasSpecialStreams_Parms, NULL );

	pFnHasSpecialStreams->FunctionFlags |= 0x400;

	return HasSpecialStreams_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.OpenPlayerStream
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nPlayerId                      ( CPF_Parm )
// unsigned long                  external                       ( CPF_Parm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          Height                         ( CPF_Parm )
// float                          widthReal                      ( CPF_Parm )
// float                          heightReal                     ( CPF_Parm )

bool UTgStreamManager::OpenPlayerStream ( int nPlayerId, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal )
{
	static UFunction* pFnOpenPlayerStream = NULL;

	if ( ! pFnOpenPlayerStream )
		pFnOpenPlayerStream = (UFunction*) UObject::GObjObjects()->GetIndex( 129039 );

	UTgStreamManager_execOpenPlayerStream_Parms OpenPlayerStream_Parms;
	OpenPlayerStream_Parms.nPlayerId = nPlayerId;
	OpenPlayerStream_Parms.external = external;
	OpenPlayerStream_Parms.X = X;
	OpenPlayerStream_Parms.Y = Y;
	OpenPlayerStream_Parms.Width = Width;
	OpenPlayerStream_Parms.Height = Height;
	OpenPlayerStream_Parms.widthReal = widthReal;
	OpenPlayerStream_Parms.heightReal = heightReal;

	pFnOpenPlayerStream->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenPlayerStream, &OpenPlayerStream_Parms, NULL );

	pFnOpenPlayerStream->FunctionFlags |= 0x400;

	return OpenPlayerStream_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.OpenStream
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            surfaceId                      ( CPF_Parm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  external                       ( CPF_Parm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          Height                         ( CPF_Parm )
// float                          widthReal                      ( CPF_Parm )
// float                          heightReal                     ( CPF_Parm )
// unsigned long                  joinChat                       ( CPF_OptionalParm | CPF_Parm )

bool UTgStreamManager::OpenStream ( int surfaceId, struct FString URL, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal, unsigned long joinChat )
{
	static UFunction* pFnOpenStream = NULL;

	if ( ! pFnOpenStream )
		pFnOpenStream = (UFunction*) UObject::GObjObjects()->GetIndex( 129027 );

	UTgStreamManager_execOpenStream_Parms OpenStream_Parms;
	OpenStream_Parms.surfaceId = surfaceId;
	memcpy ( &OpenStream_Parms.URL, &URL, 0xC );
	OpenStream_Parms.external = external;
	OpenStream_Parms.X = X;
	OpenStream_Parms.Y = Y;
	OpenStream_Parms.Width = Width;
	OpenStream_Parms.Height = Height;
	OpenStream_Parms.widthReal = widthReal;
	OpenStream_Parms.heightReal = heightReal;
	OpenStream_Parms.joinChat = joinChat;

	pFnOpenStream->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenStream, &OpenStream_Parms, NULL );

	pFnOpenStream->FunctionFlags |= 0x400;

	return OpenStream_Parms.ReturnValue;
};

// Function TgClient.TgStreamManager.LoadStreams
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgStreamManager::LoadStreams ( )
{
	static UFunction* pFnLoadStreams = NULL;

	if ( ! pFnLoadStreams )
		pFnLoadStreams = (UFunction*) UObject::GObjObjects()->GetIndex( 129026 );

	UTgStreamManager_execLoadStreams_Parms LoadStreams_Parms;

	pFnLoadStreams->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoadStreams, &LoadStreams_Parms, NULL );

	pFnLoadStreams->FunctionFlags |= 0x400;
};

// Function TgClient.TgSynchronizedTimer.IsPaused
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgSynchronizedTimer::IsPaused ( )
{
	static UFunction* pFnIsPaused = NULL;

	if ( ! pFnIsPaused )
		pFnIsPaused = (UFunction*) UObject::GObjObjects()->GetIndex( 129135 );

	UTgSynchronizedTimer_execIsPaused_Parms IsPaused_Parms;

	pFnIsPaused->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPaused, &IsPaused_Parms, NULL );

	pFnIsPaused->FunctionFlags |= 0x400;

	return IsPaused_Parms.ReturnValue;
};

// Function TgClient.TgSynchronizedTimer.IsRunning
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgSynchronizedTimer::IsRunning ( )
{
	static UFunction* pFnIsRunning = NULL;

	if ( ! pFnIsRunning )
		pFnIsRunning = (UFunction*) UObject::GObjObjects()->GetIndex( 129133 );

	UTgSynchronizedTimer_execIsRunning_Parms IsRunning_Parms;

	pFnIsRunning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRunning, &IsRunning_Parms, NULL );

	pFnIsRunning->FunctionFlags |= 0x400;

	return IsRunning_Parms.ReturnValue;
};

// Function TgClient.TgSynchronizedTimer.EventCallback
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nTimerId                       ( CPF_Parm )
// unsigned char                  eEvent                         ( CPF_Parm )

void UTgSynchronizedTimer::EventCallback ( int nTimerId, unsigned char eEvent )
{
	static UFunction* pFnEventCallback = NULL;

	if ( ! pFnEventCallback )
		pFnEventCallback = (UFunction*) UObject::GObjObjects()->GetIndex( 129130 );

	UTgSynchronizedTimer_execEventCallback_Parms EventCallback_Parms;
	EventCallback_Parms.nTimerId = nTimerId;
	EventCallback_Parms.eEvent = eEvent;

	pFnEventCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEventCallback, &EventCallback_Parms, NULL );

	pFnEventCallback->FunctionFlags |= 0x400;
};

// Function TgClient.TgSynchronizedTimer.ExpireTimer
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bFromCallback                  ( CPF_OptionalParm | CPF_Parm )

void UTgSynchronizedTimer::ExpireTimer ( unsigned long bFromCallback )
{
	static UFunction* pFnExpireTimer = NULL;

	if ( ! pFnExpireTimer )
		pFnExpireTimer = (UFunction*) UObject::GObjObjects()->GetIndex( 129128 );

	UTgSynchronizedTimer_execExpireTimer_Parms ExpireTimer_Parms;
	ExpireTimer_Parms.bFromCallback = bFromCallback;

	pFnExpireTimer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnExpireTimer, &ExpireTimer_Parms, NULL );

	pFnExpireTimer->FunctionFlags |= 0x400;
};

// Function TgClient.TgSynchronizedTimer.UpdateTimer
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// float                          fElapsed                       ( CPF_Parm )
// float                          fTotal                         ( CPF_Parm )
// unsigned long                  bPaused                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFromCallback                  ( CPF_OptionalParm | CPF_Parm )

void UTgSynchronizedTimer::UpdateTimer ( float fElapsed, float fTotal, unsigned long bPaused, unsigned long bFromCallback )
{
	static UFunction* pFnUpdateTimer = NULL;

	if ( ! pFnUpdateTimer )
		pFnUpdateTimer = (UFunction*) UObject::GObjObjects()->GetIndex( 129123 );

	UTgSynchronizedTimer_execUpdateTimer_Parms UpdateTimer_Parms;
	UpdateTimer_Parms.fElapsed = fElapsed;
	UpdateTimer_Parms.fTotal = fTotal;
	UpdateTimer_Parms.bPaused = bPaused;
	UpdateTimer_Parms.bFromCallback = bFromCallback;

	pFnUpdateTimer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateTimer, &UpdateTimer_Parms, NULL );

	pFnUpdateTimer->FunctionFlags |= 0x400;
};

// Function TgClient.TgSynchronizedTimer.StartTimer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fSeconds                       ( CPF_Parm )

void UTgSynchronizedTimer::StartTimer ( float fSeconds )
{
	static UFunction* pFnStartTimer = NULL;

	if ( ! pFnStartTimer )
		pFnStartTimer = (UFunction*) UObject::GObjObjects()->GetIndex( 129121 );

	UTgSynchronizedTimer_execStartTimer_Parms StartTimer_Parms;
	StartTimer_Parms.fSeconds = fSeconds;

	pFnStartTimer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartTimer, &StartTimer_Parms, NULL );

	pFnStartTimer->FunctionFlags |= 0x400;
};

// Function TgClient.TgBlinder.Draw
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UCanvas*                 DestinationCanvas              ( CPF_Parm )
// float                          BlindnessFactor                ( CPF_Parm )

void UTgBlinder::Draw ( class UCanvas* DestinationCanvas, float BlindnessFactor )
{
	static UFunction* pFnDraw = NULL;

	if ( ! pFnDraw )
		pFnDraw = (UFunction*) UObject::GObjObjects()->GetIndex( 123338 );

	UTgBlinder_execDraw_Parms Draw_Parms;
	Draw_Parms.DestinationCanvas = DestinationCanvas;
	Draw_Parms.BlindnessFactor = BlindnessFactor;

	pFnDraw->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDraw, &Draw_Parms, NULL );

	pFnDraw->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.PlayDeviceFailResponse
// [0x00020002] 
// Parameters infos:
// unsigned char                  failType                       ( CPF_Parm )

void ATgGameHUD::PlayDeviceFailResponse ( unsigned char failType )
{
	static UFunction* pFnPlayDeviceFailResponse = NULL;

	if ( ! pFnPlayDeviceFailResponse )
		pFnPlayDeviceFailResponse = (UFunction*) UObject::GObjObjects()->GetIndex( 124173 );

	ATgGameHUD_execPlayDeviceFailResponse_Parms PlayDeviceFailResponse_Parms;
	PlayDeviceFailResponse_Parms.failType = failType;

	this->ProcessEvent ( pFnPlayDeviceFailResponse, &PlayDeviceFailResponse_Parms, NULL );
};

// Function TgClient.TgGameHUD.ShowGodTargeter
// [0x00020002] 
// Parameters infos:
// unsigned long                  bShow                          ( CPF_Parm )

void ATgGameHUD::ShowGodTargeter ( unsigned long bShow )
{
	static UFunction* pFnShowGodTargeter = NULL;

	if ( ! pFnShowGodTargeter )
		pFnShowGodTargeter = (UFunction*) UObject::GObjObjects()->GetIndex( 124175 );

	ATgGameHUD_execShowGodTargeter_Parms ShowGodTargeter_Parms;
	ShowGodTargeter_Parms.bShow = bShow;

	this->ProcessEvent ( pFnShowGodTargeter, &ShowGodTargeter_Parms, NULL );
};

// Function TgClient.TgGameHUD.ShowTargetingMap
// [0x00020002] 
// Parameters infos:
// unsigned long                  bShow                          ( CPF_Parm )

void ATgGameHUD::ShowTargetingMap ( unsigned long bShow )
{
	static UFunction* pFnShowTargetingMap = NULL;

	if ( ! pFnShowTargetingMap )
		pFnShowTargetingMap = (UFunction*) UObject::GObjObjects()->GetIndex( 124171 );

	ATgGameHUD_execShowTargetingMap_Parms ShowTargetingMap_Parms;
	ShowTargetingMap_Parms.bShow = bShow;

	this->ProcessEvent ( pFnShowTargetingMap, &ShowTargetingMap_Parms, NULL );
};

// Function TgClient.TgGameHUD.GetGameState
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATgGameHUD::eventGetGameState ( )
{
	static UFunction* pFnGetGameState = NULL;

	if ( ! pFnGetGameState )
		pFnGetGameState = (UFunction*) UObject::GObjObjects()->GetIndex( 124168 );

	ATgGameHUD_eventGetGameState_Parms GetGameState_Parms;

	this->ProcessEvent ( pFnGetGameState, &GetGameState_Parms, NULL );

	return GetGameState_Parms.ReturnValue;
};

// Function TgClient.TgGameHUD.HoverMap
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// struct FString                 MapName                        ( CPF_Parm | CPF_NeedCtorLink )

void ATgGameHUD::HoverMap ( float X, float Y, struct FString MapName )
{
	static UFunction* pFnHoverMap = NULL;

	if ( ! pFnHoverMap )
		pFnHoverMap = (UFunction*) UObject::GObjObjects()->GetIndex( 124163 );

	ATgGameHUD_execHoverMap_Parms HoverMap_Parms;
	HoverMap_Parms.X = X;
	HoverMap_Parms.Y = Y;
	memcpy ( &HoverMap_Parms.MapName, &MapName, 0xC );

	this->ProcessEvent ( pFnHoverMap, &HoverMap_Parms, NULL );
};

// Function TgClient.TgGameHUD.PingMap
// [0x00820202] ( FUNC_Exec )
// Parameters infos:
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// struct FString                 Type                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 MapName                        ( CPF_Parm | CPF_NeedCtorLink )

void ATgGameHUD::PingMap ( float X, float Y, struct FString Type, struct FString MapName )
{
	static UFunction* pFnPingMap = NULL;

	if ( ! pFnPingMap )
		pFnPingMap = (UFunction*) UObject::GObjObjects()->GetIndex( 124147 );

	ATgGameHUD_execPingMap_Parms PingMap_Parms;
	PingMap_Parms.X = X;
	PingMap_Parms.Y = Y;
	memcpy ( &PingMap_Parms.Type, &Type, 0xC );
	memcpy ( &PingMap_Parms.MapName, &MapName, 0xC );

	this->ProcessEvent ( pFnPingMap, &PingMap_Parms, NULL );
};

// Function TgClient.TgGameHUD.GetMapByName
// [0x00020002] 
// Parameters infos:
// class UTgMiniMap*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MapName                        ( CPF_Parm | CPF_NeedCtorLink )

class UTgMiniMap* ATgGameHUD::GetMapByName ( struct FString MapName )
{
	static UFunction* pFnGetMapByName = NULL;

	if ( ! pFnGetMapByName )
		pFnGetMapByName = (UFunction*) UObject::GObjObjects()->GetIndex( 124144 );

	ATgGameHUD_execGetMapByName_Parms GetMapByName_Parms;
	memcpy ( &GetMapByName_Parms.MapName, &MapName, 0xC );

	this->ProcessEvent ( pFnGetMapByName, &GetMapByName_Parms, NULL );

	return GetMapByName_Parms.ReturnValue;
};

// Function TgClient.TgGameHUD.UpdateMMTimer
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fNew                           ( CPF_Parm )

void ATgGameHUD::UpdateMMTimer ( float fNew )
{
	static UFunction* pFnUpdateMMTimer = NULL;

	if ( ! pFnUpdateMMTimer )
		pFnUpdateMMTimer = (UFunction*) UObject::GObjObjects()->GetIndex( 124142 );

	ATgGameHUD_execUpdateMMTimer_Parms UpdateMMTimer_Parms;
	UpdateMMTimer_Parms.fNew = fNew;

	this->ProcessEvent ( pFnUpdateMMTimer, &UpdateMMTimer_Parms, NULL );
};

// Function TgClient.TgGameHUD.ToggleOverlay
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATgGameHUD::ToggleOverlay ( )
{
	static UFunction* pFnToggleOverlay = NULL;

	if ( ! pFnToggleOverlay )
		pFnToggleOverlay = (UFunction*) UObject::GObjObjects()->GetIndex( 124140 );

	ATgGameHUD_execToggleOverlay_Parms ToggleOverlay_Parms;

	this->ProcessEvent ( pFnToggleOverlay, &ToggleOverlay_Parms, NULL );
};

// Function TgClient.TgGameHUD.ToggleMiniMap
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:

void ATgGameHUD::ToggleMiniMap ( )
{
	static UFunction* pFnToggleMiniMap = NULL;

	if ( ! pFnToggleMiniMap )
		pFnToggleMiniMap = (UFunction*) UObject::GObjObjects()->GetIndex( 124139 );

	ATgGameHUD_execToggleMiniMap_Parms ToggleMiniMap_Parms;

	this->ProcessEvent ( pFnToggleMiniMap, &ToggleMiniMap_Parms, NULL );
};

// Function TgClient.TgGameHUD.HideMiniMap
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:

void ATgGameHUD::HideMiniMap ( )
{
	static UFunction* pFnHideMiniMap = NULL;

	if ( ! pFnHideMiniMap )
		pFnHideMiniMap = (UFunction*) UObject::GObjObjects()->GetIndex( 124138 );

	ATgGameHUD_execHideMiniMap_Parms HideMiniMap_Parms;

	this->ProcessEvent ( pFnHideMiniMap, &HideMiniMap_Parms, NULL );
};

// Function TgClient.TgGameHUD.ShowMiniMap
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:

void ATgGameHUD::ShowMiniMap ( )
{
	static UFunction* pFnShowMiniMap = NULL;

	if ( ! pFnShowMiniMap )
		pFnShowMiniMap = (UFunction*) UObject::GObjObjects()->GetIndex( 124136 );

	ATgGameHUD_execShowMiniMap_Parms ShowMiniMap_Parms;

	this->ProcessEvent ( pFnShowMiniMap, &ShowMiniMap_Parms, NULL );
};

// Function TgClient.TgGameHUD.UpdateMiniMap
// [0x00020102] 
// Parameters infos:

void ATgGameHUD::UpdateMiniMap ( )
{
	static UFunction* pFnUpdateMiniMap = NULL;

	if ( ! pFnUpdateMiniMap )
		pFnUpdateMiniMap = (UFunction*) UObject::GObjObjects()->GetIndex( 124135 );

	ATgGameHUD_execUpdateMiniMap_Parms UpdateMiniMap_Parms;

	this->ProcessEvent ( pFnUpdateMiniMap, &UpdateMiniMap_Parms, NULL );
};

// Function TgClient.TgGameHUD.DrawMiniMap
// [0x00020102] 
// Parameters infos:
// class UCanvas*                 theCanvas                      ( CPF_Parm )

void ATgGameHUD::DrawMiniMap ( class UCanvas* theCanvas )
{
	static UFunction* pFnDrawMiniMap = NULL;

	if ( ! pFnDrawMiniMap )
		pFnDrawMiniMap = (UFunction*) UObject::GObjObjects()->GetIndex( 124131 );

	ATgGameHUD_execDrawMiniMap_Parms DrawMiniMap_Parms;
	DrawMiniMap_Parms.theCanvas = theCanvas;

	this->ProcessEvent ( pFnDrawMiniMap, &DrawMiniMap_Parms, NULL );
};

// Function TgClient.TgGameHUD.PreDemoRewind
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATgGameHUD::eventPreDemoRewind ( )
{
	static UFunction* pFnPreDemoRewind = NULL;

	if ( ! pFnPreDemoRewind )
		pFnPreDemoRewind = (UFunction*) UObject::GObjObjects()->GetIndex( 124129 );

	ATgGameHUD_eventPreDemoRewind_Parms PreDemoRewind_Parms;

	this->ProcessEvent ( pFnPreDemoRewind, &PreDemoRewind_Parms, NULL );
};

// Function TgClient.TgGameHUD.PostRender
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATgGameHUD::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->GetIndex( 124128 );

	ATgGameHUD_eventPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function TgClient.TgGameHUD.InitCapturePoints
// [0x00020002] 
// Parameters infos:

void ATgGameHUD::InitCapturePoints ( )
{
	static UFunction* pFnInitCapturePoints = NULL;

	if ( ! pFnInitCapturePoints )
		pFnInitCapturePoints = (UFunction*) UObject::GObjObjects()->GetIndex( 124121 );

	ATgGameHUD_execInitCapturePoints_Parms InitCapturePoints_Parms;

	this->ProcessEvent ( pFnInitCapturePoints, &InitCapturePoints_Parms, NULL );
};

// Function TgClient.TgGameHUD.SetInitialState
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATgGameHUD::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = (UFunction*) UObject::GObjObjects()->GetIndex( 124120 );

	ATgGameHUD_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};

// Function TgClient.TgGameHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATgGameHUD::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->GetIndex( 124119 );

	ATgGameHUD_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TgClient.TgGameHUD.TogglePassiveMeter
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgGameHUD::TogglePassiveMeter ( )
{
	static UFunction* pFnTogglePassiveMeter = NULL;

	if ( ! pFnTogglePassiveMeter )
		pFnTogglePassiveMeter = (UFunction*) UObject::GObjObjects()->GetIndex( 124118 );

	ATgGameHUD_execTogglePassiveMeter_Parms TogglePassiveMeter_Parms;

	pFnTogglePassiveMeter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTogglePassiveMeter, &TogglePassiveMeter_Parms, NULL );

	pFnTogglePassiveMeter->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.ToggleHudSection
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 SectionName                    ( CPF_Parm | CPF_NeedCtorLink )

void ATgGameHUD::ToggleHudSection ( struct FString SectionName )
{
	static UFunction* pFnToggleHudSection = NULL;

	if ( ! pFnToggleHudSection )
		pFnToggleHudSection = (UFunction*) UObject::GObjObjects()->GetIndex( 124116 );

	ATgGameHUD_execToggleHudSection_Parms ToggleHudSection_Parms;
	memcpy ( &ToggleHudSection_Parms.SectionName, &SectionName, 0xC );

	pFnToggleHudSection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleHudSection, &ToggleHudSection_Parms, NULL );

	pFnToggleHudSection->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.ToggleHUD
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgGameHUD::ToggleHUD ( )
{
	static UFunction* pFnToggleHUD = NULL;

	if ( ! pFnToggleHUD )
		pFnToggleHUD = (UFunction*) UObject::GObjObjects()->GetIndex( 124115 );

	ATgGameHUD_execToggleHUD_Parms ToggleHUD_Parms;

	pFnToggleHUD->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleHUD, &ToggleHUD_Parms, NULL );

	pFnToggleHUD->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.NotifyInGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgGameHUD::NotifyInGame ( )
{
	static UFunction* pFnNotifyInGame = NULL;

	if ( ! pFnNotifyInGame )
		pFnNotifyInGame = (UFunction*) UObject::GObjObjects()->GetIndex( 124114 );

	ATgGameHUD_execNotifyInGame_Parms NotifyInGame_Parms;

	pFnNotifyInGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyInGame, &NotifyInGame_Parms, NULL );

	pFnNotifyInGame->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.GetVisibilityMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char ATgGameHUD::GetVisibilityMode ( )
{
	static UFunction* pFnGetVisibilityMode = NULL;

	if ( ! pFnGetVisibilityMode )
		pFnGetVisibilityMode = (UFunction*) UObject::GObjObjects()->GetIndex( 124112 );

	ATgGameHUD_execGetVisibilityMode_Parms GetVisibilityMode_Parms;

	pFnGetVisibilityMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVisibilityMode, &GetVisibilityMode_Parms, NULL );

	pFnGetVisibilityMode->FunctionFlags |= 0x400;

	return GetVisibilityMode_Parms.ReturnValue;
};

// Function TgClient.TgGameHUD.OnMarshalEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FPointer                pMarEvent                      ( CPF_Parm )

void ATgGameHUD::OnMarshalEvent ( struct FPointer pMarEvent )
{
	static UFunction* pFnOnMarshalEvent = NULL;

	if ( ! pFnOnMarshalEvent )
		pFnOnMarshalEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 124110 );

	ATgGameHUD_execOnMarshalEvent_Parms OnMarshalEvent_Parms;
	memcpy ( &OnMarshalEvent_Parms.pMarEvent, &pMarEvent, 0x4 );

	pFnOnMarshalEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnMarshalEvent, &OnMarshalEvent_Parms, NULL );

	pFnOnMarshalEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.HideFinalEOMScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgGameHUD::HideFinalEOMScene ( )
{
	static UFunction* pFnHideFinalEOMScene = NULL;

	if ( ! pFnHideFinalEOMScene )
		pFnHideFinalEOMScene = (UFunction*) UObject::GObjObjects()->GetIndex( 124109 );

	ATgGameHUD_execHideFinalEOMScene_Parms HideFinalEOMScene_Parms;

	pFnHideFinalEOMScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHideFinalEOMScene, &HideFinalEOMScene_Parms, NULL );

	pFnHideFinalEOMScene->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.HideEOMScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgGameHUD::HideEOMScene ( )
{
	static UFunction* pFnHideEOMScene = NULL;

	if ( ! pFnHideEOMScene )
		pFnHideEOMScene = (UFunction*) UObject::GObjObjects()->GetIndex( 124108 );

	ATgGameHUD_execHideEOMScene_Parms HideEOMScene_Parms;

	pFnHideEOMScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHideEOMScene, &HideEOMScene_Parms, NULL );

	pFnHideEOMScene->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.FinishIntro
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgGameHUD::FinishIntro ( )
{
	static UFunction* pFnFinishIntro = NULL;

	if ( ! pFnFinishIntro )
		pFnFinishIntro = (UFunction*) UObject::GObjObjects()->GetIndex( 124107 );

	ATgGameHUD_execFinishIntro_Parms FinishIntro_Parms;

	pFnFinishIntro->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFinishIntro, &FinishIntro_Parms, NULL );

	pFnFinishIntro->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.PlayIntro
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgGameHUD::PlayIntro ( )
{
	static UFunction* pFnPlayIntro = NULL;

	if ( ! pFnPlayIntro )
		pFnPlayIntro = (UFunction*) UObject::GObjObjects()->GetIndex( 124106 );

	ATgGameHUD_execPlayIntro_Parms PlayIntro_Parms;

	pFnPlayIntro->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayIntro, &PlayIntro_Parms, NULL );

	pFnPlayIntro->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.ToggleViewSkipCinematic
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bShow                          ( CPF_Parm )

void ATgGameHUD::ToggleViewSkipCinematic ( unsigned long bShow )
{
	static UFunction* pFnToggleViewSkipCinematic = NULL;

	if ( ! pFnToggleViewSkipCinematic )
		pFnToggleViewSkipCinematic = (UFunction*) UObject::GObjObjects()->GetIndex( 124104 );

	ATgGameHUD_execToggleViewSkipCinematic_Parms ToggleViewSkipCinematic_Parms;
	ToggleViewSkipCinematic_Parms.bShow = bShow;

	pFnToggleViewSkipCinematic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleViewSkipCinematic, &ToggleViewSkipCinematic_Parms, NULL );

	pFnToggleViewSkipCinematic->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.HideGameTip
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bNoSound                       ( CPF_OptionalParm | CPF_Parm )

void ATgGameHUD::HideGameTip ( unsigned long bNoSound )
{
	static UFunction* pFnHideGameTip = NULL;

	if ( ! pFnHideGameTip )
		pFnHideGameTip = (UFunction*) UObject::GObjObjects()->GetIndex( 124102 );

	ATgGameHUD_execHideGameTip_Parms HideGameTip_Parms;
	HideGameTip_Parms.bNoSound = bNoSound;

	pFnHideGameTip->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHideGameTip, &HideGameTip_Parms, NULL );

	pFnHideGameTip->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.ShowGameTip
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            nTipId                         ( CPF_Parm )
// unsigned long                  bNoSound                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPopup                         ( CPF_OptionalParm | CPF_Parm )

void ATgGameHUD::ShowGameTip ( int nTipId, unsigned long bNoSound, unsigned long bPopup )
{
	static UFunction* pFnShowGameTip = NULL;

	if ( ! pFnShowGameTip )
		pFnShowGameTip = (UFunction*) UObject::GObjObjects()->GetIndex( 124098 );

	ATgGameHUD_execShowGameTip_Parms ShowGameTip_Parms;
	ShowGameTip_Parms.nTipId = nTipId;
	ShowGameTip_Parms.bNoSound = bNoSound;
	ShowGameTip_Parms.bPopup = bPopup;

	pFnShowGameTip->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowGameTip, &ShowGameTip_Parms, NULL );

	pFnShowGameTip->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.PingWorldLocation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 PingLocation                   ( CPF_Parm )
// unsigned char                  Type                           ( CPF_Parm )

void ATgGameHUD::PingWorldLocation ( struct FVector PingLocation, unsigned char Type )
{
	static UFunction* pFnPingWorldLocation = NULL;

	if ( ! pFnPingWorldLocation )
		pFnPingWorldLocation = (UFunction*) UObject::GObjObjects()->GetIndex( 124095 );

	ATgGameHUD_execPingWorldLocation_Parms PingWorldLocation_Parms;
	memcpy ( &PingWorldLocation_Parms.PingLocation, &PingLocation, 0xC );
	PingWorldLocation_Parms.Type = Type;

	pFnPingWorldLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPingWorldLocation, &PingWorldLocation_Parms, NULL );

	pFnPingWorldLocation->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.PrecacheClass
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 godName                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 skinName                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void ATgGameHUD::PrecacheClass ( struct FString godName, struct FString skinName )
{
	static UFunction* pFnPrecacheClass = NULL;

	if ( ! pFnPrecacheClass )
		pFnPrecacheClass = (UFunction*) UObject::GObjObjects()->GetIndex( 124092 );

	ATgGameHUD_execPrecacheClass_Parms PrecacheClass_Parms;
	memcpy ( &PrecacheClass_Parms.godName, &godName, 0xC );
	memcpy ( &PrecacheClass_Parms.skinName, &skinName, 0xC );

	pFnPrecacheClass->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPrecacheClass, &PrecacheClass_Parms, NULL );

	pFnPrecacheClass->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.TestPrecache
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nBotId                         ( CPF_Parm )
// int                            nSkinId                        ( CPF_Parm )
// unsigned long                  bAll                           ( CPF_OptionalParm | CPF_Parm )

void ATgGameHUD::TestPrecache ( int nBotId, int nSkinId, unsigned long bAll )
{
	static UFunction* pFnTestPrecache = NULL;

	if ( ! pFnTestPrecache )
		pFnTestPrecache = (UFunction*) UObject::GObjObjects()->GetIndex( 124088 );

	ATgGameHUD_execTestPrecache_Parms TestPrecache_Parms;
	TestPrecache_Parms.nBotId = nBotId;
	TestPrecache_Parms.nSkinId = nSkinId;
	TestPrecache_Parms.bAll = bAll;

	pFnTestPrecache->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTestPrecache, &TestPrecache_Parms, NULL );

	pFnTestPrecache->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.TestEquipLobbyPassiveItems
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nItemId1                       ( CPF_Parm )
// int                            nItemId2                       ( CPF_Parm )

void ATgGameHUD::TestEquipLobbyPassiveItems ( int nItemId1, int nItemId2 )
{
	static UFunction* pFnTestEquipLobbyPassiveItems = NULL;

	if ( ! pFnTestEquipLobbyPassiveItems )
		pFnTestEquipLobbyPassiveItems = (UFunction*) UObject::GObjObjects()->GetIndex( 124085 );

	ATgGameHUD_execTestEquipLobbyPassiveItems_Parms TestEquipLobbyPassiveItems_Parms;
	TestEquipLobbyPassiveItems_Parms.nItemId1 = nItemId1;
	TestEquipLobbyPassiveItems_Parms.nItemId2 = nItemId2;

	pFnTestEquipLobbyPassiveItems->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTestEquipLobbyPassiveItems, &TestEquipLobbyPassiveItems_Parms, NULL );

	pFnTestEquipLobbyPassiveItems->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.TestEquipLobbyActiveItems
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nItemId1                       ( CPF_Parm )
// int                            nItemId2                       ( CPF_Parm )

void ATgGameHUD::TestEquipLobbyActiveItems ( int nItemId1, int nItemId2 )
{
	static UFunction* pFnTestEquipLobbyActiveItems = NULL;

	if ( ! pFnTestEquipLobbyActiveItems )
		pFnTestEquipLobbyActiveItems = (UFunction*) UObject::GObjObjects()->GetIndex( 124082 );

	ATgGameHUD_execTestEquipLobbyActiveItems_Parms TestEquipLobbyActiveItems_Parms;
	TestEquipLobbyActiveItems_Parms.nItemId1 = nItemId1;
	TestEquipLobbyActiveItems_Parms.nItemId2 = nItemId2;

	pFnTestEquipLobbyActiveItems->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTestEquipLobbyActiveItems, &TestEquipLobbyActiveItems_Parms, NULL );

	pFnTestEquipLobbyActiveItems->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.EndMission
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bPlayerAttacker                ( CPF_Parm )
// unsigned char                  finalWinState                  ( CPF_Parm )

void ATgGameHUD::EndMission ( unsigned long bPlayerAttacker, unsigned char finalWinState )
{
	static UFunction* pFnEndMission = NULL;

	if ( ! pFnEndMission )
		pFnEndMission = (UFunction*) UObject::GObjObjects()->GetIndex( 124079 );

	ATgGameHUD_execEndMission_Parms EndMission_Parms;
	EndMission_Parms.bPlayerAttacker = bPlayerAttacker;
	EndMission_Parms.finalWinState = finalWinState;

	pFnEndMission->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndMission, &EndMission_Parms, NULL );

	pFnEndMission->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.UpdateItemStoreItems
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATgRepInfo_Player*       PRI                            ( CPF_Parm )

bool ATgGameHUD::UpdateItemStoreItems ( class ATgRepInfo_Player* PRI )
{
	static UFunction* pFnUpdateItemStoreItems = NULL;

	if ( ! pFnUpdateItemStoreItems )
		pFnUpdateItemStoreItems = (UFunction*) UObject::GObjObjects()->GetIndex( 124076 );

	ATgGameHUD_execUpdateItemStoreItems_Parms UpdateItemStoreItems_Parms;
	UpdateItemStoreItems_Parms.PRI = PRI;

	pFnUpdateItemStoreItems->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateItemStoreItems, &UpdateItemStoreItems_Parms, NULL );

	pFnUpdateItemStoreItems->FunctionFlags |= 0x400;

	return UpdateItemStoreItems_Parms.ReturnValue;
};

// Function TgClient.TgGameHUD.UpdateScoreboard
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgGameHUD::UpdateScoreboard ( )
{
	static UFunction* pFnUpdateScoreboard = NULL;

	if ( ! pFnUpdateScoreboard )
		pFnUpdateScoreboard = (UFunction*) UObject::GObjObjects()->GetIndex( 124075 );

	ATgGameHUD_execUpdateScoreboard_Parms UpdateScoreboard_Parms;

	pFnUpdateScoreboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateScoreboard, &UpdateScoreboard_Parms, NULL );

	pFnUpdateScoreboard->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.ToggleScoreBoard
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bShow                          ( CPF_Parm )

void ATgGameHUD::ToggleScoreBoard ( unsigned long bShow )
{
	static UFunction* pFnToggleScoreBoard = NULL;

	if ( ! pFnToggleScoreBoard )
		pFnToggleScoreBoard = (UFunction*) UObject::GObjObjects()->GetIndex( 124073 );

	ATgGameHUD_execToggleScoreBoard_Parms ToggleScoreBoard_Parms;
	ToggleScoreBoard_Parms.bShow = bShow;

	pFnToggleScoreBoard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleScoreBoard, &ToggleScoreBoard_Parms, NULL );

	pFnToggleScoreBoard->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.PlayTakeHit
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FRotator                HitDir                         ( CPF_Parm )
// int                            nDamage                        ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void ATgGameHUD::PlayTakeHit ( struct FRotator HitDir, int nDamage, class UClass* DamageType )
{
	static UFunction* pFnPlayTakeHit = NULL;

	if ( ! pFnPlayTakeHit )
		pFnPlayTakeHit = (UFunction*) UObject::GObjObjects()->GetIndex( 124069 );

	ATgGameHUD_execPlayTakeHit_Parms PlayTakeHit_Parms;
	memcpy ( &PlayTakeHit_Parms.HitDir, &HitDir, 0xC );
	PlayTakeHit_Parms.nDamage = nDamage;
	PlayTakeHit_Parms.DamageType = DamageType;

	pFnPlayTakeHit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayTakeHit, &PlayTakeHit_Parms, NULL );

	pFnPlayTakeHit->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.SellItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nInventoryId                   ( CPF_Parm )

void ATgGameHUD::SellItem ( int nInventoryId )
{
	static UFunction* pFnSellItem = NULL;

	if ( ! pFnSellItem )
		pFnSellItem = (UFunction*) UObject::GObjObjects()->GetIndex( 124067 );

	ATgGameHUD_execSellItem_Parms SellItem_Parms;
	SellItem_Parms.nInventoryId = nInventoryId;

	pFnSellItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSellItem, &SellItem_Parms, NULL );

	pFnSellItem->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.UpgradeItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nItemId                        ( CPF_Parm )
// int                            nUpgradeInvId                  ( CPF_Parm )

void ATgGameHUD::UpgradeItem ( int nItemId, int nUpgradeInvId )
{
	static UFunction* pFnUpgradeItem = NULL;

	if ( ! pFnUpgradeItem )
		pFnUpgradeItem = (UFunction*) UObject::GObjObjects()->GetIndex( 124064 );

	ATgGameHUD_execUpgradeItem_Parms UpgradeItem_Parms;
	UpgradeItem_Parms.nItemId = nItemId;
	UpgradeItem_Parms.nUpgradeInvId = nUpgradeInvId;

	pFnUpgradeItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpgradeItem, &UpgradeItem_Parms, NULL );

	pFnUpgradeItem->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.PurchaseItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nItemId                        ( CPF_Parm )
// int                            nAmount                        ( CPF_Parm )

void ATgGameHUD::PurchaseItem ( int nItemId, int nAmount )
{
	static UFunction* pFnPurchaseItem = NULL;

	if ( ! pFnPurchaseItem )
		pFnPurchaseItem = (UFunction*) UObject::GObjObjects()->GetIndex( 124061 );

	ATgGameHUD_execPurchaseItem_Parms PurchaseItem_Parms;
	PurchaseItem_Parms.nItemId = nItemId;
	PurchaseItem_Parms.nAmount = nAmount;

	pFnPurchaseItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPurchaseItem, &PurchaseItem_Parms, NULL );

	pFnPurchaseItem->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.OpenSkillScreen
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgGameHUD::OpenSkillScreen ( )
{
	static UFunction* pFnOpenSkillScreen = NULL;

	if ( ! pFnOpenSkillScreen )
		pFnOpenSkillScreen = (UFunction*) UObject::GObjObjects()->GetIndex( 124060 );

	ATgGameHUD_execOpenSkillScreen_Parms OpenSkillScreen_Parms;

	pFnOpenSkillScreen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenSkillScreen, &OpenSkillScreen_Parms, NULL );

	pFnOpenSkillScreen->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.OpenVendorMenu
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgGameHUD::OpenVendorMenu ( )
{
	static UFunction* pFnOpenVendorMenu = NULL;

	if ( ! pFnOpenVendorMenu )
		pFnOpenVendorMenu = (UFunction*) UObject::GObjObjects()->GetIndex( 124059 );

	ATgGameHUD_execOpenVendorMenu_Parms OpenVendorMenu_Parms;

	pFnOpenVendorMenu->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenVendorMenu, &OpenVendorMenu_Parms, NULL );

	pFnOpenVendorMenu->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.DeviceChangeEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )

void ATgGameHUD::DeviceChangeEvent ( class ATgDevice* Dev, unsigned char Event )
{
	static UFunction* pFnDeviceChangeEvent = NULL;

	if ( ! pFnDeviceChangeEvent )
		pFnDeviceChangeEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 124056 );

	ATgGameHUD_execDeviceChangeEvent_Parms DeviceChangeEvent_Parms;
	DeviceChangeEvent_Parms.Dev = Dev;
	DeviceChangeEvent_Parms.Event = Event;

	pFnDeviceChangeEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeviceChangeEvent, &DeviceChangeEvent_Parms, NULL );

	pFnDeviceChangeEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.UpdateReleaseTimeRemaining
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fTimeRemaining                 ( CPF_Parm )

void ATgGameHUD::UpdateReleaseTimeRemaining ( float fTimeRemaining )
{
	static UFunction* pFnUpdateReleaseTimeRemaining = NULL;

	if ( ! pFnUpdateReleaseTimeRemaining )
		pFnUpdateReleaseTimeRemaining = (UFunction*) UObject::GObjObjects()->GetIndex( 124054 );

	ATgGameHUD_execUpdateReleaseTimeRemaining_Parms UpdateReleaseTimeRemaining_Parms;
	UpdateReleaseTimeRemaining_Parms.fTimeRemaining = fTimeRemaining;

	pFnUpdateReleaseTimeRemaining->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateReleaseTimeRemaining, &UpdateReleaseTimeRemaining_Parms, NULL );

	pFnUpdateReleaseTimeRemaining->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.UpdatePlayerReady
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgRepInfo_Player*       PRI                            ( CPF_Parm )

void ATgGameHUD::UpdatePlayerReady ( class ATgRepInfo_Player* PRI )
{
	static UFunction* pFnUpdatePlayerReady = NULL;

	if ( ! pFnUpdatePlayerReady )
		pFnUpdatePlayerReady = (UFunction*) UObject::GObjObjects()->GetIndex( 124052 );

	ATgGameHUD_execUpdatePlayerReady_Parms UpdatePlayerReady_Parms;
	UpdatePlayerReady_Parms.PRI = PRI;

	pFnUpdatePlayerReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePlayerReady, &UpdatePlayerReady_Parms, NULL );

	pFnUpdatePlayerReady->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.UpdatePlayerStatUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATgPawn*                 changedPawn                    ( CPF_Parm )

bool ATgGameHUD::UpdatePlayerStatUI ( class ATgPawn* changedPawn )
{
	static UFunction* pFnUpdatePlayerStatUI = NULL;

	if ( ! pFnUpdatePlayerStatUI )
		pFnUpdatePlayerStatUI = (UFunction*) UObject::GObjObjects()->GetIndex( 124049 );

	ATgGameHUD_execUpdatePlayerStatUI_Parms UpdatePlayerStatUI_Parms;
	UpdatePlayerStatUI_Parms.changedPawn = changedPawn;

	pFnUpdatePlayerStatUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePlayerStatUI, &UpdatePlayerStatUI_Parms, NULL );

	pFnUpdatePlayerStatUI->FunctionFlags |= 0x400;

	return UpdatePlayerStatUI_Parms.ReturnValue;
};

// Function TgClient.TgGameHUD.UpdateTeamUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATgGameHUD::UpdateTeamUI ( )
{
	static UFunction* pFnUpdateTeamUI = NULL;

	if ( ! pFnUpdateTeamUI )
		pFnUpdateTeamUI = (UFunction*) UObject::GObjObjects()->GetIndex( 124047 );

	ATgGameHUD_execUpdateTeamUI_Parms UpdateTeamUI_Parms;

	pFnUpdateTeamUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateTeamUI, &UpdateTeamUI_Parms, NULL );

	pFnUpdateTeamUI->FunctionFlags |= 0x400;

	return UpdateTeamUI_Parms.ReturnValue;
};

// Function TgClient.TgGameHUD.UpdatePlayerVitalsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATgPlayerController*     PC                             ( CPF_Parm )

bool ATgGameHUD::UpdatePlayerVitalsUI ( class ATgPlayerController* PC )
{
	static UFunction* pFnUpdatePlayerVitalsUI = NULL;

	if ( ! pFnUpdatePlayerVitalsUI )
		pFnUpdatePlayerVitalsUI = (UFunction*) UObject::GObjObjects()->GetIndex( 124044 );

	ATgGameHUD_execUpdatePlayerVitalsUI_Parms UpdatePlayerVitalsUI_Parms;
	UpdatePlayerVitalsUI_Parms.PC = PC;

	pFnUpdatePlayerVitalsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePlayerVitalsUI, &UpdatePlayerVitalsUI_Parms, NULL );

	pFnUpdatePlayerVitalsUI->FunctionFlags |= 0x400;

	return UpdatePlayerVitalsUI_Parms.ReturnValue;
};

// Function TgClient.TgGameHUD.UpdatePlayerSurrender
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATgRepInfo_Player*       PRI                            ( CPF_Parm )

bool ATgGameHUD::UpdatePlayerSurrender ( class ATgRepInfo_Player* PRI )
{
	static UFunction* pFnUpdatePlayerSurrender = NULL;

	if ( ! pFnUpdatePlayerSurrender )
		pFnUpdatePlayerSurrender = (UFunction*) UObject::GObjObjects()->GetIndex( 124041 );

	ATgGameHUD_execUpdatePlayerSurrender_Parms UpdatePlayerSurrender_Parms;
	UpdatePlayerSurrender_Parms.PRI = PRI;

	pFnUpdatePlayerSurrender->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePlayerSurrender, &UpdatePlayerSurrender_Parms, NULL );

	pFnUpdatePlayerSurrender->FunctionFlags |= 0x400;

	return UpdatePlayerSurrender_Parms.ReturnValue;
};

// Function TgClient.TgGameHUD.UpdatePlayerInfoUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATgRepInfo_Player*       PRI                            ( CPF_Parm )

bool ATgGameHUD::UpdatePlayerInfoUI ( class ATgRepInfo_Player* PRI )
{
	static UFunction* pFnUpdatePlayerInfoUI = NULL;

	if ( ! pFnUpdatePlayerInfoUI )
		pFnUpdatePlayerInfoUI = (UFunction*) UObject::GObjObjects()->GetIndex( 124038 );

	ATgGameHUD_execUpdatePlayerInfoUI_Parms UpdatePlayerInfoUI_Parms;
	UpdatePlayerInfoUI_Parms.PRI = PRI;

	pFnUpdatePlayerInfoUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePlayerInfoUI, &UpdatePlayerInfoUI_Parms, NULL );

	pFnUpdatePlayerInfoUI->FunctionFlags |= 0x400;

	return UpdatePlayerInfoUI_Parms.ReturnValue;
};

// Function TgClient.TgGameHUD.UpdateGameCapturePointControlUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_OptionalParm | CPF_Parm )

bool ATgGameHUD::UpdateGameCapturePointControlUI ( int Index )
{
	static UFunction* pFnUpdateGameCapturePointControlUI = NULL;

	if ( ! pFnUpdateGameCapturePointControlUI )
		pFnUpdateGameCapturePointControlUI = (UFunction*) UObject::GObjObjects()->GetIndex( 124035 );

	ATgGameHUD_execUpdateGameCapturePointControlUI_Parms UpdateGameCapturePointControlUI_Parms;
	UpdateGameCapturePointControlUI_Parms.Index = Index;

	pFnUpdateGameCapturePointControlUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateGameCapturePointControlUI, &UpdateGameCapturePointControlUI_Parms, NULL );

	pFnUpdateGameCapturePointControlUI->FunctionFlags |= 0x400;

	return UpdateGameCapturePointControlUI_Parms.ReturnValue;
};

// Function TgClient.TgGameHUD.UpdateGameSiegeUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< float >                friendlyHealth                 ( CPF_Parm | CPF_NeedCtorLink )
// TArray< float >                enemyHealth                    ( CPF_Parm | CPF_NeedCtorLink )

void ATgGameHUD::UpdateGameSiegeUI ( TArray< float > friendlyHealth, TArray< float > enemyHealth )
{
	static UFunction* pFnUpdateGameSiegeUI = NULL;

	if ( ! pFnUpdateGameSiegeUI )
		pFnUpdateGameSiegeUI = (UFunction*) UObject::GObjObjects()->GetIndex( 124030 );

	ATgGameHUD_execUpdateGameSiegeUI_Parms UpdateGameSiegeUI_Parms;
	memcpy ( &UpdateGameSiegeUI_Parms.friendlyHealth, &friendlyHealth, 0xC );
	memcpy ( &UpdateGameSiegeUI_Parms.enemyHealth, &enemyHealth, 0xC );

	pFnUpdateGameSiegeUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateGameSiegeUI, &UpdateGameSiegeUI_Parms, NULL );

	pFnUpdateGameSiegeUI->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.UpdateGameScoreUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATgGameHUD::UpdateGameScoreUI ( )
{
	static UFunction* pFnUpdateGameScoreUI = NULL;

	if ( ! pFnUpdateGameScoreUI )
		pFnUpdateGameScoreUI = (UFunction*) UObject::GObjObjects()->GetIndex( 124028 );

	ATgGameHUD_execUpdateGameScoreUI_Parms UpdateGameScoreUI_Parms;

	pFnUpdateGameScoreUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateGameScoreUI, &UpdateGameScoreUI_Parms, NULL );

	pFnUpdateGameScoreUI->FunctionFlags |= 0x400;

	return UpdateGameScoreUI_Parms.ReturnValue;
};

// Function TgClient.TgGameHUD.UpdateGameClockUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATgGameHUD::UpdateGameClockUI ( )
{
	static UFunction* pFnUpdateGameClockUI = NULL;

	if ( ! pFnUpdateGameClockUI )
		pFnUpdateGameClockUI = (UFunction*) UObject::GObjObjects()->GetIndex( 124026 );

	ATgGameHUD_execUpdateGameClockUI_Parms UpdateGameClockUI_Parms;

	pFnUpdateGameClockUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateGameClockUI, &UpdateGameClockUI_Parms, NULL );

	pFnUpdateGameClockUI->FunctionFlags |= 0x400;

	return UpdateGameClockUI_Parms.ReturnValue;
};

// Function TgClient.TgGameHUD.UpdateBuildupTimer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )

void ATgGameHUD::UpdateBuildupTimer ( class ATgDevice* Dev )
{
	static UFunction* pFnUpdateBuildupTimer = NULL;

	if ( ! pFnUpdateBuildupTimer )
		pFnUpdateBuildupTimer = (UFunction*) UObject::GObjObjects()->GetIndex( 124024 );

	ATgGameHUD_execUpdateBuildupTimer_Parms UpdateBuildupTimer_Parms;
	UpdateBuildupTimer_Parms.Dev = Dev;

	pFnUpdateBuildupTimer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateBuildupTimer, &UpdateBuildupTimer_Parms, NULL );

	pFnUpdateBuildupTimer->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.UpdateRefireTimer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )

void ATgGameHUD::UpdateRefireTimer ( class ATgDevice* Dev )
{
	static UFunction* pFnUpdateRefireTimer = NULL;

	if ( ! pFnUpdateRefireTimer )
		pFnUpdateRefireTimer = (UFunction*) UObject::GObjObjects()->GetIndex( 124022 );

	ATgGameHUD_execUpdateRefireTimer_Parms UpdateRefireTimer_Parms;
	UpdateRefireTimer_Parms.Dev = Dev;

	pFnUpdateRefireTimer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateRefireTimer, &UpdateRefireTimer_Parms, NULL );

	pFnUpdateRefireTimer->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.UpdateHoverTarget
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgGameHUD::UpdateHoverTarget ( )
{
	static UFunction* pFnUpdateHoverTarget = NULL;

	if ( ! pFnUpdateHoverTarget )
		pFnUpdateHoverTarget = (UFunction*) UObject::GObjObjects()->GetIndex( 124021 );

	ATgGameHUD_execUpdateHoverTarget_Parms UpdateHoverTarget_Parms;

	pFnUpdateHoverTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateHoverTarget, &UpdateHoverTarget_Parms, NULL );

	pFnUpdateHoverTarget->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.UpdateDebugDraws
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgGameHUD::UpdateDebugDraws ( )
{
	static UFunction* pFnUpdateDebugDraws = NULL;

	if ( ! pFnUpdateDebugDraws )
		pFnUpdateDebugDraws = (UFunction*) UObject::GObjObjects()->GetIndex( 124020 );

	ATgGameHUD_execUpdateDebugDraws_Parms UpdateDebugDraws_Parms;

	pFnUpdateDebugDraws->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateDebugDraws, &UpdateDebugDraws_Parms, NULL );

	pFnUpdateDebugDraws->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.UpdateOverlay
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgGameHUD::UpdateOverlay ( )
{
	static UFunction* pFnUpdateOverlay = NULL;

	if ( ! pFnUpdateOverlay )
		pFnUpdateOverlay = (UFunction*) UObject::GObjObjects()->GetIndex( 124019 );

	ATgGameHUD_execUpdateOverlay_Parms UpdateOverlay_Parms;

	pFnUpdateOverlay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateOverlay, &UpdateOverlay_Parms, NULL );

	pFnUpdateOverlay->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.UpdateGammaControls
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgGameHUD::UpdateGammaControls ( )
{
	static UFunction* pFnUpdateGammaControls = NULL;

	if ( ! pFnUpdateGammaControls )
		pFnUpdateGammaControls = (UFunction*) UObject::GObjObjects()->GetIndex( 124018 );

	ATgGameHUD_execUpdateGammaControls_Parms UpdateGammaControls_Parms;

	pFnUpdateGammaControls->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateGammaControls, &UpdateGammaControls_Parms, NULL );

	pFnUpdateGammaControls->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.InitOverlayMoviePlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgGameHUD::InitOverlayMoviePlayer ( )
{
	static UFunction* pFnInitOverlayMoviePlayer = NULL;

	if ( ! pFnInitOverlayMoviePlayer )
		pFnInitOverlayMoviePlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 124017 );

	ATgGameHUD_execInitOverlayMoviePlayer_Parms InitOverlayMoviePlayer_Parms;

	pFnInitOverlayMoviePlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitOverlayMoviePlayer, &InitOverlayMoviePlayer_Parms, NULL );

	pFnInitOverlayMoviePlayer->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUD.RegisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgGameHUD::RegisterEngineCallbacks ( )
{
	static UFunction* pFnRegisterEngineCallbacks = NULL;

	if ( ! pFnRegisterEngineCallbacks )
		pFnRegisterEngineCallbacks = (UFunction*) UObject::GObjObjects()->GetIndex( 124016 );

	ATgGameHUD_execRegisterEngineCallbacks_Parms RegisterEngineCallbacks_Parms;

	pFnRegisterEngineCallbacks->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterEngineCallbacks, &RegisterEngineCallbacks_Parms, NULL );

	pFnRegisterEngineCallbacks->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleHUD
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATgSpectatorHUD::ToggleHUD ( )
{
	static UFunction* pFnToggleHUD = NULL;

	if ( ! pFnToggleHUD )
		pFnToggleHUD = (UFunction*) UObject::GObjObjects()->GetIndex( 128999 );

	ATgSpectatorHUD_execToggleHUD_Parms ToggleHUD_Parms;

	this->ProcessEvent ( pFnToggleHUD, &ToggleHUD_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATgSpectatorHUD::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->GetIndex( 128996 );

	ATgSpectatorHUD_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.GetGameState
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATgSpectatorHUD::eventGetGameState ( )
{
	static UFunction* pFnGetGameState = NULL;

	if ( ! pFnGetGameState )
		pFnGetGameState = (UFunction*) UObject::GObjObjects()->GetIndex( 128994 );

	ATgSpectatorHUD_eventGetGameState_Parms GetGameState_Parms;

	this->ProcessEvent ( pFnGetGameState, &GetGameState_Parms, NULL );

	return GetGameState_Parms.ReturnValue;
};

// Function TgClient.TgSpectatorHUD.SetVisibilityMode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned char                  Mode                           ( CPF_Parm )

void ATgSpectatorHUD::SetVisibilityMode ( unsigned char Mode )
{
	static UFunction* pFnSetVisibilityMode = NULL;

	if ( ! pFnSetVisibilityMode )
		pFnSetVisibilityMode = (UFunction*) UObject::GObjObjects()->GetIndex( 128991 );

	ATgSpectatorHUD_execSetVisibilityMode_Parms SetVisibilityMode_Parms;
	SetVisibilityMode_Parms.Mode = Mode;

	this->ProcessEvent ( pFnSetVisibilityMode, &SetVisibilityMode_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.ToggleVisibilityMode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATgSpectatorHUD::ToggleVisibilityMode ( )
{
	static UFunction* pFnToggleVisibilityMode = NULL;

	if ( ! pFnToggleVisibilityMode )
		pFnToggleVisibilityMode = (UFunction*) UObject::GObjObjects()->GetIndex( 128989 );

	ATgSpectatorHUD_execToggleVisibilityMode_Parms ToggleVisibilityMode_Parms;

	this->ProcessEvent ( pFnToggleVisibilityMode, &ToggleVisibilityMode_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.ShowPreviousInfoPanel
// [0x00020002] 
// Parameters infos:

void ATgSpectatorHUD::ShowPreviousInfoPanel ( )
{
	static UFunction* pFnShowPreviousInfoPanel = NULL;

	if ( ! pFnShowPreviousInfoPanel )
		pFnShowPreviousInfoPanel = (UFunction*) UObject::GObjObjects()->GetIndex( 128988 );

	ATgSpectatorHUD_execShowPreviousInfoPanel_Parms ShowPreviousInfoPanel_Parms;

	this->ProcessEvent ( pFnShowPreviousInfoPanel, &ShowPreviousInfoPanel_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.ShowNextInfoPanel
// [0x00020002] 
// Parameters infos:

void ATgSpectatorHUD::ShowNextInfoPanel ( )
{
	static UFunction* pFnShowNextInfoPanel = NULL;

	if ( ! pFnShowNextInfoPanel )
		pFnShowNextInfoPanel = (UFunction*) UObject::GObjObjects()->GetIndex( 128987 );

	ATgSpectatorHUD_execShowNextInfoPanel_Parms ShowNextInfoPanel_Parms;

	this->ProcessEvent ( pFnShowNextInfoPanel, &ShowNextInfoPanel_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.ToggleStatPanel
// [0x00020002] 
// Parameters infos:

void ATgSpectatorHUD::ToggleStatPanel ( )
{
	static UFunction* pFnToggleStatPanel = NULL;

	if ( ! pFnToggleStatPanel )
		pFnToggleStatPanel = (UFunction*) UObject::GObjObjects()->GetIndex( 128986 );

	ATgSpectatorHUD_execToggleStatPanel_Parms ToggleStatPanel_Parms;

	this->ProcessEvent ( pFnToggleStatPanel, &ToggleStatPanel_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.ShowPreviousStatPanel
// [0x00020002] 
// Parameters infos:

void ATgSpectatorHUD::ShowPreviousStatPanel ( )
{
	static UFunction* pFnShowPreviousStatPanel = NULL;

	if ( ! pFnShowPreviousStatPanel )
		pFnShowPreviousStatPanel = (UFunction*) UObject::GObjObjects()->GetIndex( 128985 );

	ATgSpectatorHUD_execShowPreviousStatPanel_Parms ShowPreviousStatPanel_Parms;

	this->ProcessEvent ( pFnShowPreviousStatPanel, &ShowPreviousStatPanel_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.ShowNextStatPanel
// [0x00020002] 
// Parameters infos:

void ATgSpectatorHUD::ShowNextStatPanel ( )
{
	static UFunction* pFnShowNextStatPanel = NULL;

	if ( ! pFnShowNextStatPanel )
		pFnShowNextStatPanel = (UFunction*) UObject::GObjObjects()->GetIndex( 128984 );

	ATgSpectatorHUD_execShowNextStatPanel_Parms ShowNextStatPanel_Parms;

	this->ProcessEvent ( pFnShowNextStatPanel, &ShowNextStatPanel_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.UpdatePlayerStatUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATgPawn*                 changedPawn                    ( CPF_Parm )

bool ATgSpectatorHUD::UpdatePlayerStatUI ( class ATgPawn* changedPawn )
{
	static UFunction* pFnUpdatePlayerStatUI = NULL;

	if ( ! pFnUpdatePlayerStatUI )
		pFnUpdatePlayerStatUI = (UFunction*) UObject::GObjObjects()->GetIndex( 128981 );

	ATgSpectatorHUD_execUpdatePlayerStatUI_Parms UpdatePlayerStatUI_Parms;
	UpdatePlayerStatUI_Parms.changedPawn = changedPawn;

	pFnUpdatePlayerStatUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePlayerStatUI, &UpdatePlayerStatUI_Parms, NULL );

	pFnUpdatePlayerStatUI->FunctionFlags |= 0x400;

	return UpdatePlayerStatUI_Parms.ReturnValue;
};

// Function TgClient.TgSpectatorHUD.SetStatIndex
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            StatIndex                      ( CPF_Parm )

void ATgSpectatorHUD::SetStatIndex ( int StatIndex )
{
	static UFunction* pFnSetStatIndex = NULL;

	if ( ! pFnSetStatIndex )
		pFnSetStatIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 128979 );

	ATgSpectatorHUD_execSetStatIndex_Parms SetStatIndex_Parms;
	SetStatIndex_Parms.StatIndex = StatIndex;

	pFnSetStatIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetStatIndex, &SetStatIndex_Parms, NULL );

	pFnSetStatIndex->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.SpectatorShowAll
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::SpectatorShowAll ( )
{
	static UFunction* pFnSpectatorShowAll = NULL;

	if ( ! pFnSpectatorShowAll )
		pFnSpectatorShowAll = (UFunction*) UObject::GObjObjects()->GetIndex( 128978 );

	ATgSpectatorHUD_execSpectatorShowAll_Parms SpectatorShowAll_Parms;

	pFnSpectatorShowAll->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSpectatorShowAll, &SpectatorShowAll_Parms, NULL );

	pFnSpectatorShowAll->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.SpectatorHideBottomHalf
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::SpectatorHideBottomHalf ( )
{
	static UFunction* pFnSpectatorHideBottomHalf = NULL;

	if ( ! pFnSpectatorHideBottomHalf )
		pFnSpectatorHideBottomHalf = (UFunction*) UObject::GObjObjects()->GetIndex( 128977 );

	ATgSpectatorHUD_execSpectatorHideBottomHalf_Parms SpectatorHideBottomHalf_Parms;

	pFnSpectatorHideBottomHalf->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSpectatorHideBottomHalf, &SpectatorHideBottomHalf_Parms, NULL );

	pFnSpectatorHideBottomHalf->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.SpectatorHideAll
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::SpectatorHideAll ( )
{
	static UFunction* pFnSpectatorHideAll = NULL;

	if ( ! pFnSpectatorHideAll )
		pFnSpectatorHideAll = (UFunction*) UObject::GObjObjects()->GetIndex( 128976 );

	ATgSpectatorHUD_execSpectatorHideAll_Parms SpectatorHideAll_Parms;

	pFnSpectatorHideAll->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSpectatorHideAll, &SpectatorHideAll_Parms, NULL );

	pFnSpectatorHideAll->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorGameStats
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorGameStats ( )
{
	static UFunction* pFnToggleSpectatorGameStats = NULL;

	if ( ! pFnToggleSpectatorGameStats )
		pFnToggleSpectatorGameStats = (UFunction*) UObject::GObjObjects()->GetIndex( 128975 );

	ATgSpectatorHUD_execToggleSpectatorGameStats_Parms ToggleSpectatorGameStats_Parms;

	pFnToggleSpectatorGameStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorGameStats, &ToggleSpectatorGameStats_Parms, NULL );

	pFnToggleSpectatorGameStats->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorMinimap
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorMinimap ( )
{
	static UFunction* pFnToggleSpectatorMinimap = NULL;

	if ( ! pFnToggleSpectatorMinimap )
		pFnToggleSpectatorMinimap = (UFunction*) UObject::GObjObjects()->GetIndex( 128974 );

	ATgSpectatorHUD_execToggleSpectatorMinimap_Parms ToggleSpectatorMinimap_Parms;

	pFnToggleSpectatorMinimap->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorMinimap, &ToggleSpectatorMinimap_Parms, NULL );

	pFnToggleSpectatorMinimap->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorPlayerPanels
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorPlayerPanels ( )
{
	static UFunction* pFnToggleSpectatorPlayerPanels = NULL;

	if ( ! pFnToggleSpectatorPlayerPanels )
		pFnToggleSpectatorPlayerPanels = (UFunction*) UObject::GObjObjects()->GetIndex( 128973 );

	ATgSpectatorHUD_execToggleSpectatorPlayerPanels_Parms ToggleSpectatorPlayerPanels_Parms;

	pFnToggleSpectatorPlayerPanels->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorPlayerPanels, &ToggleSpectatorPlayerPanels_Parms, NULL );

	pFnToggleSpectatorPlayerPanels->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorObjectives
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorObjectives ( )
{
	static UFunction* pFnToggleSpectatorObjectives = NULL;

	if ( ! pFnToggleSpectatorObjectives )
		pFnToggleSpectatorObjectives = (UFunction*) UObject::GObjObjects()->GetIndex( 128972 );

	ATgSpectatorHUD_execToggleSpectatorObjectives_Parms ToggleSpectatorObjectives_Parms;

	pFnToggleSpectatorObjectives->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorObjectives, &ToggleSpectatorObjectives_Parms, NULL );

	pFnToggleSpectatorObjectives->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorTimeline
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorTimeline ( )
{
	static UFunction* pFnToggleSpectatorTimeline = NULL;

	if ( ! pFnToggleSpectatorTimeline )
		pFnToggleSpectatorTimeline = (UFunction*) UObject::GObjObjects()->GetIndex( 128971 );

	ATgSpectatorHUD_execToggleSpectatorTimeline_Parms ToggleSpectatorTimeline_Parms;

	pFnToggleSpectatorTimeline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorTimeline, &ToggleSpectatorTimeline_Parms, NULL );

	pFnToggleSpectatorTimeline->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSecretMessage
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSecretMessage ( )
{
	static UFunction* pFnToggleSecretMessage = NULL;

	if ( ! pFnToggleSecretMessage )
		pFnToggleSecretMessage = (UFunction*) UObject::GObjObjects()->GetIndex( 128970 );

	ATgSpectatorHUD_execToggleSecretMessage_Parms ToggleSecretMessage_Parms;

	pFnToggleSecretMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSecretMessage, &ToggleSecretMessage_Parms, NULL );

	pFnToggleSecretMessage->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorControls
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorControls ( )
{
	static UFunction* pFnToggleSpectatorControls = NULL;

	if ( ! pFnToggleSpectatorControls )
		pFnToggleSpectatorControls = (UFunction*) UObject::GObjObjects()->GetIndex( 128969 );

	ATgSpectatorHUD_execToggleSpectatorControls_Parms ToggleSpectatorControls_Parms;

	pFnToggleSpectatorControls->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorControls, &ToggleSpectatorControls_Parms, NULL );

	pFnToggleSpectatorControls->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorPlayerInformation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorPlayerInformation ( )
{
	static UFunction* pFnToggleSpectatorPlayerInformation = NULL;

	if ( ! pFnToggleSpectatorPlayerInformation )
		pFnToggleSpectatorPlayerInformation = (UFunction*) UObject::GObjObjects()->GetIndex( 128968 );

	ATgSpectatorHUD_execToggleSpectatorPlayerInformation_Parms ToggleSpectatorPlayerInformation_Parms;

	pFnToggleSpectatorPlayerInformation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorPlayerInformation, &ToggleSpectatorPlayerInformation_Parms, NULL );

	pFnToggleSpectatorPlayerInformation->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorTicker
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorTicker ( )
{
	static UFunction* pFnToggleSpectatorTicker = NULL;

	if ( ! pFnToggleSpectatorTicker )
		pFnToggleSpectatorTicker = (UFunction*) UObject::GObjObjects()->GetIndex( 128967 );

	ATgSpectatorHUD_execToggleSpectatorTicker_Parms ToggleSpectatorTicker_Parms;

	pFnToggleSpectatorTicker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorTicker, &ToggleSpectatorTicker_Parms, NULL );

	pFnToggleSpectatorTicker->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.SetSpectatorMode
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nNum                           ( CPF_Parm )

void ATgSpectatorHUD::SetSpectatorMode ( int nNum )
{
	static UFunction* pFnSetSpectatorMode = NULL;

	if ( ! pFnSetSpectatorMode )
		pFnSetSpectatorMode = (UFunction*) UObject::GObjObjects()->GetIndex( 128965 );

	ATgSpectatorHUD_execSetSpectatorMode_Parms SetSpectatorMode_Parms;
	SetSpectatorMode_Parms.nNum = nNum;

	pFnSetSpectatorMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSpectatorMode, &SetSpectatorMode_Parms, NULL );

	pFnSetSpectatorMode->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleBans
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleBans ( )
{
	static UFunction* pFnToggleBans = NULL;

	if ( ! pFnToggleBans )
		pFnToggleBans = (UFunction*) UObject::GObjObjects()->GetIndex( 128964 );

	ATgSpectatorHUD_execToggleBans_Parms ToggleBans_Parms;

	pFnToggleBans->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleBans, &ToggleBans_Parms, NULL );

	pFnToggleBans->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.EndMission
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bPlayerAttacker                ( CPF_Parm )
// unsigned char                  finalWinState                  ( CPF_Parm )

void ATgSpectatorHUD::EndMission ( unsigned long bPlayerAttacker, unsigned char finalWinState )
{
	static UFunction* pFnEndMission = NULL;

	if ( ! pFnEndMission )
		pFnEndMission = (UFunction*) UObject::GObjObjects()->GetIndex( 128961 );

	ATgSpectatorHUD_execEndMission_Parms EndMission_Parms;
	EndMission_Parms.bPlayerAttacker = bPlayerAttacker;
	EndMission_Parms.finalWinState = finalWinState;

	pFnEndMission->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndMission, &EndMission_Parms, NULL );

	pFnEndMission->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.UpdateSpectatorViewMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  Mode                           ( CPF_Parm )

void ATgSpectatorHUD::UpdateSpectatorViewMode ( unsigned char Mode )
{
	static UFunction* pFnUpdateSpectatorViewMode = NULL;

	if ( ! pFnUpdateSpectatorViewMode )
		pFnUpdateSpectatorViewMode = (UFunction*) UObject::GObjObjects()->GetIndex( 128959 );

	ATgSpectatorHUD_execUpdateSpectatorViewMode_Parms UpdateSpectatorViewMode_Parms;
	UpdateSpectatorViewMode_Parms.Mode = Mode;

	pFnUpdateSpectatorViewMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSpectatorViewMode, &UpdateSpectatorViewMode_Parms, NULL );

	pFnUpdateSpectatorViewMode->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.UpdateSpectatorViewTarget
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AActor*                  Target                         ( CPF_Parm )

void ATgSpectatorHUD::UpdateSpectatorViewTarget ( class AActor* Target )
{
	static UFunction* pFnUpdateSpectatorViewTarget = NULL;

	if ( ! pFnUpdateSpectatorViewTarget )
		pFnUpdateSpectatorViewTarget = (UFunction*) UObject::GObjObjects()->GetIndex( 128957 );

	ATgSpectatorHUD_execUpdateSpectatorViewTarget_Parms UpdateSpectatorViewTarget_Parms;
	UpdateSpectatorViewTarget_Parms.Target = Target;

	pFnUpdateSpectatorViewTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSpectatorViewTarget, &UpdateSpectatorViewTarget_Parms, NULL );

	pFnUpdateSpectatorViewTarget->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.GetVisibilityMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char ATgSpectatorHUD::GetVisibilityMode ( )
{
	static UFunction* pFnGetVisibilityMode = NULL;

	if ( ! pFnGetVisibilityMode )
		pFnGetVisibilityMode = (UFunction*) UObject::GObjObjects()->GetIndex( 128955 );

	ATgSpectatorHUD_execGetVisibilityMode_Parms GetVisibilityMode_Parms;

	pFnGetVisibilityMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVisibilityMode, &GetVisibilityMode_Parms, NULL );

	pFnGetVisibilityMode->FunctionFlags |= 0x400;

	return GetVisibilityMode_Parms.ReturnValue;
};

// Function TgClient.TgDataGroup_Game.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgDataGroup_Game::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123679 );

	UTgDataGroup_Game_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataGroup_Game.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgDataGroup_Game::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123676 );

	UTgDataGroup_Game_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Chat.TokenReplace
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Token                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sValue                         ( CPF_Parm | CPF_NeedCtorLink )

struct FString UTgGameDC_Chat::eventTokenReplace ( struct FString Message, struct FString Token, struct FString sValue )
{
	static UFunction* pFnTokenReplace = NULL;

	if ( ! pFnTokenReplace )
		pFnTokenReplace = (UFunction*) UObject::GObjObjects()->GetIndex( 123815 );

	UTgGameDC_Chat_eventTokenReplace_Parms TokenReplace_Parms;
	memcpy ( &TokenReplace_Parms.Message, &Message, 0xC );
	memcpy ( &TokenReplace_Parms.Token, &Token, 0xC );
	memcpy ( &TokenReplace_Parms.sValue, &sValue, 0xC );

	this->ProcessEvent ( pFnTokenReplace, &TokenReplace_Parms, NULL );

	return TokenReplace_Parms.ReturnValue;
};

// Function TgClient.TgGameDC_Chat.SubmitDeferredMessages
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            nChannel                       ( CPF_OptionalParm | CPF_Parm )

void UTgGameDC_Chat::SubmitDeferredMessages ( int nChannel )
{
	static UFunction* pFnSubmitDeferredMessages = NULL;

	if ( ! pFnSubmitDeferredMessages )
		pFnSubmitDeferredMessages = (UFunction*) UObject::GObjObjects()->GetIndex( 123813 );

	UTgGameDC_Chat_execSubmitDeferredMessages_Parms SubmitDeferredMessages_Parms;
	SubmitDeferredMessages_Parms.nChannel = nChannel;

	pFnSubmitDeferredMessages->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitDeferredMessages, &SubmitDeferredMessages_Parms, NULL );

	pFnSubmitDeferredMessages->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Chat.PlayVGSSound
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nMsgId                         ( CPF_Parm )
// int                            nPackId                        ( CPF_Parm )
// int                            nBotId                         ( CPF_Parm )
// int                            nSkinId                        ( CPF_Parm )
// struct FString                 customSuffix                   ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameDC_Chat::PlayVGSSound ( int nMsgId, int nPackId, int nBotId, int nSkinId, struct FString customSuffix )
{
	static UFunction* pFnPlayVGSSound = NULL;

	if ( ! pFnPlayVGSSound )
		pFnPlayVGSSound = (UFunction*) UObject::GObjObjects()->GetIndex( 123807 );

	UTgGameDC_Chat_execPlayVGSSound_Parms PlayVGSSound_Parms;
	PlayVGSSound_Parms.nMsgId = nMsgId;
	PlayVGSSound_Parms.nPackId = nPackId;
	PlayVGSSound_Parms.nBotId = nBotId;
	PlayVGSSound_Parms.nSkinId = nSkinId;
	memcpy ( &PlayVGSSound_Parms.customSuffix, &customSuffix, 0xC );

	pFnPlayVGSSound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayVGSSound, &PlayVGSSound_Parms, NULL );

	pFnPlayVGSSound->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Chat.PlayMessageSound
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            nMsgId                         ( CPF_Parm )
// int                            nPackId                        ( CPF_Parm )
// unsigned char                  ePriority                      ( CPF_OptionalParm | CPF_Parm )

void UTgGameDC_Chat::PlayMessageSound ( int nMsgId, int nPackId, unsigned char ePriority )
{
	static UFunction* pFnPlayMessageSound = NULL;

	if ( ! pFnPlayMessageSound )
		pFnPlayMessageSound = (UFunction*) UObject::GObjObjects()->GetIndex( 123803 );

	UTgGameDC_Chat_execPlayMessageSound_Parms PlayMessageSound_Parms;
	PlayMessageSound_Parms.nMsgId = nMsgId;
	PlayMessageSound_Parms.nPackId = nPackId;
	PlayMessageSound_Parms.ePriority = ePriority;

	pFnPlayMessageSound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayMessageSound, &PlayMessageSound_Parms, NULL );

	pFnPlayMessageSound->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Chat.AddDeferredMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgChatData*             pData                          ( CPF_Parm )

void UTgGameDC_Chat::AddDeferredMessage ( class UTgChatData* pData )
{
	static UFunction* pFnAddDeferredMessage = NULL;

	if ( ! pFnAddDeferredMessage )
		pFnAddDeferredMessage = (UFunction*) UObject::GObjObjects()->GetIndex( 123801 );

	UTgGameDC_Chat_execAddDeferredMessage_Parms AddDeferredMessage_Parms;
	AddDeferredMessage_Parms.pData = pData;

	pFnAddDeferredMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddDeferredMessage, &AddDeferredMessage_Parms, NULL );

	pFnAddDeferredMessage->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Chat.AddNotifyMsg
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsMain                        ( CPF_Parm )
// int                            nDelay                         ( CPF_Parm )
// int                            nColor                         ( CPF_OptionalParm | CPF_Parm )
// int                            nSize                          ( CPF_OptionalParm | CPF_Parm )
// int                            nFill                          ( CPF_OptionalParm | CPF_Parm )

void UTgGameDC_Chat::AddNotifyMsg ( struct FString sMessage, unsigned long bIsMain, int nDelay, int nColor, int nSize, int nFill )
{
	static UFunction* pFnAddNotifyMsg = NULL;

	if ( ! pFnAddNotifyMsg )
		pFnAddNotifyMsg = (UFunction*) UObject::GObjObjects()->GetIndex( 123794 );

	UTgGameDC_Chat_execAddNotifyMsg_Parms AddNotifyMsg_Parms;
	memcpy ( &AddNotifyMsg_Parms.sMessage, &sMessage, 0xC );
	AddNotifyMsg_Parms.bIsMain = bIsMain;
	AddNotifyMsg_Parms.nDelay = nDelay;
	AddNotifyMsg_Parms.nColor = nColor;
	AddNotifyMsg_Parms.nSize = nSize;
	AddNotifyMsg_Parms.nFill = nFill;

	pFnAddNotifyMsg->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddNotifyMsg, &AddNotifyMsg_Parms, NULL );

	pFnAddNotifyMsg->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Chat.AddAlert
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameDC_Chat::AddAlert ( struct FString Message )
{
	static UFunction* pFnAddAlert = NULL;

	if ( ! pFnAddAlert )
		pFnAddAlert = (UFunction*) UObject::GObjObjects()->GetIndex( 123792 );

	UTgGameDC_Chat_execAddAlert_Parms AddAlert_Parms;
	memcpy ( &AddAlert_Parms.Message, &Message, 0xC );

	pFnAddAlert->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddAlert, &AddAlert_Parms, NULL );

	pFnAddAlert->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Chat.UpdateMessageSoundQueue
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_Chat::UpdateMessageSoundQueue ( )
{
	static UFunction* pFnUpdateMessageSoundQueue = NULL;

	if ( ! pFnUpdateMessageSoundQueue )
		pFnUpdateMessageSoundQueue = (UFunction*) UObject::GObjObjects()->GetIndex( 123791 );

	UTgGameDC_Chat_execUpdateMessageSoundQueue_Parms UpdateMessageSoundQueue_Parms;

	pFnUpdateMessageSoundQueue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateMessageSoundQueue, &UpdateMessageSoundQueue_Parms, NULL );

	pFnUpdateMessageSoundQueue->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Chat.Update
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// unsigned long                  bSkipCallback                  ( CPF_OptionalParm | CPF_Parm )

void UTgGameDC_Chat::Update ( float DeltaTime, unsigned long bSkipCallback )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->GetIndex( 123788 );

	UTgGameDC_Chat_execUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;
	Update_Parms.bSkipCallback = bSkipCallback;

	pFnUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	pFnUpdate->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Chat.AddPopupMsg
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 msg                            ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameDC_Chat::AddPopupMsg ( struct FString msg )
{
	static UFunction* pFnAddPopupMsg = NULL;

	if ( ! pFnAddPopupMsg )
		pFnAddPopupMsg = (UFunction*) UObject::GObjObjects()->GetIndex( 123786 );

	UTgGameDC_Chat_execAddPopupMsg_Parms AddPopupMsg_Parms;
	memcpy ( &AddPopupMsg_Parms.msg, &msg, 0xC );

	pFnAddPopupMsg->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddPopupMsg, &AddPopupMsg_Parms, NULL );

	pFnAddPopupMsg->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Chat.AddCombatMsg
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 msg                            ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameDC_Chat::AddCombatMsg ( struct FString msg )
{
	static UFunction* pFnAddCombatMsg = NULL;

	if ( ! pFnAddCombatMsg )
		pFnAddCombatMsg = (UFunction*) UObject::GObjObjects()->GetIndex( 123784 );

	UTgGameDC_Chat_execAddCombatMsg_Parms AddCombatMsg_Parms;
	memcpy ( &AddCombatMsg_Parms.msg, &msg, 0xC );

	pFnAddCombatMsg->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddCombatMsg, &AddCombatMsg_Parms, NULL );

	pFnAddCombatMsg->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Chat.AddLocalChatMsg
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 msg                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 senderName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameDC_Chat::AddLocalChatMsg ( struct FString msg, struct FString senderName )
{
	static UFunction* pFnAddLocalChatMsg = NULL;

	if ( ! pFnAddLocalChatMsg )
		pFnAddLocalChatMsg = (UFunction*) UObject::GObjObjects()->GetIndex( 123781 );

	UTgGameDC_Chat_execAddLocalChatMsg_Parms AddLocalChatMsg_Parms;
	memcpy ( &AddLocalChatMsg_Parms.msg, &msg, 0xC );
	memcpy ( &AddLocalChatMsg_Parms.senderName, &senderName, 0xC );

	pFnAddLocalChatMsg->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddLocalChatMsg, &AddLocalChatMsg_Parms, NULL );

	pFnAddLocalChatMsg->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Chat.AddChatMsg
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 msg                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 senderName                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            nTime                          ( CPF_Parm )
// int                            nChannel                       ( CPF_Parm )
// unsigned long                  bIsFeedback                    ( CPF_Parm )
// unsigned long                  bIsVGS                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOnlyIfOpen                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bHideSender                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bNew                           ( CPF_OptionalParm | CPF_Parm )

void UTgGameDC_Chat::AddChatMsg ( struct FString msg, struct FString senderName, int nTime, int nChannel, unsigned long bIsFeedback, unsigned long bIsVGS, unsigned long bOnlyIfOpen, unsigned long bHideSender, unsigned long bNew )
{
	static UFunction* pFnAddChatMsg = NULL;

	if ( ! pFnAddChatMsg )
		pFnAddChatMsg = (UFunction*) UObject::GObjObjects()->GetIndex( 123771 );

	UTgGameDC_Chat_execAddChatMsg_Parms AddChatMsg_Parms;
	memcpy ( &AddChatMsg_Parms.msg, &msg, 0xC );
	memcpy ( &AddChatMsg_Parms.senderName, &senderName, 0xC );
	AddChatMsg_Parms.nTime = nTime;
	AddChatMsg_Parms.nChannel = nChannel;
	AddChatMsg_Parms.bIsFeedback = bIsFeedback;
	AddChatMsg_Parms.bIsVGS = bIsVGS;
	AddChatMsg_Parms.bOnlyIfOpen = bOnlyIfOpen;
	AddChatMsg_Parms.bHideSender = bHideSender;
	AddChatMsg_Parms.bNew = bNew;

	pFnAddChatMsg->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddChatMsg, &AddChatMsg_Parms, NULL );

	pFnAddChatMsg->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Chat.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgGameDC_Chat::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123768 );

	UTgGameDC_Chat_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.usc_set_cast_mode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCastMode                      ( CPF_Parm )

void UTgGameDC_Device::usc_set_cast_mode ( int nCastMode )
{
	static UFunction* pFnusc_set_cast_mode = NULL;

	if ( ! pFnusc_set_cast_mode )
		pFnusc_set_cast_mode = (UFunction*) UObject::GObjObjects()->GetIndex( 123854 );

	UTgGameDC_Device_execusc_set_cast_mode_Parms usc_set_cast_mode_Parms;
	usc_set_cast_mode_Parms.nCastMode = nCastMode;

	pFnusc_set_cast_mode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_set_cast_mode, &usc_set_cast_mode_Parms, NULL );

	pFnusc_set_cast_mode->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.usc_set_cast_mode_delegate
// [0x00120000] 
// Parameters infos:

void UTgGameDC_Device::usc_set_cast_mode_delegate ( )
{
	static UFunction* pFnusc_set_cast_mode_delegate = NULL;

	if ( ! pFnusc_set_cast_mode_delegate )
		pFnusc_set_cast_mode_delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123821 );

	UTgGameDC_Device_execusc_set_cast_mode_delegate_Parms usc_set_cast_mode_delegate_Parms;

	this->ProcessEvent ( pFnusc_set_cast_mode_delegate, &usc_set_cast_mode_delegate_Parms, NULL );
};

// Function TgClient.TgGameDC_Device.usc_get_mode_tooltip
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nRank                          ( CPF_Parm )

void UTgGameDC_Device::usc_get_mode_tooltip ( int nRank )
{
	static UFunction* pFnusc_get_mode_tooltip = NULL;

	if ( ! pFnusc_get_mode_tooltip )
		pFnusc_get_mode_tooltip = (UFunction*) UObject::GObjObjects()->GetIndex( 123852 );

	UTgGameDC_Device_execusc_get_mode_tooltip_Parms usc_get_mode_tooltip_Parms;
	usc_get_mode_tooltip_Parms.nRank = nRank;

	pFnusc_get_mode_tooltip->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_get_mode_tooltip, &usc_get_mode_tooltip_Parms, NULL );

	pFnusc_get_mode_tooltip->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.usc_get_mode_tooltip_delegate
// [0x00120000] 
// Parameters infos:

void UTgGameDC_Device::usc_get_mode_tooltip_delegate ( )
{
	static UFunction* pFnusc_get_mode_tooltip_delegate = NULL;

	if ( ! pFnusc_get_mode_tooltip_delegate )
		pFnusc_get_mode_tooltip_delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123823 );

	UTgGameDC_Device_execusc_get_mode_tooltip_delegate_Parms usc_get_mode_tooltip_delegate_Parms;

	this->ProcessEvent ( pFnusc_get_mode_tooltip_delegate, &usc_get_mode_tooltip_delegate_Parms, NULL );
};

// Function TgClient.TgGameDC_Device.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_Device::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123851 );

	UTgGameDC_Device_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.UpdateCastMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_Device::UpdateCastMode ( )
{
	static UFunction* pFnUpdateCastMode = NULL;

	if ( ! pFnUpdateCastMode )
		pFnUpdateCastMode = (UFunction*) UObject::GObjObjects()->GetIndex( 123850 );

	UTgGameDC_Device_execUpdateCastMode_Parms UpdateCastMode_Parms;

	pFnUpdateCastMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateCastMode, &UpdateCastMode_Parms, NULL );

	pFnUpdateCastMode->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.UpdateInstanceCount
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )

void UTgGameDC_Device::UpdateInstanceCount ( class ATgDevice* Dev )
{
	static UFunction* pFnUpdateInstanceCount = NULL;

	if ( ! pFnUpdateInstanceCount )
		pFnUpdateInstanceCount = (UFunction*) UObject::GObjObjects()->GetIndex( 123848 );

	UTgGameDC_Device_execUpdateInstanceCount_Parms UpdateInstanceCount_Parms;
	UpdateInstanceCount_Parms.Dev = Dev;

	pFnUpdateInstanceCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateInstanceCount, &UpdateInstanceCount_Parms, NULL );

	pFnUpdateInstanceCount->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.UpdateHasBeenTrained
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )

void UTgGameDC_Device::UpdateHasBeenTrained ( class ATgDevice* Dev )
{
	static UFunction* pFnUpdateHasBeenTrained = NULL;

	if ( ! pFnUpdateHasBeenTrained )
		pFnUpdateHasBeenTrained = (UFunction*) UObject::GObjObjects()->GetIndex( 123846 );

	UTgGameDC_Device_execUpdateHasBeenTrained_Parms UpdateHasBeenTrained_Parms;
	UpdateHasBeenTrained_Parms.Dev = Dev;

	pFnUpdateHasBeenTrained->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateHasBeenTrained, &UpdateHasBeenTrained_Parms, NULL );

	pFnUpdateHasBeenTrained->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.UpdatePtsAlloc
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )

void UTgGameDC_Device::UpdatePtsAlloc ( class ATgDevice* Dev )
{
	static UFunction* pFnUpdatePtsAlloc = NULL;

	if ( ! pFnUpdatePtsAlloc )
		pFnUpdatePtsAlloc = (UFunction*) UObject::GObjObjects()->GetIndex( 123844 );

	UTgGameDC_Device_execUpdatePtsAlloc_Parms UpdatePtsAlloc_Parms;
	UpdatePtsAlloc_Parms.Dev = Dev;

	pFnUpdatePtsAlloc->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePtsAlloc, &UpdatePtsAlloc_Parms, NULL );

	pFnUpdatePtsAlloc->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.UpdateToggleState
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )

void UTgGameDC_Device::UpdateToggleState ( class ATgDevice* Dev )
{
	static UFunction* pFnUpdateToggleState = NULL;

	if ( ! pFnUpdateToggleState )
		pFnUpdateToggleState = (UFunction*) UObject::GObjObjects()->GetIndex( 123842 );

	UTgGameDC_Device_execUpdateToggleState_Parms UpdateToggleState_Parms;
	UpdateToggleState_Parms.Dev = Dev;

	pFnUpdateToggleState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateToggleState, &UpdateToggleState_Parms, NULL );

	pFnUpdateToggleState->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.UpdateCooldown
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )

void UTgGameDC_Device::UpdateCooldown ( class ATgDevice* Dev )
{
	static UFunction* pFnUpdateCooldown = NULL;

	if ( ! pFnUpdateCooldown )
		pFnUpdateCooldown = (UFunction*) UObject::GObjObjects()->GetIndex( 123840 );

	UTgGameDC_Device_execUpdateCooldown_Parms UpdateCooldown_Parms;
	UpdateCooldown_Parms.Dev = Dev;

	pFnUpdateCooldown->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateCooldown, &UpdateCooldown_Parms, NULL );

	pFnUpdateCooldown->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.UpdateCanFire
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )

void UTgGameDC_Device::UpdateCanFire ( class ATgDevice* Dev )
{
	static UFunction* pFnUpdateCanFire = NULL;

	if ( ! pFnUpdateCanFire )
		pFnUpdateCanFire = (UFunction*) UObject::GObjObjects()->GetIndex( 123838 );

	UTgGameDC_Device_execUpdateCanFire_Parms UpdateCanFire_Parms;
	UpdateCanFire_Parms.Dev = Dev;

	pFnUpdateCanFire->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateCanFire, &UpdateCanFire_Parms, NULL );

	pFnUpdateCanFire->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.UpdateSelected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bSelected                      ( CPF_Parm )

void UTgGameDC_Device::UpdateSelected ( unsigned long bSelected )
{
	static UFunction* pFnUpdateSelected = NULL;

	if ( ! pFnUpdateSelected )
		pFnUpdateSelected = (UFunction*) UObject::GObjObjects()->GetIndex( 123836 );

	UTgGameDC_Device_execUpdateSelected_Parms UpdateSelected_Parms;
	UpdateSelected_Parms.bSelected = bSelected;

	pFnUpdateSelected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSelected, &UpdateSelected_Parms, NULL );

	pFnUpdateSelected->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.UpdateRelicValues
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )

void UTgGameDC_Device::UpdateRelicValues ( class ATgDevice* Dev )
{
	static UFunction* pFnUpdateRelicValues = NULL;

	if ( ! pFnUpdateRelicValues )
		pFnUpdateRelicValues = (UFunction*) UObject::GObjObjects()->GetIndex( 123834 );

	UTgGameDC_Device_execUpdateRelicValues_Parms UpdateRelicValues_Parms;
	UpdateRelicValues_Parms.Dev = Dev;

	pFnUpdateRelicValues->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateRelicValues, &UpdateRelicValues_Parms, NULL );

	pFnUpdateRelicValues->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.UpdateValues
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )

void UTgGameDC_Device::UpdateValues ( class ATgDevice* Dev )
{
	static UFunction* pFnUpdateValues = NULL;

	if ( ! pFnUpdateValues )
		pFnUpdateValues = (UFunction*) UObject::GObjObjects()->GetIndex( 123832 );

	UTgGameDC_Device_execUpdateValues_Parms UpdateValues_Parms;
	UpdateValues_Parms.Dev = Dev;

	pFnUpdateValues->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateValues, &UpdateValues_Parms, NULL );

	pFnUpdateValues->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.DeviceChangeEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )

void UTgGameDC_Device::DeviceChangeEvent ( class ATgDevice* Dev, unsigned char Event )
{
	static UFunction* pFnDeviceChangeEvent = NULL;

	if ( ! pFnDeviceChangeEvent )
		pFnDeviceChangeEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 123829 );

	UTgGameDC_Device_execDeviceChangeEvent_Parms DeviceChangeEvent_Parms;
	DeviceChangeEvent_Parms.Dev = Dev;
	DeviceChangeEvent_Parms.Event = Event;

	pFnDeviceChangeEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeviceChangeEvent, &DeviceChangeEvent_Parms, NULL );

	pFnDeviceChangeEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Device.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgGameDC_Device::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123826 );

	UTgGameDC_Device_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_DeviceList.SetEmpty
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  eSlot                          ( CPF_Parm )

void UTgGameDC_DeviceList::SetEmpty ( unsigned char eSlot )
{
	static UFunction* pFnSetEmpty = NULL;

	if ( ! pFnSetEmpty )
		pFnSetEmpty = (UFunction*) UObject::GObjObjects()->GetIndex( 123875 );

	UTgGameDC_DeviceList_execSetEmpty_Parms SetEmpty_Parms;
	SetEmpty_Parms.eSlot = eSlot;

	pFnSetEmpty->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetEmpty, &SetEmpty_Parms, NULL );

	pFnSetEmpty->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_DeviceList.UpdatePtsAlloc
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )

void UTgGameDC_DeviceList::UpdatePtsAlloc ( class ATgDevice* Dev )
{
	static UFunction* pFnUpdatePtsAlloc = NULL;

	if ( ! pFnUpdatePtsAlloc )
		pFnUpdatePtsAlloc = (UFunction*) UObject::GObjObjects()->GetIndex( 123873 );

	UTgGameDC_DeviceList_execUpdatePtsAlloc_Parms UpdatePtsAlloc_Parms;
	UpdatePtsAlloc_Parms.Dev = Dev;

	pFnUpdatePtsAlloc->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePtsAlloc, &UpdatePtsAlloc_Parms, NULL );

	pFnUpdatePtsAlloc->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_DeviceList.UpdateToggleState
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )

void UTgGameDC_DeviceList::UpdateToggleState ( class ATgDevice* Dev )
{
	static UFunction* pFnUpdateToggleState = NULL;

	if ( ! pFnUpdateToggleState )
		pFnUpdateToggleState = (UFunction*) UObject::GObjObjects()->GetIndex( 123871 );

	UTgGameDC_DeviceList_execUpdateToggleState_Parms UpdateToggleState_Parms;
	UpdateToggleState_Parms.Dev = Dev;

	pFnUpdateToggleState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateToggleState, &UpdateToggleState_Parms, NULL );

	pFnUpdateToggleState->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_DeviceList.UpdateSelected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )

void UTgGameDC_DeviceList::UpdateSelected ( class ATgDevice* Dev )
{
	static UFunction* pFnUpdateSelected = NULL;

	if ( ! pFnUpdateSelected )
		pFnUpdateSelected = (UFunction*) UObject::GObjObjects()->GetIndex( 123869 );

	UTgGameDC_DeviceList_execUpdateSelected_Parms UpdateSelected_Parms;
	UpdateSelected_Parms.Dev = Dev;

	pFnUpdateSelected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSelected, &UpdateSelected_Parms, NULL );

	pFnUpdateSelected->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_DeviceList.UpdateDevice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )

void UTgGameDC_DeviceList::UpdateDevice ( class ATgDevice* Dev )
{
	static UFunction* pFnUpdateDevice = NULL;

	if ( ! pFnUpdateDevice )
		pFnUpdateDevice = (UFunction*) UObject::GObjObjects()->GetIndex( 123867 );

	UTgGameDC_DeviceList_execUpdateDevice_Parms UpdateDevice_Parms;
	UpdateDevice_Parms.Dev = Dev;

	pFnUpdateDevice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateDevice, &UpdateDevice_Parms, NULL );

	pFnUpdateDevice->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_DeviceList.DeviceChangeEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgDevice*               Dev                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )

void UTgGameDC_DeviceList::DeviceChangeEvent ( class ATgDevice* Dev, unsigned char Event )
{
	static UFunction* pFnDeviceChangeEvent = NULL;

	if ( ! pFnDeviceChangeEvent )
		pFnDeviceChangeEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 123864 );

	UTgGameDC_DeviceList_execDeviceChangeEvent_Parms DeviceChangeEvent_Parms;
	DeviceChangeEvent_Parms.Dev = Dev;
	DeviceChangeEvent_Parms.Event = Event;

	pFnDeviceChangeEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeviceChangeEvent, &DeviceChangeEvent_Parms, NULL );

	pFnDeviceChangeEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_DeviceList.GetDeviceChunk
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameDC_Device*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATgDevice*               Dev                            ( CPF_Parm )

class UTgGameDC_Device* UTgGameDC_DeviceList::GetDeviceChunk ( class ATgDevice* Dev )
{
	static UFunction* pFnGetDeviceChunk = NULL;

	if ( ! pFnGetDeviceChunk )
		pFnGetDeviceChunk = (UFunction*) UObject::GObjObjects()->GetIndex( 123861 );

	UTgGameDC_DeviceList_execGetDeviceChunk_Parms GetDeviceChunk_Parms;
	GetDeviceChunk_Parms.Dev = Dev;

	pFnGetDeviceChunk->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDeviceChunk, &GetDeviceChunk_Parms, NULL );

	pFnGetDeviceChunk->FunctionFlags |= 0x400;

	return GetDeviceChunk_Parms.ReturnValue;
};

// Function TgClient.TgGameDC_DeviceList.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgGameDC_DeviceList::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123858 );

	UTgGameDC_DeviceList_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Effect.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_Effect::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123881 );

	UTgGameDC_Effect_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Effect.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgGameDC_Effect::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123878 );

	UTgGameDC_Effect_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_EffectList.UpdateEffects
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgEffectManager*        effectManager                  ( CPF_Parm )
// int                            indexChanged                   ( CPF_Parm )

void UTgGameDC_EffectList::UpdateEffects ( class ATgEffectManager* effectManager, int indexChanged )
{
	static UFunction* pFnUpdateEffects = NULL;

	if ( ! pFnUpdateEffects )
		pFnUpdateEffects = (UFunction*) UObject::GObjObjects()->GetIndex( 123887 );

	UTgGameDC_EffectList_execUpdateEffects_Parms UpdateEffects_Parms;
	UpdateEffects_Parms.effectManager = effectManager;
	UpdateEffects_Parms.indexChanged = indexChanged;

	pFnUpdateEffects->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateEffects, &UpdateEffects_Parms, NULL );

	pFnUpdateEffects->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_EffectList.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgGameDC_EffectList::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123884 );

	UTgGameDC_EffectList_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Game.UpdateRound
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nRound                         ( CPF_Parm )

void UTgGameDC_Game::UpdateRound ( int nRound )
{
	static UFunction* pFnUpdateRound = NULL;

	if ( ! pFnUpdateRound )
		pFnUpdateRound = (UFunction*) UObject::GObjObjects()->GetIndex( 123910 );

	UTgGameDC_Game_execUpdateRound_Parms UpdateRound_Parms;
	UpdateRound_Parms.nRound = nRound;

	pFnUpdateRound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateRound, &UpdateRound_Parms, NULL );

	pFnUpdateRound->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Game.UpdateEncounter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sRoundString                   ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameDC_Game::UpdateEncounter ( struct FString sRoundString )
{
	static UFunction* pFnUpdateEncounter = NULL;

	if ( ! pFnUpdateEncounter )
		pFnUpdateEncounter = (UFunction*) UObject::GObjObjects()->GetIndex( 123908 );

	UTgGameDC_Game_execUpdateEncounter_Parms UpdateEncounter_Parms;
	memcpy ( &UpdateEncounter_Parms.sRoundString, &sRoundString, 0xC );

	pFnUpdateEncounter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateEncounter, &UpdateEncounter_Parms, NULL );

	pFnUpdateEncounter->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Game.UpdateGameCapturePoint
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// int                            taskforce                      ( CPF_Parm )

void UTgGameDC_Game::UpdateGameCapturePoint ( int Index, int taskforce )
{
	static UFunction* pFnUpdateGameCapturePoint = NULL;

	if ( ! pFnUpdateGameCapturePoint )
		pFnUpdateGameCapturePoint = (UFunction*) UObject::GObjObjects()->GetIndex( 123905 );

	UTgGameDC_Game_execUpdateGameCapturePoint_Parms UpdateGameCapturePoint_Parms;
	UpdateGameCapturePoint_Parms.Index = Index;
	UpdateGameCapturePoint_Parms.taskforce = taskforce;

	pFnUpdateGameCapturePoint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateGameCapturePoint, &UpdateGameCapturePoint_Parms, NULL );

	pFnUpdateGameCapturePoint->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Game.UpdateGameClock
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_Game::UpdateGameClock ( )
{
	static UFunction* pFnUpdateGameClock = NULL;

	if ( ! pFnUpdateGameClock )
		pFnUpdateGameClock = (UFunction*) UObject::GObjObjects()->GetIndex( 123904 );

	UTgGameDC_Game_execUpdateGameClock_Parms UpdateGameClock_Parms;

	pFnUpdateGameClock->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateGameClock, &UpdateGameClock_Parms, NULL );

	pFnUpdateGameClock->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Game.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_Game::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123903 );

	UTgGameDC_Game_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Game.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgGameDC_Game::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123900 );

	UTgGameDC_Game_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_MapEntity.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_MapEntity::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123921 );

	UTgGameDC_MapEntity_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_MapEntity.UpdateMapPosition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 Location                       ( CPF_Parm )
// struct FRotator                Rotation                       ( CPF_Parm )

void UTgGameDC_MapEntity::UpdateMapPosition ( struct FVector Location, struct FRotator Rotation )
{
	static UFunction* pFnUpdateMapPosition = NULL;

	if ( ! pFnUpdateMapPosition )
		pFnUpdateMapPosition = (UFunction*) UObject::GObjObjects()->GetIndex( 123918 );

	UTgGameDC_MapEntity_execUpdateMapPosition_Parms UpdateMapPosition_Parms;
	memcpy ( &UpdateMapPosition_Parms.Location, &Location, 0xC );
	memcpy ( &UpdateMapPosition_Parms.Rotation, &Rotation, 0xC );

	pFnUpdateMapPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateMapPosition, &UpdateMapPosition_Parms, NULL );

	pFnUpdateMapPosition->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_MapEntity.UpdateActorMapPosition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AActor*                  gameActor                      ( CPF_Parm )

void UTgGameDC_MapEntity::UpdateActorMapPosition ( class AActor* gameActor )
{
	static UFunction* pFnUpdateActorMapPosition = NULL;

	if ( ! pFnUpdateActorMapPosition )
		pFnUpdateActorMapPosition = (UFunction*) UObject::GObjObjects()->GetIndex( 123916 );

	UTgGameDC_MapEntity_execUpdateActorMapPosition_Parms UpdateActorMapPosition_Parms;
	UpdateActorMapPosition_Parms.gameActor = gameActor;

	pFnUpdateActorMapPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateActorMapPosition, &UpdateActorMapPosition_Parms, NULL );

	pFnUpdateActorMapPosition->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_MapEntity.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgGameDC_MapEntity::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123913 );

	UTgGameDC_MapEntity_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Player.USC_ForceStatsUpdate
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_Player::USC_ForceStatsUpdate ( )
{
	static UFunction* pFnUSC_ForceStatsUpdate = NULL;

	if ( ! pFnUSC_ForceStatsUpdate )
		pFnUSC_ForceStatsUpdate = (UFunction*) UObject::GObjObjects()->GetIndex( 123945 );

	UTgGameDC_Player_execUSC_ForceStatsUpdate_Parms USC_ForceStatsUpdate_Parms;

	pFnUSC_ForceStatsUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ForceStatsUpdate, &USC_ForceStatsUpdate_Parms, NULL );

	pFnUSC_ForceStatsUpdate->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Player.USC_ForceStatsUpdate_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGameDC_Player::USC_ForceStatsUpdate_Delegate ( )
{
	static UFunction* pFnUSC_ForceStatsUpdate_Delegate = NULL;

	if ( ! pFnUSC_ForceStatsUpdate_Delegate )
		pFnUSC_ForceStatsUpdate_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123924 );

	UTgGameDC_Player_execUSC_ForceStatsUpdate_Delegate_Parms USC_ForceStatsUpdate_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_ForceStatsUpdate_Delegate, &USC_ForceStatsUpdate_Delegate_Parms, NULL );
};

// Function TgClient.TgGameDC_Player.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_Player::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123944 );

	UTgGameDC_Player_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Player.UpdateItemStoreItems
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgRepInfo_Player*       PRI                            ( CPF_Parm )

void UTgGameDC_Player::UpdateItemStoreItems ( class ATgRepInfo_Player* PRI )
{
	static UFunction* pFnUpdateItemStoreItems = NULL;

	if ( ! pFnUpdateItemStoreItems )
		pFnUpdateItemStoreItems = (UFunction*) UObject::GObjObjects()->GetIndex( 123942 );

	UTgGameDC_Player_execUpdateItemStoreItems_Parms UpdateItemStoreItems_Parms;
	UpdateItemStoreItems_Parms.PRI = PRI;

	pFnUpdateItemStoreItems->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateItemStoreItems, &UpdateItemStoreItems_Parms, NULL );

	pFnUpdateItemStoreItems->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Player.UpdateStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgPawn*                 changedPawn                    ( CPF_Parm )

void UTgGameDC_Player::UpdateStats ( class ATgPawn* changedPawn )
{
	static UFunction* pFnUpdateStats = NULL;

	if ( ! pFnUpdateStats )
		pFnUpdateStats = (UFunction*) UObject::GObjObjects()->GetIndex( 123940 );

	UTgGameDC_Player_execUpdateStats_Parms UpdateStats_Parms;
	UpdateStats_Parms.changedPawn = changedPawn;

	pFnUpdateStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateStats, &UpdateStats_Parms, NULL );

	pFnUpdateStats->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Player.UpdatePlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgRepInfo_Player*       PRI                            ( CPF_Parm )

void UTgGameDC_Player::UpdatePlayer ( class ATgRepInfo_Player* PRI )
{
	static UFunction* pFnUpdatePlayer = NULL;

	if ( ! pFnUpdatePlayer )
		pFnUpdatePlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 123938 );

	UTgGameDC_Player_execUpdatePlayer_Parms UpdatePlayer_Parms;
	UpdatePlayer_Parms.PRI = PRI;

	pFnUpdatePlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePlayer, &UpdatePlayer_Parms, NULL );

	pFnUpdatePlayer->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Player.SetDirty
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_Player::SetDirty ( )
{
	static UFunction* pFnSetDirty = NULL;

	if ( ! pFnSetDirty )
		pFnSetDirty = (UFunction*) UObject::GObjObjects()->GetIndex( 123937 );

	UTgGameDC_Player_execSetDirty_Parms SetDirty_Parms;

	pFnSetDirty->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDirty, &SetDirty_Parms, NULL );

	pFnSetDirty->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Player.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgGameDC_Player::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123934 );

	UTgGameDC_Player_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_LocalPlayer.UpdateCourierData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgPawn*                 Pawn                           ( CPF_Parm )

void UTgGameDC_LocalPlayer::UpdateCourierData ( class ATgPawn* Pawn )
{
	static UFunction* pFnUpdateCourierData = NULL;

	if ( ! pFnUpdateCourierData )
		pFnUpdateCourierData = (UFunction*) UObject::GObjObjects()->GetIndex( 123954 );

	UTgGameDC_LocalPlayer_execUpdateCourierData_Parms UpdateCourierData_Parms;
	UpdateCourierData_Parms.Pawn = Pawn;

	pFnUpdateCourierData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateCourierData, &UpdateCourierData_Parms, NULL );

	pFnUpdateCourierData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_LocalPlayer.UpdateSpectatorViewTarget
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameDC_MapEntity*     entity                         ( CPF_Parm )

void UTgGameDC_LocalPlayer::UpdateSpectatorViewTarget ( class UTgGameDC_MapEntity* entity )
{
	static UFunction* pFnUpdateSpectatorViewTarget = NULL;

	if ( ! pFnUpdateSpectatorViewTarget )
		pFnUpdateSpectatorViewTarget = (UFunction*) UObject::GObjObjects()->GetIndex( 123952 );

	UTgGameDC_LocalPlayer_execUpdateSpectatorViewTarget_Parms UpdateSpectatorViewTarget_Parms;
	UpdateSpectatorViewTarget_Parms.entity = entity;

	pFnUpdateSpectatorViewTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSpectatorViewTarget, &UpdateSpectatorViewTarget_Parms, NULL );

	pFnUpdateSpectatorViewTarget->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_LocalPlayer.SetVendorItemList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< int >                  nItemIds                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameDC_LocalPlayer::SetVendorItemList ( TArray< int > nItemIds )
{
	static UFunction* pFnSetVendorItemList = NULL;

	if ( ! pFnSetVendorItemList )
		pFnSetVendorItemList = (UFunction*) UObject::GObjObjects()->GetIndex( 123949 );

	UTgGameDC_LocalPlayer_execSetVendorItemList_Parms SetVendorItemList_Parms;
	memcpy ( &SetVendorItemList_Parms.nItemIds, &nItemIds, 0xC );

	pFnSetVendorItemList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVendorItemList, &SetVendorItemList_Parms, NULL );

	pFnSetVendorItemList->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_LocalPlayer.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgGameDC_LocalPlayer::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123946 );

	UTgGameDC_LocalPlayer_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_PlayerVitals.UpdateCoreStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_PlayerVitals::UpdateCoreStats ( )
{
	static UFunction* pFnUpdateCoreStats = NULL;

	if ( ! pFnUpdateCoreStats )
		pFnUpdateCoreStats = (UFunction*) UObject::GObjObjects()->GetIndex( 123964 );

	UTgGameDC_PlayerVitals_execUpdateCoreStats_Parms UpdateCoreStats_Parms;

	pFnUpdateCoreStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateCoreStats, &UpdateCoreStats_Parms, NULL );

	pFnUpdateCoreStats->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_PlayerVitals.UpdateDamageDone
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_PlayerVitals::UpdateDamageDone ( )
{
	static UFunction* pFnUpdateDamageDone = NULL;

	if ( ! pFnUpdateDamageDone )
		pFnUpdateDamageDone = (UFunction*) UObject::GObjObjects()->GetIndex( 123963 );

	UTgGameDC_PlayerVitals_execUpdateDamageDone_Parms UpdateDamageDone_Parms;

	pFnUpdateDamageDone->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateDamageDone, &UpdateDamageDone_Parms, NULL );

	pFnUpdateDamageDone->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_PlayerVitals.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_PlayerVitals::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123962 );

	UTgGameDC_PlayerVitals_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_PlayerVitals.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgGameDC_PlayerVitals::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123959 );

	UTgGameDC_PlayerVitals_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Tower.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgGameDC_Tower::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123996 );

	UTgGameDC_Tower_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Target.UpdateTarget
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  NewTarget                      ( CPF_Parm )
// unsigned long                  bHovered                       ( CPF_Parm )

bool UTgGameDC_Target::UpdateTarget ( class AActor* NewTarget, unsigned long bHovered )
{
	static UFunction* pFnUpdateTarget = NULL;

	if ( ! pFnUpdateTarget )
		pFnUpdateTarget = (UFunction*) UObject::GObjObjects()->GetIndex( 123968 );

	UTgGameDC_Target_execUpdateTarget_Parms UpdateTarget_Parms;
	UpdateTarget_Parms.NewTarget = NewTarget;
	UpdateTarget_Parms.bHovered = bHovered;

	pFnUpdateTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateTarget, &UpdateTarget_Parms, NULL );

	pFnUpdateTarget->FunctionFlags |= 0x400;

	return UpdateTarget_Parms.ReturnValue;
};

// Function TgClient.TgGameDC_Target.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgGameDC_Target::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123965 );

	UTgGameDC_Target_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Team.UpdateMembersTick
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_Team::UpdateMembersTick ( )
{
	static UFunction* pFnUpdateMembersTick = NULL;

	if ( ! pFnUpdateMembersTick )
		pFnUpdateMembersTick = (UFunction*) UObject::GObjObjects()->GetIndex( 123995 );

	UTgGameDC_Team_execUpdateMembersTick_Parms UpdateMembersTick_Parms;

	pFnUpdateMembersTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateMembersTick, &UpdateMembersTick_Parms, NULL );

	pFnUpdateMembersTick->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Team.UpdatePlayerSurrender
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATgRepInfo_Player*       PRI                            ( CPF_Parm )

bool UTgGameDC_Team::UpdatePlayerSurrender ( class ATgRepInfo_Player* PRI )
{
	static UFunction* pFnUpdatePlayerSurrender = NULL;

	if ( ! pFnUpdatePlayerSurrender )
		pFnUpdatePlayerSurrender = (UFunction*) UObject::GObjObjects()->GetIndex( 123992 );

	UTgGameDC_Team_execUpdatePlayerSurrender_Parms UpdatePlayerSurrender_Parms;
	UpdatePlayerSurrender_Parms.PRI = PRI;

	pFnUpdatePlayerSurrender->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePlayerSurrender, &UpdatePlayerSurrender_Parms, NULL );

	pFnUpdatePlayerSurrender->FunctionFlags |= 0x400;

	return UpdatePlayerSurrender_Parms.ReturnValue;
};

// Function TgClient.TgGameDC_Team.UpdatePlayerItemStoreItems
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATgRepInfo_Player*       PRI                            ( CPF_Parm )

bool UTgGameDC_Team::UpdatePlayerItemStoreItems ( class ATgRepInfo_Player* PRI )
{
	static UFunction* pFnUpdatePlayerItemStoreItems = NULL;

	if ( ! pFnUpdatePlayerItemStoreItems )
		pFnUpdatePlayerItemStoreItems = (UFunction*) UObject::GObjObjects()->GetIndex( 123989 );

	UTgGameDC_Team_execUpdatePlayerItemStoreItems_Parms UpdatePlayerItemStoreItems_Parms;
	UpdatePlayerItemStoreItems_Parms.PRI = PRI;

	pFnUpdatePlayerItemStoreItems->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePlayerItemStoreItems, &UpdatePlayerItemStoreItems_Parms, NULL );

	pFnUpdatePlayerItemStoreItems->FunctionFlags |= 0x400;

	return UpdatePlayerItemStoreItems_Parms.ReturnValue;
};

// Function TgClient.TgGameDC_Team.UpdatePlayerStat
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgPawn*                 changedPawn                    ( CPF_Parm )

void UTgGameDC_Team::UpdatePlayerStat ( class ATgPawn* changedPawn )
{
	static UFunction* pFnUpdatePlayerStat = NULL;

	if ( ! pFnUpdatePlayerStat )
		pFnUpdatePlayerStat = (UFunction*) UObject::GObjObjects()->GetIndex( 123987 );

	UTgGameDC_Team_execUpdatePlayerStat_Parms UpdatePlayerStat_Parms;
	UpdatePlayerStat_Parms.changedPawn = changedPawn;

	pFnUpdatePlayerStat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePlayerStat, &UpdatePlayerStat_Parms, NULL );

	pFnUpdatePlayerStat->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Team.UpdateMembers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgRepInfo_TaskForce*    tfri                           ( CPF_Parm )

void UTgGameDC_Team::UpdateMembers ( class ATgRepInfo_TaskForce* tfri )
{
	static UFunction* pFnUpdateMembers = NULL;

	if ( ! pFnUpdateMembers )
		pFnUpdateMembers = (UFunction*) UObject::GObjObjects()->GetIndex( 123985 );

	UTgGameDC_Team_execUpdateMembers_Parms UpdateMembers_Parms;
	UpdateMembers_Parms.tfri = tfri;

	pFnUpdateMembers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateMembers, &UpdateMembers_Parms, NULL );

	pFnUpdateMembers->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Team.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDC_Team::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123984 );

	UTgGameDC_Team_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDC_Team.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgGameDC_Team::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123981 );

	UTgGameDC_Team_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDataHandler.InitializeDataHandler
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          mp                             ( CPF_Parm )

void UTgGameDataHandler::InitializeDataHandler ( class UTgMoviePlayer* mp )
{
	static UFunction* pFnInitializeDataHandler = NULL;

	if ( ! pFnInitializeDataHandler )
		pFnInitializeDataHandler = (UFunction*) UObject::GObjObjects()->GetIndex( 123742 );

	UTgGameDataHandler_execInitializeDataHandler_Parms InitializeDataHandler_Parms;
	InitializeDataHandler_Parms.mp = mp;

	pFnInitializeDataHandler->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeDataHandler, &InitializeDataHandler_Parms, NULL );

	pFnInitializeDataHandler->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameHUDOverlay.ForceRebuildOverlays
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameHUDOverlay::ForceRebuildOverlays ( )
{
	static UFunction* pFnForceRebuildOverlays = NULL;

	if ( ! pFnForceRebuildOverlays )
		pFnForceRebuildOverlays = (UFunction*) UObject::GObjObjects()->GetIndex( 124258 );

	UTgGameHUDOverlay_execForceRebuildOverlays_Parms ForceRebuildOverlays_Parms;

	pFnForceRebuildOverlays->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnForceRebuildOverlays, &ForceRebuildOverlays_Parms, NULL );

	pFnForceRebuildOverlays->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChatInput.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxChatInput::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125744 );

	UTgGfxChatInput_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChatInput.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pMP                            ( CPF_Parm )

void UTgGfxChatInput::Initialize ( class UTgGameMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 125742 );

	UTgGfxChatInput_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChatInput.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxChatInput::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 125740 );

	UTgGfxChatInput_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudChat.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pMP                            ( CPF_Parm )

void UTgGfxHudChat::Initialize ( class UTgGameMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 126586 );

	UTgGfxHudChat_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudChat.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxHudChat::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 126584 );

	UTgGfxHudChat_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxVGS.usc_ForceInput
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Input                          ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxVGS::usc_ForceInput ( struct FString Input )
{
	static UFunction* pFnusc_ForceInput = NULL;

	if ( ! pFnusc_ForceInput )
		pFnusc_ForceInput = (UFunction*) UObject::GObjObjects()->GetIndex( 128094 );

	UTgGfxVGS_execusc_ForceInput_Parms usc_ForceInput_Parms;
	memcpy ( &usc_ForceInput_Parms.Input, &Input, 0xC );

	pFnusc_ForceInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_ForceInput, &usc_ForceInput_Parms, NULL );

	pFnusc_ForceInput->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxVGS.usc_ForceInput_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxVGS::usc_ForceInput_Delegate ( )
{
	static UFunction* pFnusc_ForceInput_Delegate = NULL;

	if ( ! pFnusc_ForceInput_Delegate )
		pFnusc_ForceInput_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 128083 );

	UTgGfxVGS_execusc_ForceInput_Delegate_Parms usc_ForceInput_Delegate_Parms;

	this->ProcessEvent ( pFnusc_ForceInput_Delegate, &usc_ForceInput_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxVGS.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameMoviePlayer*      pMP                            ( CPF_Parm )

void UTgGfxVGS::Initialize ( class UTgGameMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 128092 );

	UTgGfxVGS_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxVGS.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxVGS::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 128090 );

	UTgGfxVGS_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgMiniMap.CheckSpectatorState
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgMiniMap::eventCheckSpectatorState ( )
{
	static UFunction* pFnCheckSpectatorState = NULL;

	if ( ! pFnCheckSpectatorState )
		pFnCheckSpectatorState = (UFunction*) UObject::GObjObjects()->GetIndex( 128521 );

	UTgMiniMap_eventCheckSpectatorState_Parms CheckSpectatorState_Parms;

	this->ProcessEvent ( pFnCheckSpectatorState, &CheckSpectatorState_Parms, NULL );

	return CheckSpectatorState_Parms.ReturnValue;
};

// Function TgClient.TgMiniMap.UpdateMapSize
// [0x00020102] 
// Parameters infos:
// int                            newX                           ( CPF_Parm )

void UTgMiniMap::UpdateMapSize ( int newX )
{
	static UFunction* pFnUpdateMapSize = NULL;

	if ( ! pFnUpdateMapSize )
		pFnUpdateMapSize = (UFunction*) UObject::GObjObjects()->GetIndex( 128519 );

	UTgMiniMap_execUpdateMapSize_Parms UpdateMapSize_Parms;
	UpdateMapSize_Parms.newX = newX;

	this->ProcessEvent ( pFnUpdateMapSize, &UpdateMapSize_Parms, NULL );
};

// Function TgClient.TgMiniMap.UpdateMiniMapTexture
// [0x00020102] 
// Parameters infos:

void UTgMiniMap::UpdateMiniMapTexture ( )
{
	static UFunction* pFnUpdateMiniMapTexture = NULL;

	if ( ! pFnUpdateMiniMapTexture )
		pFnUpdateMiniMapTexture = (UFunction*) UObject::GObjObjects()->GetIndex( 128517 );

	UTgMiniMap_execUpdateMiniMapTexture_Parms UpdateMiniMapTexture_Parms;

	this->ProcessEvent ( pFnUpdateMiniMapTexture, &UpdateMiniMapTexture_Parms, NULL );
};

// Function TgClient.TgMiniMap.CreateMiniMapTexture
// [0x00020102] 
// Parameters infos:

void UTgMiniMap::CreateMiniMapTexture ( )
{
	static UFunction* pFnCreateMiniMapTexture = NULL;

	if ( ! pFnCreateMiniMapTexture )
		pFnCreateMiniMapTexture = (UFunction*) UObject::GObjObjects()->GetIndex( 128516 );

	UTgMiniMap_execCreateMiniMapTexture_Parms CreateMiniMapTexture_Parms;

	this->ProcessEvent ( pFnCreateMiniMapTexture, &CreateMiniMapTexture_Parms, NULL );
};

// Function TgClient.TgMiniMap.RemoveAllEntities
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgMiniMap::RemoveAllEntities ( )
{
	static UFunction* pFnRemoveAllEntities = NULL;

	if ( ! pFnRemoveAllEntities )
		pFnRemoveAllEntities = (UFunction*) UObject::GObjObjects()->GetIndex( 128515 );

	UTgMiniMap_execRemoveAllEntities_Parms RemoveAllEntities_Parms;

	pFnRemoveAllEntities->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveAllEntities, &RemoveAllEntities_Parms, NULL );

	pFnRemoveAllEntities->FunctionFlags |= 0x400;
};

// Function TgClient.TgMiniMap.VerifyMapLocation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )

bool UTgMiniMap::VerifyMapLocation ( float X, float Y )
{
	static UFunction* pFnVerifyMapLocation = NULL;

	if ( ! pFnVerifyMapLocation )
		pFnVerifyMapLocation = (UFunction*) UObject::GObjObjects()->GetIndex( 124159 );

	UTgMiniMap_execVerifyMapLocation_Parms VerifyMapLocation_Parms;
	VerifyMapLocation_Parms.X = X;
	VerifyMapLocation_Parms.Y = Y;

	pFnVerifyMapLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVerifyMapLocation, &VerifyMapLocation_Parms, NULL );

	pFnVerifyMapLocation->FunctionFlags |= 0x400;

	return VerifyMapLocation_Parms.ReturnValue;
};

// Function TgClient.TgMiniMap.GetRepInfosForLocation
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 mapLoc                         ( CPF_Parm )
// TArray< class AReplicationInfo* > repInfos                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UTgMiniMap::GetRepInfosForLocation ( struct FVector mapLoc, TArray< class AReplicationInfo* >* repInfos )
{
	static UFunction* pFnGetRepInfosForLocation = NULL;

	if ( ! pFnGetRepInfosForLocation )
		pFnGetRepInfosForLocation = (UFunction*) UObject::GObjObjects()->GetIndex( 128509 );

	UTgMiniMap_execGetRepInfosForLocation_Parms GetRepInfosForLocation_Parms;
	memcpy ( &GetRepInfosForLocation_Parms.mapLoc, &mapLoc, 0xC );

	pFnGetRepInfosForLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetRepInfosForLocation, &GetRepInfosForLocation_Parms, NULL );

	pFnGetRepInfosForLocation->FunctionFlags |= 0x400;

	if ( repInfos )
		memcpy ( repInfos, &GetRepInfosForLocation_Parms.repInfos, 0xC );
};

// Function TgClient.TgMiniMap.WorldToMap
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Loc                            ( CPF_Parm )

struct FVector UTgMiniMap::WorldToMap ( struct FVector Loc )
{
	static UFunction* pFnWorldToMap = NULL;

	if ( ! pFnWorldToMap )
		pFnWorldToMap = (UFunction*) UObject::GObjObjects()->GetIndex( 128506 );

	UTgMiniMap_execWorldToMap_Parms WorldToMap_Parms;
	memcpy ( &WorldToMap_Parms.Loc, &Loc, 0xC );

	pFnWorldToMap->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWorldToMap, &WorldToMap_Parms, NULL );

	pFnWorldToMap->FunctionFlags |= 0x400;

	return WorldToMap_Parms.ReturnValue;
};

// Function TgClient.TgMiniMap.MapToWorld
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Loc                            ( CPF_Parm )

struct FVector UTgMiniMap::MapToWorld ( struct FVector Loc )
{
	static UFunction* pFnMapToWorld = NULL;

	if ( ! pFnMapToWorld )
		pFnMapToWorld = (UFunction*) UObject::GObjObjects()->GetIndex( 124161 );

	UTgMiniMap_execMapToWorld_Parms MapToWorld_Parms;
	memcpy ( &MapToWorld_Parms.Loc, &Loc, 0xC );

	pFnMapToWorld->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMapToWorld, &MapToWorld_Parms, NULL );

	pFnMapToWorld->FunctionFlags |= 0x400;

	return MapToWorld_Parms.ReturnValue;
};

// Function TgClient.TgMiniMap.ClearHover
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgMiniMap::ClearHover ( )
{
	static UFunction* pFnClearHover = NULL;

	if ( ! pFnClearHover )
		pFnClearHover = (UFunction*) UObject::GObjObjects()->GetIndex( 128504 );

	UTgMiniMap_execClearHover_Parms ClearHover_Parms;

	pFnClearHover->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearHover, &ClearHover_Parms, NULL );

	pFnClearHover->FunctionFlags |= 0x400;
};

// Function TgClient.TgMiniMap.HoverMap
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )

void UTgMiniMap::HoverMap ( float X, float Y )
{
	static UFunction* pFnHoverMap = NULL;

	if ( ! pFnHoverMap )
		pFnHoverMap = (UFunction*) UObject::GObjObjects()->GetIndex( 128501 );

	UTgMiniMap_execHoverMap_Parms HoverMap_Parms;
	HoverMap_Parms.X = X;
	HoverMap_Parms.Y = Y;

	pFnHoverMap->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHoverMap, &HoverMap_Parms, NULL );

	pFnHoverMap->FunctionFlags |= 0x400;
};

// Function TgClient.TgMiniMap.PingMap
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// unsigned char                  Pt                             ( CPF_Parm )

void UTgMiniMap::PingMap ( float X, float Y, unsigned char Pt )
{
	static UFunction* pFnPingMap = NULL;

	if ( ! pFnPingMap )
		pFnPingMap = (UFunction*) UObject::GObjObjects()->GetIndex( 128497 );

	UTgMiniMap_execPingMap_Parms PingMap_Parms;
	PingMap_Parms.X = X;
	PingMap_Parms.Y = Y;
	PingMap_Parms.Pt = Pt;

	pFnPingMap->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPingMap, &PingMap_Parms, NULL );

	pFnPingMap->FunctionFlags |= 0x400;
};

// Function TgClient.TgMiniMap.ShouldRender
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgMiniMap::ShouldRender ( )
{
	static UFunction* pFnShouldRender = NULL;

	if ( ! pFnShouldRender )
		pFnShouldRender = (UFunction*) UObject::GObjObjects()->GetIndex( 124133 );

	UTgMiniMap_execShouldRender_Parms ShouldRender_Parms;

	pFnShouldRender->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldRender, &ShouldRender_Parms, NULL );

	pFnShouldRender->FunctionFlags |= 0x400;

	return ShouldRender_Parms.ReturnValue;
};

// Function TgClient.TgMiniMap.PingWorldLocation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 PingLocation                   ( CPF_Parm )
// unsigned char                  Pt                             ( CPF_Parm )

void UTgMiniMap::PingWorldLocation ( struct FVector PingLocation, unsigned char Pt )
{
	static UFunction* pFnPingWorldLocation = NULL;

	if ( ! pFnPingWorldLocation )
		pFnPingWorldLocation = (UFunction*) UObject::GObjObjects()->GetIndex( 128494 );

	UTgMiniMap_execPingWorldLocation_Parms PingWorldLocation_Parms;
	memcpy ( &PingWorldLocation_Parms.PingLocation, &PingLocation, 0xC );
	PingWorldLocation_Parms.Pt = Pt;

	pFnPingWorldLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPingWorldLocation, &PingWorldLocation_Parms, NULL );

	pFnPingWorldLocation->FunctionFlags |= 0x400;
};

// Function TgClient.TgMiniMap.Init
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class ATgPlayerController*     PC                             ( CPF_Parm )

void UTgMiniMap::Init ( class ATgPlayerController* PC )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->GetIndex( 128492 );

	UTgMiniMap_execInit_Parms Init_Parms;
	Init_Parms.PC = PC;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;
};

// Function TgClient.TgMiniMap.Draw
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UCanvas*                 theCanvas                      ( CPF_Parm )

void UTgMiniMap::Draw ( class UCanvas* theCanvas )
{
	static UFunction* pFnDraw = NULL;

	if ( ! pFnDraw )
		pFnDraw = (UFunction*) UObject::GObjObjects()->GetIndex( 128490 );

	UTgMiniMap_execDraw_Parms Draw_Parms;
	Draw_Parms.theCanvas = theCanvas;

	pFnDraw->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDraw, &Draw_Parms, NULL );

	pFnDraw->FunctionFlags |= 0x400;
};

// Function TgClient.TgMiniMap.Update
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgMiniMap::Update ( )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->GetIndex( 128489 );

	UTgMiniMap_execUpdate_Parms Update_Parms;

	pFnUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	pFnUpdate->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.DelegateGFxList
// [0x00120000] 
// Parameters infos:
// class UGFxObject*              List                           ( CPF_Parm )

void UTgGameMoviePlayer::DelegateGFxList ( class UGFxObject* List )
{
	static UFunction* pFnDelegateGFxList = NULL;

	if ( ! pFnDelegateGFxList )
		pFnDelegateGFxList = (UFunction*) UObject::GObjObjects()->GetIndex( 124482 );

	UTgGameMoviePlayer_execDelegateGFxList_Parms DelegateGFxList_Parms;
	DelegateGFxList_Parms.List = List;

	this->ProcessEvent ( pFnDelegateGFxList, &DelegateGFxList_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.CacheLoggedInGamepad
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGameMoviePlayer::eventCacheLoggedInGamepad ( )
{
	static UFunction* pFnCacheLoggedInGamepad = NULL;

	if ( ! pFnCacheLoggedInGamepad )
		pFnCacheLoggedInGamepad = (UFunction*) UObject::GObjObjects()->GetIndex( 125172 );

	UTgGameMoviePlayer_eventCacheLoggedInGamepad_Parms CacheLoggedInGamepad_Parms;

	this->ProcessEvent ( pFnCacheLoggedInGamepad, &CacheLoggedInGamepad_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.ShowConsoleLoginUI
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// unsigned long                  bForceLoginAfter               ( CPF_OptionalParm | CPF_Parm )

bool UTgGameMoviePlayer::eventShowConsoleLoginUI ( int ControllerId, unsigned long bForceLoginAfter )
{
	static UFunction* pFnShowConsoleLoginUI = NULL;

	if ( ! pFnShowConsoleLoginUI )
		pFnShowConsoleLoginUI = (UFunction*) UObject::GObjObjects()->GetIndex( 125167 );

	UTgGameMoviePlayer_eventShowConsoleLoginUI_Parms ShowConsoleLoginUI_Parms;
	ShowConsoleLoginUI_Parms.ControllerId = ControllerId;
	ShowConsoleLoginUI_Parms.bForceLoginAfter = bForceLoginAfter;

	this->ProcessEvent ( pFnShowConsoleLoginUI, &ShowConsoleLoginUI_Parms, NULL );

	return ShowConsoleLoginUI_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.ToggleAlienFX
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTgGameMoviePlayer::ToggleAlienFX ( )
{
	static UFunction* pFnToggleAlienFX = NULL;

	if ( ! pFnToggleAlienFX )
		pFnToggleAlienFX = (UFunction*) UObject::GObjObjects()->GetIndex( 125165 );

	UTgGameMoviePlayer_execToggleAlienFX_Parms ToggleAlienFX_Parms;

	this->ProcessEvent ( pFnToggleAlienFX, &ToggleAlienFX_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.usc_get_gamestate
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UTgGameMoviePlayer::usc_get_gamestate ( )
{
	static UFunction* pFnusc_get_gamestate = NULL;

	if ( ! pFnusc_get_gamestate )
		pFnusc_get_gamestate = (UFunction*) UObject::GObjObjects()->GetIndex( 125163 );

	UTgGameMoviePlayer_execusc_get_gamestate_Parms usc_get_gamestate_Parms;

	this->ProcessEvent ( pFnusc_get_gamestate, &usc_get_gamestate_Parms, NULL );

	return usc_get_gamestate_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_activate_key
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTgGameMoviePlayer::usc_activate_key ( )
{
	static UFunction* pFnusc_activate_key = NULL;

	if ( ! pFnusc_activate_key )
		pFnusc_activate_key = (UFunction*) UObject::GObjObjects()->GetIndex( 125162 );

	UTgGameMoviePlayer_execusc_activate_key_Parms usc_activate_key_Parms;

	this->ProcessEvent ( pFnusc_activate_key, &usc_activate_key_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.SetUISetting
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Setting                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::SetUISetting ( struct FString Setting, struct FString Value )
{
	static UFunction* pFnSetUISetting = NULL;

	if ( ! pFnSetUISetting )
		pFnSetUISetting = (UFunction*) UObject::GObjObjects()->GetIndex( 125159 );

	UTgGameMoviePlayer_execSetUISetting_Parms SetUISetting_Parms;
	memcpy ( &SetUISetting_Parms.Setting, &Setting, 0xC );
	memcpy ( &SetUISetting_Parms.Value, &Value, 0xC );

	this->ProcessEvent ( pFnSetUISetting, &SetUISetting_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.usc_minimap_hovered
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// struct FString                 MapName                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_minimap_hovered ( float X, float Y, struct FString MapName )
{
	static UFunction* pFnusc_minimap_hovered = NULL;

	if ( ! pFnusc_minimap_hovered )
		pFnusc_minimap_hovered = (UFunction*) UObject::GObjObjects()->GetIndex( 125154 );

	UTgGameMoviePlayer_execusc_minimap_hovered_Parms usc_minimap_hovered_Parms;
	usc_minimap_hovered_Parms.X = X;
	usc_minimap_hovered_Parms.Y = Y;
	memcpy ( &usc_minimap_hovered_Parms.MapName, &MapName, 0xC );

	this->ProcessEvent ( pFnusc_minimap_hovered, &usc_minimap_hovered_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.usc_minimap_pinged
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// struct FString                 Type                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 MapName                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_minimap_pinged ( float X, float Y, struct FString Type, struct FString MapName )
{
	static UFunction* pFnusc_minimap_pinged = NULL;

	if ( ! pFnusc_minimap_pinged )
		pFnusc_minimap_pinged = (UFunction*) UObject::GObjObjects()->GetIndex( 125148 );

	UTgGameMoviePlayer_execusc_minimap_pinged_Parms usc_minimap_pinged_Parms;
	usc_minimap_pinged_Parms.X = X;
	usc_minimap_pinged_Parms.Y = Y;
	memcpy ( &usc_minimap_pinged_Parms.Type, &Type, 0xC );
	memcpy ( &usc_minimap_pinged_Parms.MapName, &MapName, 0xC );

	this->ProcessEvent ( pFnusc_minimap_pinged, &usc_minimap_pinged_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.FlashCaptureKeyboard
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTgGameMoviePlayer::FlashCaptureKeyboard ( )
{
	static UFunction* pFnFlashCaptureKeyboard = NULL;

	if ( ! pFnFlashCaptureKeyboard )
		pFnFlashCaptureKeyboard = (UFunction*) UObject::GObjObjects()->GetIndex( 125147 );

	UTgGameMoviePlayer_execFlashCaptureKeyboard_Parms FlashCaptureKeyboard_Parms;

	this->ProcessEvent ( pFnFlashCaptureKeyboard, &FlashCaptureKeyboard_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.FlashReleaseKeyboard
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTgGameMoviePlayer::FlashReleaseKeyboard ( )
{
	static UFunction* pFnFlashReleaseKeyboard = NULL;

	if ( ! pFnFlashReleaseKeyboard )
		pFnFlashReleaseKeyboard = (UFunction*) UObject::GObjObjects()->GetIndex( 125146 );

	UTgGameMoviePlayer_execFlashReleaseKeyboard_Parms FlashReleaseKeyboard_Parms;

	this->ProcessEvent ( pFnFlashReleaseKeyboard, &FlashReleaseKeyboard_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.FlashCaptureMouse
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTgGameMoviePlayer::FlashCaptureMouse ( )
{
	static UFunction* pFnFlashCaptureMouse = NULL;

	if ( ! pFnFlashCaptureMouse )
		pFnFlashCaptureMouse = (UFunction*) UObject::GObjObjects()->GetIndex( 125145 );

	UTgGameMoviePlayer_execFlashCaptureMouse_Parms FlashCaptureMouse_Parms;

	this->ProcessEvent ( pFnFlashCaptureMouse, &FlashCaptureMouse_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.FlashReleaseMouse
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTgGameMoviePlayer::FlashReleaseMouse ( )
{
	static UFunction* pFnFlashReleaseMouse = NULL;

	if ( ! pFnFlashReleaseMouse )
		pFnFlashReleaseMouse = (UFunction*) UObject::GObjObjects()->GetIndex( 125144 );

	UTgGameMoviePlayer_execFlashReleaseMouse_Parms FlashReleaseMouse_Parms;

	this->ProcessEvent ( pFnFlashReleaseMouse, &FlashReleaseMouse_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.usc_rotate_lobby_model
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fValue                         ( CPF_Parm )

void UTgGameMoviePlayer::usc_rotate_lobby_model ( float fValue )
{
	static UFunction* pFnusc_rotate_lobby_model = NULL;

	if ( ! pFnusc_rotate_lobby_model )
		pFnusc_rotate_lobby_model = (UFunction*) UObject::GObjObjects()->GetIndex( 125141 );

	UTgGameMoviePlayer_execusc_rotate_lobby_model_Parms usc_rotate_lobby_model_Parms;
	usc_rotate_lobby_model_Parms.fValue = fValue;

	this->ProcessEvent ( pFnusc_rotate_lobby_model, &usc_rotate_lobby_model_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.ListOpenScenes
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTgGameMoviePlayer::ListOpenScenes ( )
{
	static UFunction* pFnListOpenScenes = NULL;

	if ( ! pFnListOpenScenes )
		pFnListOpenScenes = (UFunction*) UObject::GObjObjects()->GetIndex( 125140 );

	UTgGameMoviePlayer_execListOpenScenes_Parms ListOpenScenes_Parms;

	this->ProcessEvent ( pFnListOpenScenes, &ListOpenScenes_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.EnableItemWarningPopup
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTgGameMoviePlayer::EnableItemWarningPopup ( )
{
	static UFunction* pFnEnableItemWarningPopup = NULL;

	if ( ! pFnEnableItemWarningPopup )
		pFnEnableItemWarningPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 125139 );

	UTgGameMoviePlayer_execEnableItemWarningPopup_Parms EnableItemWarningPopup_Parms;

	this->ProcessEvent ( pFnEnableItemWarningPopup, &EnableItemWarningPopup_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.DisableItemWarningPopup
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTgGameMoviePlayer::DisableItemWarningPopup ( )
{
	static UFunction* pFnDisableItemWarningPopup = NULL;

	if ( ! pFnDisableItemWarningPopup )
		pFnDisableItemWarningPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 125138 );

	UTgGameMoviePlayer_execDisableItemWarningPopup_Parms DisableItemWarningPopup_Parms;

	this->ProcessEvent ( pFnDisableItemWarningPopup, &DisableItemWarningPopup_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.CloseAllScenes
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTgGameMoviePlayer::CloseAllScenes ( )
{
	static UFunction* pFnCloseAllScenes = NULL;

	if ( ! pFnCloseAllScenes )
		pFnCloseAllScenes = (UFunction*) UObject::GObjObjects()->GetIndex( 125135 );

	UTgGameMoviePlayer_execCloseAllScenes_Parms CloseAllScenes_Parms;

	this->ProcessEvent ( pFnCloseAllScenes, &CloseAllScenes_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.ClosePartyInviteDialog
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGameMoviePlayer::eventClosePartyInviteDialog ( )
{
	static UFunction* pFnClosePartyInviteDialog = NULL;

	if ( ! pFnClosePartyInviteDialog )
		pFnClosePartyInviteDialog = (UFunction*) UObject::GObjObjects()->GetIndex( 125134 );

	UTgGameMoviePlayer_eventClosePartyInviteDialog_Parms ClosePartyInviteDialog_Parms;

	this->ProcessEvent ( pFnClosePartyInviteDialog, &ClosePartyInviteDialog_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.CheckSpecialInput
// [0x00020002] 
// Parameters infos:
// class ATgPlayerController*     TgPC                           ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )

void UTgGameMoviePlayer::CheckSpecialInput ( class ATgPlayerController* TgPC, struct FName ButtonName, unsigned char Event )
{
	static UFunction* pFnCheckSpecialInput = NULL;

	if ( ! pFnCheckSpecialInput )
		pFnCheckSpecialInput = (UFunction*) UObject::GObjObjects()->GetIndex( 125130 );

	UTgGameMoviePlayer_execCheckSpecialInput_Parms CheckSpecialInput_Parms;
	CheckSpecialInput_Parms.TgPC = TgPC;
	memcpy ( &CheckSpecialInput_Parms.ButtonName, &ButtonName, 0x8 );
	CheckSpecialInput_Parms.Event = Event;

	this->ProcessEvent ( pFnCheckSpecialInput, &CheckSpecialInput_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.DisplayLoginUI
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGameMoviePlayer::eventDisplayLoginUI ( )
{
	static UFunction* pFnDisplayLoginUI = NULL;

	if ( ! pFnDisplayLoginUI )
		pFnDisplayLoginUI = (UFunction*) UObject::GObjObjects()->GetIndex( 125129 );

	UTgGameMoviePlayer_eventDisplayLoginUI_Parms DisplayLoginUI_Parms;

	this->ProcessEvent ( pFnDisplayLoginUI, &DisplayLoginUI_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.DisplayNormalUI
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGameMoviePlayer::eventDisplayNormalUI ( )
{
	static UFunction* pFnDisplayNormalUI = NULL;

	if ( ! pFnDisplayNormalUI )
		pFnDisplayNormalUI = (UFunction*) UObject::GObjObjects()->GetIndex( 125128 );

	UTgGameMoviePlayer_eventDisplayNormalUI_Parms DisplayNormalUI_Parms;

	this->ProcessEvent ( pFnDisplayNormalUI, &DisplayNormalUI_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.DisplayNewUserExperience
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGameMoviePlayer::eventDisplayNewUserExperience ( )
{
	static UFunction* pFnDisplayNewUserExperience = NULL;

	if ( ! pFnDisplayNewUserExperience )
		pFnDisplayNewUserExperience = (UFunction*) UObject::GObjObjects()->GetIndex( 125127 );

	UTgGameMoviePlayer_eventDisplayNewUserExperience_Parms DisplayNewUserExperience_Parms;

	this->ProcessEvent ( pFnDisplayNewUserExperience, &DisplayNewUserExperience_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.ShouldBlockKey
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )

bool UTgGameMoviePlayer::eventShouldBlockKey ( int ControllerId, struct FName ButtonName, unsigned char Event )
{
	static UFunction* pFnShouldBlockKey = NULL;

	if ( ! pFnShouldBlockKey )
		pFnShouldBlockKey = (UFunction*) UObject::GObjObjects()->GetIndex( 125120 );

	UTgGameMoviePlayer_eventShouldBlockKey_Parms ShouldBlockKey_Parms;
	ShouldBlockKey_Parms.ControllerId = ControllerId;
	memcpy ( &ShouldBlockKey_Parms.ButtonName, &ButtonName, 0x8 );
	ShouldBlockKey_Parms.Event = Event;

	this->ProcessEvent ( pFnShouldBlockKey, &ShouldBlockKey_Parms, NULL );

	return ShouldBlockKey_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.FilterButtonInput
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )

bool UTgGameMoviePlayer::eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char Event )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = (UFunction*) UObject::GObjObjects()->GetIndex( 125111 );

	UTgGameMoviePlayer_eventFilterButtonInput_Parms FilterButtonInput_Parms;
	FilterButtonInput_Parms.ControllerId = ControllerId;
	memcpy ( &FilterButtonInput_Parms.ButtonName, &ButtonName, 0x8 );
	FilterButtonInput_Parms.Event = Event;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );

	return FilterButtonInput_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.PostWidgetInit
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGameMoviePlayer::eventPostWidgetInit ( )
{
	static UFunction* pFnPostWidgetInit = NULL;

	if ( ! pFnPostWidgetInit )
		pFnPostWidgetInit = (UFunction*) UObject::GObjObjects()->GetIndex( 125110 );

	UTgGameMoviePlayer_eventPostWidgetInit_Parms PostWidgetInit_Parms;

	this->ProcessEvent ( pFnPostWidgetInit, &PostWidgetInit_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.WidgetUnloaded
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )
// struct FName                   WidgetPath                     ( CPF_Parm )
// class UGFxObject*              Widget                         ( CPF_Parm )

bool UTgGameMoviePlayer::eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget )
{
	static UFunction* pFnWidgetUnloaded = NULL;

	if ( ! pFnWidgetUnloaded )
		pFnWidgetUnloaded = (UFunction*) UObject::GObjObjects()->GetIndex( 125104 );

	UTgGameMoviePlayer_eventWidgetUnloaded_Parms WidgetUnloaded_Parms;
	memcpy ( &WidgetUnloaded_Parms.WidgetName, &WidgetName, 0x8 );
	memcpy ( &WidgetUnloaded_Parms.WidgetPath, &WidgetPath, 0x8 );
	WidgetUnloaded_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWidgetUnloaded, &WidgetUnloaded_Parms, NULL );

	return WidgetUnloaded_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.WidgetInitialized
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )
// struct FName                   WidgetPath                     ( CPF_Parm )
// class UGFxObject*              Widget                         ( CPF_Parm )

bool UTgGameMoviePlayer::eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget )
{
	static UFunction* pFnWidgetInitialized = NULL;

	if ( ! pFnWidgetInitialized )
		pFnWidgetInitialized = (UFunction*) UObject::GObjObjects()->GetIndex( 125097 );

	UTgGameMoviePlayer_eventWidgetInitialized_Parms WidgetInitialized_Parms;
	memcpy ( &WidgetInitialized_Parms.WidgetName, &WidgetName, 0x8 );
	memcpy ( &WidgetInitialized_Parms.WidgetPath, &WidgetPath, 0x8 );
	WidgetInitialized_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWidgetInitialized, &WidgetInitialized_Parms, NULL );

	return WidgetInitialized_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.Init
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class ULocalPlayer*            LocPlay                        ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::eventInit ( class ULocalPlayer* LocPlay )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->GetIndex( 125094 );

	UTgGameMoviePlayer_eventInit_Parms Init_Parms;
	Init_Parms.LocPlay = LocPlay;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.usc_ConfirmHudSkin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nId                            ( CPF_Parm )

bool UTgGameMoviePlayer::usc_ConfirmHudSkin ( int nId )
{
	static UFunction* pFnusc_ConfirmHudSkin = NULL;

	if ( ! pFnusc_ConfirmHudSkin )
		pFnusc_ConfirmHudSkin = (UFunction*) UObject::GObjObjects()->GetIndex( 125096 );

	UTgGameMoviePlayer_execusc_ConfirmHudSkin_Parms usc_ConfirmHudSkin_Parms;
	usc_ConfirmHudSkin_Parms.nId = nId;

	pFnusc_ConfirmHudSkin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_ConfirmHudSkin, &usc_ConfirmHudSkin_Parms, NULL );

	pFnusc_ConfirmHudSkin->FunctionFlags |= 0x400;

	return usc_ConfirmHudSkin_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_GetHudSkinPath
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UTgGameMoviePlayer::usc_GetHudSkinPath ( )
{
	static UFunction* pFnusc_GetHudSkinPath = NULL;

	if ( ! pFnusc_GetHudSkinPath )
		pFnusc_GetHudSkinPath = (UFunction*) UObject::GObjObjects()->GetIndex( 125175 );

	UTgGameMoviePlayer_execusc_GetHudSkinPath_Parms usc_GetHudSkinPath_Parms;

	pFnusc_GetHudSkinPath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_GetHudSkinPath, &usc_GetHudSkinPath_Parms, NULL );

	pFnusc_GetHudSkinPath->FunctionFlags |= 0x400;

	return usc_GetHudSkinPath_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.GetWidget
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )

class UGFxObject* UTgGameMoviePlayer::GetWidget ( struct FName WidgetName )
{
	static UFunction* pFnGetWidget = NULL;

	if ( ! pFnGetWidget )
		pFnGetWidget = (UFunction*) UObject::GObjObjects()->GetIndex( 125091 );

	UTgGameMoviePlayer_execGetWidget_Parms GetWidget_Parms;
	memcpy ( &GetWidget_Parms.WidgetName, &WidgetName, 0x8 );

	pFnGetWidget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetWidget, &GetWidget_Parms, NULL );

	pFnGetWidget->FunctionFlags |= 0x400;

	return GetWidget_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.ASC_SetRoleRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPlayerNetId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 roleAbrev                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::ASC_SetRoleRequest ( struct FString sPlayerNetId, struct FString roleAbrev )
{
	static UFunction* pFnASC_SetRoleRequest = NULL;

	if ( ! pFnASC_SetRoleRequest )
		pFnASC_SetRoleRequest = (UFunction*) UObject::GObjObjects()->GetIndex( 125088 );

	UTgGameMoviePlayer_execASC_SetRoleRequest_Parms ASC_SetRoleRequest_Parms;
	memcpy ( &ASC_SetRoleRequest_Parms.sPlayerNetId, &sPlayerNetId, 0xC );
	memcpy ( &ASC_SetRoleRequest_Parms.roleAbrev, &roleAbrev, 0xC );

	pFnASC_SetRoleRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnASC_SetRoleRequest, &ASC_SetRoleRequest_Parms, NULL );

	pFnASC_SetRoleRequest->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_redeem_login_bonus
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_redeem_login_bonus ( )
{
	static UFunction* pFnusc_redeem_login_bonus = NULL;

	if ( ! pFnusc_redeem_login_bonus )
		pFnusc_redeem_login_bonus = (UFunction*) UObject::GObjObjects()->GetIndex( 125087 );

	UTgGameMoviePlayer_execusc_redeem_login_bonus_Parms usc_redeem_login_bonus_Parms;

	pFnusc_redeem_login_bonus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_redeem_login_bonus, &usc_redeem_login_bonus_Parms, NULL );

	pFnusc_redeem_login_bonus->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.GetBrowserType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nURLType                       ( CPF_Parm )

bool UTgGameMoviePlayer::GetBrowserType ( int nURLType )
{
	static UFunction* pFnGetBrowserType = NULL;

	if ( ! pFnGetBrowserType )
		pFnGetBrowserType = (UFunction*) UObject::GObjObjects()->GetIndex( 125084 );

	UTgGameMoviePlayer_execGetBrowserType_Parms GetBrowserType_Parms;
	GetBrowserType_Parms.nURLType = nURLType;

	pFnGetBrowserType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBrowserType, &GetBrowserType_Parms, NULL );

	pFnGetBrowserType->FunctionFlags |= 0x400;

	return GetBrowserType_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_forceFlushActionLog
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_forceFlushActionLog ( )
{
	static UFunction* pFnusc_forceFlushActionLog = NULL;

	if ( ! pFnusc_forceFlushActionLog )
		pFnusc_forceFlushActionLog = (UFunction*) UObject::GObjObjects()->GetIndex( 125083 );

	UTgGameMoviePlayer_execusc_forceFlushActionLog_Parms usc_forceFlushActionLog_Parms;

	pFnusc_forceFlushActionLog->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_forceFlushActionLog, &usc_forceFlushActionLog_Parms, NULL );

	pFnusc_forceFlushActionLog->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.RequestPurchase
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nVendorId                      ( CPF_Parm )
// int                            nItemId                        ( CPF_Parm )
// int                            nPriceInUI                     ( CPF_Parm )
// int                            nCurrencyType                  ( CPF_Parm )
// int                            nQuantity                      ( CPF_Parm )
// struct Fdword                  locationId                     ( CPF_Parm )
// int                            nCouponId                      ( CPF_Parm )

void UTgGameMoviePlayer::RequestPurchase ( int nVendorId, int nItemId, int nPriceInUI, int nCurrencyType, int nQuantity, struct Fdword locationId, int nCouponId )
{
	static UFunction* pFnRequestPurchase = NULL;

	if ( ! pFnRequestPurchase )
		pFnRequestPurchase = (UFunction*) UObject::GObjObjects()->GetIndex( 125075 );

	UTgGameMoviePlayer_execRequestPurchase_Parms RequestPurchase_Parms;
	RequestPurchase_Parms.nVendorId = nVendorId;
	RequestPurchase_Parms.nItemId = nItemId;
	RequestPurchase_Parms.nPriceInUI = nPriceInUI;
	RequestPurchase_Parms.nCurrencyType = nCurrencyType;
	RequestPurchase_Parms.nQuantity = nQuantity;
	memcpy ( &RequestPurchase_Parms.locationId, &locationId, 0x4 );
	RequestPurchase_Parms.nCouponId = nCouponId;

	pFnRequestPurchase->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestPurchase, &RequestPurchase_Parms, NULL );

	pFnRequestPurchase->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.ToggleCombatLog
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::ToggleCombatLog ( )
{
	static UFunction* pFnToggleCombatLog = NULL;

	if ( ! pFnToggleCombatLog )
		pFnToggleCombatLog = (UFunction*) UObject::GObjObjects()->GetIndex( 125074 );

	UTgGameMoviePlayer_execToggleCombatLog_Parms ToggleCombatLog_Parms;

	pFnToggleCombatLog->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleCombatLog, &ToggleCombatLog_Parms, NULL );

	pFnToggleCombatLog->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.IsLandingPanelAvailable
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::IsLandingPanelAvailable ( )
{
	static UFunction* pFnIsLandingPanelAvailable = NULL;

	if ( ! pFnIsLandingPanelAvailable )
		pFnIsLandingPanelAvailable = (UFunction*) UObject::GObjObjects()->GetIndex( 125072 );

	UTgGameMoviePlayer_execIsLandingPanelAvailable_Parms IsLandingPanelAvailable_Parms;

	pFnIsLandingPanelAvailable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLandingPanelAvailable, &IsLandingPanelAvailable_Parms, NULL );

	pFnIsLandingPanelAvailable->FunctionFlags |= 0x400;

	return IsLandingPanelAvailable_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.SetHUDVisiblity
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::SetHUDVisiblity ( )
{
	static UFunction* pFnSetHUDVisiblity = NULL;

	if ( ! pFnSetHUDVisiblity )
		pFnSetHUDVisiblity = (UFunction*) UObject::GObjObjects()->GetIndex( 125071 );

	UTgGameMoviePlayer_execSetHUDVisiblity_Parms SetHUDVisiblity_Parms;

	pFnSetHUDVisiblity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHUDVisiblity, &SetHUDVisiblity_Parms, NULL );

	pFnSetHUDVisiblity->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.SetLanguage
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::SetLanguage ( )
{
	static UFunction* pFnSetLanguage = NULL;

	if ( ! pFnSetLanguage )
		pFnSetLanguage = (UFunction*) UObject::GObjObjects()->GetIndex( 125070 );

	UTgGameMoviePlayer_execSetLanguage_Parms SetLanguage_Parms;

	pFnSetLanguage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLanguage, &SetLanguage_Parms, NULL );

	pFnSetLanguage->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.GainFocus
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UTgGameMoviePlayer::eventGainFocus ( )
{
	static UFunction* pFnGainFocus = NULL;

	if ( ! pFnGainFocus )
		pFnGainFocus = (UFunction*) UObject::GObjObjects()->GetIndex( 125069 );

	UTgGameMoviePlayer_eventGainFocus_Parms GainFocus_Parms;

	this->ProcessEvent ( pFnGainFocus, &GainFocus_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.LostFocus
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UTgGameMoviePlayer::eventLostFocus ( )
{
	static UFunction* pFnLostFocus = NULL;

	if ( ! pFnLostFocus )
		pFnLostFocus = (UFunction*) UObject::GObjObjects()->GetIndex( 125067 );

	UTgGameMoviePlayer_eventLostFocus_Parms LostFocus_Parms;

	this->ProcessEvent ( pFnLostFocus, &LostFocus_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.ShowFacebookStream
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// unsigned long                  bShouldShow                    ( CPF_Parm )

void UTgGameMoviePlayer::eventShowFacebookStream ( unsigned long bShouldShow )
{
	static UFunction* pFnShowFacebookStream = NULL;

	if ( ! pFnShowFacebookStream )
		pFnShowFacebookStream = (UFunction*) UObject::GObjObjects()->GetIndex( 125068 );

	UTgGameMoviePlayer_eventShowFacebookStream_Parms ShowFacebookStream_Parms;
	ShowFacebookStream_Parms.bShouldShow = bShouldShow;

	this->ProcessEvent ( pFnShowFacebookStream, &ShowFacebookStream_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.HideNotification
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// int                            nType                          ( CPF_Parm )

void UTgGameMoviePlayer::eventHideNotification ( int nType )
{
	static UFunction* pFnHideNotification = NULL;

	if ( ! pFnHideNotification )
		pFnHideNotification = (UFunction*) UObject::GObjObjects()->GetIndex( 125061 );

	UTgGameMoviePlayer_eventHideNotification_Parms HideNotification_Parms;
	HideNotification_Parms.nType = nType;

	this->ProcessEvent ( pFnHideNotification, &HideNotification_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.ShowNotification
// [0x00024803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// int                            nType                          ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message2                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UGFxObject*              Data                           ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::eventShowNotification ( int nType, struct FString Message, struct FString Message2, class UGFxObject* Data )
{
	static UFunction* pFnShowNotification = NULL;

	if ( ! pFnShowNotification )
		pFnShowNotification = (UFunction*) UObject::GObjObjects()->GetIndex( 125059 );

	UTgGameMoviePlayer_eventShowNotification_Parms ShowNotification_Parms;
	ShowNotification_Parms.nType = nType;
	memcpy ( &ShowNotification_Parms.Message, &Message, 0xC );
	memcpy ( &ShowNotification_Parms.Message2, &Message2, 0xC );
	ShowNotification_Parms.Data = Data;

	this->ProcessEvent ( pFnShowNotification, &ShowNotification_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.TestHideNotification
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTgGameMoviePlayer::TestHideNotification ( )
{
	static UFunction* pFnTestHideNotification = NULL;

	if ( ! pFnTestHideNotification )
		pFnTestHideNotification = (UFunction*) UObject::GObjObjects()->GetIndex( 125060 );

	UTgGameMoviePlayer_execTestHideNotification_Parms TestHideNotification_Parms;

	this->ProcessEvent ( pFnTestHideNotification, &TestHideNotification_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.TestShowNotification
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTgGameMoviePlayer::TestShowNotification ( )
{
	static UFunction* pFnTestShowNotification = NULL;

	if ( ! pFnTestShowNotification )
		pFnTestShowNotification = (UFunction*) UObject::GObjObjects()->GetIndex( 125058 );

	UTgGameMoviePlayer_execTestShowNotification_Parms TestShowNotification_Parms;

	this->ProcessEvent ( pFnTestShowNotification, &TestShowNotification_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.GetTestNotificationData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGFxObject* UTgGameMoviePlayer::GetTestNotificationData ( )
{
	static UFunction* pFnGetTestNotificationData = NULL;

	if ( ! pFnGetTestNotificationData )
		pFnGetTestNotificationData = (UFunction*) UObject::GObjObjects()->GetIndex( 125056 );

	UTgGameMoviePlayer_execGetTestNotificationData_Parms GetTestNotificationData_Parms;

	pFnGetTestNotificationData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTestNotificationData, &GetTestNotificationData_Parms, NULL );

	pFnGetTestNotificationData->FunctionFlags |= 0x400;

	return GetTestNotificationData_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_get_ui_display_mode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UTgGameMoviePlayer::usc_get_ui_display_mode ( )
{
	static UFunction* pFnusc_get_ui_display_mode = NULL;

	if ( ! pFnusc_get_ui_display_mode )
		pFnusc_get_ui_display_mode = (UFunction*) UObject::GObjObjects()->GetIndex( 125054 );

	UTgGameMoviePlayer_execusc_get_ui_display_mode_Parms usc_get_ui_display_mode_Parms;

	this->ProcessEvent ( pFnusc_get_ui_display_mode, &usc_get_ui_display_mode_Parms, NULL );

	return usc_get_ui_display_mode_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.ShowLoginUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::ShowLoginUI ( )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->GetIndex( 125053 );

	UTgGameMoviePlayer_execShowLoginUI_Parms ShowLoginUI_Parms;

	pFnShowLoginUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	pFnShowLoginUI->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.ShowNormalUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::ShowNormalUI ( )
{
	static UFunction* pFnShowNormalUI = NULL;

	if ( ! pFnShowNormalUI )
		pFnShowNormalUI = (UFunction*) UObject::GObjObjects()->GetIndex( 125052 );

	UTgGameMoviePlayer_execShowNormalUI_Parms ShowNormalUI_Parms;

	pFnShowNormalUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowNormalUI, &ShowNormalUI_Parms, NULL );

	pFnShowNormalUI->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.ShowNewUserExperience
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::ShowNewUserExperience ( )
{
	static UFunction* pFnShowNewUserExperience = NULL;

	if ( ! pFnShowNewUserExperience )
		pFnShowNewUserExperience = (UFunction*) UObject::GObjObjects()->GetIndex( 125051 );

	UTgGameMoviePlayer_execShowNewUserExperience_Parms ShowNewUserExperience_Parms;

	pFnShowNewUserExperience->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowNewUserExperience, &ShowNewUserExperience_Parms, NULL );

	pFnShowNewUserExperience->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.SetUIDisplayMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            displayMode                    ( CPF_Parm )

bool UTgGameMoviePlayer::SetUIDisplayMode ( int displayMode )
{
	static UFunction* pFnSetUIDisplayMode = NULL;

	if ( ! pFnSetUIDisplayMode )
		pFnSetUIDisplayMode = (UFunction*) UObject::GObjObjects()->GetIndex( 125048 );

	UTgGameMoviePlayer_execSetUIDisplayMode_Parms SetUIDisplayMode_Parms;
	SetUIDisplayMode_Parms.displayMode = displayMode;

	pFnSetUIDisplayMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetUIDisplayMode, &SetUIDisplayMode_Parms, NULL );

	pFnSetUIDisplayMode->FunctionFlags |= 0x400;

	return SetUIDisplayMode_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.TestClearDeferBlacklist
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::TestClearDeferBlacklist ( )
{
	static UFunction* pFnTestClearDeferBlacklist = NULL;

	if ( ! pFnTestClearDeferBlacklist )
		pFnTestClearDeferBlacklist = (UFunction*) UObject::GObjObjects()->GetIndex( 125047 );

	UTgGameMoviePlayer_execTestClearDeferBlacklist_Parms TestClearDeferBlacklist_Parms;

	pFnTestClearDeferBlacklist->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTestClearDeferBlacklist, &TestClearDeferBlacklist_Parms, NULL );

	pFnTestClearDeferBlacklist->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.TestAddDeferBlacklistEntry
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            newEntry                       ( CPF_Parm )

bool UTgGameMoviePlayer::TestAddDeferBlacklistEntry ( int newEntry )
{
	static UFunction* pFnTestAddDeferBlacklistEntry = NULL;

	if ( ! pFnTestAddDeferBlacklistEntry )
		pFnTestAddDeferBlacklistEntry = (UFunction*) UObject::GObjObjects()->GetIndex( 125044 );

	UTgGameMoviePlayer_execTestAddDeferBlacklistEntry_Parms TestAddDeferBlacklistEntry_Parms;
	TestAddDeferBlacklistEntry_Parms.newEntry = newEntry;

	pFnTestAddDeferBlacklistEntry->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTestAddDeferBlacklistEntry, &TestAddDeferBlacklistEntry_Parms, NULL );

	pFnTestAddDeferBlacklistEntry->FunctionFlags |= 0x400;

	return TestAddDeferBlacklistEntry_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.TestDeferBlacklist
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bQueue                         ( CPF_Parm )

void UTgGameMoviePlayer::TestDeferBlacklist ( unsigned long bQueue )
{
	static UFunction* pFnTestDeferBlacklist = NULL;

	if ( ! pFnTestDeferBlacklist )
		pFnTestDeferBlacklist = (UFunction*) UObject::GObjObjects()->GetIndex( 125042 );

	UTgGameMoviePlayer_execTestDeferBlacklist_Parms TestDeferBlacklist_Parms;
	TestDeferBlacklist_Parms.bQueue = bQueue;

	pFnTestDeferBlacklist->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTestDeferBlacklist, &TestDeferBlacklist_Parms, NULL );

	pFnTestDeferBlacklist->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.TestPurchaseClanNameChange
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sTag                           ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::TestPurchaseClanNameChange ( struct FString sName, struct FString sTag )
{
	static UFunction* pFnTestPurchaseClanNameChange = NULL;

	if ( ! pFnTestPurchaseClanNameChange )
		pFnTestPurchaseClanNameChange = (UFunction*) UObject::GObjObjects()->GetIndex( 125039 );

	UTgGameMoviePlayer_execTestPurchaseClanNameChange_Parms TestPurchaseClanNameChange_Parms;
	memcpy ( &TestPurchaseClanNameChange_Parms.sName, &sName, 0xC );
	memcpy ( &TestPurchaseClanNameChange_Parms.sTag, &sTag, 0xC );

	pFnTestPurchaseClanNameChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTestPurchaseClanNameChange, &TestPurchaseClanNameChange_Parms, NULL );

	pFnTestPurchaseClanNameChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.TestSendPlayerTrackingEvent
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nEvent                         ( CPF_Parm )
// int                            nSubEvent                      ( CPF_Parm )
// struct FString                 sRefName                       ( CPF_Parm | CPF_NeedCtorLink )
// int                            nRefValue                      ( CPF_Parm )

void UTgGameMoviePlayer::TestSendPlayerTrackingEvent ( int nEvent, int nSubEvent, struct FString sRefName, int nRefValue )
{
	static UFunction* pFnTestSendPlayerTrackingEvent = NULL;

	if ( ! pFnTestSendPlayerTrackingEvent )
		pFnTestSendPlayerTrackingEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 125034 );

	UTgGameMoviePlayer_execTestSendPlayerTrackingEvent_Parms TestSendPlayerTrackingEvent_Parms;
	TestSendPlayerTrackingEvent_Parms.nEvent = nEvent;
	TestSendPlayerTrackingEvent_Parms.nSubEvent = nSubEvent;
	memcpy ( &TestSendPlayerTrackingEvent_Parms.sRefName, &sRefName, 0xC );
	TestSendPlayerTrackingEvent_Parms.nRefValue = nRefValue;

	pFnTestSendPlayerTrackingEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTestSendPlayerTrackingEvent, &TestSendPlayerTrackingEvent_Parms, NULL );

	pFnTestSendPlayerTrackingEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.TestShowPopupModal
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nType                          ( CPF_Parm )

void UTgGameMoviePlayer::TestShowPopupModal ( int nType )
{
	static UFunction* pFnTestShowPopupModal = NULL;

	if ( ! pFnTestShowPopupModal )
		pFnTestShowPopupModal = (UFunction*) UObject::GObjObjects()->GetIndex( 125032 );

	UTgGameMoviePlayer_execTestShowPopupModal_Parms TestShowPopupModal_Parms;
	TestShowPopupModal_Parms.nType = nType;

	pFnTestShowPopupModal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTestShowPopupModal, &TestShowPopupModal_Parms, NULL );

	pFnTestShowPopupModal->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.TestShowAcquisition
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nType                          ( CPF_Parm )
// int                            nIndex                         ( CPF_Parm )
// struct FString                 sHeader                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sFooter                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::TestShowAcquisition ( int nType, int nIndex, struct FString sHeader, struct FString sFooter )
{
	static UFunction* pFnTestShowAcquisition = NULL;

	if ( ! pFnTestShowAcquisition )
		pFnTestShowAcquisition = (UFunction*) UObject::GObjObjects()->GetIndex( 125027 );

	UTgGameMoviePlayer_execTestShowAcquisition_Parms TestShowAcquisition_Parms;
	TestShowAcquisition_Parms.nType = nType;
	TestShowAcquisition_Parms.nIndex = nIndex;
	memcpy ( &TestShowAcquisition_Parms.sHeader, &sHeader, 0xC );
	memcpy ( &TestShowAcquisition_Parms.sFooter, &sFooter, 0xC );

	pFnTestShowAcquisition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTestShowAcquisition, &TestShowAcquisition_Parms, NULL );

	pFnTestShowAcquisition->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.NativeTick
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UTgGameMoviePlayer::NativeTick ( float DeltaTime )
{
	static UFunction* pFnNativeTick = NULL;

	if ( ! pFnNativeTick )
		pFnNativeTick = (UFunction*) UObject::GObjObjects()->GetIndex( 125025 );

	UTgGameMoviePlayer_execNativeTick_Parms NativeTick_Parms;
	NativeTick_Parms.DeltaTime = DeltaTime;

	pFnNativeTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativeTick, &NativeTick_Parms, NULL );

	pFnNativeTick->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.OpenPurchaseGems
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 SKUCode                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::OpenPurchaseGems ( struct FString SKUCode )
{
	static UFunction* pFnOpenPurchaseGems = NULL;

	if ( ! pFnOpenPurchaseGems )
		pFnOpenPurchaseGems = (UFunction*) UObject::GObjObjects()->GetIndex( 125023 );

	UTgGameMoviePlayer_execOpenPurchaseGems_Parms OpenPurchaseGems_Parms;
	memcpy ( &OpenPurchaseGems_Parms.SKUCode, &SKUCode, 0xC );

	pFnOpenPurchaseGems->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenPurchaseGems, &OpenPurchaseGems_Parms, NULL );

	pFnOpenPurchaseGems->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.UpdateTutorialImage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Show                           ( CPF_Parm )
// int                            HeaderMsgId                    ( CPF_Parm )
// int                            ImageId                        ( CPF_Parm )
// int                            msgId                          ( CPF_Parm )

void UTgGameMoviePlayer::UpdateTutorialImage ( unsigned long Show, int HeaderMsgId, int ImageId, int msgId )
{
	static UFunction* pFnUpdateTutorialImage = NULL;

	if ( ! pFnUpdateTutorialImage )
		pFnUpdateTutorialImage = (UFunction*) UObject::GObjObjects()->GetIndex( 125018 );

	UTgGameMoviePlayer_execUpdateTutorialImage_Parms UpdateTutorialImage_Parms;
	UpdateTutorialImage_Parms.Show = Show;
	UpdateTutorialImage_Parms.HeaderMsgId = HeaderMsgId;
	UpdateTutorialImage_Parms.ImageId = ImageId;
	UpdateTutorialImage_Parms.msgId = msgId;

	pFnUpdateTutorialImage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateTutorialImage, &UpdateTutorialImage_Parms, NULL );

	pFnUpdateTutorialImage->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.HandleEscapeKey
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::HandleEscapeKey ( )
{
	static UFunction* pFnHandleEscapeKey = NULL;

	if ( ! pFnHandleEscapeKey )
		pFnHandleEscapeKey = (UFunction*) UObject::GObjObjects()->GetIndex( 125017 );

	UTgGameMoviePlayer_execHandleEscapeKey_Parms HandleEscapeKey_Parms;

	pFnHandleEscapeKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandleEscapeKey, &HandleEscapeKey_Parms, NULL );

	pFnHandleEscapeKey->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.PostInit
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::PostInit ( )
{
	static UFunction* pFnPostInit = NULL;

	if ( ! pFnPostInit )
		pFnPostInit = (UFunction*) UObject::GObjObjects()->GetIndex( 125016 );

	UTgGameMoviePlayer_execPostInit_Parms PostInit_Parms;

	pFnPostInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPostInit, &PostInit_Parms, NULL );

	pFnPostInit->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.UpdateQuestUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            Id                             ( CPF_OptionalParm | CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            Goal                           ( CPF_OptionalParm | CPF_Parm )
// int                            msgId                          ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::UpdateQuestUI ( int Id, int Count, int Goal, int msgId )
{
	static UFunction* pFnUpdateQuestUI = NULL;

	if ( ! pFnUpdateQuestUI )
		pFnUpdateQuestUI = (UFunction*) UObject::GObjObjects()->GetIndex( 125011 );

	UTgGameMoviePlayer_execUpdateQuestUI_Parms UpdateQuestUI_Parms;
	UpdateQuestUI_Parms.Id = Id;
	UpdateQuestUI_Parms.Count = Count;
	UpdateQuestUI_Parms.Goal = Goal;
	UpdateQuestUI_Parms.msgId = msgId;

	pFnUpdateQuestUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateQuestUI, &UpdateQuestUI_Parms, NULL );

	pFnUpdateQuestUI->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.UIChangeEvent
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class AActor*                  refActor                       ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )
// unsigned long                  bUnique                        ( CPF_OptionalParm | CPF_Parm )
// int                            subType                        ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::UIChangeEvent ( class AActor* refActor, unsigned char Event, unsigned long bUnique, int subType )
{
	static UFunction* pFnUIChangeEvent = NULL;

	if ( ! pFnUIChangeEvent )
		pFnUIChangeEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 125006 );

	UTgGameMoviePlayer_execUIChangeEvent_Parms UIChangeEvent_Parms;
	UIChangeEvent_Parms.refActor = refActor;
	UIChangeEvent_Parms.Event = Event;
	UIChangeEvent_Parms.bUnique = bUnique;
	UIChangeEvent_Parms.subType = subType;

	pFnUIChangeEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUIChangeEvent, &UIChangeEvent_Parms, NULL );

	pFnUIChangeEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_allowSpaceBar
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bAllow                         ( CPF_Parm )

void UTgGameMoviePlayer::usc_allowSpaceBar ( unsigned long bAllow )
{
	static UFunction* pFnusc_allowSpaceBar = NULL;

	if ( ! pFnusc_allowSpaceBar )
		pFnusc_allowSpaceBar = (UFunction*) UObject::GObjObjects()->GetIndex( 125004 );

	UTgGameMoviePlayer_execusc_allowSpaceBar_Parms usc_allowSpaceBar_Parms;
	usc_allowSpaceBar_Parms.bAllow = bAllow;

	pFnusc_allowSpaceBar->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_allowSpaceBar, &usc_allowSpaceBar_Parms, NULL );

	pFnusc_allowSpaceBar->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.SetSpecState
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 stateString                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::SetSpecState ( struct FString stateString )
{
	static UFunction* pFnSetSpecState = NULL;

	if ( ! pFnSetSpecState )
		pFnSetSpecState = (UFunction*) UObject::GObjObjects()->GetIndex( 125002 );

	UTgGameMoviePlayer_execSetSpecState_Parms SetSpecState_Parms;
	memcpy ( &SetSpecState_Parms.stateString, &stateString, 0xC );

	pFnSetSpecState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSpecState, &SetSpecState_Parms, NULL );

	pFnSetSpecState->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.SetSpecTeamName
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bEnemy                         ( CPF_Parm )
// struct FString                 TeamName                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::SetSpecTeamName ( unsigned long bEnemy, struct FString TeamName )
{
	static UFunction* pFnSetSpecTeamName = NULL;

	if ( ! pFnSetSpecTeamName )
		pFnSetSpecTeamName = (UFunction*) UObject::GObjObjects()->GetIndex( 124999 );

	UTgGameMoviePlayer_execSetSpecTeamName_Parms SetSpecTeamName_Parms;
	SetSpecTeamName_Parms.bEnemy = bEnemy;
	memcpy ( &SetSpecTeamName_Parms.TeamName, &TeamName, 0xC );

	pFnSetSpecTeamName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSpecTeamName, &SetSpecTeamName_Parms, NULL );

	pFnSetSpecTeamName->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.GetHUDTeamName
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned long                  bEnemy                         ( CPF_Parm )

struct FString UTgGameMoviePlayer::GetHUDTeamName ( unsigned long bEnemy )
{
	static UFunction* pFnGetHUDTeamName = NULL;

	if ( ! pFnGetHUDTeamName )
		pFnGetHUDTeamName = (UFunction*) UObject::GObjObjects()->GetIndex( 124996 );

	UTgGameMoviePlayer_execGetHUDTeamName_Parms GetHUDTeamName_Parms;
	GetHUDTeamName_Parms.bEnemy = bEnemy;

	pFnGetHUDTeamName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHUDTeamName, &GetHUDTeamName_Parms, NULL );

	pFnGetHUDTeamName->FunctionFlags |= 0x400;

	return GetHUDTeamName_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_getItemData
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ItemId                         ( CPF_Parm )
// int                            quantityCount                  ( CPF_OptionalParm | CPF_Parm )
// int                            vendorId                       ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UTgGameMoviePlayer::usc_getItemData ( int ItemId, int quantityCount, int vendorId )
{
	static UFunction* pFnusc_getItemData = NULL;

	if ( ! pFnusc_getItemData )
		pFnusc_getItemData = (UFunction*) UObject::GObjObjects()->GetIndex( 124991 );

	UTgGameMoviePlayer_execusc_getItemData_Parms usc_getItemData_Parms;
	usc_getItemData_Parms.ItemId = ItemId;
	usc_getItemData_Parms.quantityCount = quantityCount;
	usc_getItemData_Parms.vendorId = vendorId;

	pFnusc_getItemData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_getItemData, &usc_getItemData_Parms, NULL );

	pFnusc_getItemData->FunctionFlags |= 0x400;

	return usc_getItemData_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.OpenWorldScene
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 CameraName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::OpenWorldScene ( struct FString CameraName )
{
	static UFunction* pFnOpenWorldScene = NULL;

	if ( ! pFnOpenWorldScene )
		pFnOpenWorldScene = (UFunction*) UObject::GObjObjects()->GetIndex( 124989 );

	UTgGameMoviePlayer_execOpenWorldScene_Parms OpenWorldScene_Parms;
	memcpy ( &OpenWorldScene_Parms.CameraName, &CameraName, 0xC );

	pFnOpenWorldScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenWorldScene, &OpenWorldScene_Parms, NULL );

	pFnOpenWorldScene->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.SendCloseAllPopup
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::SendCloseAllPopup ( )
{
	static UFunction* pFnSendCloseAllPopup = NULL;

	if ( ! pFnSendCloseAllPopup )
		pFnSendCloseAllPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 124988 );

	UTgGameMoviePlayer_execSendCloseAllPopup_Parms SendCloseAllPopup_Parms;

	pFnSendCloseAllPopup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendCloseAllPopup, &SendCloseAllPopup_Parms, NULL );

	pFnSendCloseAllPopup->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_getPassiveMeterPath
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            BotID                          ( CPF_Parm )

struct FString UTgGameMoviePlayer::usc_getPassiveMeterPath ( int BotID )
{
	static UFunction* pFnusc_getPassiveMeterPath = NULL;

	if ( ! pFnusc_getPassiveMeterPath )
		pFnusc_getPassiveMeterPath = (UFunction*) UObject::GObjObjects()->GetIndex( 124985 );

	UTgGameMoviePlayer_execusc_getPassiveMeterPath_Parms usc_getPassiveMeterPath_Parms;
	usc_getPassiveMeterPath_Parms.BotID = BotID;

	pFnusc_getPassiveMeterPath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_getPassiveMeterPath, &usc_getPassiveMeterPath_Parms, NULL );

	pFnusc_getPassiveMeterPath->FunctionFlags |= 0x400;

	return usc_getPassiveMeterPath_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_isLoginReady
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_isLoginReady ( )
{
	static UFunction* pFnusc_isLoginReady = NULL;

	if ( ! pFnusc_isLoginReady )
		pFnusc_isLoginReady = (UFunction*) UObject::GObjObjects()->GetIndex( 124983 );

	UTgGameMoviePlayer_execusc_isLoginReady_Parms usc_isLoginReady_Parms;

	pFnusc_isLoginReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_isLoginReady, &usc_isLoginReady_Parms, NULL );

	pFnusc_isLoginReady->FunctionFlags |= 0x400;

	return usc_isLoginReady_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.SetLoginReady
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  fromIntro                      ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::SetLoginReady ( unsigned long fromIntro )
{
	static UFunction* pFnSetLoginReady = NULL;

	if ( ! pFnSetLoginReady )
		pFnSetLoginReady = (UFunction*) UObject::GObjObjects()->GetIndex( 124981 );

	UTgGameMoviePlayer_execSetLoginReady_Parms SetLoginReady_Parms;
	SetLoginReady_Parms.fromIntro = fromIntro;

	pFnSetLoginReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLoginReady, &SetLoginReady_Parms, NULL );

	pFnSetLoginReady->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.RunIntroMovie
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bRun                           ( CPF_Parm )

void UTgGameMoviePlayer::RunIntroMovie ( unsigned long bRun )
{
	static UFunction* pFnRunIntroMovie = NULL;

	if ( ! pFnRunIntroMovie )
		pFnRunIntroMovie = (UFunction*) UObject::GObjObjects()->GetIndex( 124979 );

	UTgGameMoviePlayer_execRunIntroMovie_Parms RunIntroMovie_Parms;
	RunIntroMovie_Parms.bRun = bRun;

	pFnRunIntroMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRunIntroMovie, &RunIntroMovie_Parms, NULL );

	pFnRunIntroMovie->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.GotoItem
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            nItemId                        ( CPF_Parm )
// int                            nReturnToTarget                ( CPF_OptionalParm | CPF_Parm )
// int                            nReturnToEvent                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUseAltRedirect                ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::GotoItem ( int nItemId, int nReturnToTarget, int nReturnToEvent, unsigned long bUseAltRedirect )
{
	static UFunction* pFnGotoItem = NULL;

	if ( ! pFnGotoItem )
		pFnGotoItem = (UFunction*) UObject::GObjObjects()->GetIndex( 124974 );

	UTgGameMoviePlayer_execGotoItem_Parms GotoItem_Parms;
	GotoItem_Parms.nItemId = nItemId;
	GotoItem_Parms.nReturnToTarget = nReturnToTarget;
	GotoItem_Parms.nReturnToEvent = nReturnToEvent;
	GotoItem_Parms.bUseAltRedirect = bUseAltRedirect;

	pFnGotoItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoItem, &GotoItem_Parms, NULL );

	pFnGotoItem->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.SetRoleRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 senderName                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            roleIndex                      ( CPF_Parm )

void UTgGameMoviePlayer::SetRoleRequest ( struct FString senderName, int roleIndex )
{
	static UFunction* pFnSetRoleRequest = NULL;

	if ( ! pFnSetRoleRequest )
		pFnSetRoleRequest = (UFunction*) UObject::GObjObjects()->GetIndex( 124971 );

	UTgGameMoviePlayer_execSetRoleRequest_Parms SetRoleRequest_Parms;
	memcpy ( &SetRoleRequest_Parms.senderName, &senderName, 0xC );
	SetRoleRequest_Parms.roleIndex = roleIndex;

	pFnSetRoleRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRoleRequest, &SetRoleRequest_Parms, NULL );

	pFnSetRoleRequest->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.AddRemoveDeferredChannelTab
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bAdd                           ( CPF_Parm )
// int                            nChannelId                     ( CPF_Parm )

void UTgGameMoviePlayer::AddRemoveDeferredChannelTab ( unsigned long bAdd, int nChannelId )
{
	static UFunction* pFnAddRemoveDeferredChannelTab = NULL;

	if ( ! pFnAddRemoveDeferredChannelTab )
		pFnAddRemoveDeferredChannelTab = (UFunction*) UObject::GObjObjects()->GetIndex( 124968 );

	UTgGameMoviePlayer_execAddRemoveDeferredChannelTab_Parms AddRemoveDeferredChannelTab_Parms;
	AddRemoveDeferredChannelTab_Parms.bAdd = bAdd;
	AddRemoveDeferredChannelTab_Parms.nChannelId = nChannelId;

	pFnAddRemoveDeferredChannelTab->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddRemoveDeferredChannelTab, &AddRemoveDeferredChannelTab_Parms, NULL );

	pFnAddRemoveDeferredChannelTab->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.HandleClanPlayerInviteUpdates
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FPointer                pEvent                         ( CPF_Parm )

void UTgGameMoviePlayer::HandleClanPlayerInviteUpdates ( struct FPointer pEvent )
{
	static UFunction* pFnHandleClanPlayerInviteUpdates = NULL;

	if ( ! pFnHandleClanPlayerInviteUpdates )
		pFnHandleClanPlayerInviteUpdates = (UFunction*) UObject::GObjObjects()->GetIndex( 124966 );

	UTgGameMoviePlayer_execHandleClanPlayerInviteUpdates_Parms HandleClanPlayerInviteUpdates_Parms;
	memcpy ( &HandleClanPlayerInviteUpdates_Parms.pEvent, &pEvent, 0x4 );

	pFnHandleClanPlayerInviteUpdates->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandleClanPlayerInviteUpdates, &HandleClanPlayerInviteUpdates_Parms, NULL );

	pFnHandleClanPlayerInviteUpdates->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.ShowPopupMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sTitle                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::ShowPopupMessage ( struct FString sTitle, struct FString sMessage )
{
	static UFunction* pFnShowPopupMessage = NULL;

	if ( ! pFnShowPopupMessage )
		pFnShowPopupMessage = (UFunction*) UObject::GObjObjects()->GetIndex( 124963 );

	UTgGameMoviePlayer_execShowPopupMessage_Parms ShowPopupMessage_Parms;
	memcpy ( &ShowPopupMessage_Parms.sTitle, &sTitle, 0xC );
	memcpy ( &ShowPopupMessage_Parms.sMessage, &sMessage, 0xC );

	pFnShowPopupMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPopupMessage, &ShowPopupMessage_Parms, NULL );

	pFnShowPopupMessage->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.USC_SelectedPopup
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nActionID                      ( CPF_Parm )
// struct FString                 sInputValue                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sSecondaryInputValue           ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::USC_SelectedPopup ( int nActionID, struct FString sInputValue, struct FString sSecondaryInputValue )
{
	static UFunction* pFnUSC_SelectedPopup = NULL;

	if ( ! pFnUSC_SelectedPopup )
		pFnUSC_SelectedPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 124959 );

	UTgGameMoviePlayer_execUSC_SelectedPopup_Parms USC_SelectedPopup_Parms;
	USC_SelectedPopup_Parms.nActionID = nActionID;
	memcpy ( &USC_SelectedPopup_Parms.sInputValue, &sInputValue, 0xC );
	memcpy ( &USC_SelectedPopup_Parms.sSecondaryInputValue, &sSecondaryInputValue, 0xC );

	pFnUSC_SelectedPopup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SelectedPopup, &USC_SelectedPopup_Parms, NULL );

	pFnUSC_SelectedPopup->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.AddInitialChatMessages
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::AddInitialChatMessages ( )
{
	static UFunction* pFnAddInitialChatMessages = NULL;

	if ( ! pFnAddInitialChatMessages )
		pFnAddInitialChatMessages = (UFunction*) UObject::GObjObjects()->GetIndex( 124958 );

	UTgGameMoviePlayer_execAddInitialChatMessages_Parms AddInitialChatMessages_Parms;

	pFnAddInitialChatMessages->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddInitialChatMessages, &AddInitialChatMessages_Parms, NULL );

	pFnAddInitialChatMessages->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.SendClosePopup
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::SendClosePopup ( )
{
	static UFunction* pFnSendClosePopup = NULL;

	if ( ! pFnSendClosePopup )
		pFnSendClosePopup = (UFunction*) UObject::GObjObjects()->GetIndex( 124957 );

	UTgGameMoviePlayer_execSendClosePopup_Parms SendClosePopup_Parms;

	pFnSendClosePopup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendClosePopup, &SendClosePopup_Parms, NULL );

	pFnSendClosePopup->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.SendOpenPopup
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgPagePopup*            pPopup                         ( CPF_Parm )

void UTgGameMoviePlayer::SendOpenPopup ( class UTgPagePopup* pPopup )
{
	static UFunction* pFnSendOpenPopup = NULL;

	if ( ! pFnSendOpenPopup )
		pFnSendOpenPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 124955 );

	UTgGameMoviePlayer_execSendOpenPopup_Parms SendOpenPopup_Parms;
	SendOpenPopup_Parms.pPopup = pPopup;

	pFnSendOpenPopup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendOpenPopup, &SendOpenPopup_Parms, NULL );

	pFnSendOpenPopup->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.CloseChatTab
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            nChannel                       ( CPF_Parm )
// struct FString                 sSender                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::CloseChatTab ( int nChannel, struct FString sSender )
{
	static UFunction* pFnCloseChatTab = NULL;

	if ( ! pFnCloseChatTab )
		pFnCloseChatTab = (UFunction*) UObject::GObjObjects()->GetIndex( 124952 );

	UTgGameMoviePlayer_execCloseChatTab_Parms CloseChatTab_Parms;
	CloseChatTab_Parms.nChannel = nChannel;
	memcpy ( &CloseChatTab_Parms.sSender, &sSender, 0xC );

	pFnCloseChatTab->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseChatTab, &CloseChatTab_Parms, NULL );

	pFnCloseChatTab->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.OpenChatTab
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            nChannel                       ( CPF_Parm )
// unsigned long                  bForce                         ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::OpenChatTab ( int nChannel, unsigned long bForce )
{
	static UFunction* pFnOpenChatTab = NULL;

	if ( ! pFnOpenChatTab )
		pFnOpenChatTab = (UFunction*) UObject::GObjObjects()->GetIndex( 124949 );

	UTgGameMoviePlayer_execOpenChatTab_Parms OpenChatTab_Parms;
	OpenChatTab_Parms.nChannel = nChannel;
	OpenChatTab_Parms.bForce = bForce;

	pFnOpenChatTab->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenChatTab, &OpenChatTab_Parms, NULL );

	pFnOpenChatTab->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.UpdateMapBackground
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::UpdateMapBackground ( )
{
	static UFunction* pFnUpdateMapBackground = NULL;

	if ( ! pFnUpdateMapBackground )
		pFnUpdateMapBackground = (UFunction*) UObject::GObjObjects()->GetIndex( 124948 );

	UTgGameMoviePlayer_execUpdateMapBackground_Parms UpdateMapBackground_Parms;

	pFnUpdateMapBackground->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateMapBackground, &UpdateMapBackground_Parms, NULL );

	pFnUpdateMapBackground->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.AttemptAutoReplayDemoRecording
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::AttemptAutoReplayDemoRecording ( )
{
	static UFunction* pFnAttemptAutoReplayDemoRecording = NULL;

	if ( ! pFnAttemptAutoReplayDemoRecording )
		pFnAttemptAutoReplayDemoRecording = (UFunction*) UObject::GObjObjects()->GetIndex( 124947 );

	UTgGameMoviePlayer_execAttemptAutoReplayDemoRecording_Parms AttemptAutoReplayDemoRecording_Parms;

	pFnAttemptAutoReplayDemoRecording->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAttemptAutoReplayDemoRecording, &AttemptAutoReplayDemoRecording_Parms, NULL );

	pFnAttemptAutoReplayDemoRecording->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.AttemptAutoLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::AttemptAutoLogin ( )
{
	static UFunction* pFnAttemptAutoLogin = NULL;

	if ( ! pFnAttemptAutoLogin )
		pFnAttemptAutoLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 124946 );

	UTgGameMoviePlayer_execAttemptAutoLogin_Parms AttemptAutoLogin_Parms;

	pFnAttemptAutoLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAttemptAutoLogin, &AttemptAutoLogin_Parms, NULL );

	pFnAttemptAutoLogin->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.GetCharacterBuilderData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameDC_Player*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTgGameDC_Player* UTgGameMoviePlayer::GetCharacterBuilderData ( )
{
	static UFunction* pFnGetCharacterBuilderData = NULL;

	if ( ! pFnGetCharacterBuilderData )
		pFnGetCharacterBuilderData = (UFunction*) UObject::GObjObjects()->GetIndex( 124944 );

	UTgGameMoviePlayer_execGetCharacterBuilderData_Parms GetCharacterBuilderData_Parms;

	pFnGetCharacterBuilderData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCharacterBuilderData, &GetCharacterBuilderData_Parms, NULL );

	pFnGetCharacterBuilderData->FunctionFlags |= 0x400;

	return GetCharacterBuilderData_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.GetClanData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataGroup_Clan*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTgDataGroup_Clan* UTgGameMoviePlayer::GetClanData ( )
{
	static UFunction* pFnGetClanData = NULL;

	if ( ! pFnGetClanData )
		pFnGetClanData = (UFunction*) UObject::GObjObjects()->GetIndex( 124942 );

	UTgGameMoviePlayer_execGetClanData_Parms GetClanData_Parms;

	pFnGetClanData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetClanData, &GetClanData_Parms, NULL );

	pFnGetClanData->FunctionFlags |= 0x400;

	return GetClanData_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.GetLobbyDataChunk
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgLobbyDC_Lobby*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTgLobbyDC_Lobby* UTgGameMoviePlayer::GetLobbyDataChunk ( )
{
	static UFunction* pFnGetLobbyDataChunk = NULL;

	if ( ! pFnGetLobbyDataChunk )
		pFnGetLobbyDataChunk = (UFunction*) UObject::GObjObjects()->GetIndex( 124940 );

	UTgGameMoviePlayer_execGetLobbyDataChunk_Parms GetLobbyDataChunk_Parms;

	pFnGetLobbyDataChunk->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLobbyDataChunk, &GetLobbyDataChunk_Parms, NULL );

	pFnGetLobbyDataChunk->FunctionFlags |= 0x400;

	return GetLobbyDataChunk_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.GetMatchDataChunk
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgLobbyDC_Match*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTgLobbyDC_Match* UTgGameMoviePlayer::GetMatchDataChunk ( )
{
	static UFunction* pFnGetMatchDataChunk = NULL;

	if ( ! pFnGetMatchDataChunk )
		pFnGetMatchDataChunk = (UFunction*) UObject::GObjObjects()->GetIndex( 124938 );

	UTgGameMoviePlayer_execGetMatchDataChunk_Parms GetMatchDataChunk_Parms;

	pFnGetMatchDataChunk->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMatchDataChunk, &GetMatchDataChunk_Parms, NULL );

	pFnGetMatchDataChunk->FunctionFlags |= 0x400;

	return GetMatchDataChunk_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.GetLobbyData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataGroup_Lobby*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTgDataGroup_Lobby* UTgGameMoviePlayer::GetLobbyData ( )
{
	static UFunction* pFnGetLobbyData = NULL;

	if ( ! pFnGetLobbyData )
		pFnGetLobbyData = (UFunction*) UObject::GObjObjects()->GetIndex( 124936 );

	UTgGameMoviePlayer_execGetLobbyData_Parms GetLobbyData_Parms;

	pFnGetLobbyData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLobbyData, &GetLobbyData_Parms, NULL );

	pFnGetLobbyData->FunctionFlags |= 0x400;

	return GetLobbyData_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.GetGameData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataGroup_Game*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTgDataGroup_Game* UTgGameMoviePlayer::GetGameData ( )
{
	static UFunction* pFnGetGameData = NULL;

	if ( ! pFnGetGameData )
		pFnGetGameData = (UFunction*) UObject::GObjObjects()->GetIndex( 124934 );

	UTgGameMoviePlayer_execGetGameData_Parms GetGameData_Parms;

	pFnGetGameData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGameData, &GetGameData_Parms, NULL );

	pFnGetGameData->FunctionFlags |= 0x400;

	return GetGameData_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.GetDataHandler
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgGameDataHandler*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTgGameDataHandler* UTgGameMoviePlayer::GetDataHandler ( )
{
	static UFunction* pFnGetDataHandler = NULL;

	if ( ! pFnGetDataHandler )
		pFnGetDataHandler = (UFunction*) UObject::GObjObjects()->GetIndex( 124932 );

	UTgGameMoviePlayer_execGetDataHandler_Parms GetDataHandler_Parms;

	pFnGetDataHandler->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDataHandler, &GetDataHandler_Parms, NULL );

	pFnGetDataHandler->FunctionFlags |= 0x400;

	return GetDataHandler_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.UnregisterWebPageRegion
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::UnregisterWebPageRegion ( struct FString sName )
{
	static UFunction* pFnUnregisterWebPageRegion = NULL;

	if ( ! pFnUnregisterWebPageRegion )
		pFnUnregisterWebPageRegion = (UFunction*) UObject::GObjObjects()->GetIndex( 124930 );

	UTgGameMoviePlayer_execUnregisterWebPageRegion_Parms UnregisterWebPageRegion_Parms;
	memcpy ( &UnregisterWebPageRegion_Parms.sName, &sName, 0xC );

	pFnUnregisterWebPageRegion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterWebPageRegion, &UnregisterWebPageRegion_Parms, NULL );

	pFnUnregisterWebPageRegion->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.RegisterWebPageRegion
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWidescreen                    ( CPF_Parm )
// int                            nStreamId                      ( CPF_Parm )
// struct FString                 sUrl                           ( CPF_Parm | CPF_NeedCtorLink )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          Height                         ( CPF_Parm )
// float                          realWidth                      ( CPF_Parm )
// float                          realHeight                     ( CPF_Parm )

int UTgGameMoviePlayer::RegisterWebPageRegion ( struct FString sName, unsigned long bWidescreen, int nStreamId, struct FString sUrl, float X, float Y, float Width, float Height, float realWidth, float realHeight )
{
	static UFunction* pFnRegisterWebPageRegion = NULL;

	if ( ! pFnRegisterWebPageRegion )
		pFnRegisterWebPageRegion = (UFunction*) UObject::GObjObjects()->GetIndex( 124917 );

	UTgGameMoviePlayer_execRegisterWebPageRegion_Parms RegisterWebPageRegion_Parms;
	memcpy ( &RegisterWebPageRegion_Parms.sName, &sName, 0xC );
	RegisterWebPageRegion_Parms.bWidescreen = bWidescreen;
	RegisterWebPageRegion_Parms.nStreamId = nStreamId;
	memcpy ( &RegisterWebPageRegion_Parms.sUrl, &sUrl, 0xC );
	RegisterWebPageRegion_Parms.X = X;
	RegisterWebPageRegion_Parms.Y = Y;
	RegisterWebPageRegion_Parms.Width = Width;
	RegisterWebPageRegion_Parms.Height = Height;
	RegisterWebPageRegion_Parms.realWidth = realWidth;
	RegisterWebPageRegion_Parms.realHeight = realHeight;

	pFnRegisterWebPageRegion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterWebPageRegion, &RegisterWebPageRegion_Parms, NULL );

	pFnRegisterWebPageRegion->FunctionFlags |= 0x400;

	return RegisterWebPageRegion_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.USC_OpenExternalBrowser
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 externalURL                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::USC_OpenExternalBrowser ( struct FString externalURL )
{
	static UFunction* pFnUSC_OpenExternalBrowser = NULL;

	if ( ! pFnUSC_OpenExternalBrowser )
		pFnUSC_OpenExternalBrowser = (UFunction*) UObject::GObjObjects()->GetIndex( 124929 );

	UTgGameMoviePlayer_execUSC_OpenExternalBrowser_Parms USC_OpenExternalBrowser_Parms;
	memcpy ( &USC_OpenExternalBrowser_Parms.externalURL, &externalURL, 0xC );

	pFnUSC_OpenExternalBrowser->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OpenExternalBrowser, &USC_OpenExternalBrowser_Parms, NULL );

	pFnUSC_OpenExternalBrowser->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_UnregisterCardTexture
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// class UGFxObject*              Widget                         ( CPF_Parm )

void UTgGameMoviePlayer::usc_UnregisterCardTexture ( class UGFxObject* Widget )
{
	static UFunction* pFnusc_UnregisterCardTexture = NULL;

	if ( ! pFnusc_UnregisterCardTexture )
		pFnusc_UnregisterCardTexture = (UFunction*) UObject::GObjObjects()->GetIndex( 124915 );

	UTgGameMoviePlayer_execusc_UnregisterCardTexture_Parms usc_UnregisterCardTexture_Parms;
	usc_UnregisterCardTexture_Parms.Widget = Widget;

	pFnusc_UnregisterCardTexture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UnregisterCardTexture, &usc_UnregisterCardTexture_Parms, NULL );

	pFnusc_UnregisterCardTexture->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_RegisterCardTexture
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// class UGFxObject*              Widget                         ( CPF_Parm )
// int                            nItemId                        ( CPF_Parm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          Height                         ( CPF_Parm )

void UTgGameMoviePlayer::usc_RegisterCardTexture ( class UGFxObject* Widget, int nItemId, float X, float Y, float Width, float Height )
{
	static UFunction* pFnusc_RegisterCardTexture = NULL;

	if ( ! pFnusc_RegisterCardTexture )
		pFnusc_RegisterCardTexture = (UFunction*) UObject::GObjObjects()->GetIndex( 124908 );

	UTgGameMoviePlayer_execusc_RegisterCardTexture_Parms usc_RegisterCardTexture_Parms;
	usc_RegisterCardTexture_Parms.Widget = Widget;
	usc_RegisterCardTexture_Parms.nItemId = nItemId;
	usc_RegisterCardTexture_Parms.X = X;
	usc_RegisterCardTexture_Parms.Y = Y;
	usc_RegisterCardTexture_Parms.Width = Width;
	usc_RegisterCardTexture_Parms.Height = Height;

	pFnusc_RegisterCardTexture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_RegisterCardTexture, &usc_RegisterCardTexture_Parms, NULL );

	pFnusc_RegisterCardTexture->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.GetFeedback
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nType                          ( CPF_Parm )

void UTgGameMoviePlayer::GetFeedback ( int nType )
{
	static UFunction* pFnGetFeedback = NULL;

	if ( ! pFnGetFeedback )
		pFnGetFeedback = (UFunction*) UObject::GObjObjects()->GetIndex( 124906 );

	UTgGameMoviePlayer_execGetFeedback_Parms GetFeedback_Parms;
	GetFeedback_Parms.nType = nType;

	pFnGetFeedback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFeedback, &GetFeedback_Parms, NULL );

	pFnGetFeedback->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_onServerStabilityFeedback
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_onServerStabilityFeedback ( )
{
	static UFunction* pFnusc_onServerStabilityFeedback = NULL;

	if ( ! pFnusc_onServerStabilityFeedback )
		pFnusc_onServerStabilityFeedback = (UFunction*) UObject::GObjObjects()->GetIndex( 124905 );

	UTgGameMoviePlayer_execusc_onServerStabilityFeedback_Parms usc_onServerStabilityFeedback_Parms;

	pFnusc_onServerStabilityFeedback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_onServerStabilityFeedback, &usc_onServerStabilityFeedback_Parms, NULL );

	pFnusc_onServerStabilityFeedback->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.is_item_owned
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ItemId                         ( CPF_Parm )

bool UTgGameMoviePlayer::is_item_owned ( int ItemId )
{
	static UFunction* pFnis_item_owned = NULL;

	if ( ! pFnis_item_owned )
		pFnis_item_owned = (UFunction*) UObject::GObjObjects()->GetIndex( 124902 );

	UTgGameMoviePlayer_execis_item_owned_Parms is_item_owned_Parms;
	is_item_owned_Parms.ItemId = ItemId;

	pFnis_item_owned->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnis_item_owned, &is_item_owned_Parms, NULL );

	pFnis_item_owned->FunctionFlags |= 0x400;

	return is_item_owned_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_is_item_owned
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ItemId                         ( CPF_Parm | CPF_NeedCtorLink )

bool UTgGameMoviePlayer::usc_is_item_owned ( struct FString ItemId )
{
	static UFunction* pFnusc_is_item_owned = NULL;

	if ( ! pFnusc_is_item_owned )
		pFnusc_is_item_owned = (UFunction*) UObject::GObjObjects()->GetIndex( 124899 );

	UTgGameMoviePlayer_execusc_is_item_owned_Parms usc_is_item_owned_Parms;
	memcpy ( &usc_is_item_owned_Parms.ItemId, &ItemId, 0xC );

	pFnusc_is_item_owned->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_is_item_owned, &usc_is_item_owned_Parms, NULL );

	pFnusc_is_item_owned->FunctionFlags |= 0x400;

	return usc_is_item_owned_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_is_time_between
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Start                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 End                            ( CPF_Parm | CPF_NeedCtorLink )

bool UTgGameMoviePlayer::usc_is_time_between ( struct FString Start, struct FString End )
{
	static UFunction* pFnusc_is_time_between = NULL;

	if ( ! pFnusc_is_time_between )
		pFnusc_is_time_between = (UFunction*) UObject::GObjObjects()->GetIndex( 124895 );

	UTgGameMoviePlayer_execusc_is_time_between_Parms usc_is_time_between_Parms;
	memcpy ( &usc_is_time_between_Parms.Start, &Start, 0xC );
	memcpy ( &usc_is_time_between_Parms.End, &End, 0xC );

	pFnusc_is_time_between->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_is_time_between, &usc_is_time_between_Parms, NULL );

	pFnusc_is_time_between->FunctionFlags |= 0x400;

	return usc_is_time_between_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_unregister_mouse_region
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_unregister_mouse_region ( struct FString Key )
{
	static UFunction* pFnusc_unregister_mouse_region = NULL;

	if ( ! pFnusc_unregister_mouse_region )
		pFnusc_unregister_mouse_region = (UFunction*) UObject::GObjObjects()->GetIndex( 124893 );

	UTgGameMoviePlayer_execusc_unregister_mouse_region_Parms usc_unregister_mouse_region_Parms;
	memcpy ( &usc_unregister_mouse_region_Parms.Key, &Key, 0xC );

	pFnusc_unregister_mouse_region->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_unregister_mouse_region, &usc_unregister_mouse_region_Parms, NULL );

	pFnusc_unregister_mouse_region->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_register_mouse_region
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )
// int                            X                              ( CPF_Parm )
// int                            Y                              ( CPF_Parm )
// int                            Width                          ( CPF_Parm )
// int                            Height                         ( CPF_Parm )

void UTgGameMoviePlayer::usc_register_mouse_region ( struct FString Key, int X, int Y, int Width, int Height )
{
	static UFunction* pFnusc_register_mouse_region = NULL;

	if ( ! pFnusc_register_mouse_region )
		pFnusc_register_mouse_region = (UFunction*) UObject::GObjObjects()->GetIndex( 124887 );

	UTgGameMoviePlayer_execusc_register_mouse_region_Parms usc_register_mouse_region_Parms;
	memcpy ( &usc_register_mouse_region_Parms.Key, &Key, 0xC );
	usc_register_mouse_region_Parms.X = X;
	usc_register_mouse_region_Parms.Y = Y;
	usc_register_mouse_region_Parms.Width = Width;
	usc_register_mouse_region_Parms.Height = Height;

	pFnusc_register_mouse_region->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_register_mouse_region, &usc_register_mouse_region_Parms, NULL );

	pFnusc_register_mouse_region->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_is_in_game
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_is_in_game ( )
{
	static UFunction* pFnusc_is_in_game = NULL;

	if ( ! pFnusc_is_in_game )
		pFnusc_is_in_game = (UFunction*) UObject::GObjObjects()->GetIndex( 124885 );

	UTgGameMoviePlayer_execusc_is_in_game_Parms usc_is_in_game_Parms;

	pFnusc_is_in_game->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_is_in_game, &usc_is_in_game_Parms, NULL );

	pFnusc_is_in_game->FunctionFlags |= 0x400;

	return usc_is_in_game_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_GetRentedTimeLeft
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nItemId                        ( CPF_Parm )
// int                            nIdType                        ( CPF_OptionalParm | CPF_Parm )

int UTgGameMoviePlayer::usc_GetRentedTimeLeft ( int nItemId, int nIdType )
{
	static UFunction* pFnusc_GetRentedTimeLeft = NULL;

	if ( ! pFnusc_GetRentedTimeLeft )
		pFnusc_GetRentedTimeLeft = (UFunction*) UObject::GObjObjects()->GetIndex( 124881 );

	UTgGameMoviePlayer_execusc_GetRentedTimeLeft_Parms usc_GetRentedTimeLeft_Parms;
	usc_GetRentedTimeLeft_Parms.nItemId = nItemId;
	usc_GetRentedTimeLeft_Parms.nIdType = nIdType;

	pFnusc_GetRentedTimeLeft->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_GetRentedTimeLeft, &usc_GetRentedTimeLeft_Parms, NULL );

	pFnusc_GetRentedTimeLeft->FunctionFlags |= 0x400;

	return usc_GetRentedTimeLeft_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.ShowGodPackPurchase
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::ShowGodPackPurchase ( )
{
	static UFunction* pFnShowGodPackPurchase = NULL;

	if ( ! pFnShowGodPackPurchase )
		pFnShowGodPackPurchase = (UFunction*) UObject::GObjObjects()->GetIndex( 124880 );

	UTgGameMoviePlayer_execShowGodPackPurchase_Parms ShowGodPackPurchase_Parms;

	pFnShowGodPackPurchase->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowGodPackPurchase, &ShowGodPackPurchase_Parms, NULL );

	pFnShowGodPackPurchase->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_quit
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_quit ( )
{
	static UFunction* pFnusc_quit = NULL;

	if ( ! pFnusc_quit )
		pFnusc_quit = (UFunction*) UObject::GObjObjects()->GetIndex( 124879 );

	UTgGameMoviePlayer_execusc_quit_Parms usc_quit_Parms;

	pFnusc_quit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_quit, &usc_quit_Parms, NULL );

	pFnusc_quit->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_request_goto_lobby
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 Title                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Desc                           ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_request_goto_lobby ( struct FString Title, struct FString Desc )
{
	static UFunction* pFnusc_request_goto_lobby = NULL;

	if ( ! pFnusc_request_goto_lobby )
		pFnusc_request_goto_lobby = (UFunction*) UObject::GObjObjects()->GetIndex( 124876 );

	UTgGameMoviePlayer_execusc_request_goto_lobby_Parms usc_request_goto_lobby_Parms;
	memcpy ( &usc_request_goto_lobby_Parms.Title, &Title, 0xC );
	memcpy ( &usc_request_goto_lobby_Parms.Desc, &Desc, 0xC );

	pFnusc_request_goto_lobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_request_goto_lobby, &usc_request_goto_lobby_Parms, NULL );

	pFnusc_request_goto_lobby->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_request_quit
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 Title                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Desc                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_request_quit ( struct FString Title, struct FString Desc )
{
	static UFunction* pFnusc_request_quit = NULL;

	if ( ! pFnusc_request_quit )
		pFnusc_request_quit = (UFunction*) UObject::GObjObjects()->GetIndex( 124873 );

	UTgGameMoviePlayer_execusc_request_quit_Parms usc_request_quit_Parms;
	memcpy ( &usc_request_quit_Parms.Title, &Title, 0xC );
	memcpy ( &usc_request_quit_Parms.Desc, &Desc, 0xC );

	pFnusc_request_quit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_request_quit, &usc_request_quit_Parms, NULL );

	pFnusc_request_quit->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.InvokeRenderTargetReady
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::InvokeRenderTargetReady ( )
{
	static UFunction* pFnInvokeRenderTargetReady = NULL;

	if ( ! pFnInvokeRenderTargetReady )
		pFnInvokeRenderTargetReady = (UFunction*) UObject::GObjObjects()->GetIndex( 124872 );

	UTgGameMoviePlayer_execInvokeRenderTargetReady_Parms InvokeRenderTargetReady_Parms;

	pFnInvokeRenderTargetReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInvokeRenderTargetReady, &InvokeRenderTargetReady_Parms, NULL );

	pFnInvokeRenderTargetReady->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.SetRenderTargetCallback
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// class UGFxObject*              targetObj                      ( CPF_Parm )
// unsigned long                  addObj                         ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::SetRenderTargetCallback ( class UGFxObject* targetObj, unsigned long addObj )
{
	static UFunction* pFnSetRenderTargetCallback = NULL;

	if ( ! pFnSetRenderTargetCallback )
		pFnSetRenderTargetCallback = (UFunction*) UObject::GObjObjects()->GetIndex( 124869 );

	UTgGameMoviePlayer_execSetRenderTargetCallback_Parms SetRenderTargetCallback_Parms;
	SetRenderTargetCallback_Parms.targetObj = targetObj;
	SetRenderTargetCallback_Parms.addObj = addObj;

	pFnSetRenderTargetCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRenderTargetCallback, &SetRenderTargetCallback_Parms, NULL );

	pFnSetRenderTargetCallback->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.SetRenderTargetEnabled
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bEnabled                       ( CPF_Parm )
// int                            surfaceId                      ( CPF_Parm )
// int                            X                              ( CPF_Parm )
// int                            Y                              ( CPF_Parm )
// float                          widthReal                      ( CPF_Parm )
// float                          heightReal                     ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          Height                         ( CPF_Parm )

bool UTgGameMoviePlayer::SetRenderTargetEnabled ( unsigned long bEnabled, int surfaceId, int X, int Y, float widthReal, float heightReal, float Width, float Height )
{
	static UFunction* pFnSetRenderTargetEnabled = NULL;

	if ( ! pFnSetRenderTargetEnabled )
		pFnSetRenderTargetEnabled = (UFunction*) UObject::GObjObjects()->GetIndex( 124859 );

	UTgGameMoviePlayer_execSetRenderTargetEnabled_Parms SetRenderTargetEnabled_Parms;
	SetRenderTargetEnabled_Parms.bEnabled = bEnabled;
	SetRenderTargetEnabled_Parms.surfaceId = surfaceId;
	SetRenderTargetEnabled_Parms.X = X;
	SetRenderTargetEnabled_Parms.Y = Y;
	SetRenderTargetEnabled_Parms.widthReal = widthReal;
	SetRenderTargetEnabled_Parms.heightReal = heightReal;
	SetRenderTargetEnabled_Parms.Width = Width;
	SetRenderTargetEnabled_Parms.Height = Height;

	pFnSetRenderTargetEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRenderTargetEnabled, &SetRenderTargetEnabled_Parms, NULL );

	pFnSetRenderTargetEnabled->FunctionFlags |= 0x400;

	return SetRenderTargetEnabled_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_Scene_Manager_Scene_Unloaded
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sSceneName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_Scene_Manager_Scene_Unloaded ( struct FString sSceneName )
{
	static UFunction* pFnusc_Scene_Manager_Scene_Unloaded = NULL;

	if ( ! pFnusc_Scene_Manager_Scene_Unloaded )
		pFnusc_Scene_Manager_Scene_Unloaded = (UFunction*) UObject::GObjObjects()->GetIndex( 124857 );

	UTgGameMoviePlayer_execusc_Scene_Manager_Scene_Unloaded_Parms usc_Scene_Manager_Scene_Unloaded_Parms;
	memcpy ( &usc_Scene_Manager_Scene_Unloaded_Parms.sSceneName, &sSceneName, 0xC );

	pFnusc_Scene_Manager_Scene_Unloaded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_Scene_Manager_Scene_Unloaded, &usc_Scene_Manager_Scene_Unloaded_Parms, NULL );

	pFnusc_Scene_Manager_Scene_Unloaded->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_Scene_Manager_Scene_Loaded
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sSceneName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_Scene_Manager_Scene_Loaded ( struct FString sSceneName )
{
	static UFunction* pFnusc_Scene_Manager_Scene_Loaded = NULL;

	if ( ! pFnusc_Scene_Manager_Scene_Loaded )
		pFnusc_Scene_Manager_Scene_Loaded = (UFunction*) UObject::GObjObjects()->GetIndex( 124855 );

	UTgGameMoviePlayer_execusc_Scene_Manager_Scene_Loaded_Parms usc_Scene_Manager_Scene_Loaded_Parms;
	memcpy ( &usc_Scene_Manager_Scene_Loaded_Parms.sSceneName, &sSceneName, 0xC );

	pFnusc_Scene_Manager_Scene_Loaded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_Scene_Manager_Scene_Loaded, &usc_Scene_Manager_Scene_Loaded_Parms, NULL );

	pFnusc_Scene_Manager_Scene_Loaded->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_resize_browser
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            surfaceId                      ( CPF_Parm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          Height                         ( CPF_Parm )
// float                          widthReal                      ( CPF_Parm )
// float                          heightReal                     ( CPF_Parm )

bool UTgGameMoviePlayer::usc_resize_browser ( int surfaceId, float X, float Y, float Width, float Height, float widthReal, float heightReal )
{
	static UFunction* pFnusc_resize_browser = NULL;

	if ( ! pFnusc_resize_browser )
		pFnusc_resize_browser = (UFunction*) UObject::GObjObjects()->GetIndex( 124846 );

	UTgGameMoviePlayer_execusc_resize_browser_Parms usc_resize_browser_Parms;
	usc_resize_browser_Parms.surfaceId = surfaceId;
	usc_resize_browser_Parms.X = X;
	usc_resize_browser_Parms.Y = Y;
	usc_resize_browser_Parms.Width = Width;
	usc_resize_browser_Parms.Height = Height;
	usc_resize_browser_Parms.widthReal = widthReal;
	usc_resize_browser_Parms.heightReal = heightReal;

	pFnusc_resize_browser->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_resize_browser, &usc_resize_browser_Parms, NULL );

	pFnusc_resize_browser->FunctionFlags |= 0x400;

	return usc_resize_browser_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_enable_browser_input
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )

void UTgGameMoviePlayer::usc_enable_browser_input ( unsigned long bEnable )
{
	static UFunction* pFnusc_enable_browser_input = NULL;

	if ( ! pFnusc_enable_browser_input )
		pFnusc_enable_browser_input = (UFunction*) UObject::GObjObjects()->GetIndex( 124844 );

	UTgGameMoviePlayer_execusc_enable_browser_input_Parms usc_enable_browser_input_Parms;
	usc_enable_browser_input_Parms.bEnable = bEnable;

	pFnusc_enable_browser_input->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_enable_browser_input, &usc_enable_browser_input_Parms, NULL );

	pFnusc_enable_browser_input->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.ChangeHudSection
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 Section                        ( CPF_Parm | CPF_NeedCtorLink )
// float                          percentX                       ( CPF_OptionalParm | CPF_Parm )
// float                          percentY                       ( CPF_OptionalParm | CPF_Parm )
// float                          Scale                          ( CPF_OptionalParm | CPF_Parm )
// float                          dockX                          ( CPF_OptionalParm | CPF_Parm )
// float                          dockY                          ( CPF_OptionalParm | CPF_Parm )
// struct FString                 dockObj                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// float                          dockObjX                       ( CPF_OptionalParm | CPF_Parm )
// float                          dockObjY                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  outX                           ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  outY                           ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::ChangeHudSection ( struct FString Section, float percentX, float percentY, float Scale, float dockX, float dockY, struct FString dockObj, float dockObjX, float dockObjY, unsigned long outX, unsigned long outY )
{
	static UFunction* pFnChangeHudSection = NULL;

	if ( ! pFnChangeHudSection )
		pFnChangeHudSection = (UFunction*) UObject::GObjObjects()->GetIndex( 124832 );

	UTgGameMoviePlayer_execChangeHudSection_Parms ChangeHudSection_Parms;
	memcpy ( &ChangeHudSection_Parms.Section, &Section, 0xC );
	ChangeHudSection_Parms.percentX = percentX;
	ChangeHudSection_Parms.percentY = percentY;
	ChangeHudSection_Parms.Scale = Scale;
	ChangeHudSection_Parms.dockX = dockX;
	ChangeHudSection_Parms.dockY = dockY;
	memcpy ( &ChangeHudSection_Parms.dockObj, &dockObj, 0xC );
	ChangeHudSection_Parms.dockObjX = dockObjX;
	ChangeHudSection_Parms.dockObjY = dockObjY;
	ChangeHudSection_Parms.outX = outX;
	ChangeHudSection_Parms.outY = outY;

	pFnChangeHudSection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChangeHudSection, &ChangeHudSection_Parms, NULL );

	pFnChangeHudSection->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.UnloadHudSection
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 Section                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::UnloadHudSection ( struct FString Section )
{
	static UFunction* pFnUnloadHudSection = NULL;

	if ( ! pFnUnloadHudSection )
		pFnUnloadHudSection = (UFunction*) UObject::GObjObjects()->GetIndex( 124830 );

	UTgGameMoviePlayer_execUnloadHudSection_Parms UnloadHudSection_Parms;
	memcpy ( &UnloadHudSection_Parms.Section, &Section, 0xC );

	pFnUnloadHudSection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnloadHudSection, &UnloadHudSection_Parms, NULL );

	pFnUnloadHudSection->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_rejectNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nNotificationType              ( CPF_Parm )
// int                            nId                            ( CPF_Parm )

void UTgGameMoviePlayer::usc_rejectNotification ( int nNotificationType, int nId )
{
	static UFunction* pFnusc_rejectNotification = NULL;

	if ( ! pFnusc_rejectNotification )
		pFnusc_rejectNotification = (UFunction*) UObject::GObjObjects()->GetIndex( 124827 );

	UTgGameMoviePlayer_execusc_rejectNotification_Parms usc_rejectNotification_Parms;
	usc_rejectNotification_Parms.nNotificationType = nNotificationType;
	usc_rejectNotification_Parms.nId = nId;

	pFnusc_rejectNotification->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_rejectNotification, &usc_rejectNotification_Parms, NULL );

	pFnusc_rejectNotification->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_acceptNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nNotificationType              ( CPF_Parm )
// int                            nId                            ( CPF_Parm )

void UTgGameMoviePlayer::usc_acceptNotification ( int nNotificationType, int nId )
{
	static UFunction* pFnusc_acceptNotification = NULL;

	if ( ! pFnusc_acceptNotification )
		pFnusc_acceptNotification = (UFunction*) UObject::GObjObjects()->GetIndex( 124824 );

	UTgGameMoviePlayer_execusc_acceptNotification_Parms usc_acceptNotification_Parms;
	usc_acceptNotification_Parms.nNotificationType = nNotificationType;
	usc_acceptNotification_Parms.nId = nId;

	pFnusc_acceptNotification->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_acceptNotification, &usc_acceptNotification_Parms, NULL );

	pFnusc_acceptNotification->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.LeavePartyNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::LeavePartyNotification ( )
{
	static UFunction* pFnLeavePartyNotification = NULL;

	if ( ! pFnLeavePartyNotification )
		pFnLeavePartyNotification = (UFunction*) UObject::GObjObjects()->GetIndex( 124823 );

	UTgGameMoviePlayer_execLeavePartyNotification_Parms LeavePartyNotification_Parms;

	pFnLeavePartyNotification->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLeavePartyNotification, &LeavePartyNotification_Parms, NULL );

	pFnLeavePartyNotification->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.DisbandPartyNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::DisbandPartyNotification ( )
{
	static UFunction* pFnDisbandPartyNotification = NULL;

	if ( ! pFnDisbandPartyNotification )
		pFnDisbandPartyNotification = (UFunction*) UObject::GObjObjects()->GetIndex( 124822 );

	UTgGameMoviePlayer_execDisbandPartyNotification_Parms DisbandPartyNotification_Parms;

	pFnDisbandPartyNotification->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisbandPartyNotification, &DisbandPartyNotification_Parms, NULL );

	pFnDisbandPartyNotification->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_autoConfigureSettings
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_autoConfigureSettings ( )
{
	static UFunction* pFnusc_autoConfigureSettings = NULL;

	if ( ! pFnusc_autoConfigureSettings )
		pFnusc_autoConfigureSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 124821 );

	UTgGameMoviePlayer_execusc_autoConfigureSettings_Parms usc_autoConfigureSettings_Parms;

	pFnusc_autoConfigureSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_autoConfigureSettings, &usc_autoConfigureSettings_Parms, NULL );

	pFnusc_autoConfigureSettings->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_surrender
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bSurrender                     ( CPF_Parm )

void UTgGameMoviePlayer::usc_surrender ( unsigned long bSurrender )
{
	static UFunction* pFnusc_surrender = NULL;

	if ( ! pFnusc_surrender )
		pFnusc_surrender = (UFunction*) UObject::GObjObjects()->GetIndex( 124819 );

	UTgGameMoviePlayer_execusc_surrender_Parms usc_surrender_Parms;
	usc_surrender_Parms.bSurrender = bSurrender;

	pFnusc_surrender->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_surrender, &usc_surrender_Parms, NULL );

	pFnusc_surrender->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_goto_item
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nItemId                        ( CPF_Parm )
// unsigned long                  bUseAltRedirect                ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::usc_goto_item ( int nItemId, unsigned long bUseAltRedirect )
{
	static UFunction* pFnusc_goto_item = NULL;

	if ( ! pFnusc_goto_item )
		pFnusc_goto_item = (UFunction*) UObject::GObjObjects()->GetIndex( 124816 );

	UTgGameMoviePlayer_execusc_goto_item_Parms usc_goto_item_Parms;
	usc_goto_item_Parms.nItemId = nItemId;
	usc_goto_item_Parms.bUseAltRedirect = bUseAltRedirect;

	pFnusc_goto_item->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_goto_item, &usc_goto_item_Parms, NULL );

	pFnusc_goto_item->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_get_sellback_price
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nItemId                        ( CPF_Parm )

int UTgGameMoviePlayer::usc_get_sellback_price ( int nItemId )
{
	static UFunction* pFnusc_get_sellback_price = NULL;

	if ( ! pFnusc_get_sellback_price )
		pFnusc_get_sellback_price = (UFunction*) UObject::GObjObjects()->GetIndex( 124813 );

	UTgGameMoviePlayer_execusc_get_sellback_price_Parms usc_get_sellback_price_Parms;
	usc_get_sellback_price_Parms.nItemId = nItemId;

	pFnusc_get_sellback_price->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_get_sellback_price, &usc_get_sellback_price_Parms, NULL );

	pFnusc_get_sellback_price->FunctionFlags |= 0x400;

	return usc_get_sellback_price_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_full_sellback_available
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nItemId                        ( CPF_Parm )

int UTgGameMoviePlayer::usc_full_sellback_available ( int nItemId )
{
	static UFunction* pFnusc_full_sellback_available = NULL;

	if ( ! pFnusc_full_sellback_available )
		pFnusc_full_sellback_available = (UFunction*) UObject::GObjObjects()->GetIndex( 124810 );

	UTgGameMoviePlayer_execusc_full_sellback_available_Parms usc_full_sellback_available_Parms;
	usc_full_sellback_available_Parms.nItemId = nItemId;

	pFnusc_full_sellback_available->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_full_sellback_available, &usc_full_sellback_available_Parms, NULL );

	pFnusc_full_sellback_available->FunctionFlags |= 0x400;

	return usc_full_sellback_available_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_chat_close_tab
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nChannel                       ( CPF_Parm )
// struct FString                 Sender                         ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_chat_close_tab ( int nChannel, struct FString Sender )
{
	static UFunction* pFnusc_chat_close_tab = NULL;

	if ( ! pFnusc_chat_close_tab )
		pFnusc_chat_close_tab = (UFunction*) UObject::GObjObjects()->GetIndex( 124807 );

	UTgGameMoviePlayer_execusc_chat_close_tab_Parms usc_chat_close_tab_Parms;
	usc_chat_close_tab_Parms.nChannel = nChannel;
	memcpy ( &usc_chat_close_tab_Parms.Sender, &Sender, 0xC );

	pFnusc_chat_close_tab->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_chat_close_tab, &usc_chat_close_tab_Parms, NULL );

	pFnusc_chat_close_tab->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_set_chat_channel
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nChannel                       ( CPF_Parm )

void UTgGameMoviePlayer::usc_set_chat_channel ( int nChannel )
{
	static UFunction* pFnusc_set_chat_channel = NULL;

	if ( ! pFnusc_set_chat_channel )
		pFnusc_set_chat_channel = (UFunction*) UObject::GObjObjects()->GetIndex( 124805 );

	UTgGameMoviePlayer_execusc_set_chat_channel_Parms usc_set_chat_channel_Parms;
	usc_set_chat_channel_Parms.nChannel = nChannel;

	pFnusc_set_chat_channel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_set_chat_channel, &usc_set_chat_channel_Parms, NULL );

	pFnusc_set_chat_channel->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_get_chat_channel
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UTgGameMoviePlayer::usc_get_chat_channel ( )
{
	static UFunction* pFnusc_get_chat_channel = NULL;

	if ( ! pFnusc_get_chat_channel )
		pFnusc_get_chat_channel = (UFunction*) UObject::GObjObjects()->GetIndex( 124803 );

	UTgGameMoviePlayer_execusc_get_chat_channel_Parms usc_get_chat_channel_Parms;

	pFnusc_get_chat_channel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_get_chat_channel, &usc_get_chat_channel_Parms, NULL );

	pFnusc_get_chat_channel->FunctionFlags |= 0x400;

	return usc_get_chat_channel_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_chat_ready
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_chat_ready ( )
{
	static UFunction* pFnusc_chat_ready = NULL;

	if ( ! pFnusc_chat_ready )
		pFnusc_chat_ready = (UFunction*) UObject::GObjObjects()->GetIndex( 124802 );

	UTgGameMoviePlayer_execusc_chat_ready_Parms usc_chat_ready_Parms;

	pFnusc_chat_ready->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_chat_ready, &usc_chat_ready_Parms, NULL );

	pFnusc_chat_ready->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_resend_private_messages
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_resend_private_messages ( )
{
	static UFunction* pFnusc_resend_private_messages = NULL;

	if ( ! pFnusc_resend_private_messages )
		pFnusc_resend_private_messages = (UFunction*) UObject::GObjObjects()->GetIndex( 124801 );

	UTgGameMoviePlayer_execusc_resend_private_messages_Parms usc_resend_private_messages_Parms;

	pFnusc_resend_private_messages->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_resend_private_messages, &usc_resend_private_messages_Parms, NULL );

	pFnusc_resend_private_messages->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_vgs_command
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nId                            ( CPF_Parm )
// unsigned long                  bSubMenu                       ( CPF_Parm )

void UTgGameMoviePlayer::usc_vgs_command ( int nId, unsigned long bSubMenu )
{
	static UFunction* pFnusc_vgs_command = NULL;

	if ( ! pFnusc_vgs_command )
		pFnusc_vgs_command = (UFunction*) UObject::GObjObjects()->GetIndex( 124798 );

	UTgGameMoviePlayer_execusc_vgs_command_Parms usc_vgs_command_Parms;
	usc_vgs_command_Parms.nId = nId;
	usc_vgs_command_Parms.bSubMenu = bSubMenu;

	pFnusc_vgs_command->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_vgs_command, &usc_vgs_command_Parms, NULL );

	pFnusc_vgs_command->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_send_chat
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nChannel                       ( CPF_Parm )
// struct FString                 msg                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Recipient                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_send_chat ( int nChannel, struct FString msg, struct FString Recipient )
{
	static UFunction* pFnusc_send_chat = NULL;

	if ( ! pFnusc_send_chat )
		pFnusc_send_chat = (UFunction*) UObject::GObjObjects()->GetIndex( 124794 );

	UTgGameMoviePlayer_execusc_send_chat_Parms usc_send_chat_Parms;
	usc_send_chat_Parms.nChannel = nChannel;
	memcpy ( &usc_send_chat_Parms.msg, &msg, 0xC );
	memcpy ( &usc_send_chat_Parms.Recipient, &Recipient, 0xC );

	pFnusc_send_chat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_send_chat, &usc_send_chat_Parms, NULL );

	pFnusc_send_chat->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_toggle_player_mute
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_toggle_player_mute ( struct FString sPlayerName )
{
	static UFunction* pFnusc_toggle_player_mute = NULL;

	if ( ! pFnusc_toggle_player_mute )
		pFnusc_toggle_player_mute = (UFunction*) UObject::GObjObjects()->GetIndex( 124792 );

	UTgGameMoviePlayer_execusc_toggle_player_mute_Parms usc_toggle_player_mute_Parms;
	memcpy ( &usc_toggle_player_mute_Parms.sPlayerName, &sPlayerName, 0xC );

	pFnusc_toggle_player_mute->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_toggle_player_mute, &usc_toggle_player_mute_Parms, NULL );

	pFnusc_toggle_player_mute->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_get_class_purchase_pricing
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            nClassId                       ( CPF_Parm )

struct FString UTgGameMoviePlayer::usc_get_class_purchase_pricing ( int nClassId )
{
	static UFunction* pFnusc_get_class_purchase_pricing = NULL;

	if ( ! pFnusc_get_class_purchase_pricing )
		pFnusc_get_class_purchase_pricing = (UFunction*) UObject::GObjObjects()->GetIndex( 124789 );

	UTgGameMoviePlayer_execusc_get_class_purchase_pricing_Parms usc_get_class_purchase_pricing_Parms;
	usc_get_class_purchase_pricing_Parms.nClassId = nClassId;

	pFnusc_get_class_purchase_pricing->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_get_class_purchase_pricing, &usc_get_class_purchase_pricing_Parms, NULL );

	pFnusc_get_class_purchase_pricing->FunctionFlags |= 0x400;

	return usc_get_class_purchase_pricing_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_test_music_theme
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nItemId                        ( CPF_Parm )

void UTgGameMoviePlayer::usc_test_music_theme ( int nItemId )
{
	static UFunction* pFnusc_test_music_theme = NULL;

	if ( ! pFnusc_test_music_theme )
		pFnusc_test_music_theme = (UFunction*) UObject::GObjObjects()->GetIndex( 124787 );

	UTgGameMoviePlayer_execusc_test_music_theme_Parms usc_test_music_theme_Parms;
	usc_test_music_theme_Parms.nItemId = nItemId;

	pFnusc_test_music_theme->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_test_music_theme, &usc_test_music_theme_Parms, NULL );

	pFnusc_test_music_theme->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_test_announcer_pack
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nItemId                        ( CPF_Parm )

void UTgGameMoviePlayer::usc_test_announcer_pack ( int nItemId )
{
	static UFunction* pFnusc_test_announcer_pack = NULL;

	if ( ! pFnusc_test_announcer_pack )
		pFnusc_test_announcer_pack = (UFunction*) UObject::GObjObjects()->GetIndex( 124785 );

	UTgGameMoviePlayer_execusc_test_announcer_pack_Parms usc_test_announcer_pack_Parms;
	usc_test_announcer_pack_Parms.nItemId = nItemId;

	pFnusc_test_announcer_pack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_test_announcer_pack, &usc_test_announcer_pack_Parms, NULL );

	pFnusc_test_announcer_pack->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_test_voice_pack
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nVoicePackId                   ( CPF_Parm )
// int                            nSkinId                        ( CPF_Parm )

void UTgGameMoviePlayer::usc_test_voice_pack ( int nVoicePackId, int nSkinId )
{
	static UFunction* pFnusc_test_voice_pack = NULL;

	if ( ! pFnusc_test_voice_pack )
		pFnusc_test_voice_pack = (UFunction*) UObject::GObjObjects()->GetIndex( 124782 );

	UTgGameMoviePlayer_execusc_test_voice_pack_Parms usc_test_voice_pack_Parms;
	usc_test_voice_pack_Parms.nVoicePackId = nVoicePackId;
	usc_test_voice_pack_Parms.nSkinId = nSkinId;

	pFnusc_test_voice_pack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_test_voice_pack, &usc_test_voice_pack_Parms, NULL );

	pFnusc_test_voice_pack->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_show_skin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nSkinId                        ( CPF_Parm )

void UTgGameMoviePlayer::usc_show_skin ( int nSkinId )
{
	static UFunction* pFnusc_show_skin = NULL;

	if ( ! pFnusc_show_skin )
		pFnusc_show_skin = (UFunction*) UObject::GObjObjects()->GetIndex( 124780 );

	UTgGameMoviePlayer_execusc_show_skin_Parms usc_show_skin_Parms;
	usc_show_skin_Parms.nSkinId = nSkinId;

	pFnusc_show_skin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_show_skin, &usc_show_skin_Parms, NULL );

	pFnusc_show_skin->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_show_god_detail
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nClassId                       ( CPF_Parm )

void UTgGameMoviePlayer::usc_show_god_detail ( int nClassId )
{
	static UFunction* pFnusc_show_god_detail = NULL;

	if ( ! pFnusc_show_god_detail )
		pFnusc_show_god_detail = (UFunction*) UObject::GObjObjects()->GetIndex( 124778 );

	UTgGameMoviePlayer_execusc_show_god_detail_Parms usc_show_god_detail_Parms;
	usc_show_god_detail_Parms.nClassId = nClassId;

	pFnusc_show_god_detail->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_show_god_detail, &usc_show_god_detail_Parms, NULL );

	pFnusc_show_god_detail->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_request_treasure_roll
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nItemId                        ( CPF_Parm )
// int                            CurrencyType                   ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::usc_request_treasure_roll ( int nItemId, int CurrencyType )
{
	static UFunction* pFnusc_request_treasure_roll = NULL;

	if ( ! pFnusc_request_treasure_roll )
		pFnusc_request_treasure_roll = (UFunction*) UObject::GObjObjects()->GetIndex( 124775 );

	UTgGameMoviePlayer_execusc_request_treasure_roll_Parms usc_request_treasure_roll_Parms;
	usc_request_treasure_roll_Parms.nItemId = nItemId;
	usc_request_treasure_roll_Parms.CurrencyType = CurrencyType;

	pFnusc_request_treasure_roll->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_request_treasure_roll, &usc_request_treasure_roll_Parms, NULL );

	pFnusc_request_treasure_roll->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_lobbyFeaturesShouldShow
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_lobbyFeaturesShouldShow ( )
{
	static UFunction* pFnusc_lobbyFeaturesShouldShow = NULL;

	if ( ! pFnusc_lobbyFeaturesShouldShow )
		pFnusc_lobbyFeaturesShouldShow = (UFunction*) UObject::GObjObjects()->GetIndex( 124773 );

	UTgGameMoviePlayer_execusc_lobbyFeaturesShouldShow_Parms usc_lobbyFeaturesShouldShow_Parms;

	pFnusc_lobbyFeaturesShouldShow->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_lobbyFeaturesShouldShow, &usc_lobbyFeaturesShouldShow_Parms, NULL );

	pFnusc_lobbyFeaturesShouldShow->FunctionFlags |= 0x400;

	return usc_lobbyFeaturesShouldShow_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_isFriend
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )

bool UTgGameMoviePlayer::usc_isFriend ( struct FString PlayerName )
{
	static UFunction* pFnusc_isFriend = NULL;

	if ( ! pFnusc_isFriend )
		pFnusc_isFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 124770 );

	UTgGameMoviePlayer_execusc_isFriend_Parms usc_isFriend_Parms;
	memcpy ( &usc_isFriend_Parms.PlayerName, &PlayerName, 0xC );

	pFnusc_isFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_isFriend, &usc_isFriend_Parms, NULL );

	pFnusc_isFriend->FunctionFlags |= 0x400;

	return usc_isFriend_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_get_server_time
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UTgGameMoviePlayer::usc_get_server_time ( )
{
	static UFunction* pFnusc_get_server_time = NULL;

	if ( ! pFnusc_get_server_time )
		pFnusc_get_server_time = (UFunction*) UObject::GObjObjects()->GetIndex( 124768 );

	UTgGameMoviePlayer_execusc_get_server_time_Parms usc_get_server_time_Parms;

	pFnusc_get_server_time->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_get_server_time, &usc_get_server_time_Parms, NULL );

	pFnusc_get_server_time->FunctionFlags |= 0x400;

	return usc_get_server_time_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_get_time
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UTgGameMoviePlayer::usc_get_time ( )
{
	static UFunction* pFnusc_get_time = NULL;

	if ( ! pFnusc_get_time )
		pFnusc_get_time = (UFunction*) UObject::GObjObjects()->GetIndex( 124766 );

	UTgGameMoviePlayer_execusc_get_time_Parms usc_get_time_Parms;

	pFnusc_get_time->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_get_time, &usc_get_time_Parms, NULL );

	pFnusc_get_time->FunctionFlags |= 0x400;

	return usc_get_time_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_isInSiege
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_isInSiege ( )
{
	static UFunction* pFnusc_isInSiege = NULL;

	if ( ! pFnusc_isInSiege )
		pFnusc_isInSiege = (UFunction*) UObject::GObjObjects()->GetIndex( 124764 );

	UTgGameMoviePlayer_execusc_isInSiege_Parms usc_isInSiege_Parms;

	pFnusc_isInSiege->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_isInSiege, &usc_isInSiege_Parms, NULL );

	pFnusc_isInSiege->FunctionFlags |= 0x400;

	return usc_isInSiege_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_isInTutorial
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_isInTutorial ( )
{
	static UFunction* pFnusc_isInTutorial = NULL;

	if ( ! pFnusc_isInTutorial )
		pFnusc_isInTutorial = (UFunction*) UObject::GObjObjects()->GetIndex( 124762 );

	UTgGameMoviePlayer_execusc_isInTutorial_Parms usc_isInTutorial_Parms;

	pFnusc_isInTutorial->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_isInTutorial, &usc_isInTutorial_Parms, NULL );

	pFnusc_isInTutorial->FunctionFlags |= 0x400;

	return usc_isInTutorial_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_isCapsLockActive
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_isCapsLockActive ( )
{
	static UFunction* pFnusc_isCapsLockActive = NULL;

	if ( ! pFnusc_isCapsLockActive )
		pFnusc_isCapsLockActive = (UFunction*) UObject::GObjObjects()->GetIndex( 124760 );

	UTgGameMoviePlayer_execusc_isCapsLockActive_Parms usc_isCapsLockActive_Parms;

	pFnusc_isCapsLockActive->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_isCapsLockActive, &usc_isCapsLockActive_Parms, NULL );

	pFnusc_isCapsLockActive->FunctionFlags |= 0x400;

	return usc_isCapsLockActive_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_isPlayingTutorial
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  Toggle                         ( CPF_Parm )

void UTgGameMoviePlayer::usc_isPlayingTutorial ( unsigned long Toggle )
{
	static UFunction* pFnusc_isPlayingTutorial = NULL;

	if ( ! pFnusc_isPlayingTutorial )
		pFnusc_isPlayingTutorial = (UFunction*) UObject::GObjObjects()->GetIndex( 124758 );

	UTgGameMoviePlayer_execusc_isPlayingTutorial_Parms usc_isPlayingTutorial_Parms;
	usc_isPlayingTutorial_Parms.Toggle = Toggle;

	pFnusc_isPlayingTutorial->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_isPlayingTutorial, &usc_isPlayingTutorial_Parms, NULL );

	pFnusc_isPlayingTutorial->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_stopSoundCue
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 soundTheme                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SoundEventName                 ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_stopSoundCue ( struct FString soundTheme, struct FString SoundEventName )
{
	static UFunction* pFnusc_stopSoundCue = NULL;

	if ( ! pFnusc_stopSoundCue )
		pFnusc_stopSoundCue = (UFunction*) UObject::GObjObjects()->GetIndex( 124755 );

	UTgGameMoviePlayer_execusc_stopSoundCue_Parms usc_stopSoundCue_Parms;
	memcpy ( &usc_stopSoundCue_Parms.soundTheme, &soundTheme, 0xC );
	memcpy ( &usc_stopSoundCue_Parms.SoundEventName, &SoundEventName, 0xC );

	pFnusc_stopSoundCue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_stopSoundCue, &usc_stopSoundCue_Parms, NULL );

	pFnusc_stopSoundCue->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_join_channel
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            Id                             ( CPF_Parm )

void UTgGameMoviePlayer::usc_join_channel ( int Id )
{
	static UFunction* pFnusc_join_channel = NULL;

	if ( ! pFnusc_join_channel )
		pFnusc_join_channel = (UFunction*) UObject::GObjObjects()->GetIndex( 124753 );

	UTgGameMoviePlayer_execusc_join_channel_Parms usc_join_channel_Parms;
	usc_join_channel_Parms.Id = Id;

	pFnusc_join_channel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_join_channel, &usc_join_channel_Parms, NULL );

	pFnusc_join_channel->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_redeem_reward
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nActId                         ( CPF_Parm )
// int                            nGoalId                        ( CPF_Parm )
// int                            nCount                         ( CPF_Parm )

void UTgGameMoviePlayer::usc_redeem_reward ( int nActId, int nGoalId, int nCount )
{
	static UFunction* pFnusc_redeem_reward = NULL;

	if ( ! pFnusc_redeem_reward )
		pFnusc_redeem_reward = (UFunction*) UObject::GObjObjects()->GetIndex( 124749 );

	UTgGameMoviePlayer_execusc_redeem_reward_Parms usc_redeem_reward_Parms;
	usc_redeem_reward_Parms.nActId = nActId;
	usc_redeem_reward_Parms.nGoalId = nGoalId;
	usc_redeem_reward_Parms.nCount = nCount;

	pFnusc_redeem_reward->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_redeem_reward, &usc_redeem_reward_Parms, NULL );

	pFnusc_redeem_reward->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_GetWinningTeamName
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UTgGameMoviePlayer::usc_GetWinningTeamName ( )
{
	static UFunction* pFnusc_GetWinningTeamName = NULL;

	if ( ! pFnusc_GetWinningTeamName )
		pFnusc_GetWinningTeamName = (UFunction*) UObject::GObjObjects()->GetIndex( 124747 );

	UTgGameMoviePlayer_execusc_GetWinningTeamName_Parms usc_GetWinningTeamName_Parms;

	pFnusc_GetWinningTeamName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_GetWinningTeamName, &usc_GetWinningTeamName_Parms, NULL );

	pFnusc_GetWinningTeamName->FunctionFlags |= 0x400;

	return usc_GetWinningTeamName_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_get_device_tooltip
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            nItemId                        ( CPF_Parm )
// int                            nRank                          ( CPF_Parm )

struct FString UTgGameMoviePlayer::usc_get_device_tooltip ( int nItemId, int nRank )
{
	static UFunction* pFnusc_get_device_tooltip = NULL;

	if ( ! pFnusc_get_device_tooltip )
		pFnusc_get_device_tooltip = (UFunction*) UObject::GObjObjects()->GetIndex( 124743 );

	UTgGameMoviePlayer_execusc_get_device_tooltip_Parms usc_get_device_tooltip_Parms;
	usc_get_device_tooltip_Parms.nItemId = nItemId;
	usc_get_device_tooltip_Parms.nRank = nRank;

	pFnusc_get_device_tooltip->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_get_device_tooltip, &usc_get_device_tooltip_Parms, NULL );

	pFnusc_get_device_tooltip->FunctionFlags |= 0x400;

	return usc_get_device_tooltip_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_set_auto_skill_up
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bAutoSkill                     ( CPF_Parm )
// unsigned long                  bForMatch                      ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::usc_set_auto_skill_up ( unsigned long bAutoSkill, unsigned long bForMatch )
{
	static UFunction* pFnusc_set_auto_skill_up = NULL;

	if ( ! pFnusc_set_auto_skill_up )
		pFnusc_set_auto_skill_up = (UFunction*) UObject::GObjObjects()->GetIndex( 124740 );

	UTgGameMoviePlayer_execusc_set_auto_skill_up_Parms usc_set_auto_skill_up_Parms;
	usc_set_auto_skill_up_Parms.bAutoSkill = bAutoSkill;
	usc_set_auto_skill_up_Parms.bForMatch = bForMatch;

	pFnusc_set_auto_skill_up->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_set_auto_skill_up, &usc_set_auto_skill_up_Parms, NULL );

	pFnusc_set_auto_skill_up->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_set_auto_purchase
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bAutoPurchase                  ( CPF_Parm )
// unsigned long                  bForMatch                      ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::usc_set_auto_purchase ( unsigned long bAutoPurchase, unsigned long bForMatch )
{
	static UFunction* pFnusc_set_auto_purchase = NULL;

	if ( ! pFnusc_set_auto_purchase )
		pFnusc_set_auto_purchase = (UFunction*) UObject::GObjObjects()->GetIndex( 124737 );

	UTgGameMoviePlayer_execusc_set_auto_purchase_Parms usc_set_auto_purchase_Parms;
	usc_set_auto_purchase_Parms.bAutoPurchase = bAutoPurchase;
	usc_set_auto_purchase_Parms.bForMatch = bForMatch;

	pFnusc_set_auto_purchase->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_set_auto_purchase, &usc_set_auto_purchase_Parms, NULL );

	pFnusc_set_auto_purchase->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_sell_item
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nInventoryId                   ( CPF_Parm )

void UTgGameMoviePlayer::usc_sell_item ( int nInventoryId )
{
	static UFunction* pFnusc_sell_item = NULL;

	if ( ! pFnusc_sell_item )
		pFnusc_sell_item = (UFunction*) UObject::GObjObjects()->GetIndex( 124735 );

	UTgGameMoviePlayer_execusc_sell_item_Parms usc_sell_item_Parms;
	usc_sell_item_Parms.nInventoryId = nInventoryId;

	pFnusc_sell_item->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_sell_item, &usc_sell_item_Parms, NULL );

	pFnusc_sell_item->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_upgrade_item
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nItemId                        ( CPF_Parm )
// int                            nUpgradeInvId                  ( CPF_Parm )

void UTgGameMoviePlayer::usc_upgrade_item ( int nItemId, int nUpgradeInvId )
{
	static UFunction* pFnusc_upgrade_item = NULL;

	if ( ! pFnusc_upgrade_item )
		pFnusc_upgrade_item = (UFunction*) UObject::GObjObjects()->GetIndex( 124732 );

	UTgGameMoviePlayer_execusc_upgrade_item_Parms usc_upgrade_item_Parms;
	usc_upgrade_item_Parms.nItemId = nItemId;
	usc_upgrade_item_Parms.nUpgradeInvId = nUpgradeInvId;

	pFnusc_upgrade_item->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_upgrade_item, &usc_upgrade_item_Parms, NULL );

	pFnusc_upgrade_item->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_purchase_item
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nItemId                        ( CPF_Parm )
// int                            nAmount                        ( CPF_Parm )

void UTgGameMoviePlayer::usc_purchase_item ( int nItemId, int nAmount )
{
	static UFunction* pFnusc_purchase_item = NULL;

	if ( ! pFnusc_purchase_item )
		pFnusc_purchase_item = (UFunction*) UObject::GObjObjects()->GetIndex( 124729 );

	UTgGameMoviePlayer_execusc_purchase_item_Parms usc_purchase_item_Parms;
	usc_purchase_item_Parms.nItemId = nItemId;
	usc_purchase_item_Parms.nAmount = nAmount;

	pFnusc_purchase_item->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_purchase_item, &usc_purchase_item_Parms, NULL );

	pFnusc_purchase_item->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_force_purchase_current_item
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_force_purchase_current_item ( )
{
	static UFunction* pFnusc_force_purchase_current_item = NULL;

	if ( ! pFnusc_force_purchase_current_item )
		pFnusc_force_purchase_current_item = (UFunction*) UObject::GObjObjects()->GetIndex( 124728 );

	UTgGameMoviePlayer_execusc_force_purchase_current_item_Parms usc_force_purchase_current_item_Parms;

	pFnusc_force_purchase_current_item->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_force_purchase_current_item, &usc_force_purchase_current_item_Parms, NULL );

	pFnusc_force_purchase_current_item->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_report_player
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )
// int                            nReasonCode                    ( CPF_Parm )
// struct FString                 sReason                        ( CPF_Parm | CPF_NeedCtorLink )
// int                            nTaskForce                     ( CPF_OptionalParm | CPF_Parm )
// int                            nPlayerCount                   ( CPF_OptionalParm | CPF_Parm )
// int                            nReportedPlayerTaskForce       ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::usc_report_player ( struct FString sPlayerName, int nReasonCode, struct FString sReason, int nTaskForce, int nPlayerCount, int nReportedPlayerTaskForce )
{
	static UFunction* pFnusc_report_player = NULL;

	if ( ! pFnusc_report_player )
		pFnusc_report_player = (UFunction*) UObject::GObjObjects()->GetIndex( 124721 );

	UTgGameMoviePlayer_execusc_report_player_Parms usc_report_player_Parms;
	memcpy ( &usc_report_player_Parms.sPlayerName, &sPlayerName, 0xC );
	usc_report_player_Parms.nReasonCode = nReasonCode;
	memcpy ( &usc_report_player_Parms.sReason, &sReason, 0xC );
	usc_report_player_Parms.nTaskForce = nTaskForce;
	usc_report_player_Parms.nPlayerCount = nPlayerCount;
	usc_report_player_Parms.nReportedPlayerTaskForce = nReportedPlayerTaskForce;

	pFnusc_report_player->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_report_player, &usc_report_player_Parms, NULL );

	pFnusc_report_player->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_friend_action
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sType                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sInput                         ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_friend_action ( struct FString sType, struct FString sInput )
{
	static UFunction* pFnusc_friend_action = NULL;

	if ( ! pFnusc_friend_action )
		pFnusc_friend_action = (UFunction*) UObject::GObjObjects()->GetIndex( 124718 );

	UTgGameMoviePlayer_execusc_friend_action_Parms usc_friend_action_Parms;
	memcpy ( &usc_friend_action_Parms.sType, &sType, 0xC );
	memcpy ( &usc_friend_action_Parms.sInput, &sInput, 0xC );

	pFnusc_friend_action->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_friend_action, &usc_friend_action_Parms, NULL );

	pFnusc_friend_action->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_get_game_deserter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_get_game_deserter ( )
{
	static UFunction* pFnusc_get_game_deserter = NULL;

	if ( ! pFnusc_get_game_deserter )
		pFnusc_get_game_deserter = (UFunction*) UObject::GObjObjects()->GetIndex( 124716 );

	UTgGameMoviePlayer_execusc_get_game_deserter_Parms usc_get_game_deserter_Parms;

	pFnusc_get_game_deserter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_get_game_deserter, &usc_get_game_deserter_Parms, NULL );

	pFnusc_get_game_deserter->FunctionFlags |= 0x400;

	return usc_get_game_deserter_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.goto_lobby
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  eom                            ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::goto_lobby ( unsigned long eom )
{
	static UFunction* pFngoto_lobby = NULL;

	if ( ! pFngoto_lobby )
		pFngoto_lobby = (UFunction*) UObject::GObjObjects()->GetIndex( 124714 );

	UTgGameMoviePlayer_execgoto_lobby_Parms goto_lobby_Parms;
	goto_lobby_Parms.eom = eom;

	pFngoto_lobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngoto_lobby, &goto_lobby_Parms, NULL );

	pFngoto_lobby->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_disconnect
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_disconnect ( )
{
	static UFunction* pFnusc_disconnect = NULL;

	if ( ! pFnusc_disconnect )
		pFnusc_disconnect = (UFunction*) UObject::GObjObjects()->GetIndex( 124713 );

	UTgGameMoviePlayer_execusc_disconnect_Parms usc_disconnect_Parms;

	pFnusc_disconnect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_disconnect, &usc_disconnect_Parms, NULL );

	pFnusc_disconnect->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_is_safe_to_load
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sUrl                           ( CPF_Parm | CPF_NeedCtorLink )

bool UTgGameMoviePlayer::usc_is_safe_to_load ( struct FString sUrl )
{
	static UFunction* pFnusc_is_safe_to_load = NULL;

	if ( ! pFnusc_is_safe_to_load )
		pFnusc_is_safe_to_load = (UFunction*) UObject::GObjObjects()->GetIndex( 124710 );

	UTgGameMoviePlayer_execusc_is_safe_to_load_Parms usc_is_safe_to_load_Parms;
	memcpy ( &usc_is_safe_to_load_Parms.sUrl, &sUrl, 0xC );

	pFnusc_is_safe_to_load->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_is_safe_to_load, &usc_is_safe_to_load_Parms, NULL );

	pFnusc_is_safe_to_load->FunctionFlags |= 0x400;

	return usc_is_safe_to_load_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_forward_feature2
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            pItemType                      ( CPF_Parm )
// struct FString                 pItemData                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 pItemData2                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_forward_feature2 ( int pItemType, struct FString pItemData, struct FString pItemData2 )
{
	static UFunction* pFnusc_forward_feature2 = NULL;

	if ( ! pFnusc_forward_feature2 )
		pFnusc_forward_feature2 = (UFunction*) UObject::GObjObjects()->GetIndex( 124706 );

	UTgGameMoviePlayer_execusc_forward_feature2_Parms usc_forward_feature2_Parms;
	usc_forward_feature2_Parms.pItemType = pItemType;
	memcpy ( &usc_forward_feature2_Parms.pItemData, &pItemData, 0xC );
	memcpy ( &usc_forward_feature2_Parms.pItemData2, &pItemData2, 0xC );

	pFnusc_forward_feature2->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_forward_feature2, &usc_forward_feature2_Parms, NULL );

	pFnusc_forward_feature2->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_forward_feature
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            pItemType                      ( CPF_Parm )
// struct FString                 pItemData                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_forward_feature ( int pItemType, struct FString pItemData )
{
	static UFunction* pFnusc_forward_feature = NULL;

	if ( ! pFnusc_forward_feature )
		pFnusc_forward_feature = (UFunction*) UObject::GObjObjects()->GetIndex( 124703 );

	UTgGameMoviePlayer_execusc_forward_feature_Parms usc_forward_feature_Parms;
	usc_forward_feature_Parms.pItemType = pItemType;
	memcpy ( &usc_forward_feature_Parms.pItemData, &pItemData, 0xC );

	pFnusc_forward_feature->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_forward_feature, &usc_forward_feature_Parms, NULL );

	pFnusc_forward_feature->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.GetSysCounterValue
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nCounterId                     ( CPF_Parm )

int UTgGameMoviePlayer::GetSysCounterValue ( int nCounterId )
{
	static UFunction* pFnGetSysCounterValue = NULL;

	if ( ! pFnGetSysCounterValue )
		pFnGetSysCounterValue = (UFunction*) UObject::GObjObjects()->GetIndex( 124700 );

	UTgGameMoviePlayer_execGetSysCounterValue_Parms GetSysCounterValue_Parms;
	GetSysCounterValue_Parms.nCounterId = nCounterId;

	pFnGetSysCounterValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSysCounterValue, &GetSysCounterValue_Parms, NULL );

	pFnGetSysCounterValue->FunctionFlags |= 0x400;

	return GetSysCounterValue_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_getBoostedTime
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UTgGameMoviePlayer::usc_getBoostedTime ( )
{
	static UFunction* pFnusc_getBoostedTime = NULL;

	if ( ! pFnusc_getBoostedTime )
		pFnusc_getBoostedTime = (UFunction*) UObject::GObjObjects()->GetIndex( 124698 );

	UTgGameMoviePlayer_execusc_getBoostedTime_Parms usc_getBoostedTime_Parms;

	pFnusc_getBoostedTime->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_getBoostedTime, &usc_getBoostedTime_Parms, NULL );

	pFnusc_getBoostedTime->FunctionFlags |= 0x400;

	return usc_getBoostedTime_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_introFinished
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_introFinished ( )
{
	static UFunction* pFnusc_introFinished = NULL;

	if ( ! pFnusc_introFinished )
		pFnusc_introFinished = (UFunction*) UObject::GObjObjects()->GetIndex( 124697 );

	UTgGameMoviePlayer_execusc_introFinished_Parms usc_introFinished_Parms;

	pFnusc_introFinished->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_introFinished, &usc_introFinished_Parms, NULL );

	pFnusc_introFinished->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_ableToSkipTutorial
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_ableToSkipTutorial ( )
{
	static UFunction* pFnusc_ableToSkipTutorial = NULL;

	if ( ! pFnusc_ableToSkipTutorial )
		pFnusc_ableToSkipTutorial = (UFunction*) UObject::GObjObjects()->GetIndex( 124695 );

	UTgGameMoviePlayer_execusc_ableToSkipTutorial_Parms usc_ableToSkipTutorial_Parms;

	pFnusc_ableToSkipTutorial->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_ableToSkipTutorial, &usc_ableToSkipTutorial_Parms, NULL );

	pFnusc_ableToSkipTutorial->FunctionFlags |= 0x400;

	return usc_ableToSkipTutorial_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.GetPortalType
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UTgGameMoviePlayer::GetPortalType ( )
{
	static UFunction* pFnGetPortalType = NULL;

	if ( ! pFnGetPortalType )
		pFnGetPortalType = (UFunction*) UObject::GObjObjects()->GetIndex( 124693 );

	UTgGameMoviePlayer_execGetPortalType_Parms GetPortalType_Parms;

	pFnGetPortalType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPortalType, &GetPortalType_Parms, NULL );

	pFnGetPortalType->FunctionFlags |= 0x400;

	return GetPortalType_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.AreDailyQuestsActive
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::AreDailyQuestsActive ( )
{
	static UFunction* pFnAreDailyQuestsActive = NULL;

	if ( ! pFnAreDailyQuestsActive )
		pFnAreDailyQuestsActive = (UFunction*) UObject::GObjObjects()->GetIndex( 124691 );

	UTgGameMoviePlayer_execAreDailyQuestsActive_Parms AreDailyQuestsActive_Parms;

	pFnAreDailyQuestsActive->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAreDailyQuestsActive, &AreDailyQuestsActive_Parms, NULL );

	pFnAreDailyQuestsActive->FunctionFlags |= 0x400;

	return AreDailyQuestsActive_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.UseAltQueueUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::UseAltQueueUI ( )
{
	static UFunction* pFnUseAltQueueUI = NULL;

	if ( ! pFnUseAltQueueUI )
		pFnUseAltQueueUI = (UFunction*) UObject::GObjObjects()->GetIndex( 124689 );

	UTgGameMoviePlayer_execUseAltQueueUI_Parms UseAltQueueUI_Parms;

	pFnUseAltQueueUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUseAltQueueUI, &UseAltQueueUI_Parms, NULL );

	pFnUseAltQueueUI->FunctionFlags |= 0x400;

	return UseAltQueueUI_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.UseAltUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::UseAltUI ( )
{
	static UFunction* pFnUseAltUI = NULL;

	if ( ! pFnUseAltUI )
		pFnUseAltUI = (UFunction*) UObject::GObjObjects()->GetIndex( 124687 );

	UTgGameMoviePlayer_execUseAltUI_Parms UseAltUI_Parms;

	pFnUseAltUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUseAltUI, &UseAltUI_Parms, NULL );

	pFnUseAltUI->FunctionFlags |= 0x400;

	return UseAltUI_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_is_party_leader
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_is_party_leader ( )
{
	static UFunction* pFnusc_is_party_leader = NULL;

	if ( ! pFnusc_is_party_leader )
		pFnusc_is_party_leader = (UFunction*) UObject::GObjObjects()->GetIndex( 124685 );

	UTgGameMoviePlayer_execusc_is_party_leader_Parms usc_is_party_leader_Parms;

	pFnusc_is_party_leader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_is_party_leader, &usc_is_party_leader_Parms, NULL );

	pFnusc_is_party_leader->FunctionFlags |= 0x400;

	return usc_is_party_leader_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_can_invite_players
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_can_invite_players ( )
{
	static UFunction* pFnusc_can_invite_players = NULL;

	if ( ! pFnusc_can_invite_players )
		pFnusc_can_invite_players = (UFunction*) UObject::GObjObjects()->GetIndex( 124683 );

	UTgGameMoviePlayer_execusc_can_invite_players_Parms usc_can_invite_players_Parms;

	pFnusc_can_invite_players->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_can_invite_players, &usc_can_invite_players_Parms, NULL );

	pFnusc_can_invite_players->FunctionFlags |= 0x400;

	return usc_can_invite_players_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_kick_team_player
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_kick_team_player ( struct FString sPlayerName )
{
	static UFunction* pFnusc_kick_team_player = NULL;

	if ( ! pFnusc_kick_team_player )
		pFnusc_kick_team_player = (UFunction*) UObject::GObjObjects()->GetIndex( 124681 );

	UTgGameMoviePlayer_execusc_kick_team_player_Parms usc_kick_team_player_Parms;
	memcpy ( &usc_kick_team_player_Parms.sPlayerName, &sPlayerName, 0xC );

	pFnusc_kick_team_player->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_kick_team_player, &usc_kick_team_player_Parms, NULL );

	pFnusc_kick_team_player->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_Decline_Match_Invite
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_Decline_Match_Invite ( )
{
	static UFunction* pFnusc_Decline_Match_Invite = NULL;

	if ( ! pFnusc_Decline_Match_Invite )
		pFnusc_Decline_Match_Invite = (UFunction*) UObject::GObjObjects()->GetIndex( 124680 );

	UTgGameMoviePlayer_execusc_Decline_Match_Invite_Parms usc_Decline_Match_Invite_Parms;

	pFnusc_Decline_Match_Invite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_Decline_Match_Invite, &usc_Decline_Match_Invite_Parms, NULL );

	pFnusc_Decline_Match_Invite->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_Accept_Match_Invite
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_Accept_Match_Invite ( )
{
	static UFunction* pFnusc_Accept_Match_Invite = NULL;

	if ( ! pFnusc_Accept_Match_Invite )
		pFnusc_Accept_Match_Invite = (UFunction*) UObject::GObjObjects()->GetIndex( 124679 );

	UTgGameMoviePlayer_execusc_Accept_Match_Invite_Parms usc_Accept_Match_Invite_Parms;

	pFnusc_Accept_Match_Invite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_Accept_Match_Invite, &usc_Accept_Match_Invite_Parms, NULL );

	pFnusc_Accept_Match_Invite->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_CheckForLoginErrorMsg
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UTgGameMoviePlayer::usc_CheckForLoginErrorMsg ( )
{
	static UFunction* pFnusc_CheckForLoginErrorMsg = NULL;

	if ( ! pFnusc_CheckForLoginErrorMsg )
		pFnusc_CheckForLoginErrorMsg = (UFunction*) UObject::GObjObjects()->GetIndex( 124677 );

	UTgGameMoviePlayer_execusc_CheckForLoginErrorMsg_Parms usc_CheckForLoginErrorMsg_Parms;

	pFnusc_CheckForLoginErrorMsg->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_CheckForLoginErrorMsg, &usc_CheckForLoginErrorMsg_Parms, NULL );

	pFnusc_CheckForLoginErrorMsg->FunctionFlags |= 0x400;

	return usc_CheckForLoginErrorMsg_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_match_play_emote
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nEmoteId                       ( CPF_Parm )

void UTgGameMoviePlayer::usc_match_play_emote ( int nEmoteId )
{
	static UFunction* pFnusc_match_play_emote = NULL;

	if ( ! pFnusc_match_play_emote )
		pFnusc_match_play_emote = (UFunction*) UObject::GObjObjects()->GetIndex( 124675 );

	UTgGameMoviePlayer_execusc_match_play_emote_Parms usc_match_play_emote_Parms;
	usc_match_play_emote_Parms.nEmoteId = nEmoteId;

	pFnusc_match_play_emote->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_match_play_emote, &usc_match_play_emote_Parms, NULL );

	pFnusc_match_play_emote->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_match_purchase_voice_pack
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nVoicePackItemId               ( CPF_Parm )

void UTgGameMoviePlayer::usc_match_purchase_voice_pack ( int nVoicePackItemId )
{
	static UFunction* pFnusc_match_purchase_voice_pack = NULL;

	if ( ! pFnusc_match_purchase_voice_pack )
		pFnusc_match_purchase_voice_pack = (UFunction*) UObject::GObjObjects()->GetIndex( 124673 );

	UTgGameMoviePlayer_execusc_match_purchase_voice_pack_Parms usc_match_purchase_voice_pack_Parms;
	usc_match_purchase_voice_pack_Parms.nVoicePackItemId = nVoicePackItemId;

	pFnusc_match_purchase_voice_pack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_match_purchase_voice_pack, &usc_match_purchase_voice_pack_Parms, NULL );

	pFnusc_match_purchase_voice_pack->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_match_can_purchase_random_class
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nQueueId                       ( CPF_Parm )

bool UTgGameMoviePlayer::usc_match_can_purchase_random_class ( int nQueueId )
{
	static UFunction* pFnusc_match_can_purchase_random_class = NULL;

	if ( ! pFnusc_match_can_purchase_random_class )
		pFnusc_match_can_purchase_random_class = (UFunction*) UObject::GObjObjects()->GetIndex( 124670 );

	UTgGameMoviePlayer_execusc_match_can_purchase_random_class_Parms usc_match_can_purchase_random_class_Parms;
	usc_match_can_purchase_random_class_Parms.nQueueId = nQueueId;

	pFnusc_match_can_purchase_random_class->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_match_can_purchase_random_class, &usc_match_can_purchase_random_class_Parms, NULL );

	pFnusc_match_can_purchase_random_class->FunctionFlags |= 0x400;

	return usc_match_can_purchase_random_class_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_match_close_random_class_popup
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_match_close_random_class_popup ( )
{
	static UFunction* pFnusc_match_close_random_class_popup = NULL;

	if ( ! pFnusc_match_close_random_class_popup )
		pFnusc_match_close_random_class_popup = (UFunction*) UObject::GObjObjects()->GetIndex( 124669 );

	UTgGameMoviePlayer_execusc_match_close_random_class_popup_Parms usc_match_close_random_class_popup_Parms;

	pFnusc_match_close_random_class_popup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_match_close_random_class_popup, &usc_match_close_random_class_popup_Parms, NULL );

	pFnusc_match_close_random_class_popup->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_match_request_random_class
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_match_request_random_class ( )
{
	static UFunction* pFnusc_match_request_random_class = NULL;

	if ( ! pFnusc_match_request_random_class )
		pFnusc_match_request_random_class = (UFunction*) UObject::GObjObjects()->GetIndex( 124668 );

	UTgGameMoviePlayer_execusc_match_request_random_class_Parms usc_match_request_random_class_Parms;

	pFnusc_match_request_random_class->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_match_request_random_class, &usc_match_request_random_class_Parms, NULL );

	pFnusc_match_request_random_class->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_GetGameName
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UTgGameMoviePlayer::usc_GetGameName ( )
{
	static UFunction* pFnusc_GetGameName = NULL;

	if ( ! pFnusc_GetGameName )
		pFnusc_GetGameName = (UFunction*) UObject::GObjObjects()->GetIndex( 124666 );

	UTgGameMoviePlayer_execusc_GetGameName_Parms usc_GetGameName_Parms;

	pFnusc_GetGameName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_GetGameName, &usc_GetGameName_Parms, NULL );

	pFnusc_GetGameName->FunctionFlags |= 0x400;

	return usc_GetGameName_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_viewStatsOnline
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sInstanceId                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_viewStatsOnline ( struct FString sInstanceId )
{
	static UFunction* pFnusc_viewStatsOnline = NULL;

	if ( ! pFnusc_viewStatsOnline )
		pFnusc_viewStatsOnline = (UFunction*) UObject::GObjObjects()->GetIndex( 124664 );

	UTgGameMoviePlayer_execusc_viewStatsOnline_Parms usc_viewStatsOnline_Parms;
	memcpy ( &usc_viewStatsOnline_Parms.sInstanceId, &sInstanceId, 0xC );

	pFnusc_viewStatsOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_viewStatsOnline, &usc_viewStatsOnline_Parms, NULL );

	pFnusc_viewStatsOnline->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_watch_eom_replay
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sInstanceId                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_watch_eom_replay ( struct FString sInstanceId )
{
	static UFunction* pFnusc_watch_eom_replay = NULL;

	if ( ! pFnusc_watch_eom_replay )
		pFnusc_watch_eom_replay = (UFunction*) UObject::GObjObjects()->GetIndex( 124662 );

	UTgGameMoviePlayer_execusc_watch_eom_replay_Parms usc_watch_eom_replay_Parms;
	memcpy ( &usc_watch_eom_replay_Parms.sInstanceId, &sInstanceId, 0xC );

	pFnusc_watch_eom_replay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_watch_eom_replay, &usc_watch_eom_replay_Parms, NULL );

	pFnusc_watch_eom_replay->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_match_cancel_trade
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_match_cancel_trade ( )
{
	static UFunction* pFnusc_match_cancel_trade = NULL;

	if ( ! pFnusc_match_cancel_trade )
		pFnusc_match_cancel_trade = (UFunction*) UObject::GObjObjects()->GetIndex( 124661 );

	UTgGameMoviePlayer_execusc_match_cancel_trade_Parms usc_match_cancel_trade_Parms;

	pFnusc_match_cancel_trade->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_match_cancel_trade, &usc_match_cancel_trade_Parms, NULL );

	pFnusc_match_cancel_trade->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_match_request_trade
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nPlayerId                      ( CPF_Parm )

void UTgGameMoviePlayer::usc_match_request_trade ( int nPlayerId )
{
	static UFunction* pFnusc_match_request_trade = NULL;

	if ( ! pFnusc_match_request_trade )
		pFnusc_match_request_trade = (UFunction*) UObject::GObjObjects()->GetIndex( 124659 );

	UTgGameMoviePlayer_execusc_match_request_trade_Parms usc_match_request_trade_Parms;
	usc_match_request_trade_Parms.nPlayerId = nPlayerId;

	pFnusc_match_request_trade->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_match_request_trade, &usc_match_request_trade_Parms, NULL );

	pFnusc_match_request_trade->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_match_ban_class
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nClassId                       ( CPF_Parm )

void UTgGameMoviePlayer::usc_match_ban_class ( int nClassId )
{
	static UFunction* pFnusc_match_ban_class = NULL;

	if ( ! pFnusc_match_ban_class )
		pFnusc_match_ban_class = (UFunction*) UObject::GObjObjects()->GetIndex( 124657 );

	UTgGameMoviePlayer_execusc_match_ban_class_Parms usc_match_ban_class_Parms;
	usc_match_ban_class_Parms.nClassId = nClassId;

	pFnusc_match_ban_class->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_match_ban_class, &usc_match_ban_class_Parms, NULL );

	pFnusc_match_ban_class->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_close_eom_lobby
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nNavigationTarget              ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::usc_close_eom_lobby ( int nNavigationTarget )
{
	static UFunction* pFnusc_close_eom_lobby = NULL;

	if ( ! pFnusc_close_eom_lobby )
		pFnusc_close_eom_lobby = (UFunction*) UObject::GObjObjects()->GetIndex( 124655 );

	UTgGameMoviePlayer_execusc_close_eom_lobby_Parms usc_close_eom_lobby_Parms;
	usc_close_eom_lobby_Parms.nNavigationTarget = nNavigationTarget;

	pFnusc_close_eom_lobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_close_eom_lobby, &usc_close_eom_lobby_Parms, NULL );

	pFnusc_close_eom_lobby->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_can_play_again
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_can_play_again ( )
{
	static UFunction* pFnusc_can_play_again = NULL;

	if ( ! pFnusc_can_play_again )
		pFnusc_can_play_again = (UFunction*) UObject::GObjObjects()->GetIndex( 124653 );

	UTgGameMoviePlayer_execusc_can_play_again_Parms usc_can_play_again_Parms;

	pFnusc_can_play_again->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_can_play_again, &usc_can_play_again_Parms, NULL );

	pFnusc_can_play_again->FunctionFlags |= 0x400;

	return usc_can_play_again_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_play_again
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_play_again ( )
{
	static UFunction* pFnusc_play_again = NULL;

	if ( ! pFnusc_play_again )
		pFnusc_play_again = (UFunction*) UObject::GObjObjects()->GetIndex( 124652 );

	UTgGameMoviePlayer_execusc_play_again_Parms usc_play_again_Parms;

	pFnusc_play_again->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_play_again, &usc_play_again_Parms, NULL );

	pFnusc_play_again->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_match_lock_in
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_match_lock_in ( )
{
	static UFunction* pFnusc_match_lock_in = NULL;

	if ( ! pFnusc_match_lock_in )
		pFnusc_match_lock_in = (UFunction*) UObject::GObjObjects()->GetIndex( 124651 );

	UTgGameMoviePlayer_execusc_match_lock_in_Parms usc_match_lock_in_Parms;

	pFnusc_match_lock_in->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_match_lock_in, &usc_match_lock_in_Parms, NULL );

	pFnusc_match_lock_in->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_match_choose_skin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nSkinId                        ( CPF_Parm )

void UTgGameMoviePlayer::usc_match_choose_skin ( int nSkinId )
{
	static UFunction* pFnusc_match_choose_skin = NULL;

	if ( ! pFnusc_match_choose_skin )
		pFnusc_match_choose_skin = (UFunction*) UObject::GObjObjects()->GetIndex( 124649 );

	UTgGameMoviePlayer_execusc_match_choose_skin_Parms usc_match_choose_skin_Parms;
	usc_match_choose_skin_Parms.nSkinId = nSkinId;

	pFnusc_match_choose_skin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_match_choose_skin, &usc_match_choose_skin_Parms, NULL );

	pFnusc_match_choose_skin->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_match_choose_class
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nClassId                       ( CPF_Parm )

void UTgGameMoviePlayer::usc_match_choose_class ( int nClassId )
{
	static UFunction* pFnusc_match_choose_class = NULL;

	if ( ! pFnusc_match_choose_class )
		pFnusc_match_choose_class = (UFunction*) UObject::GObjObjects()->GetIndex( 124647 );

	UTgGameMoviePlayer_execusc_match_choose_class_Parms usc_match_choose_class_Parms;
	usc_match_choose_class_Parms.nClassId = nClassId;

	pFnusc_match_choose_class->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_match_choose_class, &usc_match_choose_class_Parms, NULL );

	pFnusc_match_choose_class->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_queue_leave
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_queue_leave ( )
{
	static UFunction* pFnusc_queue_leave = NULL;

	if ( ! pFnusc_queue_leave )
		pFnusc_queue_leave = (UFunction*) UObject::GObjObjects()->GetIndex( 124646 );

	UTgGameMoviePlayer_execusc_queue_leave_Parms usc_queue_leave_Parms;

	pFnusc_queue_leave->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_queue_leave, &usc_queue_leave_Parms, NULL );

	pFnusc_queue_leave->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_queue_create_team
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nQueueId                       ( CPF_Parm )
// struct FString                 sPassword                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_queue_create_team ( int nQueueId, struct FString sPassword )
{
	static UFunction* pFnusc_queue_create_team = NULL;

	if ( ! pFnusc_queue_create_team )
		pFnusc_queue_create_team = (UFunction*) UObject::GObjObjects()->GetIndex( 124643 );

	UTgGameMoviePlayer_execusc_queue_create_team_Parms usc_queue_create_team_Parms;
	usc_queue_create_team_Parms.nQueueId = nQueueId;
	memcpy ( &usc_queue_create_team_Parms.sPassword, &sPassword, 0xC );

	pFnusc_queue_create_team->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_queue_create_team, &usc_queue_create_team_Parms, NULL );

	pFnusc_queue_create_team->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_saveTransformSettings
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 TransformSettings              ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_saveTransformSettings ( struct FString TransformSettings )
{
	static UFunction* pFnusc_saveTransformSettings = NULL;

	if ( ! pFnusc_saveTransformSettings )
		pFnusc_saveTransformSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 124641 );

	UTgGameMoviePlayer_execusc_saveTransformSettings_Parms usc_saveTransformSettings_Parms;
	memcpy ( &usc_saveTransformSettings_Parms.TransformSettings, &TransformSettings, 0xC );

	pFnusc_saveTransformSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_saveTransformSettings, &usc_saveTransformSettings_Parms, NULL );

	pFnusc_saveTransformSettings->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_loadTransformSettings
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UTgGameMoviePlayer::usc_loadTransformSettings ( )
{
	static UFunction* pFnusc_loadTransformSettings = NULL;

	if ( ! pFnusc_loadTransformSettings )
		pFnusc_loadTransformSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 124639 );

	UTgGameMoviePlayer_execusc_loadTransformSettings_Parms usc_loadTransformSettings_Parms;

	pFnusc_loadTransformSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_loadTransformSettings, &usc_loadTransformSettings_Parms, NULL );

	pFnusc_loadTransformSettings->FunctionFlags |= 0x400;

	return usc_loadTransformSettings_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_clearReferral
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sExtId                         ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_clearReferral ( struct FString sExtId )
{
	static UFunction* pFnusc_clearReferral = NULL;

	if ( ! pFnusc_clearReferral )
		pFnusc_clearReferral = (UFunction*) UObject::GObjObjects()->GetIndex( 124637 );

	UTgGameMoviePlayer_execusc_clearReferral_Parms usc_clearReferral_Parms;
	memcpy ( &usc_clearReferral_Parms.sExtId, &sExtId, 0xC );

	pFnusc_clearReferral->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_clearReferral, &usc_clearReferral_Parms, NULL );

	pFnusc_clearReferral->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_clearLeagueDC
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_clearLeagueDC ( )
{
	static UFunction* pFnusc_clearLeagueDC = NULL;

	if ( ! pFnusc_clearLeagueDC )
		pFnusc_clearLeagueDC = (UFunction*) UObject::GObjObjects()->GetIndex( 124636 );

	UTgGameMoviePlayer_execusc_clearLeagueDC_Parms usc_clearLeagueDC_Parms;

	pFnusc_clearLeagueDC->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_clearLeagueDC, &usc_clearLeagueDC_Parms, NULL );

	pFnusc_clearLeagueDC->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_passwordInputFocus
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_passwordInputFocus ( )
{
	static UFunction* pFnusc_passwordInputFocus = NULL;

	if ( ! pFnusc_passwordInputFocus )
		pFnusc_passwordInputFocus = (UFunction*) UObject::GObjObjects()->GetIndex( 124635 );

	UTgGameMoviePlayer_execusc_passwordInputFocus_Parms usc_passwordInputFocus_Parms;

	pFnusc_passwordInputFocus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_passwordInputFocus, &usc_passwordInputFocus_Parms, NULL );

	pFnusc_passwordInputFocus->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_nameInputFocus
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_nameInputFocus ( )
{
	static UFunction* pFnusc_nameInputFocus = NULL;

	if ( ! pFnusc_nameInputFocus )
		pFnusc_nameInputFocus = (UFunction*) UObject::GObjObjects()->GetIndex( 124634 );

	UTgGameMoviePlayer_execusc_nameInputFocus_Parms usc_nameInputFocus_Parms;

	pFnusc_nameInputFocus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_nameInputFocus, &usc_nameInputFocus_Parms, NULL );

	pFnusc_nameInputFocus->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_CancelQueue
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_CancelQueue ( )
{
	static UFunction* pFnusc_CancelQueue = NULL;

	if ( ! pFnusc_CancelQueue )
		pFnusc_CancelQueue = (UFunction*) UObject::GObjObjects()->GetIndex( 124633 );

	UTgGameMoviePlayer_execusc_CancelQueue_Parms usc_CancelQueue_Parms;

	pFnusc_CancelQueue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_CancelQueue, &usc_CancelQueue_Parms, NULL );

	pFnusc_CancelQueue->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_request_account_info
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nType                          ( CPF_Parm )

void UTgGameMoviePlayer::usc_request_account_info ( int nType )
{
	static UFunction* pFnusc_request_account_info = NULL;

	if ( ! pFnusc_request_account_info )
		pFnusc_request_account_info = (UFunction*) UObject::GObjObjects()->GetIndex( 124631 );

	UTgGameMoviePlayer_execusc_request_account_info_Parms usc_request_account_info_Parms;
	usc_request_account_info_Parms.nType = nType;

	pFnusc_request_account_info->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_request_account_info, &usc_request_account_info_Parms, NULL );

	pFnusc_request_account_info->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_getEULAText
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UTgGameMoviePlayer::usc_getEULAText ( )
{
	static UFunction* pFnusc_getEULAText = NULL;

	if ( ! pFnusc_getEULAText )
		pFnusc_getEULAText = (UFunction*) UObject::GObjObjects()->GetIndex( 124629 );

	UTgGameMoviePlayer_execusc_getEULAText_Parms usc_getEULAText_Parms;

	pFnusc_getEULAText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_getEULAText, &usc_getEULAText_Parms, NULL );

	pFnusc_getEULAText->FunctionFlags |= 0x400;

	return usc_getEULAText_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_acceptEULA
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_acceptEULA ( )
{
	static UFunction* pFnusc_acceptEULA = NULL;

	if ( ! pFnusc_acceptEULA )
		pFnusc_acceptEULA = (UFunction*) UObject::GObjObjects()->GetIndex( 124628 );

	UTgGameMoviePlayer_execusc_acceptEULA_Parms usc_acceptEULA_Parms;

	pFnusc_acceptEULA->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_acceptEULA, &usc_acceptEULA_Parms, NULL );

	pFnusc_acceptEULA->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_createPlayerName
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sLoginName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sPass                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sNewPlayerName                 ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_createPlayerName ( struct FString sLoginName, struct FString sPass, struct FString sNewPlayerName )
{
	static UFunction* pFnusc_createPlayerName = NULL;

	if ( ! pFnusc_createPlayerName )
		pFnusc_createPlayerName = (UFunction*) UObject::GObjObjects()->GetIndex( 124624 );

	UTgGameMoviePlayer_execusc_createPlayerName_Parms usc_createPlayerName_Parms;
	memcpy ( &usc_createPlayerName_Parms.sLoginName, &sLoginName, 0xC );
	memcpy ( &usc_createPlayerName_Parms.sPass, &sPass, 0xC );
	memcpy ( &usc_createPlayerName_Parms.sNewPlayerName, &sNewPlayerName, 0xC );

	pFnusc_createPlayerName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_createPlayerName, &usc_createPlayerName_Parms, NULL );

	pFnusc_createPlayerName->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_remember_name_changed
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bNewValue                      ( CPF_Parm )

void UTgGameMoviePlayer::usc_remember_name_changed ( unsigned long bNewValue )
{
	static UFunction* pFnusc_remember_name_changed = NULL;

	if ( ! pFnusc_remember_name_changed )
		pFnusc_remember_name_changed = (UFunction*) UObject::GObjObjects()->GetIndex( 124622 );

	UTgGameMoviePlayer_execusc_remember_name_changed_Parms usc_remember_name_changed_Parms;
	usc_remember_name_changed_Parms.bNewValue = bNewValue;

	pFnusc_remember_name_changed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_remember_name_changed, &usc_remember_name_changed_Parms, NULL );

	pFnusc_remember_name_changed->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_attempt_auto_login
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_attempt_auto_login ( )
{
	static UFunction* pFnusc_attempt_auto_login = NULL;

	if ( ! pFnusc_attempt_auto_login )
		pFnusc_attempt_auto_login = (UFunction*) UObject::GObjObjects()->GetIndex( 124621 );

	UTgGameMoviePlayer_execusc_attempt_auto_login_Parms usc_attempt_auto_login_Parms;

	pFnusc_attempt_auto_login->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_attempt_auto_login, &usc_attempt_auto_login_Parms, NULL );

	pFnusc_attempt_auto_login->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_login
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_login ( struct FString UserName, struct FString Password )
{
	static UFunction* pFnusc_login = NULL;

	if ( ! pFnusc_login )
		pFnusc_login = (UFunction*) UObject::GObjObjects()->GetIndex( 124618 );

	UTgGameMoviePlayer_execusc_login_Parms usc_login_Parms;
	memcpy ( &usc_login_Parms.UserName, &UserName, 0xC );
	memcpy ( &usc_login_Parms.Password, &Password, 0xC );

	pFnusc_login->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_login, &usc_login_Parms, NULL );

	pFnusc_login->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_loginExits
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_loginExits ( )
{
	static UFunction* pFnusc_loginExits = NULL;

	if ( ! pFnusc_loginExits )
		pFnusc_loginExits = (UFunction*) UObject::GObjObjects()->GetIndex( 124616 );

	UTgGameMoviePlayer_execusc_loginExits_Parms usc_loginExits_Parms;

	pFnusc_loginExits->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_loginExits, &usc_loginExits_Parms, NULL );

	pFnusc_loginExits->FunctionFlags |= 0x400;

	return usc_loginExits_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.Replay
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nInstanceId                    ( CPF_Parm )
// struct FString                 sPassword                      ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::Replay ( int nInstanceId, struct FString sPassword )
{
	static UFunction* pFnReplay = NULL;

	if ( ! pFnReplay )
		pFnReplay = (UFunction*) UObject::GObjObjects()->GetIndex( 124613 );

	UTgGameMoviePlayer_execReplay_Parms Replay_Parms;
	Replay_Parms.nInstanceId = nInstanceId;
	memcpy ( &Replay_Parms.sPassword, &sPassword, 0xC );

	pFnReplay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReplay, &Replay_Parms, NULL );

	pFnReplay->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.EndLobbyPlayback
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::EndLobbyPlayback ( )
{
	static UFunction* pFnEndLobbyPlayback = NULL;

	if ( ! pFnEndLobbyPlayback )
		pFnEndLobbyPlayback = (UFunction*) UObject::GObjObjects()->GetIndex( 124612 );

	UTgGameMoviePlayer_execEndLobbyPlayback_Parms EndLobbyPlayback_Parms;

	pFnEndLobbyPlayback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndLobbyPlayback, &EndLobbyPlayback_Parms, NULL );

	pFnEndLobbyPlayback->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.CancelPlayback
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::CancelPlayback ( )
{
	static UFunction* pFnCancelPlayback = NULL;

	if ( ! pFnCancelPlayback )
		pFnCancelPlayback = (UFunction*) UObject::GObjObjects()->GetIndex( 124611 );

	UTgGameMoviePlayer_execCancelPlayback_Parms CancelPlayback_Parms;

	pFnCancelPlayback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelPlayback, &CancelPlayback_Parms, NULL );

	pFnCancelPlayback->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.OnDemoReady
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::OnDemoReady ( )
{
	static UFunction* pFnOnDemoReady = NULL;

	if ( ! pFnOnDemoReady )
		pFnOnDemoReady = (UFunction*) UObject::GObjObjects()->GetIndex( 124609 );

	UTgGameMoviePlayer_execOnDemoReady_Parms OnDemoReady_Parms;

	pFnOnDemoReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDemoReady, &OnDemoReady_Parms, NULL );

	pFnOnDemoReady->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.LoadBrowserScene
// [0x00020002] 
// Parameters infos:

void UTgGameMoviePlayer::LoadBrowserScene ( )
{
	static UFunction* pFnLoadBrowserScene = NULL;

	if ( ! pFnLoadBrowserScene )
		pFnLoadBrowserScene = (UFunction*) UObject::GObjObjects()->GetIndex( 124610 );

	UTgGameMoviePlayer_execLoadBrowserScene_Parms LoadBrowserScene_Parms;

	this->ProcessEvent ( pFnLoadBrowserScene, &LoadBrowserScene_Parms, NULL );
};

// Function TgClient.TgOverlayMoviePlayer.WidgetUnloaded
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )
// struct FName                   WidgetPath                     ( CPF_Parm )
// class UGFxObject*              Widget                         ( CPF_Parm )

bool UTgOverlayMoviePlayer::eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget )
{
	static UFunction* pFnWidgetUnloaded = NULL;

	if ( ! pFnWidgetUnloaded )
		pFnWidgetUnloaded = (UFunction*) UObject::GObjObjects()->GetIndex( 128618 );

	UTgOverlayMoviePlayer_eventWidgetUnloaded_Parms WidgetUnloaded_Parms;
	memcpy ( &WidgetUnloaded_Parms.WidgetName, &WidgetName, 0x8 );
	memcpy ( &WidgetUnloaded_Parms.WidgetPath, &WidgetPath, 0x8 );
	WidgetUnloaded_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWidgetUnloaded, &WidgetUnloaded_Parms, NULL );

	return WidgetUnloaded_Parms.ReturnValue;
};

// Function TgClient.TgOverlayMoviePlayer.WidgetInitialized
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )
// struct FName                   WidgetPath                     ( CPF_Parm )
// class UGFxObject*              Widget                         ( CPF_Parm )

bool UTgOverlayMoviePlayer::eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget )
{
	static UFunction* pFnWidgetInitialized = NULL;

	if ( ! pFnWidgetInitialized )
		pFnWidgetInitialized = (UFunction*) UObject::GObjObjects()->GetIndex( 128613 );

	UTgOverlayMoviePlayer_eventWidgetInitialized_Parms WidgetInitialized_Parms;
	memcpy ( &WidgetInitialized_Parms.WidgetName, &WidgetName, 0x8 );
	memcpy ( &WidgetInitialized_Parms.WidgetPath, &WidgetPath, 0x8 );
	WidgetInitialized_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWidgetInitialized, &WidgetInitialized_Parms, NULL );

	return WidgetInitialized_Parms.ReturnValue;
};

// Function TgClient.TgLobbyHUD.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATgLobbyHUD::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->GetIndex( 128367 );

	ATgLobbyHUD_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function TgClient.TgLobbyHUD.PostRender
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATgLobbyHUD::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->GetIndex( 128366 );

	ATgLobbyHUD_eventPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function TgClient.TgLobbyHUD.CommitPedestalSelectionChange
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATgLobbyHUD::eventCommitPedestalSelectionChange ( )
{
	static UFunction* pFnCommitPedestalSelectionChange = NULL;

	if ( ! pFnCommitPedestalSelectionChange )
		pFnCommitPedestalSelectionChange = (UFunction*) UObject::GObjObjects()->GetIndex( 128364 );

	ATgLobbyHUD_eventCommitPedestalSelectionChange_Parms CommitPedestalSelectionChange_Parms;

	this->ProcessEvent ( pFnCommitPedestalSelectionChange, &CommitPedestalSelectionChange_Parms, NULL );
};

// Function TgClient.TgLobbyHUD.BeginPedestalSelectionChange
// [0x00024A02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:
// int                            nPedestalSkinId                ( CPF_OptionalParm | CPF_Parm )

void ATgLobbyHUD::BeginPedestalSelectionChange ( int nPedestalSkinId )
{
	static UFunction* pFnBeginPedestalSelectionChange = NULL;

	if ( ! pFnBeginPedestalSelectionChange )
		pFnBeginPedestalSelectionChange = (UFunction*) UObject::GObjObjects()->GetIndex( 128362 );

	ATgLobbyHUD_execBeginPedestalSelectionChange_Parms BeginPedestalSelectionChange_Parms;
	BeginPedestalSelectionChange_Parms.nPedestalSkinId = nPedestalSkinId;

	this->ProcessEvent ( pFnBeginPedestalSelectionChange, &BeginPedestalSelectionChange_Parms, NULL );
};

// Function TgClient.TgLobbyHUD.CommitClassSelectionChange
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATgLobbyHUD::eventCommitClassSelectionChange ( )
{
	static UFunction* pFnCommitClassSelectionChange = NULL;

	if ( ! pFnCommitClassSelectionChange )
		pFnCommitClassSelectionChange = (UFunction*) UObject::GObjObjects()->GetIndex( 128359 );

	ATgLobbyHUD_eventCommitClassSelectionChange_Parms CommitClassSelectionChange_Parms;

	this->ProcessEvent ( pFnCommitClassSelectionChange, &CommitClassSelectionChange_Parms, NULL );
};

// Function TgClient.TgLobbyHUD.BeginClassSelectionChange
// [0x00024A02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:
// int                            nClassId                       ( CPF_Parm )
// int                            nSkinId                        ( CPF_OptionalParm | CPF_Parm )

void ATgLobbyHUD::BeginClassSelectionChange ( int nClassId, int nSkinId )
{
	static UFunction* pFnBeginClassSelectionChange = NULL;

	if ( ! pFnBeginClassSelectionChange )
		pFnBeginClassSelectionChange = (UFunction*) UObject::GObjObjects()->GetIndex( 128356 );

	ATgLobbyHUD_execBeginClassSelectionChange_Parms BeginClassSelectionChange_Parms;
	BeginClassSelectionChange_Parms.nClassId = nClassId;
	BeginClassSelectionChange_Parms.nSkinId = nSkinId;

	this->ProcessEvent ( pFnBeginClassSelectionChange, &BeginClassSelectionChange_Parms, NULL );
};

// Function TgClient.TgLobbyHUD.SetInitialState
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATgLobbyHUD::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = (UFunction*) UObject::GObjObjects()->GetIndex( 128331 );

	ATgLobbyHUD_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};

// Function TgClient.TgLobbyHUD.NotifyLoggedIn
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ATgLobbyHUD::eventNotifyLoggedIn ( )
{
	static UFunction* pFnNotifyLoggedIn = NULL;

	if ( ! pFnNotifyLoggedIn )
		pFnNotifyLoggedIn = (UFunction*) UObject::GObjObjects()->GetIndex( 128330 );

	ATgLobbyHUD_eventNotifyLoggedIn_Parms NotifyLoggedIn_Parms;

	this->ProcessEvent ( pFnNotifyLoggedIn, &NotifyLoggedIn_Parms, NULL );
};

// Function TgClient.TgLobbyHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATgLobbyHUD::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->GetIndex( 128328 );

	ATgLobbyHUD_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function TgClient.TgLobbyHUD.TriggerLazyPrecache
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgLobbyHUD::TriggerLazyPrecache ( )
{
	static UFunction* pFnTriggerLazyPrecache = NULL;

	if ( ! pFnTriggerLazyPrecache )
		pFnTriggerLazyPrecache = (UFunction*) UObject::GObjObjects()->GetIndex( 128327 );

	ATgLobbyHUD_execTriggerLazyPrecache_Parms TriggerLazyPrecache_Parms;

	pFnTriggerLazyPrecache->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTriggerLazyPrecache, &TriggerLazyPrecache_Parms, NULL );

	pFnTriggerLazyPrecache->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.PreBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATgLobbyHUD::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->GetIndex( 128325 );

	ATgLobbyHUD_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function TgClient.TgLobbyHUD.GetLoginDataType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char ATgLobbyHUD::GetLoginDataType ( )
{
	static UFunction* pFnGetLoginDataType = NULL;

	if ( ! pFnGetLoginDataType )
		pFnGetLoginDataType = (UFunction*) UObject::GObjObjects()->GetIndex( 128323 );

	ATgLobbyHUD_execGetLoginDataType_Parms GetLoginDataType_Parms;

	pFnGetLoginDataType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginDataType, &GetLoginDataType_Parms, NULL );

	pFnGetLoginDataType->FunctionFlags |= 0x400;

	return GetLoginDataType_Parms.ReturnValue;
};

// Function TgClient.TgLobbyHUD.DisableEmoteZoom
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bImmediate                     ( CPF_OptionalParm | CPF_Parm )

void ATgLobbyHUD::DisableEmoteZoom ( unsigned long bImmediate )
{
	static UFunction* pFnDisableEmoteZoom = NULL;

	if ( ! pFnDisableEmoteZoom )
		pFnDisableEmoteZoom = (UFunction*) UObject::GObjObjects()->GetIndex( 128321 );

	ATgLobbyHUD_execDisableEmoteZoom_Parms DisableEmoteZoom_Parms;
	DisableEmoteZoom_Parms.bImmediate = bImmediate;

	pFnDisableEmoteZoom->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisableEmoteZoom, &DisableEmoteZoom_Parms, NULL );

	pFnDisableEmoteZoom->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.EnableEmoteZoom
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgLobbyHUD::EnableEmoteZoom ( )
{
	static UFunction* pFnEnableEmoteZoom = NULL;

	if ( ! pFnEnableEmoteZoom )
		pFnEnableEmoteZoom = (UFunction*) UObject::GObjObjects()->GetIndex( 128320 );

	ATgLobbyHUD_execEnableEmoteZoom_Parms EnableEmoteZoom_Parms;

	pFnEnableEmoteZoom->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnableEmoteZoom, &EnableEmoteZoom_Parms, NULL );

	pFnEnableEmoteZoom->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.PlayEmote
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nVgsId                         ( CPF_Parm )

void ATgLobbyHUD::PlayEmote ( int nVgsId )
{
	static UFunction* pFnPlayEmote = NULL;

	if ( ! pFnPlayEmote )
		pFnPlayEmote = (UFunction*) UObject::GObjObjects()->GetIndex( 128318 );

	ATgLobbyHUD_execPlayEmote_Parms PlayEmote_Parms;
	PlayEmote_Parms.nVgsId = nVgsId;

	pFnPlayEmote->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayEmote, &PlayEmote_Parms, NULL );

	pFnPlayEmote->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.UpdateCardDraws
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UCanvas*                 CanvasIn                       ( CPF_Parm )

void ATgLobbyHUD::UpdateCardDraws ( class UCanvas* CanvasIn )
{
	static UFunction* pFnUpdateCardDraws = NULL;

	if ( ! pFnUpdateCardDraws )
		pFnUpdateCardDraws = (UFunction*) UObject::GObjObjects()->GetIndex( 128316 );

	ATgLobbyHUD_execUpdateCardDraws_Parms UpdateCardDraws_Parms;
	UpdateCardDraws_Parms.CanvasIn = CanvasIn;

	pFnUpdateCardDraws->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateCardDraws, &UpdateCardDraws_Parms, NULL );

	pFnUpdateCardDraws->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.UpdateDebugDraws
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgLobbyHUD::UpdateDebugDraws ( )
{
	static UFunction* pFnUpdateDebugDraws = NULL;

	if ( ! pFnUpdateDebugDraws )
		pFnUpdateDebugDraws = (UFunction*) UObject::GObjObjects()->GetIndex( 128315 );

	ATgLobbyHUD_execUpdateDebugDraws_Parms UpdateDebugDraws_Parms;

	pFnUpdateDebugDraws->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateDebugDraws, &UpdateDebugDraws_Parms, NULL );

	pFnUpdateDebugDraws->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.NotifyLobbyStateChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgLobbyHUD::NotifyLobbyStateChange ( )
{
	static UFunction* pFnNotifyLobbyStateChange = NULL;

	if ( ! pFnNotifyLobbyStateChange )
		pFnNotifyLobbyStateChange = (UFunction*) UObject::GObjObjects()->GetIndex( 128314 );

	ATgLobbyHUD_execNotifyLobbyStateChange_Parms NotifyLobbyStateChange_Parms;

	pFnNotifyLobbyStateChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyLobbyStateChange, &NotifyLobbyStateChange_Parms, NULL );

	pFnNotifyLobbyStateChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.UpdateGammaControls
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgLobbyHUD::UpdateGammaControls ( )
{
	static UFunction* pFnUpdateGammaControls = NULL;

	if ( ! pFnUpdateGammaControls )
		pFnUpdateGammaControls = (UFunction*) UObject::GObjObjects()->GetIndex( 128313 );

	ATgLobbyHUD_execUpdateGammaControls_Parms UpdateGammaControls_Parms;

	pFnUpdateGammaControls->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateGammaControls, &UpdateGammaControls_Parms, NULL );

	pFnUpdateGammaControls->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.TestTrayPopup
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned char                  popupType                      ( CPF_Parm )

void ATgLobbyHUD::TestTrayPopup ( unsigned char popupType )
{
	static UFunction* pFnTestTrayPopup = NULL;

	if ( ! pFnTestTrayPopup )
		pFnTestTrayPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 128311 );

	ATgLobbyHUD_execTestTrayPopup_Parms TestTrayPopup_Parms;
	TestTrayPopup_Parms.popupType = popupType;

	pFnTestTrayPopup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTestTrayPopup, &TestTrayPopup_Parms, NULL );

	pFnTestTrayPopup->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.TestEOMLobby
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bVictory                       ( CPF_Parm )
// struct FString                 ClassName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 skinName                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void ATgLobbyHUD::TestEOMLobby ( unsigned long bVictory, struct FString ClassName, struct FString skinName )
{
	static UFunction* pFnTestEOMLobby = NULL;

	if ( ! pFnTestEOMLobby )
		pFnTestEOMLobby = (UFunction*) UObject::GObjObjects()->GetIndex( 128307 );

	ATgLobbyHUD_execTestEOMLobby_Parms TestEOMLobby_Parms;
	TestEOMLobby_Parms.bVictory = bVictory;
	memcpy ( &TestEOMLobby_Parms.ClassName, &ClassName, 0xC );
	memcpy ( &TestEOMLobby_Parms.skinName, &skinName, 0xC );

	pFnTestEOMLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTestEOMLobby, &TestEOMLobby_Parms, NULL );

	pFnTestEOMLobby->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.TestTransition
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bShow                          ( CPF_Parm )

void ATgLobbyHUD::TestTransition ( unsigned long bShow )
{
	static UFunction* pFnTestTransition = NULL;

	if ( ! pFnTestTransition )
		pFnTestTransition = (UFunction*) UObject::GObjObjects()->GetIndex( 128305 );

	ATgLobbyHUD_execTestTransition_Parms TestTransition_Parms;
	TestTransition_Parms.bShow = bShow;

	pFnTestTransition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTestTransition, &TestTransition_Parms, NULL );

	pFnTestTransition->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.SwitchToCamera
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class ATgLobbyCamera*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   CamTag                         ( CPF_Parm )
// unsigned char                  camDirection                   ( CPF_OptionalParm | CPF_Parm )

class ATgLobbyCamera* ATgLobbyHUD::SwitchToCamera ( struct FName CamTag, unsigned char camDirection )
{
	static UFunction* pFnSwitchToCamera = NULL;

	if ( ! pFnSwitchToCamera )
		pFnSwitchToCamera = (UFunction*) UObject::GObjObjects()->GetIndex( 128301 );

	ATgLobbyHUD_execSwitchToCamera_Parms SwitchToCamera_Parms;
	memcpy ( &SwitchToCamera_Parms.CamTag, &CamTag, 0x8 );
	SwitchToCamera_Parms.camDirection = camDirection;

	pFnSwitchToCamera->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSwitchToCamera, &SwitchToCamera_Parms, NULL );

	pFnSwitchToCamera->FunctionFlags |= 0x400;

	return SwitchToCamera_Parms.ReturnValue;
};

// Function TgClient.TgLobbyHUD.ChangePedestalEnemyModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nIndex                         ( CPF_Parm )
// int                            nPedestalSkinId                ( CPF_Parm )
// unsigned char                  pose                           ( CPF_Parm )
// unsigned long                  bAsync                         ( CPF_OptionalParm | CPF_Parm )

void ATgLobbyHUD::ChangePedestalEnemyModel ( int nIndex, int nPedestalSkinId, unsigned char pose, unsigned long bAsync )
{
	static UFunction* pFnChangePedestalEnemyModel = NULL;

	if ( ! pFnChangePedestalEnemyModel )
		pFnChangePedestalEnemyModel = (UFunction*) UObject::GObjObjects()->GetIndex( 128296 );

	ATgLobbyHUD_execChangePedestalEnemyModel_Parms ChangePedestalEnemyModel_Parms;
	ChangePedestalEnemyModel_Parms.nIndex = nIndex;
	ChangePedestalEnemyModel_Parms.nPedestalSkinId = nPedestalSkinId;
	ChangePedestalEnemyModel_Parms.pose = pose;
	ChangePedestalEnemyModel_Parms.bAsync = bAsync;

	pFnChangePedestalEnemyModel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChangePedestalEnemyModel, &ChangePedestalEnemyModel_Parms, NULL );

	pFnChangePedestalEnemyModel->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.ChangeClassEnemyModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nIndex                         ( CPF_Parm )
// int                            nClassId                       ( CPF_Parm )
// int                            nSkinId                        ( CPF_Parm )
// unsigned char                  pose                           ( CPF_Parm )
// unsigned long                  bAsync                         ( CPF_OptionalParm | CPF_Parm )

void ATgLobbyHUD::ChangeClassEnemyModel ( int nIndex, int nClassId, int nSkinId, unsigned char pose, unsigned long bAsync )
{
	static UFunction* pFnChangeClassEnemyModel = NULL;

	if ( ! pFnChangeClassEnemyModel )
		pFnChangeClassEnemyModel = (UFunction*) UObject::GObjObjects()->GetIndex( 128290 );

	ATgLobbyHUD_execChangeClassEnemyModel_Parms ChangeClassEnemyModel_Parms;
	ChangeClassEnemyModel_Parms.nIndex = nIndex;
	ChangeClassEnemyModel_Parms.nClassId = nClassId;
	ChangeClassEnemyModel_Parms.nSkinId = nSkinId;
	ChangeClassEnemyModel_Parms.pose = pose;
	ChangeClassEnemyModel_Parms.bAsync = bAsync;

	pFnChangeClassEnemyModel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChangeClassEnemyModel, &ChangeClassEnemyModel_Parms, NULL );

	pFnChangeClassEnemyModel->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.ChangePedestalFriendlyModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nIndex                         ( CPF_Parm )
// int                            nPedestalSkinId                ( CPF_Parm )
// unsigned char                  pose                           ( CPF_Parm )
// unsigned long                  bAsync                         ( CPF_OptionalParm | CPF_Parm )

void ATgLobbyHUD::ChangePedestalFriendlyModel ( int nIndex, int nPedestalSkinId, unsigned char pose, unsigned long bAsync )
{
	static UFunction* pFnChangePedestalFriendlyModel = NULL;

	if ( ! pFnChangePedestalFriendlyModel )
		pFnChangePedestalFriendlyModel = (UFunction*) UObject::GObjObjects()->GetIndex( 128285 );

	ATgLobbyHUD_execChangePedestalFriendlyModel_Parms ChangePedestalFriendlyModel_Parms;
	ChangePedestalFriendlyModel_Parms.nIndex = nIndex;
	ChangePedestalFriendlyModel_Parms.nPedestalSkinId = nPedestalSkinId;
	ChangePedestalFriendlyModel_Parms.pose = pose;
	ChangePedestalFriendlyModel_Parms.bAsync = bAsync;

	pFnChangePedestalFriendlyModel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChangePedestalFriendlyModel, &ChangePedestalFriendlyModel_Parms, NULL );

	pFnChangePedestalFriendlyModel->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.ChangeClassFriendlyModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nIndex                         ( CPF_Parm )
// int                            nClassId                       ( CPF_Parm )
// int                            nSkinId                        ( CPF_Parm )
// unsigned char                  pose                           ( CPF_Parm )
// unsigned long                  bAsync                         ( CPF_OptionalParm | CPF_Parm )

void ATgLobbyHUD::ChangeClassFriendlyModel ( int nIndex, int nClassId, int nSkinId, unsigned char pose, unsigned long bAsync )
{
	static UFunction* pFnChangeClassFriendlyModel = NULL;

	if ( ! pFnChangeClassFriendlyModel )
		pFnChangeClassFriendlyModel = (UFunction*) UObject::GObjObjects()->GetIndex( 128279 );

	ATgLobbyHUD_execChangeClassFriendlyModel_Parms ChangeClassFriendlyModel_Parms;
	ChangeClassFriendlyModel_Parms.nIndex = nIndex;
	ChangeClassFriendlyModel_Parms.nClassId = nClassId;
	ChangeClassFriendlyModel_Parms.nSkinId = nSkinId;
	ChangeClassFriendlyModel_Parms.pose = pose;
	ChangeClassFriendlyModel_Parms.bAsync = bAsync;

	pFnChangeClassFriendlyModel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChangeClassFriendlyModel, &ChangeClassFriendlyModel_Parms, NULL );

	pFnChangeClassFriendlyModel->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.IsCurrentCameraMatchLobby
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATgLobbyHUD::IsCurrentCameraMatchLobby ( )
{
	static UFunction* pFnIsCurrentCameraMatchLobby = NULL;

	if ( ! pFnIsCurrentCameraMatchLobby )
		pFnIsCurrentCameraMatchLobby = (UFunction*) UObject::GObjObjects()->GetIndex( 128277 );

	ATgLobbyHUD_execIsCurrentCameraMatchLobby_Parms IsCurrentCameraMatchLobby_Parms;

	pFnIsCurrentCameraMatchLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsCurrentCameraMatchLobby, &IsCurrentCameraMatchLobby_Parms, NULL );

	pFnIsCurrentCameraMatchLobby->FunctionFlags |= 0x400;

	return IsCurrentCameraMatchLobby_Parms.ReturnValue;
};

// Function TgClient.TgLobbyHUD.GetMatchLobbyCameraName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName ATgLobbyHUD::GetMatchLobbyCameraName ( )
{
	static UFunction* pFnGetMatchLobbyCameraName = NULL;

	if ( ! pFnGetMatchLobbyCameraName )
		pFnGetMatchLobbyCameraName = (UFunction*) UObject::GObjObjects()->GetIndex( 128275 );

	ATgLobbyHUD_execGetMatchLobbyCameraName_Parms GetMatchLobbyCameraName_Parms;

	pFnGetMatchLobbyCameraName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMatchLobbyCameraName, &GetMatchLobbyCameraName_Parms, NULL );

	pFnGetMatchLobbyCameraName->FunctionFlags |= 0x400;

	return GetMatchLobbyCameraName_Parms.ReturnValue;
};

// Function TgClient.TgLobbyHUD.OnPedestalSelected
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nPedestalSkinId                ( CPF_Parm )
// unsigned long                  bChangedPedestal               ( CPF_OptionalParm | CPF_Parm )

void ATgLobbyHUD::OnPedestalSelected ( int nPedestalSkinId, unsigned long bChangedPedestal )
{
	static UFunction* pFnOnPedestalSelected = NULL;

	if ( ! pFnOnPedestalSelected )
		pFnOnPedestalSelected = (UFunction*) UObject::GObjObjects()->GetIndex( 128272 );

	ATgLobbyHUD_execOnPedestalSelected_Parms OnPedestalSelected_Parms;
	OnPedestalSelected_Parms.nPedestalSkinId = nPedestalSkinId;
	OnPedestalSelected_Parms.bChangedPedestal = bChangedPedestal;

	pFnOnPedestalSelected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPedestalSelected, &OnPedestalSelected_Parms, NULL );

	pFnOnPedestalSelected->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.OnClassSelected
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nClassId                       ( CPF_Parm )
// int                            nSkinId                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bChangedClass                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bChangedSkin                   ( CPF_OptionalParm | CPF_Parm )

void ATgLobbyHUD::OnClassSelected ( int nClassId, int nSkinId, unsigned long bChangedClass, unsigned long bChangedSkin )
{
	static UFunction* pFnOnClassSelected = NULL;

	if ( ! pFnOnClassSelected )
		pFnOnClassSelected = (UFunction*) UObject::GObjObjects()->GetIndex( 128267 );

	ATgLobbyHUD_execOnClassSelected_Parms OnClassSelected_Parms;
	OnClassSelected_Parms.nClassId = nClassId;
	OnClassSelected_Parms.nSkinId = nSkinId;
	OnClassSelected_Parms.bChangedClass = bChangedClass;
	OnClassSelected_Parms.bChangedSkin = bChangedSkin;

	pFnOnClassSelected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnClassSelected, &OnClassSelected_Parms, NULL );

	pFnOnClassSelected->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.RotateModel
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// float                          fValue                         ( CPF_Parm )

void ATgLobbyHUD::RotateModel ( float fValue )
{
	static UFunction* pFnRotateModel = NULL;

	if ( ! pFnRotateModel )
		pFnRotateModel = (UFunction*) UObject::GObjObjects()->GetIndex( 128265 );

	ATgLobbyHUD_execRotateModel_Parms RotateModel_Parms;
	RotateModel_Parms.fValue = fValue;

	pFnRotateModel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRotateModel, &RotateModel_Parms, NULL );

	pFnRotateModel->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.ChangeClassModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nClassId                       ( CPF_Parm )
// int                            nSkinId                        ( CPF_Parm )
// int                            nPedestalSkinId                ( CPF_Parm )
// unsigned char                  pose                           ( CPF_Parm )
// struct FName                   CameraTag                      ( CPF_Parm )
// unsigned char                  camDirection                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAsync                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShowFlag                      ( CPF_OptionalParm | CPF_Parm )

void ATgLobbyHUD::ChangeClassModel ( int nClassId, int nSkinId, int nPedestalSkinId, unsigned char pose, struct FName CameraTag, unsigned char camDirection, unsigned long bAsync, unsigned long bShowFlag )
{
	static UFunction* pFnChangeClassModel = NULL;

	if ( ! pFnChangeClassModel )
		pFnChangeClassModel = (UFunction*) UObject::GObjObjects()->GetIndex( 128256 );

	ATgLobbyHUD_execChangeClassModel_Parms ChangeClassModel_Parms;
	ChangeClassModel_Parms.nClassId = nClassId;
	ChangeClassModel_Parms.nSkinId = nSkinId;
	ChangeClassModel_Parms.nPedestalSkinId = nPedestalSkinId;
	ChangeClassModel_Parms.pose = pose;
	memcpy ( &ChangeClassModel_Parms.CameraTag, &CameraTag, 0x8 );
	ChangeClassModel_Parms.camDirection = camDirection;
	ChangeClassModel_Parms.bAsync = bAsync;
	ChangeClassModel_Parms.bShowFlag = bShowFlag;

	pFnChangeClassModel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChangeClassModel, &ChangeClassModel_Parms, NULL );

	pFnChangeClassModel->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.ChangeMenuModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned char                  Type                           ( CPF_Parm )
// unsigned char                  camDirection                   ( CPF_OptionalParm | CPF_Parm )

void ATgLobbyHUD::ChangeMenuModel ( unsigned char Type, unsigned char camDirection )
{
	static UFunction* pFnChangeMenuModel = NULL;

	if ( ! pFnChangeMenuModel )
		pFnChangeMenuModel = (UFunction*) UObject::GObjObjects()->GetIndex( 128253 );

	ATgLobbyHUD_execChangeMenuModel_Parms ChangeMenuModel_Parms;
	ChangeMenuModel_Parms.Type = Type;
	ChangeMenuModel_Parms.camDirection = camDirection;

	pFnChangeMenuModel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChangeMenuModel, &ChangeMenuModel_Parms, NULL );

	pFnChangeMenuModel->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.AsynchNotifies
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgLobbyHUD::AsynchNotifies ( )
{
	static UFunction* pFnAsynchNotifies = NULL;

	if ( ! pFnAsynchNotifies )
		pFnAsynchNotifies = (UFunction*) UObject::GObjObjects()->GetIndex( 128252 );

	ATgLobbyHUD_execAsynchNotifies_Parms AsynchNotifies_Parms;

	pFnAsynchNotifies->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAsynchNotifies, &AsynchNotifies_Parms, NULL );

	pFnAsynchNotifies->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.OnMarshalEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FPointer                pMarEvent                      ( CPF_Parm )

void ATgLobbyHUD::OnMarshalEvent ( struct FPointer pMarEvent )
{
	static UFunction* pFnOnMarshalEvent = NULL;

	if ( ! pFnOnMarshalEvent )
		pFnOnMarshalEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 128250 );

	ATgLobbyHUD_execOnMarshalEvent_Parms OnMarshalEvent_Parms;
	memcpy ( &OnMarshalEvent_Parms.pMarEvent, &pMarEvent, 0x4 );

	pFnOnMarshalEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnMarshalEvent, &OnMarshalEvent_Parms, NULL );

	pFnOnMarshalEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.SetUpEOMLobby
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgLobbyHUD::SetUpEOMLobby ( )
{
	static UFunction* pFnSetUpEOMLobby = NULL;

	if ( ! pFnSetUpEOMLobby )
		pFnSetUpEOMLobby = (UFunction*) UObject::GObjObjects()->GetIndex( 128249 );

	ATgLobbyHUD_execSetUpEOMLobby_Parms SetUpEOMLobby_Parms;

	pFnSetUpEOMLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetUpEOMLobby, &SetUpEOMLobby_Parms, NULL );

	pFnSetUpEOMLobby->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.HaveEOMLobbyData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATgLobbyHUD::HaveEOMLobbyData ( )
{
	static UFunction* pFnHaveEOMLobbyData = NULL;

	if ( ! pFnHaveEOMLobbyData )
		pFnHaveEOMLobbyData = (UFunction*) UObject::GObjObjects()->GetIndex( 128247 );

	ATgLobbyHUD_execHaveEOMLobbyData_Parms HaveEOMLobbyData_Parms;

	pFnHaveEOMLobbyData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHaveEOMLobbyData, &HaveEOMLobbyData_Parms, NULL );

	pFnHaveEOMLobbyData->FunctionFlags |= 0x400;

	return HaveEOMLobbyData_Parms.ReturnValue;
};

// Function TgClient.TgLobbyHUD.RegisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgLobbyHUD::RegisterEngineCallbacks ( )
{
	static UFunction* pFnRegisterEngineCallbacks = NULL;

	if ( ! pFnRegisterEngineCallbacks )
		pFnRegisterEngineCallbacks = (UFunction*) UObject::GObjObjects()->GetIndex( 128246 );

	ATgLobbyHUD_execRegisterEngineCallbacks_Parms RegisterEngineCallbacks_Parms;

	pFnRegisterEngineCallbacks->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterEngineCallbacks, &RegisterEngineCallbacks_Parms, NULL );

	pFnRegisterEngineCallbacks->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.IsEulaSigned
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATgLobbyHUD::IsEulaSigned ( )
{
	static UFunction* pFnIsEulaSigned = NULL;

	if ( ! pFnIsEulaSigned )
		pFnIsEulaSigned = (UFunction*) UObject::GObjObjects()->GetIndex( 128244 );

	ATgLobbyHUD_execIsEulaSigned_Parms IsEulaSigned_Parms;

	pFnIsEulaSigned->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsEulaSigned, &IsEulaSigned_Parms, NULL );

	pFnIsEulaSigned->FunctionFlags |= 0x400;

	return IsEulaSigned_Parms.ReturnValue;
};

// Function TgClient.TgLobbyHUD.InitializeDisconnectedState
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgLobbyHUD::InitializeDisconnectedState ( )
{
	static UFunction* pFnInitializeDisconnectedState = NULL;

	if ( ! pFnInitializeDisconnectedState )
		pFnInitializeDisconnectedState = (UFunction*) UObject::GObjObjects()->GetIndex( 128243 );

	ATgLobbyHUD_execInitializeDisconnectedState_Parms InitializeDisconnectedState_Parms;

	pFnInitializeDisconnectedState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeDisconnectedState, &InitializeDisconnectedState_Parms, NULL );

	pFnInitializeDisconnectedState->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateClanNameFormat
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nIndex                         ( CPF_Parm )

void UTgClanDC_ClanStats::usc_UpdateClanNameFormat ( int nIndex )
{
	static UFunction* pFnusc_UpdateClanNameFormat = NULL;

	if ( ! pFnusc_UpdateClanNameFormat )
		pFnusc_UpdateClanNameFormat = (UFunction*) UObject::GObjObjects()->GetIndex( 123495 );

	UTgClanDC_ClanStats_execusc_UpdateClanNameFormat_Parms usc_UpdateClanNameFormat_Parms;
	usc_UpdateClanNameFormat_Parms.nIndex = nIndex;

	pFnusc_UpdateClanNameFormat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UpdateClanNameFormat, &usc_UpdateClanNameFormat_Parms, NULL );

	pFnusc_UpdateClanNameFormat->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateTag
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgClanDC_ClanStats::usc_UpdateTag ( struct FString sMessage )
{
	static UFunction* pFnusc_UpdateTag = NULL;

	if ( ! pFnusc_UpdateTag )
		pFnusc_UpdateTag = (UFunction*) UObject::GObjObjects()->GetIndex( 123493 );

	UTgClanDC_ClanStats_execusc_UpdateTag_Parms usc_UpdateTag_Parms;
	memcpy ( &usc_UpdateTag_Parms.sMessage, &sMessage, 0xC );

	pFnusc_UpdateTag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UpdateTag, &usc_UpdateTag_Parms, NULL );

	pFnusc_UpdateTag->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.usc_ApplicationAction
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nAction                        ( CPF_Parm )
// float                          nPlayerId                      ( CPF_Parm )

void UTgClanDC_ClanStats::usc_ApplicationAction ( int nAction, float nPlayerId )
{
	static UFunction* pFnusc_ApplicationAction = NULL;

	if ( ! pFnusc_ApplicationAction )
		pFnusc_ApplicationAction = (UFunction*) UObject::GObjObjects()->GetIndex( 123490 );

	UTgClanDC_ClanStats_execusc_ApplicationAction_Parms usc_ApplicationAction_Parms;
	usc_ApplicationAction_Parms.nAction = nAction;
	usc_ApplicationAction_Parms.nPlayerId = nPlayerId;

	pFnusc_ApplicationAction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_ApplicationAction, &usc_ApplicationAction_Parms, NULL );

	pFnusc_ApplicationAction->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateRecruiting
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsRecruiting                  ( CPF_Parm )

void UTgClanDC_ClanStats::usc_UpdateRecruiting ( struct FString sMessage, unsigned long bIsRecruiting )
{
	static UFunction* pFnusc_UpdateRecruiting = NULL;

	if ( ! pFnusc_UpdateRecruiting )
		pFnusc_UpdateRecruiting = (UFunction*) UObject::GObjObjects()->GetIndex( 123487 );

	UTgClanDC_ClanStats_execusc_UpdateRecruiting_Parms usc_UpdateRecruiting_Parms;
	memcpy ( &usc_UpdateRecruiting_Parms.sMessage, &sMessage, 0xC );
	usc_UpdateRecruiting_Parms.bIsRecruiting = bIsRecruiting;

	pFnusc_UpdateRecruiting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UpdateRecruiting, &usc_UpdateRecruiting_Parms, NULL );

	pFnusc_UpdateRecruiting->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsDaily                       ( CPF_Parm )

void UTgClanDC_ClanStats::usc_UpdateMessage ( struct FString sMessage, unsigned long bIsDaily )
{
	static UFunction* pFnusc_UpdateMessage = NULL;

	if ( ! pFnusc_UpdateMessage )
		pFnusc_UpdateMessage = (UFunction*) UObject::GObjObjects()->GetIndex( 123484 );

	UTgClanDC_ClanStats_execusc_UpdateMessage_Parms usc_UpdateMessage_Parms;
	memcpy ( &usc_UpdateMessage_Parms.sMessage, &sMessage, 0xC );
	usc_UpdateMessage_Parms.bIsDaily = bIsDaily;

	pFnusc_UpdateMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UpdateMessage, &usc_UpdateMessage_Parms, NULL );

	pFnusc_UpdateMessage->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateClanNameFormat_Delegate
// [0x00120000] 
// Parameters infos:

void UTgClanDC_ClanStats::usc_UpdateClanNameFormat_Delegate ( )
{
	static UFunction* pFnusc_UpdateClanNameFormat_Delegate = NULL;

	if ( ! pFnusc_UpdateClanNameFormat_Delegate )
		pFnusc_UpdateClanNameFormat_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123476 );

	UTgClanDC_ClanStats_execusc_UpdateClanNameFormat_Delegate_Parms usc_UpdateClanNameFormat_Delegate_Parms;

	this->ProcessEvent ( pFnusc_UpdateClanNameFormat_Delegate, &usc_UpdateClanNameFormat_Delegate_Parms, NULL );
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateTag_Delegate
// [0x00120000] 
// Parameters infos:

void UTgClanDC_ClanStats::usc_UpdateTag_Delegate ( )
{
	static UFunction* pFnusc_UpdateTag_Delegate = NULL;

	if ( ! pFnusc_UpdateTag_Delegate )
		pFnusc_UpdateTag_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123478 );

	UTgClanDC_ClanStats_execusc_UpdateTag_Delegate_Parms usc_UpdateTag_Delegate_Parms;

	this->ProcessEvent ( pFnusc_UpdateTag_Delegate, &usc_UpdateTag_Delegate_Parms, NULL );
};

// Function TgClient.TgClanDC_ClanStats.usc_ApplicationAction_Delegate
// [0x00120000] 
// Parameters infos:

void UTgClanDC_ClanStats::usc_ApplicationAction_Delegate ( )
{
	static UFunction* pFnusc_ApplicationAction_Delegate = NULL;

	if ( ! pFnusc_ApplicationAction_Delegate )
		pFnusc_ApplicationAction_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123480 );

	UTgClanDC_ClanStats_execusc_ApplicationAction_Delegate_Parms usc_ApplicationAction_Delegate_Parms;

	this->ProcessEvent ( pFnusc_ApplicationAction_Delegate, &usc_ApplicationAction_Delegate_Parms, NULL );
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateRecruiting_Delegate
// [0x00120000] 
// Parameters infos:

void UTgClanDC_ClanStats::usc_UpdateRecruiting_Delegate ( )
{
	static UFunction* pFnusc_UpdateRecruiting_Delegate = NULL;

	if ( ! pFnusc_UpdateRecruiting_Delegate )
		pFnusc_UpdateRecruiting_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123482 );

	UTgClanDC_ClanStats_execusc_UpdateRecruiting_Delegate_Parms usc_UpdateRecruiting_Delegate_Parms;

	this->ProcessEvent ( pFnusc_UpdateRecruiting_Delegate, &usc_UpdateRecruiting_Delegate_Parms, NULL );
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateMessage_Delegate
// [0x00120000] 
// Parameters infos:

void UTgClanDC_ClanStats::usc_UpdateMessage_Delegate ( )
{
	static UFunction* pFnusc_UpdateMessage_Delegate = NULL;

	if ( ! pFnusc_UpdateMessage_Delegate )
		pFnusc_UpdateMessage_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123474 );

	UTgClanDC_ClanStats_execusc_UpdateMessage_Delegate_Parms usc_UpdateMessage_Delegate_Parms;

	this->ProcessEvent ( pFnusc_UpdateMessage_Delegate, &usc_UpdateMessage_Delegate_Parms, NULL );
};

// Function TgClient.TgClanDC_ClanStats.UpdateRecruiting
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sDesc                          ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsRecruiting                  ( CPF_Parm )

void UTgClanDC_ClanStats::UpdateRecruiting ( struct FString sDesc, unsigned long bIsRecruiting )
{
	static UFunction* pFnUpdateRecruiting = NULL;

	if ( ! pFnUpdateRecruiting )
		pFnUpdateRecruiting = (UFunction*) UObject::GObjObjects()->GetIndex( 123471 );

	UTgClanDC_ClanStats_execUpdateRecruiting_Parms UpdateRecruiting_Parms;
	memcpy ( &UpdateRecruiting_Parms.sDesc, &sDesc, 0xC );
	UpdateRecruiting_Parms.bIsRecruiting = bIsRecruiting;

	pFnUpdateRecruiting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateRecruiting, &UpdateRecruiting_Parms, NULL );

	pFnUpdateRecruiting->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanMOTD
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgClanDC_ClanStats::UpdateClanMOTD ( struct FString sMessage )
{
	static UFunction* pFnUpdateClanMOTD = NULL;

	if ( ! pFnUpdateClanMOTD )
		pFnUpdateClanMOTD = (UFunction*) UObject::GObjObjects()->GetIndex( 123469 );

	UTgClanDC_ClanStats_execUpdateClanMOTD_Parms UpdateClanMOTD_Parms;
	memcpy ( &UpdateClanMOTD_Parms.sMessage, &sMessage, 0xC );

	pFnUpdateClanMOTD->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateClanMOTD, &UpdateClanMOTD_Parms, NULL );

	pFnUpdateClanMOTD->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanDesc
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgClanDC_ClanStats::UpdateClanDesc ( struct FString sMessage )
{
	static UFunction* pFnUpdateClanDesc = NULL;

	if ( ! pFnUpdateClanDesc )
		pFnUpdateClanDesc = (UFunction*) UObject::GObjObjects()->GetIndex( 123467 );

	UTgClanDC_ClanStats_execUpdateClanDesc_Parms UpdateClanDesc_Parms;
	memcpy ( &UpdateClanDesc_Parms.sMessage, &sMessage, 0xC );

	pFnUpdateClanDesc->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateClanDesc, &UpdateClanDesc_Parms, NULL );

	pFnUpdateClanDesc->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )

void UTgClanDC_ClanStats::UpdateClanName ( struct FString sName )
{
	static UFunction* pFnUpdateClanName = NULL;

	if ( ! pFnUpdateClanName )
		pFnUpdateClanName = (UFunction*) UObject::GObjObjects()->GetIndex( 123465 );

	UTgClanDC_ClanStats_execUpdateClanName_Parms UpdateClanName_Parms;
	memcpy ( &UpdateClanName_Parms.sName, &sName, 0xC );

	pFnUpdateClanName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateClanName, &UpdateClanName_Parms, NULL );

	pFnUpdateClanName->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgClanDC_ClanStats::UpdateClanData ( )
{
	static UFunction* pFnUpdateClanData = NULL;

	if ( ! pFnUpdateClanData )
		pFnUpdateClanData = (UFunction*) UObject::GObjObjects()->GetIndex( 123464 );

	UTgClanDC_ClanStats_execUpdateClanData_Parms UpdateClanData_Parms;

	pFnUpdateClanData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateClanData, &UpdateClanData_Parms, NULL );

	pFnUpdateClanData->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgClanDC_ClanStats::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123461 );

	UTgClanDC_ClanStats_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Player.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgClanDC_Player::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123502 );

	UTgClanDC_Player_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Player.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgClanDC_Player::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123499 );

	UTgClanDC_Player_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Roster.usc_UpdateComment
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          nPlayerId                      ( CPF_Parm )
// struct FString                 sComment                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  isOfficerNote                  ( CPF_Parm )

void UTgClanDC_Roster::usc_UpdateComment ( float nPlayerId, struct FString sComment, unsigned long isOfficerNote )
{
	static UFunction* pFnusc_UpdateComment = NULL;

	if ( ! pFnusc_UpdateComment )
		pFnusc_UpdateComment = (UFunction*) UObject::GObjObjects()->GetIndex( 123517 );

	UTgClanDC_Roster_execusc_UpdateComment_Parms usc_UpdateComment_Parms;
	usc_UpdateComment_Parms.nPlayerId = nPlayerId;
	memcpy ( &usc_UpdateComment_Parms.sComment, &sComment, 0xC );
	usc_UpdateComment_Parms.isOfficerNote = isOfficerNote;

	pFnusc_UpdateComment->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UpdateComment, &usc_UpdateComment_Parms, NULL );

	pFnusc_UpdateComment->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Roster.usc_ClanAction
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nAction                        ( CPF_Parm )
// float                          nPlayerId                      ( CPF_Parm )

void UTgClanDC_Roster::usc_ClanAction ( int nAction, float nPlayerId )
{
	static UFunction* pFnusc_ClanAction = NULL;

	if ( ! pFnusc_ClanAction )
		pFnusc_ClanAction = (UFunction*) UObject::GObjObjects()->GetIndex( 123514 );

	UTgClanDC_Roster_execusc_ClanAction_Parms usc_ClanAction_Parms;
	usc_ClanAction_Parms.nAction = nAction;
	usc_ClanAction_Parms.nPlayerId = nPlayerId;

	pFnusc_ClanAction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_ClanAction, &usc_ClanAction_Parms, NULL );

	pFnusc_ClanAction->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Roster.usc_UpdateComment_Delegate
// [0x00120000] 
// Parameters infos:

void UTgClanDC_Roster::usc_UpdateComment_Delegate ( )
{
	static UFunction* pFnusc_UpdateComment_Delegate = NULL;

	if ( ! pFnusc_UpdateComment_Delegate )
		pFnusc_UpdateComment_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123506 );

	UTgClanDC_Roster_execusc_UpdateComment_Delegate_Parms usc_UpdateComment_Delegate_Parms;

	this->ProcessEvent ( pFnusc_UpdateComment_Delegate, &usc_UpdateComment_Delegate_Parms, NULL );
};

// Function TgClient.TgClanDC_Roster.usc_ClanAction_Delegate
// [0x00120000] 
// Parameters infos:

void UTgClanDC_Roster::usc_ClanAction_Delegate ( )
{
	static UFunction* pFnusc_ClanAction_Delegate = NULL;

	if ( ! pFnusc_ClanAction_Delegate )
		pFnusc_ClanAction_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123508 );

	UTgClanDC_Roster_execusc_ClanAction_Delegate_Parms usc_ClanAction_Delegate_Parms;

	this->ProcessEvent ( pFnusc_ClanAction_Delegate, &usc_ClanAction_Delegate_Parms, NULL );
};

// Function TgClient.TgClanDC_Roster.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgClanDC_Roster::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123511 );

	UTgClanDC_Roster_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Settings.usc_UpdateLeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )

void UTgClanDC_Settings::usc_UpdateLeader ( struct FString sName )
{
	static UFunction* pFnusc_UpdateLeader = NULL;

	if ( ! pFnusc_UpdateLeader )
		pFnusc_UpdateLeader = (UFunction*) UObject::GObjObjects()->GetIndex( 123534 );

	UTgClanDC_Settings_execusc_UpdateLeader_Parms usc_UpdateLeader_Parms;
	memcpy ( &usc_UpdateLeader_Parms.sName, &sName, 0xC );

	pFnusc_UpdateLeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UpdateLeader, &usc_UpdateLeader_Parms, NULL );

	pFnusc_UpdateLeader->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Settings.usc_UpdateRank
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          RankId                         ( CPF_Parm )
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )
// float                          rankPermission                 ( CPF_Parm )

void UTgClanDC_Settings::usc_UpdateRank ( float RankId, struct FString sName, float rankPermission )
{
	static UFunction* pFnusc_UpdateRank = NULL;

	if ( ! pFnusc_UpdateRank )
		pFnusc_UpdateRank = (UFunction*) UObject::GObjObjects()->GetIndex( 123530 );

	UTgClanDC_Settings_execusc_UpdateRank_Parms usc_UpdateRank_Parms;
	usc_UpdateRank_Parms.RankId = RankId;
	memcpy ( &usc_UpdateRank_Parms.sName, &sName, 0xC );
	usc_UpdateRank_Parms.rankPermission = rankPermission;

	pFnusc_UpdateRank->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UpdateRank, &usc_UpdateRank_Parms, NULL );

	pFnusc_UpdateRank->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Settings.usc_UpdateLeader_Delegate
// [0x00120000] 
// Parameters infos:

void UTgClanDC_Settings::usc_UpdateLeader_Delegate ( )
{
	static UFunction* pFnusc_UpdateLeader_Delegate = NULL;

	if ( ! pFnusc_UpdateLeader_Delegate )
		pFnusc_UpdateLeader_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123522 );

	UTgClanDC_Settings_execusc_UpdateLeader_Delegate_Parms usc_UpdateLeader_Delegate_Parms;

	this->ProcessEvent ( pFnusc_UpdateLeader_Delegate, &usc_UpdateLeader_Delegate_Parms, NULL );
};

// Function TgClient.TgClanDC_Settings.usc_UpdateRank_Delegate
// [0x00120000] 
// Parameters infos:

void UTgClanDC_Settings::usc_UpdateRank_Delegate ( )
{
	static UFunction* pFnusc_UpdateRank_Delegate = NULL;

	if ( ! pFnusc_UpdateRank_Delegate )
		pFnusc_UpdateRank_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123524 );

	UTgClanDC_Settings_execusc_UpdateRank_Delegate_Parms usc_UpdateRank_Delegate_Parms;

	this->ProcessEvent ( pFnusc_UpdateRank_Delegate, &usc_UpdateRank_Delegate_Parms, NULL );
};

// Function TgClient.TgClanDC_Settings.UpdateRankArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgClanDC_Settings::UpdateRankArray ( )
{
	static UFunction* pFnUpdateRankArray = NULL;

	if ( ! pFnUpdateRankArray )
		pFnUpdateRankArray = (UFunction*) UObject::GObjObjects()->GetIndex( 123529 );

	UTgClanDC_Settings_execUpdateRankArray_Parms UpdateRankArray_Parms;

	pFnUpdateRankArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateRankArray, &UpdateRankArray_Parms, NULL );

	pFnUpdateRankArray->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Settings.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgClanDC_Settings::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123526 );

	UTgClanDC_Settings_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataGroup_Clan.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgDataGroup_Clan::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123652 );

	UTgDataGroup_Clan_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataGroup_EOMLobby.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgDataGroup_EOMLobby::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123668 );

	UTgDataGroup_EOMLobby_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataGroup_EOMLobby.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgDataGroup_EOMLobby::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123665 );

	UTgDataGroup_EOMLobby_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataGroup_Lobby.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgDataGroup_Lobby::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123687 );

	UTgDataGroup_Lobby_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataGroup_Lobby.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgDataGroup_Lobby::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123684 );

	UTgDataGroup_Lobby_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgEOMLobbyDC_ChatLobby.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgEOMLobbyDC_ChatLobby::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123711 );

	UTgEOMLobbyDC_ChatLobby_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgEOMLobbyDC_ChatPlayer.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgEOMLobbyDC_ChatPlayer::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123718 );

	UTgEOMLobbyDC_ChatPlayer_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgEOMLobbyDC_ChatPlayer.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgEOMLobbyDC_ChatPlayer::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123715 );

	UTgEOMLobbyDC_ChatPlayer_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgEOMLobbyDC_Lobby.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgEOMLobbyDC_Lobby::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123725 );

	UTgEOMLobbyDC_Lobby_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgEOMLobbyDC_Lobby.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgEOMLobbyDC_Lobby::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123722 );

	UTgEOMLobbyDC_Lobby_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgEOMLobbyDC_Player.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgEOMLobbyDC_Player::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123729 );

	UTgEOMLobbyDC_Player_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgEOMLobbyDC_Player.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgEOMLobbyDC_Player::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123726 );

	UTgEOMLobbyDC_Player_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgEOMLobbyDC_Team.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgEOMLobbyDC_Team::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123735 );

	UTgEOMLobbyDC_Team_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgEOMLobbyDC_Team.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgEOMLobbyDC_Team::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123732 );

	UTgEOMLobbyDC_Team_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyDC_Class.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgLobbyDC_Class::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 128131 );

	UTgLobbyDC_Class_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyDC_Lobby.Update
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// unsigned long                  bSkipCallback                  ( CPF_OptionalParm | CPF_Parm )

void UTgLobbyDC_Lobby::Update ( float DeltaTime, unsigned long bSkipCallback )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->GetIndex( 128151 );

	UTgLobbyDC_Lobby_execUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;
	Update_Parms.bSkipCallback = bSkipCallback;

	pFnUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	pFnUpdate->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyDC_Lobby.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgLobbyDC_Lobby::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 128148 );

	UTgLobbyDC_Lobby_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyDC_Login.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgLobbyDC_Login::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 128154 );

	UTgLobbyDC_Login_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyDC_Match.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgLobbyDC_Match::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 128168 );

	UTgLobbyDC_Match_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyDC_Match.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgLobbyDC_Match::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 128165 );

	UTgLobbyDC_Match_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyDC_Player.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgLobbyDC_Player::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 128174 );

	UTgLobbyDC_Player_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyDC_Player.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgLobbyDC_Player::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 128171 );

	UTgLobbyDC_Player_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyDC_PlayerTrade.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgLobbyDC_PlayerTrade::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 128178 );

	UTgLobbyDC_PlayerTrade_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyDC_PlayerTrade.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgLobbyDC_PlayerTrade::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 128175 );

	UTgLobbyDC_PlayerTrade_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyDC_Skin.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgLobbyDC_Skin::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 128182 );

	UTgLobbyDC_Skin_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyDC_Team.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgLobbyDC_Team::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 128189 );

	UTgLobbyDC_Team_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgConfigDC_Cached.PrecacheData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgConfigDC_Cached::PrecacheData ( )
{
	static UFunction* pFnPrecacheData = NULL;

	if ( ! pFnPrecacheData )
		pFnPrecacheData = (UFunction*) UObject::GObjObjects()->GetIndex( 123636 );

	UTgConfigDC_Cached_execPrecacheData_Parms PrecacheData_Parms;

	pFnPrecacheData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPrecacheData, &PrecacheData_Parms, NULL );

	pFnPrecacheData->FunctionFlags |= 0x400;
};

// Function TgClient.TgConfigDC_Cached.CreateDataObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nId                            ( CPF_Parm )

class UGFxObject* UTgConfigDC_Cached::CreateDataObject ( int nId )
{
	static UFunction* pFnCreateDataObject = NULL;

	if ( ! pFnCreateDataObject )
		pFnCreateDataObject = (UFunction*) UObject::GObjObjects()->GetIndex( 123633 );

	UTgConfigDC_Cached_execCreateDataObject_Parms CreateDataObject_Parms;
	CreateDataObject_Parms.nId = nId;

	pFnCreateDataObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateDataObject, &CreateDataObject_Parms, NULL );

	pFnCreateDataObject->FunctionFlags |= 0x400;

	return CreateDataObject_Parms.ReturnValue;
};

// Function TgClient.TgConfigDC_Cached.usc_load_data
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nId                            ( CPF_Parm )

bool UTgConfigDC_Cached::usc_load_data ( int nId )
{
	static UFunction* pFnusc_load_data = NULL;

	if ( ! pFnusc_load_data )
		pFnusc_load_data = (UFunction*) UObject::GObjObjects()->GetIndex( 123630 );

	UTgConfigDC_Cached_execusc_load_data_Parms usc_load_data_Parms;
	usc_load_data_Parms.nId = nId;

	pFnusc_load_data->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_load_data, &usc_load_data_Parms, NULL );

	pFnusc_load_data->FunctionFlags |= 0x400;

	return usc_load_data_Parms.ReturnValue;
};

// Function TgClient.TgConfigDC_Cached.usc_load_data_Delegate
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nClassId                       ( CPF_Parm )

bool UTgConfigDC_Cached::usc_load_data_Delegate ( int nClassId )
{
	static UFunction* pFnusc_load_data_Delegate = NULL;

	if ( ! pFnusc_load_data_Delegate )
		pFnusc_load_data_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123626 );

	UTgConfigDC_Cached_execusc_load_data_Delegate_Parms usc_load_data_Delegate_Parms;
	usc_load_data_Delegate_Parms.nClassId = nClassId;

	this->ProcessEvent ( pFnusc_load_data_Delegate, &usc_load_data_Delegate_Parms, NULL );

	return usc_load_data_Delegate_Parms.ReturnValue;
};

// Function TgClient.TgConfigDC_Cached.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgConfigDC_Cached::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123623 );

	UTgConfigDC_Cached_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgConfigDC_Classes.CreateDataObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nId                            ( CPF_Parm )

class UGFxObject* UTgConfigDC_Classes::CreateDataObject ( int nId )
{
	static UFunction* pFnCreateDataObject = NULL;

	if ( ! pFnCreateDataObject )
		pFnCreateDataObject = (UFunction*) UObject::GObjObjects()->GetIndex( 123637 );

	UTgConfigDC_Classes_execCreateDataObject_Parms CreateDataObject_Parms;
	CreateDataObject_Parms.nId = nId;

	pFnCreateDataObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateDataObject, &CreateDataObject_Parms, NULL );

	pFnCreateDataObject->FunctionFlags |= 0x400;

	return CreateDataObject_Parms.ReturnValue;
};

// Function TgClient.TgConfigDC_GameTip.CreateDataObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nId                            ( CPF_Parm )

class UGFxObject* UTgConfigDC_GameTip::CreateDataObject ( int nId )
{
	static UFunction* pFnCreateDataObject = NULL;

	if ( ! pFnCreateDataObject )
		pFnCreateDataObject = (UFunction*) UObject::GObjObjects()->GetIndex( 123640 );

	UTgConfigDC_GameTip_execCreateDataObject_Parms CreateDataObject_Parms;
	CreateDataObject_Parms.nId = nId;

	pFnCreateDataObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateDataObject, &CreateDataObject_Parms, NULL );

	pFnCreateDataObject->FunctionFlags |= 0x400;

	return CreateDataObject_Parms.ReturnValue;
};

// Function TgClient.TgConfigDC_Items.CreateDataObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nId                            ( CPF_Parm )

class UGFxObject* UTgConfigDC_Items::CreateDataObject ( int nId )
{
	static UFunction* pFnCreateDataObject = NULL;

	if ( ! pFnCreateDataObject )
		pFnCreateDataObject = (UFunction*) UObject::GObjObjects()->GetIndex( 123643 );

	UTgConfigDC_Items_execCreateDataObject_Parms CreateDataObject_Parms;
	CreateDataObject_Parms.nId = nId;

	pFnCreateDataObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateDataObject, &CreateDataObject_Parms, NULL );

	pFnCreateDataObject->FunctionFlags |= 0x400;

	return CreateDataObject_Parms.ReturnValue;
};

// Function TgClient.TgConfigDC_LangMessages.usc_load_data
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nId                            ( CPF_Parm )

bool UTgConfigDC_LangMessages::usc_load_data ( int nId )
{
	static UFunction* pFnusc_load_data = NULL;

	if ( ! pFnusc_load_data )
		pFnusc_load_data = (UFunction*) UObject::GObjObjects()->GetIndex( 123646 );

	UTgConfigDC_LangMessages_execusc_load_data_Parms usc_load_data_Parms;
	usc_load_data_Parms.nId = nId;

	pFnusc_load_data->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_load_data, &usc_load_data_Parms, NULL );

	pFnusc_load_data->FunctionFlags |= 0x400;

	return usc_load_data_Parms.ReturnValue;
};

// Function TgClient.TgDataGroup_Config.NotifyMapChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgDataGroup_Config::NotifyMapChange ( )
{
	static UFunction* pFnNotifyMapChange = NULL;

	if ( ! pFnNotifyMapChange )
		pFnNotifyMapChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123662 );

	UTgDataGroup_Config_execNotifyMapChange_Parms NotifyMapChange_Parms;

	pFnNotifyMapChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyMapChange, &NotifyMapChange_Parms, NULL );

	pFnNotifyMapChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataGroup_Config.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgDataGroup_Config::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123659 );

	UTgDataGroup_Config_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataGroup_Settings.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgDataGroup_Settings::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 123693 );

	UTgDataGroup_Settings_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_Audio.usc_requestDeviceList
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgSettingsDC_Audio::usc_requestDeviceList ( )
{
	static UFunction* pFnusc_requestDeviceList = NULL;

	if ( ! pFnusc_requestDeviceList )
		pFnusc_requestDeviceList = (UFunction*) UObject::GObjObjects()->GetIndex( 128887 );

	UTgSettingsDC_Audio_execusc_requestDeviceList_Parms usc_requestDeviceList_Parms;

	pFnusc_requestDeviceList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_requestDeviceList, &usc_requestDeviceList_Parms, NULL );

	pFnusc_requestDeviceList->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_Audio.usc_SetAudioSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          Master                         ( CPF_Parm )
// float                          sfx                            ( CPF_Parm )
// float                          music                          ( CPF_Parm )
// float                          voice                          ( CPF_Parm )
// float                          matchNotifier                  ( CPF_Parm )
// unsigned long                  MasterMute                     ( CPF_Parm )
// unsigned long                  SFXMute                        ( CPF_Parm )
// unsigned long                  MusicMute                      ( CPF_Parm )
// unsigned long                  VoiceMute                      ( CPF_Parm )
// unsigned long                  MatchNotifierMute              ( CPF_Parm )
// unsigned long                  ChatNotifierMute               ( CPF_Parm )
// struct FString                 DefaultAudioDevice             ( CPF_Parm | CPF_NeedCtorLink )

void UTgSettingsDC_Audio::usc_SetAudioSettings ( float Master, float sfx, float music, float voice, float matchNotifier, unsigned long MasterMute, unsigned long SFXMute, unsigned long MusicMute, unsigned long VoiceMute, unsigned long MatchNotifierMute, unsigned long ChatNotifierMute, struct FString DefaultAudioDevice )
{
	static UFunction* pFnusc_SetAudioSettings = NULL;

	if ( ! pFnusc_SetAudioSettings )
		pFnusc_SetAudioSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 128874 );

	UTgSettingsDC_Audio_execusc_SetAudioSettings_Parms usc_SetAudioSettings_Parms;
	usc_SetAudioSettings_Parms.Master = Master;
	usc_SetAudioSettings_Parms.sfx = sfx;
	usc_SetAudioSettings_Parms.music = music;
	usc_SetAudioSettings_Parms.voice = voice;
	usc_SetAudioSettings_Parms.matchNotifier = matchNotifier;
	usc_SetAudioSettings_Parms.MasterMute = MasterMute;
	usc_SetAudioSettings_Parms.SFXMute = SFXMute;
	usc_SetAudioSettings_Parms.MusicMute = MusicMute;
	usc_SetAudioSettings_Parms.VoiceMute = VoiceMute;
	usc_SetAudioSettings_Parms.MatchNotifierMute = MatchNotifierMute;
	usc_SetAudioSettings_Parms.ChatNotifierMute = ChatNotifierMute;
	memcpy ( &usc_SetAudioSettings_Parms.DefaultAudioDevice, &DefaultAudioDevice, 0xC );

	pFnusc_SetAudioSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_SetAudioSettings, &usc_SetAudioSettings_Parms, NULL );

	pFnusc_SetAudioSettings->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_Audio.usc_requestDeviceList_Delegate
// [0x00120000] 
// Parameters infos:

void UTgSettingsDC_Audio::usc_requestDeviceList_Delegate ( )
{
	static UFunction* pFnusc_requestDeviceList_Delegate = NULL;

	if ( ! pFnusc_requestDeviceList_Delegate )
		pFnusc_requestDeviceList_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 128872 );

	UTgSettingsDC_Audio_execusc_requestDeviceList_Delegate_Parms usc_requestDeviceList_Delegate_Parms;

	this->ProcessEvent ( pFnusc_requestDeviceList_Delegate, &usc_requestDeviceList_Delegate_Parms, NULL );
};

// Function TgClient.TgSettingsDC_Audio.usc_SetAudioSettings_Delegate
// [0x00120000] 
// Parameters infos:

void UTgSettingsDC_Audio::usc_SetAudioSettings_Delegate ( )
{
	static UFunction* pFnusc_SetAudioSettings_Delegate = NULL;

	if ( ! pFnusc_SetAudioSettings_Delegate )
		pFnusc_SetAudioSettings_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 128870 );

	UTgSettingsDC_Audio_execusc_SetAudioSettings_Delegate_Parms usc_SetAudioSettings_Delegate_Parms;

	this->ProcessEvent ( pFnusc_SetAudioSettings_Delegate, &usc_SetAudioSettings_Delegate_Parms, NULL );
};

// Function TgClient.TgSettingsDC_Audio.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgSettingsDC_Audio::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 128867 );

	UTgSettingsDC_Audio_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_KeyBinding.PopulateKeybinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgSettingsDC_KeyBinding::PopulateKeybinding ( )
{
	static UFunction* pFnPopulateKeybinding = NULL;

	if ( ! pFnPopulateKeybinding )
		pFnPopulateKeybinding = (UFunction*) UObject::GObjObjects()->GetIndex( 128897 );

	UTgSettingsDC_KeyBinding_execPopulateKeybinding_Parms PopulateKeybinding_Parms;

	pFnPopulateKeybinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopulateKeybinding, &PopulateKeybinding_Parms, NULL );

	pFnPopulateKeybinding->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_KeyBinding.InitializeBindingData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgSettingsDC_KeyBinding::InitializeBindingData ( )
{
	static UFunction* pFnInitializeBindingData = NULL;

	if ( ! pFnInitializeBindingData )
		pFnInitializeBindingData = (UFunction*) UObject::GObjObjects()->GetIndex( 128896 );

	UTgSettingsDC_KeyBinding_execInitializeBindingData_Parms InitializeBindingData_Parms;

	pFnInitializeBindingData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeBindingData, &InitializeBindingData_Parms, NULL );

	pFnInitializeBindingData->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_KeyBinding.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgSettingsDC_KeyBinding::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 128893 );

	UTgSettingsDC_KeyBinding_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_Spectator.PopulateKeybinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgSettingsDC_Spectator::PopulateKeybinding ( )
{
	static UFunction* pFnPopulateKeybinding = NULL;

	if ( ! pFnPopulateKeybinding )
		pFnPopulateKeybinding = (UFunction*) UObject::GObjObjects()->GetIndex( 128907 );

	UTgSettingsDC_Spectator_execPopulateKeybinding_Parms PopulateKeybinding_Parms;

	pFnPopulateKeybinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopulateKeybinding, &PopulateKeybinding_Parms, NULL );

	pFnPopulateKeybinding->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_Spectator.InitializeBindingData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgSettingsDC_Spectator::InitializeBindingData ( )
{
	static UFunction* pFnInitializeBindingData = NULL;

	if ( ! pFnInitializeBindingData )
		pFnInitializeBindingData = (UFunction*) UObject::GObjObjects()->GetIndex( 128906 );

	UTgSettingsDC_Spectator_execInitializeBindingData_Parms InitializeBindingData_Parms;

	pFnInitializeBindingData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeBindingData, &InitializeBindingData_Parms, NULL );

	pFnInitializeBindingData->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_Spectator.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgSettingsDC_Spectator::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 128903 );

	UTgSettingsDC_Spectator_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_UI.usc_SetUISettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 SettingName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 settingValue                   ( CPF_Parm | CPF_NeedCtorLink )

void UTgSettingsDC_UI::usc_SetUISettings ( struct FString SettingName, struct FString settingValue )
{
	static UFunction* pFnusc_SetUISettings = NULL;

	if ( ! pFnusc_SetUISettings )
		pFnusc_SetUISettings = (UFunction*) UObject::GObjObjects()->GetIndex( 128916 );

	UTgSettingsDC_UI_execusc_SetUISettings_Parms usc_SetUISettings_Parms;
	memcpy ( &usc_SetUISettings_Parms.SettingName, &SettingName, 0xC );
	memcpy ( &usc_SetUISettings_Parms.settingValue, &settingValue, 0xC );

	pFnusc_SetUISettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_SetUISettings, &usc_SetUISettings_Parms, NULL );

	pFnusc_SetUISettings->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_UI.usc_SetUISettings_Delegate
// [0x00120000] 
// Parameters infos:

void UTgSettingsDC_UI::usc_SetUISettings_Delegate ( )
{
	static UFunction* pFnusc_SetUISettings_Delegate = NULL;

	if ( ! pFnusc_SetUISettings_Delegate )
		pFnusc_SetUISettings_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 128911 );

	UTgSettingsDC_UI_execusc_SetUISettings_Delegate_Parms usc_SetUISettings_Delegate_Parms;

	this->ProcessEvent ( pFnusc_SetUISettings_Delegate, &usc_SetUISettings_Delegate_Parms, NULL );
};

// Function TgClient.TgSettingsDC_UI.UpdateUISettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgSettingsDC_UI::UpdateUISettings ( )
{
	static UFunction* pFnUpdateUISettings = NULL;

	if ( ! pFnUpdateUISettings )
		pFnUpdateUISettings = (UFunction*) UObject::GObjObjects()->GetIndex( 128915 );

	UTgSettingsDC_UI_execUpdateUISettings_Parms UpdateUISettings_Parms;

	pFnUpdateUISettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateUISettings, &UpdateUISettings_Parms, NULL );

	pFnUpdateUISettings->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_UI.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgSettingsDC_UI::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 128912 );

	UTgSettingsDC_UI_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_Video.usc_AutoConfig
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgSettingsDC_Video::usc_AutoConfig ( )
{
	static UFunction* pFnusc_AutoConfig = NULL;

	if ( ! pFnusc_AutoConfig )
		pFnusc_AutoConfig = (UFunction*) UObject::GObjObjects()->GetIndex( 128946 );

	UTgSettingsDC_Video_execusc_AutoConfig_Parms usc_AutoConfig_Parms;

	pFnusc_AutoConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_AutoConfig, &usc_AutoConfig_Parms, NULL );

	pFnusc_AutoConfig->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_Video.usc_SetGammaValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          nGamma                         ( CPF_Parm )

void UTgSettingsDC_Video::usc_SetGammaValue ( float nGamma )
{
	static UFunction* pFnusc_SetGammaValue = NULL;

	if ( ! pFnusc_SetGammaValue )
		pFnusc_SetGammaValue = (UFunction*) UObject::GObjObjects()->GetIndex( 128944 );

	UTgSettingsDC_Video_execusc_SetGammaValue_Parms usc_SetGammaValue_Parms;
	usc_SetGammaValue_Parms.nGamma = nGamma;

	pFnusc_SetGammaValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_SetGammaValue, &usc_SetGammaValue_Parms, NULL );

	pFnusc_SetGammaValue->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_Video.usc_SetVideoSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          nWorldDetail                   ( CPF_Parm )
// float                          nTextureDetail                 ( CPF_Parm )
// float                          nShadowDetail                  ( CPF_Parm )
// float                          nParticleDetail                ( CPF_Parm )
// unsigned long                  bUseVSync                      ( CPF_Parm )
// unsigned long                  bUseSpecialMatEffects          ( CPF_Parm )
// unsigned long                  bUseRagdollPhysics             ( CPF_Parm )
// unsigned long                  bFullScreen                    ( CPF_Parm )
// unsigned long                  bBorderless                    ( CPF_Parm )
// float                          nResX                          ( CPF_Parm )
// float                          nResY                          ( CPF_Parm )
// int                            nMultiSampleCount              ( CPF_Parm )
// unsigned long                  bD3D11Enabled                  ( CPF_Parm )
// int                            nFXAAQuality                   ( CPF_Parm )
// int                            nShaderQuality                 ( CPF_Parm )

void UTgSettingsDC_Video::usc_SetVideoSettings ( float nWorldDetail, float nTextureDetail, float nShadowDetail, float nParticleDetail, unsigned long bUseVSync, unsigned long bUseSpecialMatEffects, unsigned long bUseRagdollPhysics, unsigned long bFullScreen, unsigned long bBorderless, float nResX, float nResY, int nMultiSampleCount, unsigned long bD3D11Enabled, int nFXAAQuality, int nShaderQuality )
{
	static UFunction* pFnusc_SetVideoSettings = NULL;

	if ( ! pFnusc_SetVideoSettings )
		pFnusc_SetVideoSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 128928 );

	UTgSettingsDC_Video_execusc_SetVideoSettings_Parms usc_SetVideoSettings_Parms;
	usc_SetVideoSettings_Parms.nWorldDetail = nWorldDetail;
	usc_SetVideoSettings_Parms.nTextureDetail = nTextureDetail;
	usc_SetVideoSettings_Parms.nShadowDetail = nShadowDetail;
	usc_SetVideoSettings_Parms.nParticleDetail = nParticleDetail;
	usc_SetVideoSettings_Parms.bUseVSync = bUseVSync;
	usc_SetVideoSettings_Parms.bUseSpecialMatEffects = bUseSpecialMatEffects;
	usc_SetVideoSettings_Parms.bUseRagdollPhysics = bUseRagdollPhysics;
	usc_SetVideoSettings_Parms.bFullScreen = bFullScreen;
	usc_SetVideoSettings_Parms.bBorderless = bBorderless;
	usc_SetVideoSettings_Parms.nResX = nResX;
	usc_SetVideoSettings_Parms.nResY = nResY;
	usc_SetVideoSettings_Parms.nMultiSampleCount = nMultiSampleCount;
	usc_SetVideoSettings_Parms.bD3D11Enabled = bD3D11Enabled;
	usc_SetVideoSettings_Parms.nFXAAQuality = nFXAAQuality;
	usc_SetVideoSettings_Parms.nShaderQuality = nShaderQuality;

	pFnusc_SetVideoSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_SetVideoSettings, &usc_SetVideoSettings_Parms, NULL );

	pFnusc_SetVideoSettings->FunctionFlags |= 0x400;
};

// Function TgClient.TgSettingsDC_Video.usc_AutoConfig_Delegate
// [0x00120000] 
// Parameters infos:

void UTgSettingsDC_Video::usc_AutoConfig_Delegate ( )
{
	static UFunction* pFnusc_AutoConfig_Delegate = NULL;

	if ( ! pFnusc_AutoConfig_Delegate )
		pFnusc_AutoConfig_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 128924 );

	UTgSettingsDC_Video_execusc_AutoConfig_Delegate_Parms usc_AutoConfig_Delegate_Parms;

	this->ProcessEvent ( pFnusc_AutoConfig_Delegate, &usc_AutoConfig_Delegate_Parms, NULL );
};

// Function TgClient.TgSettingsDC_Video.usc_SetGammaValue_Delegate
// [0x00120000] 
// Parameters infos:

void UTgSettingsDC_Video::usc_SetGammaValue_Delegate ( )
{
	static UFunction* pFnusc_SetGammaValue_Delegate = NULL;

	if ( ! pFnusc_SetGammaValue_Delegate )
		pFnusc_SetGammaValue_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 128926 );

	UTgSettingsDC_Video_execusc_SetGammaValue_Delegate_Parms usc_SetGammaValue_Delegate_Parms;

	this->ProcessEvent ( pFnusc_SetGammaValue_Delegate, &usc_SetGammaValue_Delegate_Parms, NULL );
};

// Function TgClient.TgSettingsDC_Video.usc_SetVideoSettings_Delegate
// [0x00120000] 
// Parameters infos:

void UTgSettingsDC_Video::usc_SetVideoSettings_Delegate ( )
{
	static UFunction* pFnusc_SetVideoSettings_Delegate = NULL;

	if ( ! pFnusc_SetVideoSettings_Delegate )
		pFnusc_SetVideoSettings_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 128922 );

	UTgSettingsDC_Video_execusc_SetVideoSettings_Delegate_Parms usc_SetVideoSettings_Delegate_Parms;

	this->ProcessEvent ( pFnusc_SetVideoSettings_Delegate, &usc_SetVideoSettings_Delegate_Parms, NULL );
};

// Function TgClient.TgSettingsDC_Video.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgSettingsDC_Video::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 128919 );

	UTgSettingsDC_Video_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif