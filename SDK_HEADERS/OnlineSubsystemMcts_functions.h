/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemMcts_functions.h
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

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.QueryNonAdvertisedData
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineGameInterfaceMcts::QueryNonAdvertisedData ( int StartAt, int NumberToQuery )
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if ( ! pFnQueryNonAdvertisedData )
		pFnQueryNonAdvertisedData = (UFunction*) UObject::GObjObjects()->GetIndex( 122439 );

	UOnlineGameInterfaceMcts_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	this->ProcessEvent ( pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL );

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceMcts::ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterPlayerCompleteDelegate )
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122436 );

	UOnlineGameInterfaceMcts_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.AddUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceMcts::AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterPlayerCompleteDelegate )
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122434 );

	UOnlineGameInterfaceMcts_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.OnUnregisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceMcts::OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if ( ! pFnOnUnregisterPlayerComplete )
		pFnOnUnregisterPlayerComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 122385 );

	UOnlineGameInterfaceMcts_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy ( &OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnUnregisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineGameInterfaceMcts::UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if ( ! pFnUnregisterPlayer )
		pFnUnregisterPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 122427 );

	UOnlineGameInterfaceMcts_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy ( &UnregisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );

	pFnUnregisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );

	pFnUnregisterPlayer->FunctionFlags |= 0x400;

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.ClearRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceMcts::ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterPlayerCompleteDelegate )
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122424 );

	UOnlineGameInterfaceMcts_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.AddRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceMcts::AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterPlayerCompleteDelegate )
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122422 );

	UOnlineGameInterfaceMcts_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.OnRegisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceMcts::OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if ( ! pFnOnRegisterPlayerComplete )
		pFnOnRegisterPlayerComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 122382 );

	UOnlineGameInterfaceMcts_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy ( &OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnRegisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.RegisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineGameInterfaceMcts::RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited )
{
	static UFunction* pFnRegisterPlayer = NULL;

	if ( ! pFnRegisterPlayer )
		pFnRegisterPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 122414 );

	UOnlineGameInterfaceMcts_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy ( &RegisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &RegisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	pFnRegisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterPlayer, &RegisterPlayer_Parms, NULL );

	pFnRegisterPlayer->FunctionFlags |= 0x400;

	return RegisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.AcceptGameInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceMcts::AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName )
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if ( ! pFnAcceptGameInvite )
		pFnAcceptGameInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 122410 );

	UOnlineGameInterfaceMcts_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptGameInvite_Parms.SessionName, &SessionName, 0x8 );

	pFnAcceptGameInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL );

	pFnAcceptGameInvite->FunctionFlags |= 0x400;

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.OnGameInviteAccepted
// [0x00520000] 
// Parameters infos:
// struct FOnlineGameSearchResult InviteResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineGameInterfaceMcts::OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = (UFunction*) UObject::GObjObjects()->GetIndex( 122379 );

	UOnlineGameInterfaceMcts_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );

	if ( InviteResult )
		memcpy ( InviteResult, &OnGameInviteAccepted_Parms.InviteResult, 0x8 );
};

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.ClearGameInviteAcceptedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceMcts::ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = NULL;

	if ( ! pFnClearGameInviteAcceptedDelegate )
		pFnClearGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122405 );

	UOnlineGameInterfaceMcts_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;
	ClearGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC );

	this->ProcessEvent ( pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.AddGameInviteAcceptedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceMcts::AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = NULL;

	if ( ! pFnAddGameInviteAcceptedDelegate )
		pFnAddGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122402 );

	UOnlineGameInterfaceMcts_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;
	AddGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC );

	this->ProcessEvent ( pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.GetGameSettings
// [0x00020002] 
// Parameters infos:
// class UOnlineGameSettings*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

class UOnlineGameSettings* UOnlineGameInterfaceMcts::GetGameSettings ( struct FName SessionName )
{
	static UFunction* pFnGetGameSettings = NULL;

	if ( ! pFnGetGameSettings )
		pFnGetGameSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 122398 );

	UOnlineGameInterfaceMcts_execGetGameSettings_Parms GetGameSettings_Parms;
	memcpy ( &GetGameSettings_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetGameSettings, &GetGameSettings_Parms, NULL );

	return GetGameSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineGameInterfaceMcts.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineGameInterfaceMcts::UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData )
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if ( ! pFnUpdateOnlineGame )
		pFnUpdateOnlineGame = (UFunction*) UObject::GObjObjects()->GetIndex( 122393 );

	UOnlineGameInterfaceMcts_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy ( &UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	pFnUpdateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL );

	pFnUpdateOnlineGame->FunctionFlags |= 0x400;

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearGetUserAccountInfoDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearGetUserAccountInfoDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearGetUserAccountInfoDelegate = NULL;

	if ( ! pFnClearGetUserAccountInfoDelegate )
		pFnClearGetUserAccountInfoDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123132 );

	UOnlineSubsystemMcts_execClearGetUserAccountInfoDelegate_Parms ClearGetUserAccountInfoDelegate_Parms;
	memcpy ( &ClearGetUserAccountInfoDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearGetUserAccountInfoDelegate, &ClearGetUserAccountInfoDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddGetUserAccountInfoDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddGetUserAccountInfoDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddGetUserAccountInfoDelegate = NULL;

	if ( ! pFnAddGetUserAccountInfoDelegate )
		pFnAddGetUserAccountInfoDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123130 );

	UOnlineSubsystemMcts_execAddGetUserAccountInfoDelegate_Parms AddGetUserAccountInfoDelegate_Parms;
	memcpy ( &AddGetUserAccountInfoDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddGetUserAccountInfoDelegate, &AddGetUserAccountInfoDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetUserAccountInfo
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemMcts::GetUserAccountInfo ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetUserAccountInfo = NULL;

	if ( ! pFnGetUserAccountInfo )
		pFnGetUserAccountInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 123127 );

	UOnlineSubsystemMcts_execGetUserAccountInfo_Parms GetUserAccountInfo_Parms;
	GetUserAccountInfo_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetUserAccountInfo, &GetUserAccountInfo_Parms, NULL );

	return GetUserAccountInfo_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnUserAccountInfoRetrieved
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccessful                    ( CPF_Parm )
// struct FUserAccountInfo        AccountInfo                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::OnUserAccountInfoRetrieved ( unsigned long bSuccessful, struct FUserAccountInfo AccountInfo )
{
	static UFunction* pFnOnUserAccountInfoRetrieved = NULL;

	if ( ! pFnOnUserAccountInfoRetrieved )
		pFnOnUserAccountInfoRetrieved = (UFunction*) UObject::GObjObjects()->GetIndex( 122465 );

	UOnlineSubsystemMcts_execOnUserAccountInfoRetrieved_Parms OnUserAccountInfoRetrieved_Parms;
	OnUserAccountInfoRetrieved_Parms.bSuccessful = bSuccessful;
	memcpy ( &OnUserAccountInfoRetrieved_Parms.AccountInfo, &AccountInfo, 0x3C );

	this->ProcessEvent ( pFnOnUserAccountInfoRetrieved, &OnUserAccountInfoRetrieved_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearURLTokenRetrievedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         tsrDelegate                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearURLTokenRetrievedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate tsrDelegate )
{
	static UFunction* pFnClearURLTokenRetrievedDelegate = NULL;

	if ( ! pFnClearURLTokenRetrievedDelegate )
		pFnClearURLTokenRetrievedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123122 );

	UOnlineSubsystemMcts_execClearURLTokenRetrievedDelegate_Parms ClearURLTokenRetrievedDelegate_Parms;
	ClearURLTokenRetrievedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearURLTokenRetrievedDelegate_Parms.tsrDelegate, &tsrDelegate, 0xC );

	this->ProcessEvent ( pFnClearURLTokenRetrievedDelegate, &ClearURLTokenRetrievedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddURLTokenRetrievedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         tsrDelegate                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddURLTokenRetrievedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate tsrDelegate )
{
	static UFunction* pFnAddURLTokenRetrievedDelegate = NULL;

	if ( ! pFnAddURLTokenRetrievedDelegate )
		pFnAddURLTokenRetrievedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123119 );

	UOnlineSubsystemMcts_execAddURLTokenRetrievedDelegate_Parms AddURLTokenRetrievedDelegate_Parms;
	AddURLTokenRetrievedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddURLTokenRetrievedDelegate_Parms.tsrDelegate, &tsrDelegate, 0xC );

	this->ProcessEvent ( pFnAddURLTokenRetrievedDelegate, &AddURLTokenRetrievedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetTokenAndSignatureForURL
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::GetTokenAndSignatureForURL ( unsigned char LocalUserNum, struct FString URL )
{
	static UFunction* pFnGetTokenAndSignatureForURL = NULL;

	if ( ! pFnGetTokenAndSignatureForURL )
		pFnGetTokenAndSignatureForURL = (UFunction*) UObject::GObjObjects()->GetIndex( 123116 );

	UOnlineSubsystemMcts_execGetTokenAndSignatureForURL_Parms GetTokenAndSignatureForURL_Parms;
	GetTokenAndSignatureForURL_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &GetTokenAndSignatureForURL_Parms.URL, &URL, 0xC );

	this->ProcessEvent ( pFnGetTokenAndSignatureForURL, &GetTokenAndSignatureForURL_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnTokenAndSignatureRetrieved
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Token                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Signature                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::OnTokenAndSignatureRetrieved ( unsigned char LocalUserNum, struct FString URL, struct FString Token, struct FString Signature )
{
	static UFunction* pFnOnTokenAndSignatureRetrieved = NULL;

	if ( ! pFnOnTokenAndSignatureRetrieved )
		pFnOnTokenAndSignatureRetrieved = (UFunction*) UObject::GObjObjects()->GetIndex( 122467 );

	UOnlineSubsystemMcts_execOnTokenAndSignatureRetrieved_Parms OnTokenAndSignatureRetrieved_Parms;
	OnTokenAndSignatureRetrieved_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnTokenAndSignatureRetrieved_Parms.URL, &URL, 0xC );
	memcpy ( &OnTokenAndSignatureRetrieved_Parms.Token, &Token, 0xC );
	memcpy ( &OnTokenAndSignatureRetrieved_Parms.Signature, &Signature, 0xC );

	this->ProcessEvent ( pFnOnTokenAndSignatureRetrieved, &OnTokenAndSignatureRetrieved_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetCurrentConnectionStatus
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemMcts::GetCurrentConnectionStatus ( )
{
	static UFunction* pFnGetCurrentConnectionStatus = NULL;

	if ( ! pFnGetCurrentConnectionStatus )
		pFnGetCurrentConnectionStatus = (UFunction*) UObject::GObjObjects()->GetIndex( 123110 );

	UOnlineSubsystemMcts_execGetCurrentConnectionStatus_Parms GetCurrentConnectionStatus_Parms;

	this->ProcessEvent ( pFnGetCurrentConnectionStatus, &GetCurrentConnectionStatus_Parms, NULL );

	return GetCurrentConnectionStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.PairUserAndControllerAtIndex
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerIndex                    ( CPF_Parm )
// unsigned char                  ControllerIndex                ( CPF_Parm )
// int                            PairIndex                      ( CPF_Parm )

bool UOnlineSubsystemMcts::PairUserAndControllerAtIndex ( unsigned char PlayerIndex, unsigned char ControllerIndex, int PairIndex )
{
	static UFunction* pFnPairUserAndControllerAtIndex = NULL;

	if ( ! pFnPairUserAndControllerAtIndex )
		pFnPairUserAndControllerAtIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 123105 );

	UOnlineSubsystemMcts_execPairUserAndControllerAtIndex_Parms PairUserAndControllerAtIndex_Parms;
	PairUserAndControllerAtIndex_Parms.PlayerIndex = PlayerIndex;
	PairUserAndControllerAtIndex_Parms.ControllerIndex = ControllerIndex;
	PairUserAndControllerAtIndex_Parms.PairIndex = PairIndex;

	this->ProcessEvent ( pFnPairUserAndControllerAtIndex, &PairUserAndControllerAtIndex_Parms, NULL );

	return PairUserAndControllerAtIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearSystemUserContrllerPairingChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         PairingChangeDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearSystemUserContrllerPairingChangedDelegate ( struct FScriptDelegate PairingChangeDelegate )
{
	static UFunction* pFnClearSystemUserContrllerPairingChangedDelegate = NULL;

	if ( ! pFnClearSystemUserContrllerPairingChangedDelegate )
		pFnClearSystemUserContrllerPairingChangedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123103 );

	UOnlineSubsystemMcts_execClearSystemUserContrllerPairingChangedDelegate_Parms ClearSystemUserContrllerPairingChangedDelegate_Parms;
	memcpy ( &ClearSystemUserContrllerPairingChangedDelegate_Parms.PairingChangeDelegate, &PairingChangeDelegate, 0xC );

	this->ProcessEvent ( pFnClearSystemUserContrllerPairingChangedDelegate, &ClearSystemUserContrllerPairingChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddSystemUserContrllerPairingChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         PairingChangeDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddSystemUserContrllerPairingChangedDelegate ( struct FScriptDelegate PairingChangeDelegate )
{
	static UFunction* pFnAddSystemUserContrllerPairingChangedDelegate = NULL;

	if ( ! pFnAddSystemUserContrllerPairingChangedDelegate )
		pFnAddSystemUserContrllerPairingChangedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123101 );

	UOnlineSubsystemMcts_execAddSystemUserContrllerPairingChangedDelegate_Parms AddSystemUserContrllerPairingChangedDelegate_Parms;
	memcpy ( &AddSystemUserContrllerPairingChangedDelegate_Parms.PairingChangeDelegate, &PairingChangeDelegate, 0xC );

	this->ProcessEvent ( pFnAddSystemUserContrllerPairingChangedDelegate, &AddSystemUserContrllerPairingChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnSystemUserControllerPairingChanged
// [0x00120000] 
// Parameters infos:
// int                            NewLocalUserNum                ( CPF_Parm )
// int                            PreviousLocalUserNum           ( CPF_Parm )

void UOnlineSubsystemMcts::OnSystemUserControllerPairingChanged ( int NewLocalUserNum, int PreviousLocalUserNum )
{
	static UFunction* pFnOnSystemUserControllerPairingChanged = NULL;

	if ( ! pFnOnSystemUserControllerPairingChanged )
		pFnOnSystemUserControllerPairingChanged = (UFunction*) UObject::GObjObjects()->GetIndex( 122469 );

	UOnlineSubsystemMcts_execOnSystemUserControllerPairingChanged_Parms OnSystemUserControllerPairingChanged_Parms;
	OnSystemUserControllerPairingChanged_Parms.NewLocalUserNum = NewLocalUserNum;
	OnSystemUserControllerPairingChanged_Parms.PreviousLocalUserNum = PreviousLocalUserNum;

	this->ProcessEvent ( pFnOnSystemUserControllerPairingChanged, &OnSystemUserControllerPairingChanged_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanUploadFitnessData
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanUploadFitnessData ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanUploadFitnessData = NULL;

	if ( ! pFnCanUploadFitnessData )
		pFnCanUploadFitnessData = (UFunction*) UObject::GObjObjects()->GetIndex( 123093 );

	UOnlineSubsystemMcts_execCanUploadFitnessData_Parms CanUploadFitnessData_Parms;
	CanUploadFitnessData_Parms.LocalUserNum = LocalUserNum;
	CanUploadFitnessData_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanUploadFitnessData_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanUploadFitnessData, &CanUploadFitnessData_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanUploadFitnessData_Parms.PrivilegeLevelHint;

	return CanUploadFitnessData_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanShareKinectContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanShareKinectContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShareKinectContent = NULL;

	if ( ! pFnCanShareKinectContent )
		pFnCanShareKinectContent = (UFunction*) UObject::GObjObjects()->GetIndex( 123087 );

	UOnlineSubsystemMcts_execCanShareKinectContent_Parms CanShareKinectContent_Parms;
	CanShareKinectContent_Parms.LocalUserNum = LocalUserNum;
	CanShareKinectContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShareKinectContent_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanShareKinectContent, &CanShareKinectContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShareKinectContent_Parms.PrivilegeLevelHint;

	return CanShareKinectContent_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanShareWithSocialNetwork
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanShareWithSocialNetwork ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShareWithSocialNetwork = NULL;

	if ( ! pFnCanShareWithSocialNetwork )
		pFnCanShareWithSocialNetwork = (UFunction*) UObject::GObjObjects()->GetIndex( 123081 );

	UOnlineSubsystemMcts_execCanShareWithSocialNetwork_Parms CanShareWithSocialNetwork_Parms;
	CanShareWithSocialNetwork_Parms.LocalUserNum = LocalUserNum;
	CanShareWithSocialNetwork_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShareWithSocialNetwork_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanShareWithSocialNetwork, &CanShareWithSocialNetwork_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShareWithSocialNetwork_Parms.PrivilegeLevelHint;

	return CanShareWithSocialNetwork_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanBrowseInternet
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanBrowseInternet ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanBrowseInternet = NULL;

	if ( ! pFnCanBrowseInternet )
		pFnCanBrowseInternet = (UFunction*) UObject::GObjObjects()->GetIndex( 123075 );

	UOnlineSubsystemMcts_execCanBrowseInternet_Parms CanBrowseInternet_Parms;
	CanBrowseInternet_Parms.LocalUserNum = LocalUserNum;
	CanBrowseInternet_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanBrowseInternet_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanBrowseInternet, &CanBrowseInternet_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanBrowseInternet_Parms.PrivilegeLevelHint;

	return CanBrowseInternet_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanAccessPremiumVideoContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanAccessPremiumVideoContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanAccessPremiumVideoContent = NULL;

	if ( ! pFnCanAccessPremiumVideoContent )
		pFnCanAccessPremiumVideoContent = (UFunction*) UObject::GObjObjects()->GetIndex( 123069 );

	UOnlineSubsystemMcts_execCanAccessPremiumVideoContent_Parms CanAccessPremiumVideoContent_Parms;
	CanAccessPremiumVideoContent_Parms.LocalUserNum = LocalUserNum;
	CanAccessPremiumVideoContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanAccessPremiumVideoContent_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanAccessPremiumVideoContent, &CanAccessPremiumVideoContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanAccessPremiumVideoContent_Parms.PrivilegeLevelHint;

	return CanAccessPremiumVideoContent_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanAccessPremiumContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanAccessPremiumContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanAccessPremiumContent = NULL;

	if ( ! pFnCanAccessPremiumContent )
		pFnCanAccessPremiumContent = (UFunction*) UObject::GObjObjects()->GetIndex( 123063 );

	UOnlineSubsystemMcts_execCanAccessPremiumContent_Parms CanAccessPremiumContent_Parms;
	CanAccessPremiumContent_Parms.LocalUserNum = LocalUserNum;
	CanAccessPremiumContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanAccessPremiumContent_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanAccessPremiumContent, &CanAccessPremiumContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanAccessPremiumContent_Parms.PrivilegeLevelHint;

	return CanAccessPremiumContent_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanUseCloudStorage
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanUseCloudStorage ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanUseCloudStorage = NULL;

	if ( ! pFnCanUseCloudStorage )
		pFnCanUseCloudStorage = (UFunction*) UObject::GObjObjects()->GetIndex( 123057 );

	UOnlineSubsystemMcts_execCanUseCloudStorage_Parms CanUseCloudStorage_Parms;
	CanUseCloudStorage_Parms.LocalUserNum = LocalUserNum;
	CanUseCloudStorage_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanUseCloudStorage_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanUseCloudStorage, &CanUseCloudStorage_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanUseCloudStorage_Parms.PrivilegeLevelHint;

	return CanUseCloudStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanRecordDVRClips
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanRecordDVRClips ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanRecordDVRClips = NULL;

	if ( ! pFnCanRecordDVRClips )
		pFnCanRecordDVRClips = (UFunction*) UObject::GObjObjects()->GetIndex( 123051 );

	UOnlineSubsystemMcts_execCanRecordDVRClips_Parms CanRecordDVRClips_Parms;
	CanRecordDVRClips_Parms.LocalUserNum = LocalUserNum;
	CanRecordDVRClips_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanRecordDVRClips_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanRecordDVRClips, &CanRecordDVRClips_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanRecordDVRClips_Parms.PrivilegeLevelHint;

	return CanRecordDVRClips_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanShareUserCreatedContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanShareUserCreatedContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShareUserCreatedContent = NULL;

	if ( ! pFnCanShareUserCreatedContent )
		pFnCanShareUserCreatedContent = (UFunction*) UObject::GObjObjects()->GetIndex( 123045 );

	UOnlineSubsystemMcts_execCanShareUserCreatedContent_Parms CanShareUserCreatedContent_Parms;
	CanShareUserCreatedContent_Parms.LocalUserNum = LocalUserNum;
	CanShareUserCreatedContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShareUserCreatedContent_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanShareUserCreatedContent, &CanShareUserCreatedContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShareUserCreatedContent_Parms.PrivilegeLevelHint;

	return CanShareUserCreatedContent_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanCommunicateVoiceWithUsers
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSessionMemberInfo > Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemMcts::CanCommunicateVoiceWithUsers ( unsigned char LocalUserNum, TArray< struct FSessionMemberInfo > Users )
{
	static UFunction* pFnCanCommunicateVoiceWithUsers = NULL;

	if ( ! pFnCanCommunicateVoiceWithUsers )
		pFnCanCommunicateVoiceWithUsers = (UFunction*) UObject::GObjObjects()->GetIndex( 123040 );

	UOnlineSubsystemMcts_execCanCommunicateVoiceWithUsers_Parms CanCommunicateVoiceWithUsers_Parms;
	CanCommunicateVoiceWithUsers_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanCommunicateVoiceWithUsers_Parms.Users, &Users, 0xC );

	this->ProcessEvent ( pFnCanCommunicateVoiceWithUsers, &CanCommunicateVoiceWithUsers_Parms, NULL );

	return CanCommunicateVoiceWithUsers_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanCommunicateVoice
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanCommunicateVoice ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanCommunicateVoice = NULL;

	if ( ! pFnCanCommunicateVoice )
		pFnCanCommunicateVoice = (UFunction*) UObject::GObjObjects()->GetIndex( 123034 );

	UOnlineSubsystemMcts_execCanCommunicateVoice_Parms CanCommunicateVoice_Parms;
	CanCommunicateVoice_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateVoice_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanCommunicateVoice_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanCommunicateVoice, &CanCommunicateVoice_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanCommunicateVoice_Parms.PrivilegeLevelHint;

	return CanCommunicateVoice_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanCommunicateVideo
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanCommunicateVideo ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanCommunicateVideo = NULL;

	if ( ! pFnCanCommunicateVideo )
		pFnCanCommunicateVideo = (UFunction*) UObject::GObjObjects()->GetIndex( 123028 );

	UOnlineSubsystemMcts_execCanCommunicateVideo_Parms CanCommunicateVideo_Parms;
	CanCommunicateVideo_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateVideo_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanCommunicateVideo_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanCommunicateVideo, &CanCommunicateVideo_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanCommunicateVideo_Parms.PrivilegeLevelHint;

	return CanCommunicateVideo_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanCommunicateText
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanCommunicateText ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanCommunicateText = NULL;

	if ( ! pFnCanCommunicateText )
		pFnCanCommunicateText = (UFunction*) UObject::GObjObjects()->GetIndex( 123022 );

	UOnlineSubsystemMcts_execCanCommunicateText_Parms CanCommunicateText_Parms;
	CanCommunicateText_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateText_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanCommunicateText_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanCommunicateText, &CanCommunicateText_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanCommunicateText_Parms.PrivilegeLevelHint;

	return CanCommunicateText_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearPrivilegeCheckedForUsersDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearPrivilegeCheckedForUsersDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnClearPrivilegeCheckedForUsersDelegate = NULL;

	if ( ! pFnClearPrivilegeCheckedForUsersDelegate )
		pFnClearPrivilegeCheckedForUsersDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123020 );

	UOnlineSubsystemMcts_execClearPrivilegeCheckedForUsersDelegate_Parms ClearPrivilegeCheckedForUsersDelegate_Parms;
	memcpy ( &ClearPrivilegeCheckedForUsersDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0xC );

	this->ProcessEvent ( pFnClearPrivilegeCheckedForUsersDelegate, &ClearPrivilegeCheckedForUsersDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddPrivilegeCheckedForUsersDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddPrivilegeCheckedForUsersDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnAddPrivilegeCheckedForUsersDelegate = NULL;

	if ( ! pFnAddPrivilegeCheckedForUsersDelegate )
		pFnAddPrivilegeCheckedForUsersDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123018 );

	UOnlineSubsystemMcts_execAddPrivilegeCheckedForUsersDelegate_Parms AddPrivilegeCheckedForUsersDelegate_Parms;
	memcpy ( &AddPrivilegeCheckedForUsersDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0xC );

	this->ProcessEvent ( pFnAddPrivilegeCheckedForUsersDelegate, &AddPrivilegeCheckedForUsersDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnPrivilegeCheckedForUsers
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// TArray< struct FPermissionsResult > Results                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::OnPrivilegeCheckedForUsers ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResult > Results )
{
	static UFunction* pFnOnPrivilegeCheckedForUsers = NULL;

	if ( ! pFnOnPrivilegeCheckedForUsers )
		pFnOnPrivilegeCheckedForUsers = (UFunction*) UObject::GObjObjects()->GetIndex( 122471 );

	UOnlineSubsystemMcts_execOnPrivilegeCheckedForUsers_Parms OnPrivilegeCheckedForUsers_Parms;
	OnPrivilegeCheckedForUsers_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeCheckedForUsers_Parms.Privilege = Privilege;
	memcpy ( &OnPrivilegeCheckedForUsers_Parms.Results, &Results, 0xC );

	this->ProcessEvent ( pFnOnPrivilegeCheckedForUsers, &OnPrivilegeCheckedForUsers_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearPrivilegeLevelCheckedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearPrivilegeLevelCheckedDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnClearPrivilegeLevelCheckedDelegate = NULL;

	if ( ! pFnClearPrivilegeLevelCheckedDelegate )
		pFnClearPrivilegeLevelCheckedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123012 );

	UOnlineSubsystemMcts_execClearPrivilegeLevelCheckedDelegate_Parms ClearPrivilegeLevelCheckedDelegate_Parms;
	memcpy ( &ClearPrivilegeLevelCheckedDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0xC );

	this->ProcessEvent ( pFnClearPrivilegeLevelCheckedDelegate, &ClearPrivilegeLevelCheckedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddPrivilegeLevelCheckedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddPrivilegeLevelCheckedDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnAddPrivilegeLevelCheckedDelegate = NULL;

	if ( ! pFnAddPrivilegeLevelCheckedDelegate )
		pFnAddPrivilegeLevelCheckedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123010 );

	UOnlineSubsystemMcts_execAddPrivilegeLevelCheckedDelegate_Parms AddPrivilegeLevelCheckedDelegate_Parms;
	memcpy ( &AddPrivilegeLevelCheckedDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0xC );

	this->ProcessEvent ( pFnAddPrivilegeLevelCheckedDelegate, &AddPrivilegeLevelCheckedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnPrivilegeLevelChecked
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// unsigned char                  PrivilegeLevel                 ( CPF_Parm )
// unsigned long                  bDiffersFromHint               ( CPF_Parm )

void UOnlineSubsystemMcts::OnPrivilegeLevelChecked ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint )
{
	static UFunction* pFnOnPrivilegeLevelChecked = NULL;

	if ( ! pFnOnPrivilegeLevelChecked )
		pFnOnPrivilegeLevelChecked = (UFunction*) UObject::GObjObjects()->GetIndex( 122473 );

	UOnlineSubsystemMcts_execOnPrivilegeLevelChecked_Parms OnPrivilegeLevelChecked_Parms;
	OnPrivilegeLevelChecked_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeLevelChecked_Parms.Privilege = Privilege;
	OnPrivilegeLevelChecked_Parms.PrivilegeLevel = PrivilegeLevel;
	OnPrivilegeLevelChecked_Parms.bDiffersFromHint = bDiffersFromHint;

	this->ProcessEvent ( pFnOnPrivilegeLevelChecked, &OnPrivilegeLevelChecked_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearCurrentUserChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CurrentUserDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearCurrentUserChangedDelegate ( struct FScriptDelegate CurrentUserDelegate )
{
	static UFunction* pFnClearCurrentUserChangedDelegate = NULL;

	if ( ! pFnClearCurrentUserChangedDelegate )
		pFnClearCurrentUserChangedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123004 );

	UOnlineSubsystemMcts_execClearCurrentUserChangedDelegate_Parms ClearCurrentUserChangedDelegate_Parms;
	memcpy ( &ClearCurrentUserChangedDelegate_Parms.CurrentUserDelegate, &CurrentUserDelegate, 0xC );

	this->ProcessEvent ( pFnClearCurrentUserChangedDelegate, &ClearCurrentUserChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddCurrentUserChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CurrentUserDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddCurrentUserChangedDelegate ( struct FScriptDelegate CurrentUserDelegate )
{
	static UFunction* pFnAddCurrentUserChangedDelegate = NULL;

	if ( ! pFnAddCurrentUserChangedDelegate )
		pFnAddCurrentUserChangedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123002 );

	UOnlineSubsystemMcts_execAddCurrentUserChangedDelegate_Parms AddCurrentUserChangedDelegate_Parms;
	memcpy ( &AddCurrentUserChangedDelegate_Parms.CurrentUserDelegate, &CurrentUserDelegate, 0xC );

	this->ProcessEvent ( pFnAddCurrentUserChangedDelegate, &AddCurrentUserChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnCurrentUserChanged
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 CurrentUser                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 LoggedInUser                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::OnCurrentUserChanged ( unsigned char LocalUserNum, struct FString CurrentUser, struct FString LoggedInUser )
{
	static UFunction* pFnOnCurrentUserChanged = NULL;

	if ( ! pFnOnCurrentUserChanged )
		pFnOnCurrentUserChanged = (UFunction*) UObject::GObjObjects()->GetIndex( 122475 );

	UOnlineSubsystemMcts_execOnCurrentUserChanged_Parms OnCurrentUserChanged_Parms;
	OnCurrentUserChanged_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnCurrentUserChanged_Parms.CurrentUser, &CurrentUser, 0xC );
	memcpy ( &OnCurrentUserChanged_Parms.LoggedInUser, &LoggedInUser, 0xC );

	this->ProcessEvent ( pFnOnCurrentUserChanged, &OnCurrentUserChanged_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.HideKeyboardUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemMcts::HideKeyboardUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnHideKeyboardUI = NULL;

	if ( ! pFnHideKeyboardUI )
		pFnHideKeyboardUI = (UFunction*) UObject::GObjObjects()->GetIndex( 122996 );

	UOnlineSubsystemMcts_execHideKeyboardUI_Parms HideKeyboardUI_Parms;
	HideKeyboardUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnHideKeyboardUI, &HideKeyboardUI_Parms, NULL );

	return HideKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearAchievements
// [0x00024000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )

void UOnlineSubsystemMcts::ClearAchievements ( unsigned char LocalUserNum, int TitleId )
{
	static UFunction* pFnClearAchievements = NULL;

	if ( ! pFnClearAchievements )
		pFnClearAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 122993 );

	UOnlineSubsystemMcts_execClearAchievements_Parms ClearAchievements_Parms;
	ClearAchievements_Parms.LocalUserNum = LocalUserNum;
	ClearAchievements_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnClearAchievements, &ClearAchievements_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetLocale
// [0x00020000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemMcts::GetLocale ( )
{
	static UFunction* pFnGetLocale = NULL;

	if ( ! pFnGetLocale )
		pFnGetLocale = (UFunction*) UObject::GObjObjects()->GetIndex( 122991 );

	UOnlineSubsystemMcts_execGetLocale_Parms GetLocale_Parms;

	this->ProcessEvent ( pFnGetLocale, &GetLocale_Parms, NULL );

	return GetLocale_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.SetNetworkNotificationPosition
// [0x00020000] 
// Parameters infos:
// unsigned char                  NewPos                         ( CPF_Parm )

void UOnlineSubsystemMcts::SetNetworkNotificationPosition ( unsigned char NewPos )
{
	static UFunction* pFnSetNetworkNotificationPosition = NULL;

	if ( ! pFnSetNetworkNotificationPosition )
		pFnSetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->GetIndex( 122989 );

	UOnlineSubsystemMcts_execSetNetworkNotificationPosition_Parms SetNetworkNotificationPosition_Parms;
	SetNetworkNotificationPosition_Parms.NewPos = NewPos;

	this->ProcessEvent ( pFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ShowLoginUI
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bForceLogin                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShowOnlineOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemMcts::ShowLoginUI ( unsigned char LocalUserNum, unsigned long bForceLogin, unsigned long bShowOnlineOnly )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->GetIndex( 122984 );

	UOnlineSubsystemMcts_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.LocalUserNum = LocalUserNum;
	ShowLoginUI_Parms.bForceLogin = bForceLogin;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	return ShowLoginUI_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.RemoveAccountPickerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::RemoveAccountPickerCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnRemoveAccountPickerCompleteDelegate = NULL;

	if ( ! pFnRemoveAccountPickerCompleteDelegate )
		pFnRemoveAccountPickerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122982 );

	UOnlineSubsystemMcts_execRemoveAccountPickerCompleteDelegate_Parms RemoveAccountPickerCompleteDelegate_Parms;
	memcpy ( &RemoveAccountPickerCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnRemoveAccountPickerCompleteDelegate, &RemoveAccountPickerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddAccountPickerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddAccountPickerCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddAccountPickerCompleteDelegate = NULL;

	if ( ! pFnAddAccountPickerCompleteDelegate )
		pFnAddAccountPickerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122980 );

	UOnlineSubsystemMcts_execAddAccountPickerCompleteDelegate_Parms AddAccountPickerCompleteDelegate_Parms;
	memcpy ( &AddAccountPickerCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddAccountPickerCompleteDelegate, &AddAccountPickerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnAccountPickerComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bForceLogin                    ( CPF_Parm )

void UOnlineSubsystemMcts::OnAccountPickerComplete ( unsigned long bForceLogin )
{
	static UFunction* pFnOnAccountPickerComplete = NULL;

	if ( ! pFnOnAccountPickerComplete )
		pFnOnAccountPickerComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 122477 );

	UOnlineSubsystemMcts_execOnAccountPickerComplete_Parms OnAccountPickerComplete_Parms;
	OnAccountPickerComplete_Parms.bForceLogin = bForceLogin;

	this->ProcessEvent ( pFnOnAccountPickerComplete, &OnAccountPickerComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ShowFriendsUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemMcts::ShowFriendsUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->GetIndex( 122976 );

	UOnlineSubsystemMcts_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.DeleteMessage
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            MessageIndex                   ( CPF_Parm )

bool UOnlineSubsystemMcts::DeleteMessage ( unsigned char LocalUserNum, int MessageIndex )
{
	static UFunction* pFnDeleteMessage = NULL;

	if ( ! pFnDeleteMessage )
		pFnDeleteMessage = (UFunction*) UObject::GObjObjects()->GetIndex( 122972 );

	UOnlineSubsystemMcts_execDeleteMessage_Parms DeleteMessage_Parms;
	DeleteMessage_Parms.LocalUserNum = LocalUserNum;
	DeleteMessage_Parms.MessageIndex = MessageIndex;

	this->ProcessEvent ( pFnDeleteMessage, &DeleteMessage_Parms, NULL );

	return DeleteMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearReadAchievementsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnClearReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnClearReadAchievementsCompleteDelegate )
		pFnClearReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122969 );

	UOnlineSubsystemMcts_execClearReadAchievementsCompleteDelegate_Parms ClearReadAchievementsCompleteDelegate_Parms;
	ClearReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddReadAchievementsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnAddReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnAddReadAchievementsCompleteDelegate )
		pFnAddReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122966 );

	UOnlineSubsystemMcts_execAddReadAchievementsCompleteDelegate_Parms AddReadAchievementsCompleteDelegate_Parms;
	AddReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnReadAchievementsComplete
// [0x00120000] 
// Parameters infos:
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemMcts::OnReadAchievementsComplete ( int TitleId )
{
	static UFunction* pFnOnReadAchievementsComplete = NULL;

	if ( ! pFnOnReadAchievementsComplete )
		pFnOnReadAchievementsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 122479 );

	UOnlineSubsystemMcts_execOnReadAchievementsComplete_Parms OnReadAchievementsComplete_Parms;
	OnReadAchievementsComplete_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearUnlockAchievementCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnClearUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnClearUnlockAchievementCompleteDelegate )
		pFnClearUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122962 );

	UOnlineSubsystemMcts_execClearUnlockAchievementCompleteDelegate_Parms ClearUnlockAchievementCompleteDelegate_Parms;
	ClearUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddUnlockAchievementCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnAddUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnAddUnlockAchievementCompleteDelegate )
		pFnAddUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122959 );

	UOnlineSubsystemMcts_execAddUnlockAchievementCompleteDelegate_Parms AddUnlockAchievementCompleteDelegate_Parms;
	AddUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnUnlockAchievementComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemMcts::OnUnlockAchievementComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnlockAchievementComplete = NULL;

	if ( ! pFnOnUnlockAchievementComplete )
		pFnOnUnlockAchievementComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 122481 );

	UOnlineSubsystemMcts_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;
	OnUnlockAchievementComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetAchievements
// [0x00424000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FAchievementDetails > Achievements                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemMcts::GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements )
{
	static UFunction* pFnGetAchievements = NULL;

	if ( ! pFnGetAchievements )
		pFnGetAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 122952 );

	UOnlineSubsystemMcts_execGetAchievements_Parms GetAchievements_Parms;
	GetAchievements_Parms.LocalUserNum = LocalUserNum;
	GetAchievements_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnGetAchievements, &GetAchievements_Parms, NULL );

	if ( Achievements )
		memcpy ( Achievements, &GetAchievements_Parms.Achievements, 0xC );

	return GetAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ReadAchievements
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadText                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadImages              ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemMcts::ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages )
{
	static UFunction* pFnReadAchievements = NULL;

	if ( ! pFnReadAchievements )
		pFnReadAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 122946 );

	UOnlineSubsystemMcts_execReadAchievements_Parms ReadAchievements_Parms;
	ReadAchievements_Parms.LocalUserNum = LocalUserNum;
	ReadAchievements_Parms.TitleId = TitleId;
	ReadAchievements_Parms.bShouldReadText = bShouldReadText;
	ReadAchievements_Parms.bShouldReadImages = bShouldReadImages;

	this->ProcessEvent ( pFnReadAchievements, &ReadAchievements_Parms, NULL );

	return ReadAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.UnlockAchievement
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AchievementId                  ( CPF_Parm )
// float                          PercentComplete                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemMcts::UnlockAchievement ( unsigned char LocalUserNum, int AchievementId, float PercentComplete )
{
	static UFunction* pFnUnlockAchievement = NULL;

	if ( ! pFnUnlockAchievement )
		pFnUnlockAchievement = (UFunction*) UObject::GObjObjects()->GetIndex( 122941 );

	UOnlineSubsystemMcts_execUnlockAchievement_Parms UnlockAchievement_Parms;
	UnlockAchievement_Parms.LocalUserNum = LocalUserNum;
	UnlockAchievement_Parms.AchievementId = AchievementId;
	UnlockAchievement_Parms.PercentComplete = PercentComplete;

	this->ProcessEvent ( pFnUnlockAchievement, &UnlockAchievement_Parms, NULL );

	return UnlockAchievement_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearFriendMessageReceivedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnClearFriendMessageReceivedDelegate = NULL;

	if ( ! pFnClearFriendMessageReceivedDelegate )
		pFnClearFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122938 );

	UOnlineSubsystemMcts_execClearFriendMessageReceivedDelegate_Parms ClearFriendMessageReceivedDelegate_Parms;
	ClearFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddFriendMessageReceivedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnAddFriendMessageReceivedDelegate = NULL;

	if ( ! pFnAddFriendMessageReceivedDelegate )
		pFnAddFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122935 );

	UOnlineSubsystemMcts_execAddFriendMessageReceivedDelegate_Parms AddFriendMessageReceivedDelegate_Parms;
	AddFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnFriendMessageReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            SendingPlayer                  ( CPF_Parm )
// struct FString                 SendingNick                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message )
{
	static UFunction* pFnOnFriendMessageReceived = NULL;

	if ( ! pFnOnFriendMessageReceived )
		pFnOnFriendMessageReceived = (UFunction*) UObject::GObjObjects()->GetIndex( 122483 );

	UOnlineSubsystemMcts_execOnFriendMessageReceived_Parms OnFriendMessageReceived_Parms;
	OnFriendMessageReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendMessageReceived_Parms.SendingPlayer, &SendingPlayer, 0x8 );
	memcpy ( &OnFriendMessageReceived_Parms.SendingNick, &SendingNick, 0xC );
	memcpy ( &OnFriendMessageReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendMessageReceived, &OnFriendMessageReceived_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetFriendMessages
// [0x00420000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FOnlineFriendMessage > FriendMessages                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages )
{
	static UFunction* pFnGetFriendMessages = NULL;

	if ( ! pFnGetFriendMessages )
		pFnGetFriendMessages = (UFunction*) UObject::GObjObjects()->GetIndex( 122927 );

	UOnlineSubsystemMcts_execGetFriendMessages_Parms GetFriendMessages_Parms;
	GetFriendMessages_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetFriendMessages, &GetFriendMessages_Parms, NULL );

	if ( FriendMessages )
		memcpy ( FriendMessages, &GetFriendMessages_Parms.FriendMessages, 0xC );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearJoinFriendGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnClearJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinFriendGameCompleteDelegate )
		pFnClearJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122925 );

	UOnlineSubsystemMcts_execClearJoinFriendGameCompleteDelegate_Parms ClearJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddJoinFriendGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnAddJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinFriendGameCompleteDelegate )
		pFnAddJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122923 );

	UOnlineSubsystemMcts_execAddJoinFriendGameCompleteDelegate_Parms AddJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &AddJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnJoinFriendGameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemMcts::OnJoinFriendGameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinFriendGameComplete = NULL;

	if ( ! pFnOnJoinFriendGameComplete )
		pFnOnJoinFriendGameComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 122485 );

	UOnlineSubsystemMcts_execOnJoinFriendGameComplete_Parms OnJoinFriendGameComplete_Parms;
	OnJoinFriendGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.JoinFriendGame
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )

bool UOnlineSubsystemMcts::JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend )
{
	static UFunction* pFnJoinFriendGame = NULL;

	if ( ! pFnJoinFriendGame )
		pFnJoinFriendGame = (UFunction*) UObject::GObjObjects()->GetIndex( 122918 );

	UOnlineSubsystemMcts_execJoinFriendGame_Parms JoinFriendGame_Parms;
	JoinFriendGame_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &JoinFriendGame_Parms.Friend, &Friend, 0x8 );

	this->ProcessEvent ( pFnJoinFriendGame, &JoinFriendGame_Parms, NULL );

	return JoinFriendGame_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CheckForGameInviteOnLaunch
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemMcts::CheckForGameInviteOnLaunch ( )
{
	static UFunction* pFnCheckForGameInviteOnLaunch = NULL;

	if ( ! pFnCheckForGameInviteOnLaunch )
		pFnCheckForGameInviteOnLaunch = (UFunction*) UObject::GObjObjects()->GetIndex( 122917 );

	UOnlineSubsystemMcts_execCheckForGameInviteOnLaunch_Parms CheckForGameInviteOnLaunch_Parms;

	this->ProcessEvent ( pFnCheckForGameInviteOnLaunch, &CheckForGameInviteOnLaunch_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearReceivedGameInviteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnClearReceivedGameInviteDelegate = NULL;

	if ( ! pFnClearReceivedGameInviteDelegate )
		pFnClearReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122914 );

	UOnlineSubsystemMcts_execClearReceivedGameInviteDelegate_Parms ClearReceivedGameInviteDelegate_Parms;
	ClearReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddReceivedGameInviteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnAddReceivedGameInviteDelegate = NULL;

	if ( ! pFnAddReceivedGameInviteDelegate )
		pFnAddReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122911 );

	UOnlineSubsystemMcts_execAddReceivedGameInviteDelegate_Parms AddReceivedGameInviteDelegate_Parms;
	AddReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnReceivedGameInvite
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviterName                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName )
{
	static UFunction* pFnOnReceivedGameInvite = NULL;

	if ( ! pFnOnReceivedGameInvite )
		pFnOnReceivedGameInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 122487 );

	UOnlineSubsystemMcts_execOnReceivedGameInvite_Parms OnReceivedGameInvite_Parms;
	OnReceivedGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnReceivedGameInvite_Parms.InviterName, &InviterName, 0xC );

	this->ProcessEvent ( pFnOnReceivedGameInvite, &OnReceivedGameInvite_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.SendGameInviteToFriends
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Friends                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemMcts::SendGameInviteToFriends ( unsigned char LocalUserNum, struct FName SessionName, TArray< struct FUniqueNetId > Friends, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriends = NULL;

	if ( ! pFnSendGameInviteToFriends )
		pFnSendGameInviteToFriends = (UFunction*) UObject::GObjObjects()->GetIndex( 122902 );

	UOnlineSubsystemMcts_execSendGameInviteToFriends_Parms SendGameInviteToFriends_Parms;
	SendGameInviteToFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriends_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &SendGameInviteToFriends_Parms.Friends, &Friends, 0xC );
	memcpy ( &SendGameInviteToFriends_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnSendGameInviteToFriends, &SendGameInviteToFriends_Parms, NULL );

	return SendGameInviteToFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.SendGameInviteToFriend
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemMcts::SendGameInviteToFriend ( unsigned char LocalUserNum, struct FName SessionName, struct FUniqueNetId Friend, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriend = NULL;

	if ( ! pFnSendGameInviteToFriend )
		pFnSendGameInviteToFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 122896 );

	UOnlineSubsystemMcts_execSendGameInviteToFriend_Parms SendGameInviteToFriend_Parms;
	SendGameInviteToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriend_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &SendGameInviteToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendGameInviteToFriend_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnSendGameInviteToFriend, &SendGameInviteToFriend_Parms, NULL );

	return SendGameInviteToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.SendMessageToFriend
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemMcts::SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message )
{
	static UFunction* pFnSendMessageToFriend = NULL;

	if ( ! pFnSendMessageToFriend )
		pFnSendMessageToFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 122891 );

	UOnlineSubsystemMcts_execSendMessageToFriend_Parms SendMessageToFriend_Parms;
	SendMessageToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendMessageToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendMessageToFriend_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnSendMessageToFriend, &SendMessageToFriend_Parms, NULL );

	return SendMessageToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearFriendInviteReceivedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnClearFriendInviteReceivedDelegate = NULL;

	if ( ! pFnClearFriendInviteReceivedDelegate )
		pFnClearFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122888 );

	UOnlineSubsystemMcts_execClearFriendInviteReceivedDelegate_Parms ClearFriendInviteReceivedDelegate_Parms;
	ClearFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddFriendInviteReceivedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnAddFriendInviteReceivedDelegate = NULL;

	if ( ! pFnAddFriendInviteReceivedDelegate )
		pFnAddFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122885 );

	UOnlineSubsystemMcts_execAddFriendInviteReceivedDelegate_Parms AddFriendInviteReceivedDelegate_Parms;
	AddFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnFriendInviteReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )
// struct FString                 RequestingNick                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message )
{
	static UFunction* pFnOnFriendInviteReceived = NULL;

	if ( ! pFnOnFriendInviteReceived )
		pFnOnFriendInviteReceived = (UFunction*) UObject::GObjObjects()->GetIndex( 122489 );

	UOnlineSubsystemMcts_execOnFriendInviteReceived_Parms OnFriendInviteReceived_Parms;
	OnFriendInviteReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendInviteReceived_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );
	memcpy ( &OnFriendInviteReceived_Parms.RequestingNick, &RequestingNick, 0xC );
	memcpy ( &OnFriendInviteReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendInviteReceived, &OnFriendInviteReceived_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.RemoveFriend
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            FormerFriend                   ( CPF_Parm )

bool UOnlineSubsystemMcts::RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend )
{
	static UFunction* pFnRemoveFriend = NULL;

	if ( ! pFnRemoveFriend )
		pFnRemoveFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 122877 );

	UOnlineSubsystemMcts_execRemoveFriend_Parms RemoveFriend_Parms;
	RemoveFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &RemoveFriend_Parms.FormerFriend, &FormerFriend, 0x8 );

	this->ProcessEvent ( pFnRemoveFriend, &RemoveFriend_Parms, NULL );

	return RemoveFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.DenyFriendInvite
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemMcts::DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnDenyFriendInvite = NULL;

	if ( ! pFnDenyFriendInvite )
		pFnDenyFriendInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 122873 );

	UOnlineSubsystemMcts_execDenyFriendInvite_Parms DenyFriendInvite_Parms;
	DenyFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &DenyFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	this->ProcessEvent ( pFnDenyFriendInvite, &DenyFriendInvite_Parms, NULL );

	return DenyFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AcceptFriendInvite
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemMcts::AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnAcceptFriendInvite = NULL;

	if ( ! pFnAcceptFriendInvite )
		pFnAcceptFriendInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 122869 );

	UOnlineSubsystemMcts_execAcceptFriendInvite_Parms AcceptFriendInvite_Parms;
	AcceptFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	this->ProcessEvent ( pFnAcceptFriendInvite, &AcceptFriendInvite_Parms, NULL );

	return AcceptFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearAddFriendByNameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnClearAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnClearAddFriendByNameCompleteDelegate )
		pFnClearAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122866 );

	UOnlineSubsystemMcts_execClearAddFriendByNameCompleteDelegate_Parms ClearAddFriendByNameCompleteDelegate_Parms;
	ClearAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0xC );

	this->ProcessEvent ( pFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddAddFriendByNameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnAddAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnAddAddFriendByNameCompleteDelegate )
		pFnAddAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122863 );

	UOnlineSubsystemMcts_execAddAddFriendByNameCompleteDelegate_Parms AddAddFriendByNameCompleteDelegate_Parms;
	AddAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0xC );

	this->ProcessEvent ( pFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnAddFriendByNameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemMcts::OnAddFriendByNameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnAddFriendByNameComplete = NULL;

	if ( ! pFnOnAddFriendByNameComplete )
		pFnOnAddFriendByNameComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 122491 );

	UOnlineSubsystemMcts_execOnAddFriendByNameComplete_Parms OnAddFriendByNameComplete_Parms;
	OnAddFriendByNameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddFriendByName
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 FriendName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemMcts::AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message )
{
	static UFunction* pFnAddFriendByName = NULL;

	if ( ! pFnAddFriendByName )
		pFnAddFriendByName = (UFunction*) UObject::GObjObjects()->GetIndex( 122857 );

	UOnlineSubsystemMcts_execAddFriendByName_Parms AddFriendByName_Parms;
	AddFriendByName_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendByName_Parms.FriendName, &FriendName, 0xC );
	memcpy ( &AddFriendByName_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnAddFriendByName, &AddFriendByName_Parms, NULL );

	return AddFriendByName_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddFriend
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NewFriend                      ( CPF_Parm )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemMcts::AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message )
{
	static UFunction* pFnAddFriend = NULL;

	if ( ! pFnAddFriend )
		pFnAddFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 122852 );

	UOnlineSubsystemMcts_execAddFriend_Parms AddFriend_Parms;
	AddFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriend_Parms.NewFriend, &NewFriend, 0x8 );
	memcpy ( &AddFriend_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnAddFriend, &AddFriend_Parms, NULL );

	return AddFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetKeyboardInputResults
// [0x00420000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  bWasCanceled                   ( CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemMcts::GetKeyboardInputResults ( unsigned char* bWasCanceled )
{
	static UFunction* pFnGetKeyboardInputResults = NULL;

	if ( ! pFnGetKeyboardInputResults )
		pFnGetKeyboardInputResults = (UFunction*) UObject::GObjObjects()->GetIndex( 122849 );

	UOnlineSubsystemMcts_execGetKeyboardInputResults_Parms GetKeyboardInputResults_Parms;

	this->ProcessEvent ( pFnGetKeyboardInputResults, &GetKeyboardInputResults_Parms, NULL );

	if ( bWasCanceled )
		*bWasCanceled = GetKeyboardInputResults_Parms.bWasCanceled;

	return GetKeyboardInputResults_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearKeyboardInputDoneDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnClearKeyboardInputDoneDelegate = NULL;

	if ( ! pFnClearKeyboardInputDoneDelegate )
		pFnClearKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122847 );

	UOnlineSubsystemMcts_execClearKeyboardInputDoneDelegate_Parms ClearKeyboardInputDoneDelegate_Parms;
	memcpy ( &ClearKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0xC );

	this->ProcessEvent ( pFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddKeyboardInputDoneDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnAddKeyboardInputDoneDelegate = NULL;

	if ( ! pFnAddKeyboardInputDoneDelegate )
		pFnAddKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122845 );

	UOnlineSubsystemMcts_execAddKeyboardInputDoneDelegate_Parms AddKeyboardInputDoneDelegate_Parms;
	memcpy ( &AddKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0xC );

	this->ProcessEvent ( pFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnKeyboardInputComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemMcts::OnKeyboardInputComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnKeyboardInputComplete = NULL;

	if ( ! pFnOnKeyboardInputComplete )
		pFnOnKeyboardInputComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 122463 );

	UOnlineSubsystemMcts_execOnKeyboardInputComplete_Parms OnKeyboardInputComplete_Parms;
	OnKeyboardInputComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ShowKeyboardUI
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 TitleText                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DescriptionText                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsPassword                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// struct FString                 DefaultText                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            MaxResultLength                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemMcts::ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->GetIndex( 122835 );

	UOnlineSubsystemMcts_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowKeyboardUI_Parms.TitleText, &TitleText, 0xC );
	memcpy ( &ShowKeyboardUI_Parms.DescriptionText, &DescriptionText, 0xC );
	ShowKeyboardUI_Parms.bIsPassword = bIsPassword;
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	memcpy ( &ShowKeyboardUI_Parms.DefaultText, &DefaultText, 0xC );
	ShowKeyboardUI_Parms.MaxResultLength = MaxResultLength;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.SetOnlineStatus
// [0x00024000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 StatusString                   ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  PlayerActive                   ( CPF_OptionalParm | CPF_Parm )

void UOnlineSubsystemMcts::SetOnlineStatus ( unsigned char LocalUserNum, struct FString StatusString, unsigned long PlayerActive )
{
	static UFunction* pFnSetOnlineStatus = NULL;

	if ( ! pFnSetOnlineStatus )
		pFnSetOnlineStatus = (UFunction*) UObject::GObjObjects()->GetIndex( 122831 );

	UOnlineSubsystemMcts_execSetOnlineStatus_Parms SetOnlineStatus_Parms;
	SetOnlineStatus_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SetOnlineStatus_Parms.StatusString, &StatusString, 0xC );
	SetOnlineStatus_Parms.PlayerActive = PlayerActive;

	this->ProcessEvent ( pFnSetOnlineStatus, &SetOnlineStatus_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetFriendsList
// [0x00424000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FOnlineFriend > Friends                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemMcts::GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends )
{
	static UFunction* pFnGetFriendsList = NULL;

	if ( ! pFnGetFriendsList )
		pFnGetFriendsList = (UFunction*) UObject::GObjObjects()->GetIndex( 122824 );

	UOnlineSubsystemMcts_execGetFriendsList_Parms GetFriendsList_Parms;
	GetFriendsList_Parms.LocalUserNum = LocalUserNum;
	GetFriendsList_Parms.Count = Count;
	GetFriendsList_Parms.StartingAt = StartingAt;

	this->ProcessEvent ( pFnGetFriendsList, &GetFriendsList_Parms, NULL );

	if ( Friends )
		memcpy ( Friends, &GetFriendsList_Parms.Friends, 0xC );

	return GetFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearReadFriendsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnClearReadFriendsCompleteDelegate = NULL;

	if ( ! pFnClearReadFriendsCompleteDelegate )
		pFnClearReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122821 );

	UOnlineSubsystemMcts_execClearReadFriendsCompleteDelegate_Parms ClearReadFriendsCompleteDelegate_Parms;
	ClearReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddReadFriendsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnAddReadFriendsCompleteDelegate = NULL;

	if ( ! pFnAddReadFriendsCompleteDelegate )
		pFnAddReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122818 );

	UOnlineSubsystemMcts_execAddReadFriendsCompleteDelegate_Parms AddReadFriendsCompleteDelegate_Parms;
	AddReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnReadFriendsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemMcts::OnReadFriendsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadFriendsComplete = NULL;

	if ( ! pFnOnReadFriendsComplete )
		pFnOnReadFriendsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 122494 );

	UOnlineSubsystemMcts_execOnReadFriendsComplete_Parms OnReadFriendsComplete_Parms;
	OnReadFriendsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadFriendsComplete, &OnReadFriendsComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ReadFriendsList
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemMcts::ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt )
{
	static UFunction* pFnReadFriendsList = NULL;

	if ( ! pFnReadFriendsList )
		pFnReadFriendsList = (UFunction*) UObject::GObjObjects()->GetIndex( 122812 );

	UOnlineSubsystemMcts_execReadFriendsList_Parms ReadFriendsList_Parms;
	ReadFriendsList_Parms.LocalUserNum = LocalUserNum;
	ReadFriendsList_Parms.Count = Count;
	ReadFriendsList_Parms.StartingAt = StartingAt;

	this->ProcessEvent ( pFnReadFriendsList, &ReadFriendsList_Parms, NULL );

	return ReadFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearFriendsChangeDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnClearFriendsChangeDelegate = NULL;

	if ( ! pFnClearFriendsChangeDelegate )
		pFnClearFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122809 );

	UOnlineSubsystemMcts_execClearFriendsChangeDelegate_Parms ClearFriendsChangeDelegate_Parms;
	ClearFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddFriendsChangeDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnAddFriendsChangeDelegate = NULL;

	if ( ! pFnAddFriendsChangeDelegate )
		pFnAddFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122806 );

	UOnlineSubsystemMcts_execAddFriendsChangeDelegate_Parms AddFriendsChangeDelegate_Parms;
	AddFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnFriendsChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemMcts::OnFriendsChange ( )
{
	static UFunction* pFnOnFriendsChange = NULL;

	if ( ! pFnOnFriendsChange )
		pFnOnFriendsChange = (UFunction*) UObject::GObjObjects()->GetIndex( 122496 );

	UOnlineSubsystemMcts_execOnFriendsChange_Parms OnFriendsChange_Parms;

	this->ProcessEvent ( pFnOnFriendsChange, &OnFriendsChange_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearWritePlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearWritePlayerStorageCompleteDelegate )
		pFnClearWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122803 );

	UOnlineSubsystemMcts_execClearWritePlayerStorageCompleteDelegate_Parms ClearWritePlayerStorageCompleteDelegate_Parms;
	ClearWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddWritePlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddWritePlayerStorageCompleteDelegate )
		pFnAddWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122800 );

	UOnlineSubsystemMcts_execAddWritePlayerStorageCompleteDelegate_Parms AddWritePlayerStorageCompleteDelegate_Parms;
	AddWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnWritePlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemMcts::OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWritePlayerStorageComplete = NULL;

	if ( ! pFnOnWritePlayerStorageComplete )
		pFnOnWritePlayerStorageComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 122498 );

	UOnlineSubsystemMcts_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;
	OnWritePlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnWritePlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.WritePlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemMcts::WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnWritePlayerStorage = NULL;

	if ( ! pFnWritePlayerStorage )
		pFnWritePlayerStorage = (UFunction*) UObject::GObjObjects()->GetIndex( 122793 );

	UOnlineSubsystemMcts_execWritePlayerStorage_Parms WritePlayerStorage_Parms;
	WritePlayerStorage_Parms.LocalUserNum = LocalUserNum;
	WritePlayerStorage_Parms.PlayerStorage = PlayerStorage;
	WritePlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent ( pFnWritePlayerStorage, &WritePlayerStorage_Parms, NULL );

	return WritePlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetPlayerStorage
// [0x00020000] 
// Parameters infos:
// class UOnlinePlayerStorage*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlinePlayerStorage* UOnlineSubsystemMcts::GetPlayerStorage ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerStorage = NULL;

	if ( ! pFnGetPlayerStorage )
		pFnGetPlayerStorage = (UFunction*) UObject::GObjObjects()->GetIndex( 122790 );

	UOnlineSubsystemMcts_execGetPlayerStorage_Parms GetPlayerStorage_Parms;
	GetPlayerStorage_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerStorage, &GetPlayerStorage_Parms, NULL );

	return GetPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageForNetIdCompleteDelegate )
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122787 );

	UOnlineSubsystemMcts_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms ClearReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageForNetIdCompleteDelegate )
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122784 );

	UOnlineSubsystemMcts_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms AddReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemMcts::OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageForNetIdComplete = NULL;

	if ( ! pFnOnReadPlayerStorageForNetIdComplete )
		pFnOnReadPlayerStorageForNetIdComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 122500 );

	UOnlineSubsystemMcts_execOnReadPlayerStorageForNetIdComplete_Parms OnReadPlayerStorageForNetIdComplete_Parms;
	memcpy ( &OnReadPlayerStorageForNetIdComplete_Parms.NetId, &NetId, 0x8 );
	OnReadPlayerStorageForNetIdComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ReadPlayerStorageForNetId
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineSubsystemMcts::ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage )
{
	static UFunction* pFnReadPlayerStorageForNetId = NULL;

	if ( ! pFnReadPlayerStorageForNetId )
		pFnReadPlayerStorageForNetId = (UFunction*) UObject::GObjObjects()->GetIndex( 122777 );

	UOnlineSubsystemMcts_execReadPlayerStorageForNetId_Parms ReadPlayerStorageForNetId_Parms;
	ReadPlayerStorageForNetId_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ReadPlayerStorageForNetId_Parms.NetId, &NetId, 0x8 );
	ReadPlayerStorageForNetId_Parms.PlayerStorage = PlayerStorage;

	this->ProcessEvent ( pFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Parms, NULL );

	return ReadPlayerStorageForNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearReadPlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageCompleteDelegate )
		pFnClearReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122774 );

	UOnlineSubsystemMcts_execClearReadPlayerStorageCompleteDelegate_Parms ClearReadPlayerStorageCompleteDelegate_Parms;
	ClearReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddReadPlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageCompleteDelegate )
		pFnAddReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122771 );

	UOnlineSubsystemMcts_execAddReadPlayerStorageCompleteDelegate_Parms AddReadPlayerStorageCompleteDelegate_Parms;
	AddReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnReadPlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemMcts::OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageComplete = NULL;

	if ( ! pFnOnReadPlayerStorageComplete )
		pFnOnReadPlayerStorageComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 122502 );

	UOnlineSubsystemMcts_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;
	OnReadPlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadPlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ReadPlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemMcts::ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnReadPlayerStorage = NULL;

	if ( ! pFnReadPlayerStorage )
		pFnReadPlayerStorage = (UFunction*) UObject::GObjObjects()->GetIndex( 122764 );

	UOnlineSubsystemMcts_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;
	ReadPlayerStorage_Parms.LocalUserNum = LocalUserNum;
	ReadPlayerStorage_Parms.PlayerStorage = PlayerStorage;
	ReadPlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent ( pFnReadPlayerStorage, &ReadPlayerStorage_Parms, NULL );

	return ReadPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearWriteProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearWriteProfileSettingsCompleteDelegate )
		pFnClearWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122761 );

	UOnlineSubsystemMcts_execClearWriteProfileSettingsCompleteDelegate_Parms ClearWriteProfileSettingsCompleteDelegate_Parms;
	ClearWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddWriteProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddWriteProfileSettingsCompleteDelegate )
		pFnAddWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122758 );

	UOnlineSubsystemMcts_execAddWriteProfileSettingsCompleteDelegate_Parms AddWriteProfileSettingsCompleteDelegate_Parms;
	AddWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnWriteProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemMcts::OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWriteProfileSettingsComplete = NULL;

	if ( ! pFnOnWriteProfileSettingsComplete )
		pFnOnWriteProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 122504 );

	UOnlineSubsystemMcts_execOnWriteProfileSettingsComplete_Parms OnWriteProfileSettingsComplete_Parms;
	OnWriteProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnWriteProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearReadProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadProfileSettingsCompleteDelegate )
		pFnClearReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122753 );

	UOnlineSubsystemMcts_execClearReadProfileSettingsCompleteDelegate_Parms ClearReadProfileSettingsCompleteDelegate_Parms;
	ClearReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddReadProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadProfileSettingsCompleteDelegate )
		pFnAddReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122750 );

	UOnlineSubsystemMcts_execAddReadProfileSettingsCompleteDelegate_Parms AddReadProfileSettingsCompleteDelegate_Parms;
	AddReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnReadProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemMcts::OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadProfileSettingsComplete = NULL;

	if ( ! pFnOnReadProfileSettingsComplete )
		pFnOnReadProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 122506 );

	UOnlineSubsystemMcts_execOnReadProfileSettingsComplete_Parms OnReadProfileSettingsComplete_Parms;
	OnReadProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearMutingChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnClearMutingChangeDelegate = NULL;

	if ( ! pFnClearMutingChangeDelegate )
		pFnClearMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122746 );

	UOnlineSubsystemMcts_execClearMutingChangeDelegate_Parms ClearMutingChangeDelegate_Parms;
	memcpy ( &ClearMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0xC );

	this->ProcessEvent ( pFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddMutingChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnAddMutingChangeDelegate = NULL;

	if ( ! pFnAddMutingChangeDelegate )
		pFnAddMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122744 );

	UOnlineSubsystemMcts_execAddMutingChangeDelegate_Parms AddMutingChangeDelegate_Parms;
	memcpy ( &AddMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0xC );

	this->ProcessEvent ( pFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnMutingChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemMcts::OnMutingChange ( )
{
	static UFunction* pFnOnMutingChange = NULL;

	if ( ! pFnOnMutingChange )
		pFnOnMutingChange = (UFunction*) UObject::GObjObjects()->GetIndex( 122508 );

	UOnlineSubsystemMcts_execOnMutingChange_Parms OnMutingChange_Parms;

	this->ProcessEvent ( pFnOnMutingChange, &OnMutingChange_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetProfileSettings
// [0x00020000] 
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemMcts::GetProfileSettings ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetProfileSettings = NULL;

	if ( ! pFnGetProfileSettings )
		pFnGetProfileSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 122741 );

	UOnlineSubsystemMcts_execGetProfileSettings_Parms GetProfileSettings_Parms;
	GetProfileSettings_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetProfileSettings, &GetProfileSettings_Parms, NULL );

	return GetProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.WriteProfileSettings
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemMcts::WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnWriteProfileSettings = NULL;

	if ( ! pFnWriteProfileSettings )
		pFnWriteProfileSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 122737 );

	UOnlineSubsystemMcts_execWriteProfileSettings_Parms WriteProfileSettings_Parms;
	WriteProfileSettings_Parms.LocalUserNum = LocalUserNum;
	WriteProfileSettings_Parms.ProfileSettings = ProfileSettings;

	this->ProcessEvent ( pFnWriteProfileSettings, &WriteProfileSettings_Parms, NULL );

	return WriteProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ReadProfileSettings
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemMcts::ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnReadProfileSettings = NULL;

	if ( ! pFnReadProfileSettings )
		pFnReadProfileSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 122733 );

	UOnlineSubsystemMcts_execReadProfileSettings_Parms ReadProfileSettings_Parms;
	ReadProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadProfileSettings_Parms.ProfileSettings = ProfileSettings;

	this->ProcessEvent ( pFnReadProfileSettings, &ReadProfileSettings_Parms, NULL );

	return ReadProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnClearLoginCancelledDelegate = NULL;

	if ( ! pFnClearLoginCancelledDelegate )
		pFnClearLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122731 );

	UOnlineSubsystemMcts_execClearLoginCancelledDelegate_Parms ClearLoginCancelledDelegate_Parms;
	memcpy ( &ClearLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnAddLoginCancelledDelegate = NULL;

	if ( ! pFnAddLoginCancelledDelegate )
		pFnAddLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122729 );

	UOnlineSubsystemMcts_execAddLoginCancelledDelegate_Parms AddLoginCancelledDelegate_Parms;
	memcpy ( &AddLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnLoginCancelled
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemMcts::OnLoginCancelled ( )
{
	static UFunction* pFnOnLoginCancelled = NULL;

	if ( ! pFnOnLoginCancelled )
		pFnOnLoginCancelled = (UFunction*) UObject::GObjObjects()->GetIndex( 122510 );

	UOnlineSubsystemMcts_execOnLoginCancelled_Parms OnLoginCancelled_Parms;

	this->ProcessEvent ( pFnOnLoginCancelled, &OnLoginCancelled_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemMcts::ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnClearLoginStatusChangeDelegate = NULL;

	if ( ! pFnClearLoginStatusChangeDelegate )
		pFnClearLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122726 );

	UOnlineSubsystemMcts_execClearLoginStatusChangeDelegate_Parms ClearLoginStatusChangeDelegate_Parms;
	memcpy ( &ClearLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0xC );
	ClearLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemMcts::AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnAddLoginStatusChangeDelegate = NULL;

	if ( ! pFnAddLoginStatusChangeDelegate )
		pFnAddLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122723 );

	UOnlineSubsystemMcts_execAddLoginStatusChangeDelegate_Parms AddLoginStatusChangeDelegate_Parms;
	memcpy ( &AddLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0xC );
	AddLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnLoginStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  NewStatus                      ( CPF_Parm )
// struct FUniqueNetId            NewId                          ( CPF_Parm )

void UOnlineSubsystemMcts::OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId )
{
	static UFunction* pFnOnLoginStatusChange = NULL;

	if ( ! pFnOnLoginStatusChange )
		pFnOnLoginStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 122512 );

	UOnlineSubsystemMcts_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;
	OnLoginStatusChange_Parms.NewStatus = NewStatus;
	memcpy ( &OnLoginStatusChange_Parms.NewId, &NewId, 0x8 );

	this->ProcessEvent ( pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanCommunicate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemMcts::CanCommunicate ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->GetIndex( 122718 );

	UOnlineSubsystemMcts_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.LocalUserNum = LocalUserNum;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	pFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.IsMuted
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemMcts::IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsMuted = NULL;

	if ( ! pFnIsMuted )
		pFnIsMuted = (UFunction*) UObject::GObjObjects()->GetIndex( 122714 );

	UOnlineSubsystemMcts_execIsMuted_Parms IsMuted_Parms;
	IsMuted_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsMuted_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnIsMuted, &IsMuted_Parms, NULL );

	return IsMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.NotifyTeamChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FQWord                  PlayerUID                      ( CPF_Parm )
// unsigned char                  TeamID                         ( CPF_Parm )

void UOnlineSubsystemMcts::NotifyTeamChange ( struct FQWord PlayerUID, unsigned char TeamID )
{
	static UFunction* pFnNotifyTeamChange = NULL;

	if ( ! pFnNotifyTeamChange )
		pFnNotifyTeamChange = (UFunction*) UObject::GObjObjects()->GetIndex( 122711 );

	UOnlineSubsystemMcts_execNotifyTeamChange_Parms NotifyTeamChange_Parms;
	memcpy ( &NotifyTeamChange_Parms.PlayerUID, &PlayerUID, 0x8 );
	NotifyTeamChange_Parms.TeamID = TeamID;

	pFnNotifyTeamChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyTeamChange, &NotifyTeamChange_Parms, NULL );

	pFnNotifyTeamChange->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.SendPrivateChatMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::SendPrivateChatMessage ( struct FString PlayerName, struct FString Message )
{
	static UFunction* pFnSendPrivateChatMessage = NULL;

	if ( ! pFnSendPrivateChatMessage )
		pFnSendPrivateChatMessage = (UFunction*) UObject::GObjObjects()->GetIndex( 122708 );

	UOnlineSubsystemMcts_execSendPrivateChatMessage_Parms SendPrivateChatMessage_Parms;
	memcpy ( &SendPrivateChatMessage_Parms.PlayerName, &PlayerName, 0xC );
	memcpy ( &SendPrivateChatMessage_Parms.Message, &Message, 0xC );

	pFnSendPrivateChatMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendPrivateChatMessage, &SendPrivateChatMessage_Parms, NULL );

	pFnSendPrivateChatMessage->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.SendChatMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Channel                        ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::SendChatMessage ( int Channel, struct FString Message )
{
	static UFunction* pFnSendChatMessage = NULL;

	if ( ! pFnSendChatMessage )
		pFnSendChatMessage = (UFunction*) UObject::GObjObjects()->GetIndex( 122705 );

	UOnlineSubsystemMcts_execSendChatMessage_Parms SendChatMessage_Parms;
	SendChatMessage_Parms.Channel = Channel;
	memcpy ( &SendChatMessage_Parms.Message, &Message, 0xC );

	pFnSendChatMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendChatMessage, &SendChatMessage_Parms, NULL );

	pFnSendChatMessage->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearChatMessageDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ChatDelegate                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearChatMessageDelegate ( struct FScriptDelegate ChatDelegate )
{
	static UFunction* pFnClearChatMessageDelegate = NULL;

	if ( ! pFnClearChatMessageDelegate )
		pFnClearChatMessageDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122702 );

	UOnlineSubsystemMcts_execClearChatMessageDelegate_Parms ClearChatMessageDelegate_Parms;
	memcpy ( &ClearChatMessageDelegate_Parms.ChatDelegate, &ChatDelegate, 0xC );

	this->ProcessEvent ( pFnClearChatMessageDelegate, &ClearChatMessageDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddChatMessageDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ChatDelegate                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddChatMessageDelegate ( struct FScriptDelegate ChatDelegate )
{
	static UFunction* pFnAddChatMessageDelegate = NULL;

	if ( ! pFnAddChatMessageDelegate )
		pFnAddChatMessageDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122700 );

	UOnlineSubsystemMcts_execAddChatMessageDelegate_Parms AddChatMessageDelegate_Parms;
	memcpy ( &AddChatMessageDelegate_Parms.ChatDelegate, &ChatDelegate, 0xC );

	this->ProcessEvent ( pFnAddChatMessageDelegate, &AddChatMessageDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnChatMessage
// [0x00120000] 
// Parameters infos:
// int                            Channel                        ( CPF_Parm )
// struct FString                 Sender                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::OnChatMessage ( int Channel, struct FString Sender, struct FString Message )
{
	static UFunction* pFnOnChatMessage = NULL;

	if ( ! pFnOnChatMessage )
		pFnOnChatMessage = (UFunction*) UObject::GObjObjects()->GetIndex( 122460 );

	UOnlineSubsystemMcts_execOnChatMessage_Parms OnChatMessage_Parms;
	OnChatMessage_Parms.Channel = Channel;
	memcpy ( &OnChatMessage_Parms.Sender, &Sender, 0xC );
	memcpy ( &OnChatMessage_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnChatMessage, &OnChatMessage_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnClearStorageDeviceChangeDelegate = NULL;

	if ( ! pFnClearStorageDeviceChangeDelegate )
		pFnClearStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122695 );

	UOnlineSubsystemMcts_execClearStorageDeviceChangeDelegate_Parms ClearStorageDeviceChangeDelegate_Parms;
	memcpy ( &ClearStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0xC );

	this->ProcessEvent ( pFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnAddStorageDeviceChangeDelegate = NULL;

	if ( ! pFnAddStorageDeviceChangeDelegate )
		pFnAddStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122693 );

	UOnlineSubsystemMcts_execAddStorageDeviceChangeDelegate_Parms AddStorageDeviceChangeDelegate_Parms;
	memcpy ( &AddStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0xC );

	this->ProcessEvent ( pFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnStorageDeviceChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemMcts::OnStorageDeviceChange ( )
{
	static UFunction* pFnOnStorageDeviceChange = NULL;

	if ( ! pFnOnStorageDeviceChange )
		pFnOnStorageDeviceChange = (UFunction*) UObject::GObjObjects()->GetIndex( 122515 );

	UOnlineSubsystemMcts_execOnStorageDeviceChange_Parms OnStorageDeviceChange_Parms;

	this->ProcessEvent ( pFnOnStorageDeviceChange, &OnStorageDeviceChange_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetNATType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemMcts::GetNATType ( )
{
	static UFunction* pFnGetNATType = NULL;

	if ( ! pFnGetNATType )
		pFnGetNATType = (UFunction*) UObject::GObjObjects()->GetIndex( 122691 );

	UOnlineSubsystemMcts_execGetNATType_Parms GetNATType_Parms;

	pFnGetNATType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNATType, &GetNATType_Parms, NULL );

	pFnGetNATType->FunctionFlags |= 0x400;

	return GetNATType_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnClearConnectionStatusChangeDelegate = NULL;

	if ( ! pFnClearConnectionStatusChangeDelegate )
		pFnClearConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122688 );

	UOnlineSubsystemMcts_execClearConnectionStatusChangeDelegate_Parms ClearConnectionStatusChangeDelegate_Parms;
	memcpy ( &ClearConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0xC );

	this->ProcessEvent ( pFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnAddConnectionStatusChangeDelegate = NULL;

	if ( ! pFnAddConnectionStatusChangeDelegate )
		pFnAddConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122686 );

	UOnlineSubsystemMcts_execAddConnectionStatusChangeDelegate_Parms AddConnectionStatusChangeDelegate_Parms;
	memcpy ( &AddConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0xC );

	this->ProcessEvent ( pFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnConnectionStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  ConnectionStatus               ( CPF_Parm )

void UOnlineSubsystemMcts::OnConnectionStatusChange ( unsigned char ConnectionStatus )
{
	static UFunction* pFnOnConnectionStatusChange = NULL;

	if ( ! pFnOnConnectionStatusChange )
		pFnOnConnectionStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 122445 );

	UOnlineSubsystemMcts_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;
	OnConnectionStatusChange_Parms.ConnectionStatus = ConnectionStatus;

	this->ProcessEvent ( pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.IsControllerConnected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )

bool UOnlineSubsystemMcts::IsControllerConnected ( int ControllerId )
{
	static UFunction* pFnIsControllerConnected = NULL;

	if ( ! pFnIsControllerConnected )
		pFnIsControllerConnected = (UFunction*) UObject::GObjObjects()->GetIndex( 122682 );

	UOnlineSubsystemMcts_execIsControllerConnected_Parms IsControllerConnected_Parms;
	IsControllerConnected_Parms.ControllerId = ControllerId;

	pFnIsControllerConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsControllerConnected, &IsControllerConnected_Parms, NULL );

	pFnIsControllerConnected->FunctionFlags |= 0x400;

	return IsControllerConnected_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearControllerChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnClearControllerChangeDelegate = NULL;

	if ( ! pFnClearControllerChangeDelegate )
		pFnClearControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122680 );

	UOnlineSubsystemMcts_execClearControllerChangeDelegate_Parms ClearControllerChangeDelegate_Parms;
	memcpy ( &ClearControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0xC );

	this->ProcessEvent ( pFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddControllerChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnAddControllerChangeDelegate = NULL;

	if ( ! pFnAddControllerChangeDelegate )
		pFnAddControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122678 );

	UOnlineSubsystemMcts_execAddControllerChangeDelegate_Parms AddControllerChangeDelegate_Parms;
	memcpy ( &AddControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0xC );

	this->ProcessEvent ( pFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnControllerChange
// [0x00120000] 
// Parameters infos:
// int                            ControllerId                   ( CPF_Parm )
// unsigned long                  bIsConnected                   ( CPF_Parm )
// unsigned long                  bPauseGame                     ( CPF_Parm )

void UOnlineSubsystemMcts::OnControllerChange ( int ControllerId, unsigned long bIsConnected, unsigned long bPauseGame )
{
	static UFunction* pFnOnControllerChange = NULL;

	if ( ! pFnOnControllerChange )
		pFnOnControllerChange = (UFunction*) UObject::GObjObjects()->GetIndex( 122518 );

	UOnlineSubsystemMcts_execOnControllerChange_Parms OnControllerChange_Parms;
	OnControllerChange_Parms.ControllerId = ControllerId;
	OnControllerChange_Parms.bIsConnected = bIsConnected;
	OnControllerChange_Parms.bPauseGame = bPauseGame;

	this->ProcessEvent ( pFnOnControllerChange, &OnControllerChange_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetNetworkNotificationPosition
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemMcts::GetNetworkNotificationPosition ( )
{
	static UFunction* pFnGetNetworkNotificationPosition = NULL;

	if ( ! pFnGetNetworkNotificationPosition )
		pFnGetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->GetIndex( 122673 );

	UOnlineSubsystemMcts_execGetNetworkNotificationPosition_Parms GetNetworkNotificationPosition_Parms;

	this->ProcessEvent ( pFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Parms, NULL );

	return GetNetworkNotificationPosition_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnClearExternalUIChangeDelegate = NULL;

	if ( ! pFnClearExternalUIChangeDelegate )
		pFnClearExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122671 );

	UOnlineSubsystemMcts_execClearExternalUIChangeDelegate_Parms ClearExternalUIChangeDelegate_Parms;
	memcpy ( &ClearExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0xC );

	this->ProcessEvent ( pFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnAddExternalUIChangeDelegate = NULL;

	if ( ! pFnAddExternalUIChangeDelegate )
		pFnAddExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122669 );

	UOnlineSubsystemMcts_execAddExternalUIChangeDelegate_Parms AddExternalUIChangeDelegate_Parms;
	memcpy ( &AddExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0xC );

	this->ProcessEvent ( pFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnExternalUIChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsOpening                     ( CPF_Parm )

void UOnlineSubsystemMcts::OnExternalUIChange ( unsigned long bIsOpening )
{
	static UFunction* pFnOnExternalUIChange = NULL;

	if ( ! pFnOnExternalUIChange )
		pFnOnExternalUIChange = (UFunction*) UObject::GObjObjects()->GetIndex( 122520 );

	UOnlineSubsystemMcts_execOnExternalUIChange_Parms OnExternalUIChange_Parms;
	OnExternalUIChange_Parms.bIsOpening = bIsOpening;

	this->ProcessEvent ( pFnOnExternalUIChange, &OnExternalUIChange_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearLinkStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnClearLinkStatusChangeDelegate = NULL;

	if ( ! pFnClearLinkStatusChangeDelegate )
		pFnClearLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122665 );

	UOnlineSubsystemMcts_execClearLinkStatusChangeDelegate_Parms ClearLinkStatusChangeDelegate_Parms;
	memcpy ( &ClearLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0xC );

	this->ProcessEvent ( pFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddLinkStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnAddLinkStatusChangeDelegate = NULL;

	if ( ! pFnAddLinkStatusChangeDelegate )
		pFnAddLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122663 );

	UOnlineSubsystemMcts_execAddLinkStatusChangeDelegate_Parms AddLinkStatusChangeDelegate_Parms;
	memcpy ( &AddLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0xC );

	this->ProcessEvent ( pFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnLinkStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemMcts::OnLinkStatusChange ( unsigned long bIsConnected )
{
	static UFunction* pFnOnLinkStatusChange = NULL;

	if ( ! pFnOnLinkStatusChange )
		pFnOnLinkStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 122457 );

	UOnlineSubsystemMcts_execOnLinkStatusChange_Parms OnLinkStatusChange_Parms;
	OnLinkStatusChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent ( pFnOnLinkStatusChange, &OnLinkStatusChange_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.HasLinkConnection
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemMcts::HasLinkConnection ( )
{
	static UFunction* pFnHasLinkConnection = NULL;

	if ( ! pFnHasLinkConnection )
		pFnHasLinkConnection = (UFunction*) UObject::GObjObjects()->GetIndex( 122660 );

	UOnlineSubsystemMcts_execHasLinkConnection_Parms HasLinkConnection_Parms;

	pFnHasLinkConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasLinkConnection, &HasLinkConnection_Parms, NULL );

	pFnHasLinkConnection->FunctionFlags |= 0x400;

	return HasLinkConnection_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetPlayerUniqueNetIdFromIndex
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            UserIndex                      ( CPF_Parm )

struct FUniqueNetId UOnlineSubsystemMcts::eventGetPlayerUniqueNetIdFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerUniqueNetIdFromIndex = NULL;

	if ( ! pFnGetPlayerUniqueNetIdFromIndex )
		pFnGetPlayerUniqueNetIdFromIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 122656 );

	UOnlineSubsystemMcts_eventGetPlayerUniqueNetIdFromIndex_Parms GetPlayerUniqueNetIdFromIndex_Parms;
	GetPlayerUniqueNetIdFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerUniqueNetIdFromIndex, &GetPlayerUniqueNetIdFromIndex_Parms, NULL );

	return GetPlayerUniqueNetIdFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            UserIndex                      ( CPF_Parm )

struct FString UOnlineSubsystemMcts::eventGetPlayerNicknameFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if ( ! pFnGetPlayerNicknameFromIndex )
		pFnGetPlayerNicknameFromIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 122653 );

	UOnlineSubsystemMcts_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.NeedEULA
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemMcts::NeedEULA ( )
{
	static UFunction* pFnNeedEULA = NULL;

	if ( ! pFnNeedEULA )
		pFnNeedEULA = (UFunction*) UObject::GObjObjects()->GetIndex( 122651 );

	UOnlineSubsystemMcts_execNeedEULA_Parms NeedEULA_Parms;

	pFnNeedEULA->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNeedEULA, &NeedEULA_Parms, NULL );

	pFnNeedEULA->FunctionFlags |= 0x400;

	return NeedEULA_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearLoginChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnClearLoginChangeDelegate = NULL;

	if ( ! pFnClearLoginChangeDelegate )
		pFnClearLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122648 );

	UOnlineSubsystemMcts_execClearLoginChangeDelegate_Parms ClearLoginChangeDelegate_Parms;
	memcpy ( &ClearLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddLoginChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnAddLoginChangeDelegate = NULL;

	if ( ! pFnAddLoginChangeDelegate )
		pFnAddLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122646 );

	UOnlineSubsystemMcts_execAddLoginChangeDelegate_Parms AddLoginChangeDelegate_Parms;
	memcpy ( &AddLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetPlayerMctsName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemMcts::GetPlayerMctsName ( )
{
	static UFunction* pFnGetPlayerMctsName = NULL;

	if ( ! pFnGetPlayerMctsName )
		pFnGetPlayerMctsName = (UFunction*) UObject::GObjObjects()->GetIndex( 122644 );

	UOnlineSubsystemMcts_execGetPlayerMctsName_Parms GetPlayerMctsName_Parms;

	pFnGetPlayerMctsName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPlayerMctsName, &GetPlayerMctsName_Parms, NULL );

	pFnGetPlayerMctsName->FunctionFlags |= 0x400;

	return GetPlayerMctsName_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AreAnyFriends
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FFriendsQuery > Query                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemMcts::AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query )
{
	static UFunction* pFnAreAnyFriends = NULL;

	if ( ! pFnAreAnyFriends )
		pFnAreAnyFriends = (UFunction*) UObject::GObjObjects()->GetIndex( 122639 );

	UOnlineSubsystemMcts_execAreAnyFriends_Parms AreAnyFriends_Parms;
	AreAnyFriends_Parms.LocalUserNum = LocalUserNum;

	pFnAreAnyFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAreAnyFriends, &AreAnyFriends_Parms, NULL );

	pFnAreAnyFriends->FunctionFlags |= 0x400;

	if ( Query )
		memcpy ( Query, &AreAnyFriends_Parms.Query, 0xC );

	return AreAnyFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.IsFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemMcts::IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsFriend = NULL;

	if ( ! pFnIsFriend )
		pFnIsFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 122635 );

	UOnlineSubsystemMcts_execIsFriend_Parms IsFriend_Parms;
	IsFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsFriend_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsFriend, &IsFriend_Parms, NULL );

	pFnIsFriend->FunctionFlags |= 0x400;

	return IsFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanShowPresenceInformation
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanShowPresenceInformation ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->GetIndex( 122629 );

	UOnlineSubsystemMcts_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.LocalUserNum = LocalUserNum;
	CanShowPresenceInformation_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShowPresenceInformation_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShowPresenceInformation_Parms.PrivilegeLevelHint;

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanViewPlayerProfiles
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanViewPlayerProfiles ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->GetIndex( 122623 );

	UOnlineSubsystemMcts_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.LocalUserNum = LocalUserNum;
	CanViewPlayerProfiles_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanViewPlayerProfiles_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanViewPlayerProfiles_Parms.PrivilegeLevelHint;

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanPurchaseContent
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanPurchaseContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->GetIndex( 122617 );

	UOnlineSubsystemMcts_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.LocalUserNum = LocalUserNum;
	CanPurchaseContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanPurchaseContent_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanPurchaseContent_Parms.PrivilegeLevelHint;

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanDownloadUserContent
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemMcts::CanDownloadUserContent ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if ( ! pFnCanDownloadUserContent )
		pFnCanDownloadUserContent = (UFunction*) UObject::GObjObjects()->GetIndex( 122613 );

	UOnlineSubsystemMcts_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL );

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CanPlayOnline
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::CanPlayOnline ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->GetIndex( 122607 );

	UOnlineSubsystemMcts_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.LocalUserNum = LocalUserNum;
	CanPlayOnline_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanPlayOnline_Parms.Reason, &Reason, 0xC );

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	pFnCanPlayOnline->FunctionFlags |= 0x400;

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanPlayOnline_Parms.PrivilegeLevelHint;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetPlayerNickname
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

struct FString UOnlineSubsystemMcts::GetPlayerNickname ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerNickname = NULL;

	if ( ! pFnGetPlayerNickname )
		pFnGetPlayerNickname = (UFunction*) UObject::GObjObjects()->GetIndex( 122604 );

	UOnlineSubsystemMcts_execGetPlayerNickname_Parms GetPlayerNickname_Parms;
	GetPlayerNickname_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerNickname, &GetPlayerNickname_Parms, NULL );

	return GetPlayerNickname_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.CacheLoggedInGamepad
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemMcts::CacheLoggedInGamepad ( )
{
	static UFunction* pFnCacheLoggedInGamepad = NULL;

	if ( ! pFnCacheLoggedInGamepad )
		pFnCacheLoggedInGamepad = (UFunction*) UObject::GObjObjects()->GetIndex( 122603 );

	UOnlineSubsystemMcts_execCacheLoggedInGamepad_Parms CacheLoggedInGamepad_Parms;

	this->ProcessEvent ( pFnCacheLoggedInGamepad, &CacheLoggedInGamepad_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetControllerIdFromNetId
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// int                            ControllerId                   ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::GetControllerIdFromNetId ( struct FUniqueNetId PlayerID, int* ControllerId )
{
	static UFunction* pFnGetControllerIdFromNetId = NULL;

	if ( ! pFnGetControllerIdFromNetId )
		pFnGetControllerIdFromNetId = (UFunction*) UObject::GObjObjects()->GetIndex( 122599 );

	UOnlineSubsystemMcts_execGetControllerIdFromNetId_Parms GetControllerIdFromNetId_Parms;
	memcpy ( &GetControllerIdFromNetId_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnGetControllerIdFromNetId, &GetControllerIdFromNetId_Parms, NULL );

	if ( ControllerId )
		*ControllerId = GetControllerIdFromNetId_Parms.ControllerId;

	return GetControllerIdFromNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetUniquePlayerId
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemMcts::GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID )
{
	static UFunction* pFnGetUniquePlayerId = NULL;

	if ( ! pFnGetUniquePlayerId )
		pFnGetUniquePlayerId = (UFunction*) UObject::GObjObjects()->GetIndex( 122595 );

	UOnlineSubsystemMcts_execGetUniquePlayerId_Parms GetUniquePlayerId_Parms;
	GetUniquePlayerId_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetUniquePlayerId, &GetUniquePlayerId_Parms, NULL );

	if ( PlayerID )
		memcpy ( PlayerID, &GetUniquePlayerId_Parms.PlayerID, 0x8 );

	return GetUniquePlayerId_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.IsLocalLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemMcts::IsLocalLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalLogin = NULL;

	if ( ! pFnIsLocalLogin )
		pFnIsLocalLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 122592 );

	UOnlineSubsystemMcts_execIsLocalLogin_Parms IsLocalLogin_Parms;
	IsLocalLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsLocalLogin, &IsLocalLogin_Parms, NULL );

	return IsLocalLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.IsGuestLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemMcts::IsGuestLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsGuestLogin = NULL;

	if ( ! pFnIsGuestLogin )
		pFnIsGuestLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 122589 );

	UOnlineSubsystemMcts_execIsGuestLogin_Parms IsGuestLogin_Parms;
	IsGuestLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsGuestLogin, &IsGuestLogin_Parms, NULL );

	return IsGuestLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemMcts::GetLoginStatus ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->GetIndex( 122586 );

	UOnlineSubsystemMcts_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.LocalUserNum = LocalUserNum;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearLogoutCompletedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnClearLogoutCompletedDelegate = NULL;

	if ( ! pFnClearLogoutCompletedDelegate )
		pFnClearLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122582 );

	UOnlineSubsystemMcts_execClearLogoutCompletedDelegate_Parms ClearLogoutCompletedDelegate_Parms;
	ClearLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0xC );

	this->ProcessEvent ( pFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddLogoutCompletedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnAddLogoutCompletedDelegate = NULL;

	if ( ! pFnAddLogoutCompletedDelegate )
		pFnAddLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122579 );

	UOnlineSubsystemMcts_execAddLogoutCompletedDelegate_Parms AddLogoutCompletedDelegate_Parms;
	AddLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0xC );

	this->ProcessEvent ( pFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnLogoutCompleted
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemMcts::OnLogoutCompleted ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnLogoutCompleted = NULL;

	if ( ! pFnOnLogoutCompleted )
		pFnOnLogoutCompleted = (UFunction*) UObject::GObjObjects()->GetIndex( 122454 );

	UOnlineSubsystemMcts_execOnLogoutCompleted_Parms OnLogoutCompleted_Parms;
	OnLogoutCompleted_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnLogoutCompleted, &OnLogoutCompleted_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.Logout
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemMcts::Logout ( unsigned char LocalUserNum )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->GetIndex( 122575 );

	UOnlineSubsystemMcts_execLogout_Parms Logout_Parms;
	Logout_Parms.LocalUserNum = LocalUserNum;

	pFnLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );

	pFnLogout->FunctionFlags |= 0x400;

	return Logout_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.ClearLoginFailedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginFailedDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate )
{
	static UFunction* pFnClearLoginFailedDelegate = NULL;

	if ( ! pFnClearLoginFailedDelegate )
		pFnClearLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122571 );

	UOnlineSubsystemMcts_execClearLoginFailedDelegate_Parms ClearLoginFailedDelegate_Parms;
	ClearLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLoginFailedDelegate_Parms.LoginFailedDelegate, &LoginFailedDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AddLoginFailedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginFailedDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemMcts::AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate )
{
	static UFunction* pFnAddLoginFailedDelegate = NULL;

	if ( ! pFnAddLoginFailedDelegate )
		pFnAddLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 122568 );

	UOnlineSubsystemMcts_execAddLoginFailedDelegate_Parms AddLoginFailedDelegate_Parms;
	AddLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLoginFailedDelegate_Parms.LoginFailedDelegate, &LoginFailedDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnLoginFailed
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ErrorCode                      ( CPF_Parm )

void UOnlineSubsystemMcts::OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode )
{
	static UFunction* pFnOnLoginFailed = NULL;

	if ( ! pFnOnLoginFailed )
		pFnOnLoginFailed = (UFunction*) UObject::GObjObjects()->GetIndex( 122451 );

	UOnlineSubsystemMcts_execOnLoginFailed_Parms OnLoginFailed_Parms;
	OnLoginFailed_Parms.LocalUserNum = LocalUserNum;
	OnLoginFailed_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnLoginFailed, &OnLoginFailed_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.AutoLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemMcts::AutoLogin ( )
{
	static UFunction* pFnAutoLogin = NULL;

	if ( ! pFnAutoLogin )
		pFnAutoLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 122564 );

	UOnlineSubsystemMcts_execAutoLogin_Parms AutoLogin_Parms;

	pFnAutoLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAutoLogin, &AutoLogin_Parms, NULL );

	pFnAutoLogin->FunctionFlags |= 0x400;

	return AutoLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.RequestNewPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 LoginName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DesiredPlayerName              ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemMcts::RequestNewPlayer ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, struct FString DesiredPlayerName )
{
	static UFunction* pFnRequestNewPlayer = NULL;

	if ( ! pFnRequestNewPlayer )
		pFnRequestNewPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 122558 );

	UOnlineSubsystemMcts_execRequestNewPlayer_Parms RequestNewPlayer_Parms;
	RequestNewPlayer_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &RequestNewPlayer_Parms.LoginName, &LoginName, 0xC );
	memcpy ( &RequestNewPlayer_Parms.Password, &Password, 0xC );
	memcpy ( &RequestNewPlayer_Parms.DesiredPlayerName, &DesiredPlayerName, 0xC );

	pFnRequestNewPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestNewPlayer, &RequestNewPlayer_Parms, NULL );

	pFnRequestNewPlayer->FunctionFlags |= 0x400;

	return RequestNewPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.Login
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 LoginName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWantsLocalOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemMcts::Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 122552 );

	UOnlineSubsystemMcts_execLogin_Parms Login_Parms;
	Login_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &Login_Parms.LoginName, &LoginName, 0xC );
	memcpy ( &Login_Parms.Password, &Password, 0xC );
	Login_Parms.bWantsLocalOnly = bWantsLocalOnly;

	pFnLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );

	pFnLogin->FunctionFlags |= 0x400;

	return Login_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.OnLoginChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemMcts::OnLoginChange ( unsigned char LocalUserNum )
{
	static UFunction* pFnOnLoginChange = NULL;

	if ( ! pFnOnLoginChange )
		pFnOnLoginChange = (UFunction*) UObject::GObjObjects()->GetIndex( 122448 );

	UOnlineSubsystemMcts_execOnLoginChange_Parms OnLoginChange_Parms;
	OnLoginChange_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnOnLoginChange, &OnLoginChange_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineSubsystemMcts.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemMcts::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->GetIndex( 122549 );

	UOnlineSubsystemMcts_eventInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;

	return Init_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.UnmuteAll
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineVoiceInterfaceMcts::UnmuteAll ( unsigned char LocalUserNum )
{
	static UFunction* pFnUnmuteAll = NULL;

	if ( ! pFnUnmuteAll )
		pFnUnmuteAll = (UFunction*) UObject::GObjObjects()->GetIndex( 123244 );

	UOnlineVoiceInterfaceMcts_execUnmuteAll_Parms UnmuteAll_Parms;
	UnmuteAll_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnUnmuteAll, &UnmuteAll_Parms, NULL );

	return UnmuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.MuteAll
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAllowFriends                  ( CPF_Parm )

bool UOnlineVoiceInterfaceMcts::MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends )
{
	static UFunction* pFnMuteAll = NULL;

	if ( ! pFnMuteAll )
		pFnMuteAll = (UFunction*) UObject::GObjObjects()->GetIndex( 123240 );

	UOnlineVoiceInterfaceMcts_execMuteAll_Parms MuteAll_Parms;
	MuteAll_Parms.LocalUserNum = LocalUserNum;
	MuteAll_Parms.bAllowFriends = bAllowFriends;

	this->ProcessEvent ( pFnMuteAll, &MuteAll_Parms, NULL );

	return MuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.SetSpeechRecognitionObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class USpeechRecognition*      SpeechRecogObj                 ( CPF_Parm )

bool UOnlineVoiceInterfaceMcts::SetSpeechRecognitionObject ( unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj )
{
	static UFunction* pFnSetSpeechRecognitionObject = NULL;

	if ( ! pFnSetSpeechRecognitionObject )
		pFnSetSpeechRecognitionObject = (UFunction*) UObject::GObjObjects()->GetIndex( 123236 );

	UOnlineVoiceInterfaceMcts_execSetSpeechRecognitionObject_Parms SetSpeechRecognitionObject_Parms;
	SetSpeechRecognitionObject_Parms.LocalUserNum = LocalUserNum;
	SetSpeechRecognitionObject_Parms.SpeechRecogObj = SpeechRecogObj;

	pFnSetSpeechRecognitionObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Parms, NULL );

	pFnSetSpeechRecognitionObject->FunctionFlags |= 0x400;

	return SetSpeechRecognitionObject_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.SelectVocabulary
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            VocabularyId                   ( CPF_Parm )

bool UOnlineVoiceInterfaceMcts::SelectVocabulary ( unsigned char LocalUserNum, int VocabularyId )
{
	static UFunction* pFnSelectVocabulary = NULL;

	if ( ! pFnSelectVocabulary )
		pFnSelectVocabulary = (UFunction*) UObject::GObjObjects()->GetIndex( 123232 );

	UOnlineVoiceInterfaceMcts_execSelectVocabulary_Parms SelectVocabulary_Parms;
	SelectVocabulary_Parms.LocalUserNum = LocalUserNum;
	SelectVocabulary_Parms.VocabularyId = VocabularyId;

	pFnSelectVocabulary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectVocabulary, &SelectVocabulary_Parms, NULL );

	pFnSelectVocabulary->FunctionFlags |= 0x400;

	return SelectVocabulary_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.ClearRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineVoiceInterfaceMcts::ClearRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnClearRecognitionCompleteDelegate = NULL;

	if ( ! pFnClearRecognitionCompleteDelegate )
		pFnClearRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123228 );

	UOnlineVoiceInterfaceMcts_execClearRecognitionCompleteDelegate_Parms ClearRecognitionCompleteDelegate_Parms;
	ClearRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0xC );

	this->ProcessEvent ( pFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.AddRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineVoiceInterfaceMcts::AddRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnAddRecognitionCompleteDelegate = NULL;

	if ( ! pFnAddRecognitionCompleteDelegate )
		pFnAddRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123225 );

	UOnlineVoiceInterfaceMcts_execAddRecognitionCompleteDelegate_Parms AddRecognitionCompleteDelegate_Parms;
	AddRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0xC );

	this->ProcessEvent ( pFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.OnRecognitionComplete
// [0x00120000] 
// Parameters infos:

void UOnlineVoiceInterfaceMcts::OnRecognitionComplete ( )
{
	static UFunction* pFnOnRecognitionComplete = NULL;

	if ( ! pFnOnRecognitionComplete )
		pFnOnRecognitionComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 123141 );

	UOnlineVoiceInterfaceMcts_execOnRecognitionComplete_Parms OnRecognitionComplete_Parms;

	this->ProcessEvent ( pFnOnRecognitionComplete, &OnRecognitionComplete_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.GetRecognitionResults
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSpeechRecognizedWord > Words                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineVoiceInterfaceMcts::GetRecognitionResults ( unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* Words )
{
	static UFunction* pFnGetRecognitionResults = NULL;

	if ( ! pFnGetRecognitionResults )
		pFnGetRecognitionResults = (UFunction*) UObject::GObjObjects()->GetIndex( 123220 );

	UOnlineVoiceInterfaceMcts_execGetRecognitionResults_Parms GetRecognitionResults_Parms;
	GetRecognitionResults_Parms.LocalUserNum = LocalUserNum;

	pFnGetRecognitionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetRecognitionResults, &GetRecognitionResults_Parms, NULL );

	pFnGetRecognitionResults->FunctionFlags |= 0x400;

	if ( Words )
		memcpy ( Words, &GetRecognitionResults_Parms.Words, 0xC );

	return GetRecognitionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.StopSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineVoiceInterfaceMcts::StopSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopSpeechRecognition = NULL;

	if ( ! pFnStopSpeechRecognition )
		pFnStopSpeechRecognition = (UFunction*) UObject::GObjObjects()->GetIndex( 123217 );

	UOnlineVoiceInterfaceMcts_execStopSpeechRecognition_Parms StopSpeechRecognition_Parms;
	StopSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStopSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopSpeechRecognition, &StopSpeechRecognition_Parms, NULL );

	pFnStopSpeechRecognition->FunctionFlags |= 0x400;

	return StopSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.StartSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineVoiceInterfaceMcts::StartSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartSpeechRecognition = NULL;

	if ( ! pFnStartSpeechRecognition )
		pFnStartSpeechRecognition = (UFunction*) UObject::GObjObjects()->GetIndex( 123214 );

	UOnlineVoiceInterfaceMcts_execStartSpeechRecognition_Parms StartSpeechRecognition_Parms;
	StartSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStartSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartSpeechRecognition, &StartSpeechRecognition_Parms, NULL );

	pFnStartSpeechRecognition->FunctionFlags |= 0x400;

	return StartSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineVoiceInterfaceMcts::StopNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopNetworkedVoice = NULL;

	if ( ! pFnStopNetworkedVoice )
		pFnStopNetworkedVoice = (UFunction*) UObject::GObjObjects()->GetIndex( 123212 );

	UOnlineVoiceInterfaceMcts_execStopNetworkedVoice_Parms StopNetworkedVoice_Parms;
	StopNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStopNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopNetworkedVoice, &StopNetworkedVoice_Parms, NULL );

	pFnStopNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineVoiceInterfaceMcts::StartNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartNetworkedVoice = NULL;

	if ( ! pFnStartNetworkedVoice )
		pFnStartNetworkedVoice = (UFunction*) UObject::GObjObjects()->GetIndex( 123210 );

	UOnlineVoiceInterfaceMcts_execStartNetworkedVoice_Parms StartNetworkedVoice_Parms;
	StartNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStartNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartNetworkedVoice, &StartNetworkedVoice_Parms, NULL );

	pFnStartNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.ClearPlayerTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineVoiceInterfaceMcts::ClearPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnClearPlayerTalkingDelegate = NULL;

	if ( ! pFnClearPlayerTalkingDelegate )
		pFnClearPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123207 );

	UOnlineVoiceInterfaceMcts_execClearPlayerTalkingDelegate_Parms ClearPlayerTalkingDelegate_Parms;
	memcpy ( &ClearPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0xC );

	this->ProcessEvent ( pFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.AddPlayerTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineVoiceInterfaceMcts::AddPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnAddPlayerTalkingDelegate = NULL;

	if ( ! pFnAddPlayerTalkingDelegate )
		pFnAddPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 123204 );

	UOnlineVoiceInterfaceMcts_execAddPlayerTalkingDelegate_Parms AddPlayerTalkingDelegate_Parms;
	memcpy ( &AddPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0xC );

	this->ProcessEvent ( pFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.OnPlayerTalkingStateChange
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            Player                         ( CPF_Parm )
// unsigned long                  bIsTalking                     ( CPF_Parm )

void UOnlineVoiceInterfaceMcts::OnPlayerTalkingStateChange ( struct FUniqueNetId Player, unsigned long bIsTalking )
{
	static UFunction* pFnOnPlayerTalkingStateChange = NULL;

	if ( ! pFnOnPlayerTalkingStateChange )
		pFnOnPlayerTalkingStateChange = (UFunction*) UObject::GObjObjects()->GetIndex( 123144 );

	UOnlineVoiceInterfaceMcts_execOnPlayerTalkingStateChange_Parms OnPlayerTalkingStateChange_Parms;
	memcpy ( &OnPlayerTalkingStateChange_Parms.Player, &Player, 0x8 );
	OnPlayerTalkingStateChange_Parms.bIsTalking = bIsTalking;

	this->ProcessEvent ( pFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Parms, NULL );
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.IsTalkerMuted
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ConsoleId                      ( CPF_Parm )

bool UOnlineVoiceInterfaceMcts::IsTalkerMuted ( struct FUniqueNetId ConsoleId )
{
	static UFunction* pFnIsTalkerMuted = NULL;

	if ( ! pFnIsTalkerMuted )
		pFnIsTalkerMuted = (UFunction*) UObject::GObjObjects()->GetIndex( 123199 );

	UOnlineVoiceInterfaceMcts_execIsTalkerMuted_Parms IsTalkerMuted_Parms;
	memcpy ( &IsTalkerMuted_Parms.ConsoleId, &ConsoleId, 0x8 );

	this->ProcessEvent ( pFnIsTalkerMuted, &IsTalkerMuted_Parms, NULL );

	return IsTalkerMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.UnmuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineVoiceInterfaceMcts::UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide )
{
	static UFunction* pFnUnmuteRemoteTalker = NULL;

	if ( ! pFnUnmuteRemoteTalker )
		pFnUnmuteRemoteTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 123194 );

	UOnlineVoiceInterfaceMcts_execUnmuteRemoteTalker_Parms UnmuteRemoteTalker_Parms;
	UnmuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &UnmuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );
	UnmuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnUnmuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Parms, NULL );

	pFnUnmuteRemoteTalker->FunctionFlags |= 0x400;

	return UnmuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.MuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineVoiceInterfaceMcts::MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide )
{
	static UFunction* pFnMuteRemoteTalker = NULL;

	if ( ! pFnMuteRemoteTalker )
		pFnMuteRemoteTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 123189 );

	UOnlineVoiceInterfaceMcts_execMuteRemoteTalker_Parms MuteRemoteTalker_Parms;
	MuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &MuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );
	MuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnMuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMuteRemoteTalker, &MuteRemoteTalker_Parms, NULL );

	pFnMuteRemoteTalker->FunctionFlags |= 0x400;

	return MuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.UpdatePlayerMuteSetting
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  PlayerMuteSetting              ( CPF_Parm )

bool UOnlineVoiceInterfaceMcts::UpdatePlayerMuteSetting ( unsigned long PlayerMuteSetting )
{
	static UFunction* pFnUpdatePlayerMuteSetting = NULL;

	if ( ! pFnUpdatePlayerMuteSetting )
		pFnUpdatePlayerMuteSetting = (UFunction*) UObject::GObjObjects()->GetIndex( 123186 );

	UOnlineVoiceInterfaceMcts_execUpdatePlayerMuteSetting_Parms UpdatePlayerMuteSetting_Parms;
	UpdatePlayerMuteSetting_Parms.PlayerMuteSetting = PlayerMuteSetting;

	this->ProcessEvent ( pFnUpdatePlayerMuteSetting, &UpdatePlayerMuteSetting_Parms, NULL );

	return UpdatePlayerMuteSetting_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.SetRemoteTalkerPriority
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// int                            Priority                       ( CPF_Parm )

bool UOnlineVoiceInterfaceMcts::SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority )
{
	static UFunction* pFnSetRemoteTalkerPriority = NULL;

	if ( ! pFnSetRemoteTalkerPriority )
		pFnSetRemoteTalkerPriority = (UFunction*) UObject::GObjObjects()->GetIndex( 123181 );

	UOnlineVoiceInterfaceMcts_execSetRemoteTalkerPriority_Parms SetRemoteTalkerPriority_Parms;
	SetRemoteTalkerPriority_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SetRemoteTalkerPriority_Parms.PlayerID, &PlayerID, 0x8 );
	SetRemoteTalkerPriority_Parms.Priority = Priority;

	pFnSetRemoteTalkerPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Parms, NULL );

	pFnSetRemoteTalkerPriority->FunctionFlags |= 0x400;

	return SetRemoteTalkerPriority_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.IsHeadsetPresent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineVoiceInterfaceMcts::IsHeadsetPresent ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsHeadsetPresent = NULL;

	if ( ! pFnIsHeadsetPresent )
		pFnIsHeadsetPresent = (UFunction*) UObject::GObjObjects()->GetIndex( 123178 );

	UOnlineVoiceInterfaceMcts_execIsHeadsetPresent_Parms IsHeadsetPresent_Parms;
	IsHeadsetPresent_Parms.LocalUserNum = LocalUserNum;

	pFnIsHeadsetPresent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsHeadsetPresent, &IsHeadsetPresent_Parms, NULL );

	pFnIsHeadsetPresent->FunctionFlags |= 0x400;

	return IsHeadsetPresent_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineVoiceInterfaceMcts::IsRemotePlayerTalking ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsRemotePlayerTalking = NULL;

	if ( ! pFnIsRemotePlayerTalking )
		pFnIsRemotePlayerTalking = (UFunction*) UObject::GObjObjects()->GetIndex( 123175 );

	UOnlineVoiceInterfaceMcts_execIsRemotePlayerTalking_Parms IsRemotePlayerTalking_Parms;
	memcpy ( &IsRemotePlayerTalking_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsRemotePlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Parms, NULL );

	pFnIsRemotePlayerTalking->FunctionFlags |= 0x400;

	return IsRemotePlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineVoiceInterfaceMcts::IsLocalPlayerTalking ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalPlayerTalking = NULL;

	if ( ! pFnIsLocalPlayerTalking )
		pFnIsLocalPlayerTalking = (UFunction*) UObject::GObjObjects()->GetIndex( 123172 );

	UOnlineVoiceInterfaceMcts_execIsLocalPlayerTalking_Parms IsLocalPlayerTalking_Parms;
	IsLocalPlayerTalking_Parms.LocalUserNum = LocalUserNum;

	pFnIsLocalPlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Parms, NULL );

	pFnIsLocalPlayerTalking->FunctionFlags |= 0x400;

	return IsLocalPlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineVoiceInterfaceMcts::UnregisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterRemoteTalker = NULL;

	if ( ! pFnUnregisterRemoteTalker )
		pFnUnregisterRemoteTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 123169 );

	UOnlineVoiceInterfaceMcts_execUnregisterRemoteTalker_Parms UnregisterRemoteTalker_Parms;
	memcpy ( &UnregisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnUnregisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Parms, NULL );

	pFnUnregisterRemoteTalker->FunctionFlags |= 0x400;

	return UnregisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.RegisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineVoiceInterfaceMcts::RegisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnRegisterRemoteTalker = NULL;

	if ( ! pFnRegisterRemoteTalker )
		pFnRegisterRemoteTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 123166 );

	UOnlineVoiceInterfaceMcts_execRegisterRemoteTalker_Parms RegisterRemoteTalker_Parms;
	memcpy ( &RegisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnRegisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterRemoteTalker, &RegisterRemoteTalker_Parms, NULL );

	pFnRegisterRemoteTalker->FunctionFlags |= 0x400;

	return RegisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.UnregisterLocalTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ChannelIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UOnlineVoiceInterfaceMcts::UnregisterLocalTalker ( unsigned char LocalUserNum, unsigned char ChannelIndex )
{
	static UFunction* pFnUnregisterLocalTalker = NULL;

	if ( ! pFnUnregisterLocalTalker )
		pFnUnregisterLocalTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 123162 );

	UOnlineVoiceInterfaceMcts_execUnregisterLocalTalker_Parms UnregisterLocalTalker_Parms;
	UnregisterLocalTalker_Parms.LocalUserNum = LocalUserNum;
	UnregisterLocalTalker_Parms.ChannelIndex = ChannelIndex;

	pFnUnregisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterLocalTalker, &UnregisterLocalTalker_Parms, NULL );

	pFnUnregisterLocalTalker->FunctionFlags |= 0x400;

	return UnregisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemMcts.OnlineVoiceInterfaceMcts.RegisterLocalTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ChannelIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UOnlineVoiceInterfaceMcts::RegisterLocalTalker ( unsigned char LocalUserNum, unsigned char ChannelIndex )
{
	static UFunction* pFnRegisterLocalTalker = NULL;

	if ( ! pFnRegisterLocalTalker )
		pFnRegisterLocalTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 123158 );

	UOnlineVoiceInterfaceMcts_execRegisterLocalTalker_Parms RegisterLocalTalker_Parms;
	RegisterLocalTalker_Parms.LocalUserNum = LocalUserNum;
	RegisterLocalTalker_Parms.ChannelIndex = ChannelIndex;

	pFnRegisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterLocalTalker, &RegisterLocalTalker_Parms, NULL );

	pFnRegisterLocalTalker->FunctionFlags |= 0x400;

	return RegisterLocalTalker_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif