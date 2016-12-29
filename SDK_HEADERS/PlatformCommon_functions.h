/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PlatformCommon_functions.h
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

// Function PlatformCommon.PComGameEngine.HandlePlayerCommandInput
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FSCommand                      ( CPF_Parm | CPF_NeedCtorLink )
// class APlayerController*       PC                             ( CPF_OptionalParm | CPF_Parm )

bool UPComGameEngine::HandlePlayerCommandInput ( struct FString FSCommand, class APlayerController* PC )
{
	static UFunction* pFnHandlePlayerCommandInput = NULL;

	if ( ! pFnHandlePlayerCommandInput )
		pFnHandlePlayerCommandInput = (UFunction*) UObject::GObjObjects()->GetIndex( 43270 );

	UPComGameEngine_execHandlePlayerCommandInput_Parms HandlePlayerCommandInput_Parms;
	memcpy ( &HandlePlayerCommandInput_Parms.FSCommand, &FSCommand, 0xC );
	HandlePlayerCommandInput_Parms.PC = PC;

	pFnHandlePlayerCommandInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandlePlayerCommandInput, &HandlePlayerCommandInput_Parms, NULL );

	pFnHandlePlayerCommandInput->FunctionFlags |= 0x400;

	return HandlePlayerCommandInput_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameEngine.SendGameRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 fsRequest                      ( CPF_Parm | CPF_NeedCtorLink )

void UPComGameEngine::SendGameRequest ( struct FString fsRequest )
{
	static UFunction* pFnSendGameRequest = NULL;

	if ( ! pFnSendGameRequest )
		pFnSendGameRequest = (UFunction*) UObject::GObjObjects()->GetIndex( 43268 );

	UPComGameEngine_execSendGameRequest_Parms SendGameRequest_Parms;
	memcpy ( &SendGameRequest_Parms.fsRequest, &fsRequest, 0xC );

	pFnSendGameRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameRequest, &SendGameRequest_Parms, NULL );

	pFnSendGameRequest->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameEngine.SendCtrlRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 fsRequest                      ( CPF_Parm | CPF_NeedCtorLink )

void UPComGameEngine::SendCtrlRequest ( struct FString fsRequest )
{
	static UFunction* pFnSendCtrlRequest = NULL;

	if ( ! pFnSendCtrlRequest )
		pFnSendCtrlRequest = (UFunction*) UObject::GObjObjects()->GetIndex( 43266 );

	UPComGameEngine_execSendCtrlRequest_Parms SendCtrlRequest_Parms;
	memcpy ( &SendCtrlRequest_Parms.fsRequest, &fsRequest, 0xC );

	pFnSendCtrlRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendCtrlRequest, &SendCtrlRequest_Parms, NULL );

	pFnSendCtrlRequest->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameEngine.ClearMarshalEventDelegate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FScriptDelegate         MarshalEventDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UPComGameEngine::ClearMarshalEventDelegate ( struct FScriptDelegate MarshalEventDelegate )
{
	static UFunction* pFnClearMarshalEventDelegate = NULL;

	if ( ! pFnClearMarshalEventDelegate )
		pFnClearMarshalEventDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 43264 );

	UPComGameEngine_execClearMarshalEventDelegate_Parms ClearMarshalEventDelegate_Parms;
	memcpy ( &ClearMarshalEventDelegate_Parms.MarshalEventDelegate, &MarshalEventDelegate, 0xC );

	pFnClearMarshalEventDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearMarshalEventDelegate, &ClearMarshalEventDelegate_Parms, NULL );

	pFnClearMarshalEventDelegate->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameEngine.AddMarshalEventDelegate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FScriptDelegate         MarshalEventDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UPComGameEngine::AddMarshalEventDelegate ( struct FScriptDelegate MarshalEventDelegate )
{
	static UFunction* pFnAddMarshalEventDelegate = NULL;

	if ( ! pFnAddMarshalEventDelegate )
		pFnAddMarshalEventDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 43262 );

	UPComGameEngine_execAddMarshalEventDelegate_Parms AddMarshalEventDelegate_Parms;
	memcpy ( &AddMarshalEventDelegate_Parms.MarshalEventDelegate, &MarshalEventDelegate, 0xC );

	pFnAddMarshalEventDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddMarshalEventDelegate, &AddMarshalEventDelegate_Parms, NULL );

	pFnAddMarshalEventDelegate->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameEngine.OnMarshalEvent
// [0x00120000] 
// Parameters infos:
// struct FPointer                pMarEvent                      ( CPF_Parm )

void UPComGameEngine::OnMarshalEvent ( struct FPointer pMarEvent )
{
	static UFunction* pFnOnMarshalEvent = NULL;

	if ( ! pFnOnMarshalEvent )
		pFnOnMarshalEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 43215 );

	UPComGameEngine_execOnMarshalEvent_Parms OnMarshalEvent_Parms;
	memcpy ( &OnMarshalEvent_Parms.pMarEvent, &pMarEvent, 0x4 );

	this->ProcessEvent ( pFnOnMarshalEvent, &OnMarshalEvent_Parms, NULL );
};

// Function PlatformCommon.PComGameEngine.GetFieldString
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// struct FString                 StrValue                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPComGameEngine::GetFieldString ( int nToken, struct FString* StrValue )
{
	static UFunction* pFnGetFieldString = NULL;

	if ( ! pFnGetFieldString )
		pFnGetFieldString = (UFunction*) UObject::GObjObjects()->GetIndex( 43257 );

	UPComGameEngine_execGetFieldString_Parms GetFieldString_Parms;
	GetFieldString_Parms.nToken = nToken;

	pFnGetFieldString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFieldString, &GetFieldString_Parms, NULL );

	pFnGetFieldString->FunctionFlags |= 0x400;

	if ( StrValue )
		memcpy ( StrValue, &GetFieldString_Parms.StrValue, 0xC );

	return GetFieldString_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameEngine.GetFieldFloat
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// float                          FloatValue                     ( CPF_Parm | CPF_OutParm )

bool UPComGameEngine::GetFieldFloat ( int nToken, float* FloatValue )
{
	static UFunction* pFnGetFieldFloat = NULL;

	if ( ! pFnGetFieldFloat )
		pFnGetFieldFloat = (UFunction*) UObject::GObjObjects()->GetIndex( 43253 );

	UPComGameEngine_execGetFieldFloat_Parms GetFieldFloat_Parms;
	GetFieldFloat_Parms.nToken = nToken;

	pFnGetFieldFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFieldFloat, &GetFieldFloat_Parms, NULL );

	pFnGetFieldFloat->FunctionFlags |= 0x400;

	if ( FloatValue )
		*FloatValue = GetFieldFloat_Parms.FloatValue;

	return GetFieldFloat_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameEngine.GetFieldInt
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// int                            IntValue                       ( CPF_Parm | CPF_OutParm )

bool UPComGameEngine::GetFieldInt ( int nToken, int* IntValue )
{
	static UFunction* pFnGetFieldInt = NULL;

	if ( ! pFnGetFieldInt )
		pFnGetFieldInt = (UFunction*) UObject::GObjObjects()->GetIndex( 43249 );

	UPComGameEngine_execGetFieldInt_Parms GetFieldInt_Parms;
	GetFieldInt_Parms.nToken = nToken;

	pFnGetFieldInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFieldInt, &GetFieldInt_Parms, NULL );

	pFnGetFieldInt->FunctionFlags |= 0x400;

	if ( IntValue )
		*IntValue = GetFieldInt_Parms.IntValue;

	return GetFieldInt_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameEngine.SendMarshalAll
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bLowPriority                   ( CPF_Parm )

void UPComGameEngine::SendMarshalAll ( unsigned long bLowPriority )
{
	static UFunction* pFnSendMarshalAll = NULL;

	if ( ! pFnSendMarshalAll )
		pFnSendMarshalAll = (UFunction*) UObject::GObjObjects()->GetIndex( 43247 );

	UPComGameEngine_execSendMarshalAll_Parms SendMarshalAll_Parms;
	SendMarshalAll_Parms.bLowPriority = bLowPriority;

	pFnSendMarshalAll->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendMarshalAll, &SendMarshalAll_Parms, NULL );

	pFnSendMarshalAll->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameEngine.SendMarshal
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            qwPlayerId                     ( CPF_Parm )
// unsigned long                  bLowPriority                   ( CPF_Parm )

void UPComGameEngine::SendMarshal ( struct FUniqueNetId qwPlayerId, unsigned long bLowPriority )
{
	static UFunction* pFnSendMarshal = NULL;

	if ( ! pFnSendMarshal )
		pFnSendMarshal = (UFunction*) UObject::GObjObjects()->GetIndex( 43244 );

	UPComGameEngine_execSendMarshal_Parms SendMarshal_Parms;
	memcpy ( &SendMarshal_Parms.qwPlayerId, &qwPlayerId, 0x8 );
	SendMarshal_Parms.bLowPriority = bLowPriority;

	pFnSendMarshal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendMarshal, &SendMarshal_Parms, NULL );

	pFnSendMarshal->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameEngine.ClearMarshal
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComGameEngine::ClearMarshal ( )
{
	static UFunction* pFnClearMarshal = NULL;

	if ( ! pFnClearMarshal )
		pFnClearMarshal = (UFunction*) UObject::GObjObjects()->GetIndex( 43243 );

	UPComGameEngine_execClearMarshal_Parms ClearMarshal_Parms;

	pFnClearMarshal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearMarshal, &ClearMarshal_Parms, NULL );

	pFnClearMarshal->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameEngine.SetFieldString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// struct FString                 StrValue                       ( CPF_Parm | CPF_NeedCtorLink )

bool UPComGameEngine::SetFieldString ( int nToken, struct FString StrValue )
{
	static UFunction* pFnSetFieldString = NULL;

	if ( ! pFnSetFieldString )
		pFnSetFieldString = (UFunction*) UObject::GObjObjects()->GetIndex( 43239 );

	UPComGameEngine_execSetFieldString_Parms SetFieldString_Parms;
	SetFieldString_Parms.nToken = nToken;
	memcpy ( &SetFieldString_Parms.StrValue, &StrValue, 0xC );

	pFnSetFieldString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFieldString, &SetFieldString_Parms, NULL );

	pFnSetFieldString->FunctionFlags |= 0x400;

	return SetFieldString_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameEngine.SetFieldFloat
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// float                          FloatValue                     ( CPF_Parm )

bool UPComGameEngine::SetFieldFloat ( int nToken, float FloatValue )
{
	static UFunction* pFnSetFieldFloat = NULL;

	if ( ! pFnSetFieldFloat )
		pFnSetFieldFloat = (UFunction*) UObject::GObjObjects()->GetIndex( 43235 );

	UPComGameEngine_execSetFieldFloat_Parms SetFieldFloat_Parms;
	SetFieldFloat_Parms.nToken = nToken;
	SetFieldFloat_Parms.FloatValue = FloatValue;

	pFnSetFieldFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFieldFloat, &SetFieldFloat_Parms, NULL );

	pFnSetFieldFloat->FunctionFlags |= 0x400;

	return SetFieldFloat_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameEngine.SetFieldInt
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// int                            IntValue                       ( CPF_Parm )

bool UPComGameEngine::SetFieldInt ( int nToken, int IntValue )
{
	static UFunction* pFnSetFieldInt = NULL;

	if ( ! pFnSetFieldInt )
		pFnSetFieldInt = (UFunction*) UObject::GObjObjects()->GetIndex( 43231 );

	UPComGameEngine_execSetFieldInt_Parms SetFieldInt_Parms;
	SetFieldInt_Parms.nToken = nToken;
	SetFieldInt_Parms.IntValue = IntValue;

	pFnSetFieldInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFieldInt, &SetFieldInt_Parms, NULL );

	pFnSetFieldInt->FunctionFlags |= 0x400;

	return SetFieldInt_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameEngine.SetFunction
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nFunction                      ( CPF_Parm )

bool UPComGameEngine::SetFunction ( int nFunction )
{
	static UFunction* pFnSetFunction = NULL;

	if ( ! pFnSetFunction )
		pFnSetFunction = (UFunction*) UObject::GObjObjects()->GetIndex( 43228 );

	UPComGameEngine_execSetFunction_Parms SetFunction_Parms;
	SetFunction_Parms.nFunction = nFunction;

	pFnSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFunction, &SetFunction_Parms, NULL );

	pFnSetFunction->FunctionFlags |= 0x400;

	return SetFunction_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameViewportClient.Init
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 OutError                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPComGameViewportClient::eventInit ( struct FString* OutError )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->GetIndex( 43279 );

	UPComGameViewportClient_eventInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	if ( OutError )
		memcpy ( OutError, &Init_Parms.OutError, 0xC );

	return Init_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameViewportClient.StartFacebookStreaming
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UPComGameViewportClient::StartFacebookStreaming ( )
{
	static UFunction* pFnStartFacebookStreaming = NULL;

	if ( ! pFnStartFacebookStreaming )
		pFnStartFacebookStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 43282 );

	UPComGameViewportClient_execStartFacebookStreaming_Parms StartFacebookStreaming_Parms;

	this->ProcessEvent ( pFnStartFacebookStreaming, &StartFacebookStreaming_Parms, NULL );
};

// Function PlatformCommon.PComGameViewportClient.StopRTMPStreaming
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UPComGameViewportClient::StopRTMPStreaming ( )
{
	static UFunction* pFnStopRTMPStreaming = NULL;

	if ( ! pFnStopRTMPStreaming )
		pFnStopRTMPStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 43283 );

	UPComGameViewportClient_execStopRTMPStreaming_Parms StopRTMPStreaming_Parms;

	this->ProcessEvent ( pFnStopRTMPStreaming, &StopRTMPStreaming_Parms, NULL );
};

// Function PlatformCommon.PComGameViewportClient.StartRTMPStreaming
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 InServer                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InKey                          ( CPF_Parm | CPF_NeedCtorLink )

void UPComGameViewportClient::StartRTMPStreaming ( struct FString InServer, struct FString InKey )
{
	static UFunction* pFnStartRTMPStreaming = NULL;

	if ( ! pFnStartRTMPStreaming )
		pFnStartRTMPStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 43284 );

	UPComGameViewportClient_execStartRTMPStreaming_Parms StartRTMPStreaming_Parms;
	memcpy ( &StartRTMPStreaming_Parms.InServer, &InServer, 0xC );
	memcpy ( &StartRTMPStreaming_Parms.InKey, &InKey, 0xC );

	this->ProcessEvent ( pFnStartRTMPStreaming, &StartRTMPStreaming_Parms, NULL );
};

// Function PlatformCommon.PComGameViewportClient.SetRTMPSettings
// [0x00820202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bAllowWebcam                   ( CPF_Parm )
// unsigned long                  bAllowMicrophone               ( CPF_Parm )
// unsigned long                  bAllowDesktopAudio             ( CPF_Parm )

void UPComGameViewportClient::SetRTMPSettings ( unsigned long bAllowWebcam, unsigned long bAllowMicrophone, unsigned long bAllowDesktopAudio )
{
	static UFunction* pFnSetRTMPSettings = NULL;

	if ( ! pFnSetRTMPSettings )
		pFnSetRTMPSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 43285 );

	UPComGameViewportClient_execSetRTMPSettings_Parms SetRTMPSettings_Parms;
	SetRTMPSettings_Parms.bAllowWebcam = bAllowWebcam;
	SetRTMPSettings_Parms.bAllowMicrophone = bAllowMicrophone;
	SetRTMPSettings_Parms.bAllowDesktopAudio = bAllowDesktopAudio;

	this->ProcessEvent ( pFnSetRTMPSettings, &SetRTMPSettings_Parms, NULL );
};

// Function PlatformCommon.PComGameViewportClient.InitDynamicResolutionScaler
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPComGameViewportClient::InitDynamicResolutionScaler ( )
{
	static UFunction* pFnInitDynamicResolutionScaler = NULL;

	if ( ! pFnInitDynamicResolutionScaler )
		pFnInitDynamicResolutionScaler = (UFunction*) UObject::GObjObjects()->GetIndex( 43277 );

	UPComGameViewportClient_execInitDynamicResolutionScaler_Parms InitDynamicResolutionScaler_Parms;

	pFnInitDynamicResolutionScaler->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitDynamicResolutionScaler, &InitDynamicResolutionScaler_Parms, NULL );

	pFnInitDynamicResolutionScaler->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComImageDownloader.SetPComImageDownloadedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         PComImageDownloadedDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UPComImageDownloader::SetPComImageDownloadedDelegate ( struct FScriptDelegate PComImageDownloadedDelegate )
{
	static UFunction* pFnSetPComImageDownloadedDelegate = NULL;

	if ( ! pFnSetPComImageDownloadedDelegate )
		pFnSetPComImageDownloadedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 43313 );

	UPComImageDownloader_execSetPComImageDownloadedDelegate_Parms SetPComImageDownloadedDelegate_Parms;
	memcpy ( &SetPComImageDownloadedDelegate_Parms.PComImageDownloadedDelegate, &PComImageDownloadedDelegate, 0xC );

	this->ProcessEvent ( pFnSetPComImageDownloadedDelegate, &SetPComImageDownloadedDelegate_Parms, NULL );
};

// Function PlatformCommon.PComImageDownloader.OnPComImageDownloaded
// [0x00120000] 
// Parameters infos:
// struct FPComImageDownload      CachedEntry                    ( CPF_Parm | CPF_NeedCtorLink )

void UPComImageDownloader::OnPComImageDownloaded ( struct FPComImageDownload CachedEntry )
{
	static UFunction* pFnOnPComImageDownloaded = NULL;

	if ( ! pFnOnPComImageDownloaded )
		pFnOnPComImageDownloaded = (UFunction*) UObject::GObjObjects()->GetIndex( 43309 );

	UPComImageDownloader_execOnPComImageDownloaded_Parms OnPComImageDownloaded_Parms;
	memcpy ( &OnPComImageDownloaded_Parms.CachedEntry, &CachedEntry, 0x30 );

	this->ProcessEvent ( pFnOnPComImageDownloaded, &OnPComImageDownloaded_Parms, NULL );
};

// Function PlatformCommon.PComInputLightingEffect.IsLogitechSdkVersionValid
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UPComInputLightingEffect::IsLogitechSdkVersionValid ( )
{
	static UFunction* pFnIsLogitechSdkVersionValid = NULL;

	if ( ! pFnIsLogitechSdkVersionValid )
		pFnIsLogitechSdkVersionValid = (UFunction*) UObject::GObjObjects()->GetIndex( 43348 );

	UPComInputLightingEffect_execIsLogitechSdkVersionValid_Parms IsLogitechSdkVersionValid_Parms;

	pFnIsLogitechSdkVersionValid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLogitechSdkVersionValid, &IsLogitechSdkVersionValid_Parms, NULL );

	pFnIsLogitechSdkVersionValid->FunctionFlags |= 0x400;

	return IsLogitechSdkVersionValid_Parms.ReturnValue;
};

// Function PlatformCommon.PComInputLightingEffect.SetCurrentTime
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )
// float                          CurrentTime                    ( CPF_Parm )

void UPComInputLightingEffect::SetCurrentTime ( struct FName InPresetName, float CurrentTime )
{
	static UFunction* pFnSetCurrentTime = NULL;

	if ( ! pFnSetCurrentTime )
		pFnSetCurrentTime = (UFunction*) UObject::GObjObjects()->GetIndex( 43345 );

	UPComInputLightingEffect_execSetCurrentTime_Parms SetCurrentTime_Parms;
	memcpy ( &SetCurrentTime_Parms.InPresetName, &InPresetName, 0x8 );
	SetCurrentTime_Parms.CurrentTime = CurrentTime;

	pFnSetCurrentTime->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCurrentTime, &SetCurrentTime_Parms, NULL );

	pFnSetCurrentTime->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComInputLightingEffect.StopPreset
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )

void UPComInputLightingEffect::StopPreset ( struct FName InPresetName )
{
	static UFunction* pFnStopPreset = NULL;

	if ( ! pFnStopPreset )
		pFnStopPreset = (UFunction*) UObject::GObjObjects()->GetIndex( 43343 );

	UPComInputLightingEffect_execStopPreset_Parms StopPreset_Parms;
	memcpy ( &StopPreset_Parms.InPresetName, &InPresetName, 0x8 );

	pFnStopPreset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopPreset, &StopPreset_Parms, NULL );

	pFnStopPreset->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComInputLightingEffect.PlayPreset
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )
// unsigned long                  bUseOverrideStartTime          ( CPF_OptionalParm | CPF_Parm )
// float                          OverrideStartTime              ( CPF_OptionalParm | CPF_Parm )

void UPComInputLightingEffect::PlayPreset ( struct FName InPresetName, unsigned long bUseOverrideStartTime, float OverrideStartTime )
{
	static UFunction* pFnPlayPreset = NULL;

	if ( ! pFnPlayPreset )
		pFnPlayPreset = (UFunction*) UObject::GObjObjects()->GetIndex( 43339 );

	UPComInputLightingEffect_execPlayPreset_Parms PlayPreset_Parms;
	memcpy ( &PlayPreset_Parms.InPresetName, &InPresetName, 0x8 );
	PlayPreset_Parms.bUseOverrideStartTime = bUseOverrideStartTime;
	PlayPreset_Parms.OverrideStartTime = OverrideStartTime;

	pFnPlayPreset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayPreset, &PlayPreset_Parms, NULL );

	pFnPlayPreset->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComInputLightingEffect.DisableSystem
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComInputLightingEffect::DisableSystem ( )
{
	static UFunction* pFnDisableSystem = NULL;

	if ( ! pFnDisableSystem )
		pFnDisableSystem = (UFunction*) UObject::GObjObjects()->GetIndex( 43338 );

	UPComInputLightingEffect_execDisableSystem_Parms DisableSystem_Parms;

	pFnDisableSystem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisableSystem, &DisableSystem_Parms, NULL );

	pFnDisableSystem->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComInputLightingEffect.TryEnableSystem
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComInputLightingEffect::TryEnableSystem ( )
{
	static UFunction* pFnTryEnableSystem = NULL;

	if ( ! pFnTryEnableSystem )
		pFnTryEnableSystem = (UFunction*) UObject::GObjObjects()->GetIndex( 43337 );

	UPComInputLightingEffect_execTryEnableSystem_Parms TryEnableSystem_Parms;

	pFnTryEnableSystem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTryEnableSystem, &TryEnableSystem_Parms, NULL );

	pFnTryEnableSystem->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComJsonHandler.OnImageDownloaded
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FPComImageDownload      CachedEntry                    ( CPF_Parm | CPF_NeedCtorLink )

void UPComJsonHandler::OnImageDownloaded ( struct FPComImageDownload CachedEntry )
{
	static UFunction* pFnOnImageDownloaded = NULL;

	if ( ! pFnOnImageDownloaded )
		pFnOnImageDownloaded = (UFunction*) UObject::GObjObjects()->GetIndex( 43357 );

	UPComJsonHandler_execOnImageDownloaded_Parms OnImageDownloaded_Parms;
	memcpy ( &OnImageDownloaded_Parms.CachedEntry, &CachedEntry, 0x30 );

	pFnOnImageDownloaded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnImageDownloaded, &OnImageDownloaded_Parms, NULL );

	pFnOnImageDownloaded->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComOpenBroadcaster.DecodeFacebookRTMPUrl
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UWebRequest*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 InRequest                      ( CPF_Parm | CPF_NeedCtorLink )

class UWebRequest* UPComOpenBroadcaster::eventDecodeFacebookRTMPUrl ( struct FString InRequest )
{
	static UFunction* pFnDecodeFacebookRTMPUrl = NULL;

	if ( ! pFnDecodeFacebookRTMPUrl )
		pFnDecodeFacebookRTMPUrl = (UFunction*) UObject::GObjObjects()->GetIndex( 44082 );

	UPComOpenBroadcaster_eventDecodeFacebookRTMPUrl_Parms DecodeFacebookRTMPUrl_Parms;
	memcpy ( &DecodeFacebookRTMPUrl_Parms.InRequest, &InRequest, 0xC );

	this->ProcessEvent ( pFnDecodeFacebookRTMPUrl, &DecodeFacebookRTMPUrl_Parms, NULL );

	return DecodeFacebookRTMPUrl_Parms.ReturnValue;
};

// Function PlatformCommon.PComOpenBroadcaster.Tick
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPComOpenBroadcaster::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->GetIndex( 44081 );

	UPComOpenBroadcaster_execTick_Parms Tick_Parms;

	pFnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );

	pFnTick->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComOpenBroadcaster.ForceStopStreaming
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComOpenBroadcaster::ForceStopStreaming ( )
{
	static UFunction* pFnForceStopStreaming = NULL;

	if ( ! pFnForceStopStreaming )
		pFnForceStopStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 44080 );

	UPComOpenBroadcaster_execForceStopStreaming_Parms ForceStopStreaming_Parms;

	pFnForceStopStreaming->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnForceStopStreaming, &ForceStopStreaming_Parms, NULL );

	pFnForceStopStreaming->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComOpenBroadcaster.StopStreaming
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComOpenBroadcaster::StopStreaming ( )
{
	static UFunction* pFnStopStreaming = NULL;

	if ( ! pFnStopStreaming )
		pFnStopStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 44079 );

	UPComOpenBroadcaster_execStopStreaming_Parms StopStreaming_Parms;

	pFnStopStreaming->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopStreaming, &StopStreaming_Parms, NULL );

	pFnStopStreaming->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComOpenBroadcaster.StartRTMPStreaming
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 InServer                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InKey                          ( CPF_Parm | CPF_NeedCtorLink )

void UPComOpenBroadcaster::StartRTMPStreaming ( struct FString InServer, struct FString InKey )
{
	static UFunction* pFnStartRTMPStreaming = NULL;

	if ( ! pFnStartRTMPStreaming )
		pFnStartRTMPStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 44076 );

	UPComOpenBroadcaster_execStartRTMPStreaming_Parms StartRTMPStreaming_Parms;
	memcpy ( &StartRTMPStreaming_Parms.InServer, &InServer, 0xC );
	memcpy ( &StartRTMPStreaming_Parms.InKey, &InKey, 0xC );

	pFnStartRTMPStreaming->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartRTMPStreaming, &StartRTMPStreaming_Parms, NULL );

	pFnStartRTMPStreaming->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComOpenBroadcaster.StartFacebookStreaming
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComOpenBroadcaster::StartFacebookStreaming ( )
{
	static UFunction* pFnStartFacebookStreaming = NULL;

	if ( ! pFnStartFacebookStreaming )
		pFnStartFacebookStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 44075 );

	UPComOpenBroadcaster_execStartFacebookStreaming_Parms StartFacebookStreaming_Parms;

	pFnStartFacebookStreaming->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartFacebookStreaming, &StartFacebookStreaming_Parms, NULL );

	pFnStartFacebookStreaming->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComOpenBroadcaster.QueueFacebookStreaming
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComOpenBroadcaster::QueueFacebookStreaming ( )
{
	static UFunction* pFnQueueFacebookStreaming = NULL;

	if ( ! pFnQueueFacebookStreaming )
		pFnQueueFacebookStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 44074 );

	UPComOpenBroadcaster_execQueueFacebookStreaming_Parms QueueFacebookStreaming_Parms;

	pFnQueueFacebookStreaming->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueueFacebookStreaming, &QueueFacebookStreaming_Parms, NULL );

	pFnQueueFacebookStreaming->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComOpenBroadcaster.SetStreamSettings
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FPComOpenBroadcasterSettings InSettings                     ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPComOpenBroadcaster::SetStreamSettings ( struct FPComOpenBroadcasterSettings* InSettings )
{
	static UFunction* pFnSetStreamSettings = NULL;

	if ( ! pFnSetStreamSettings )
		pFnSetStreamSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 44072 );

	UPComOpenBroadcaster_execSetStreamSettings_Parms SetStreamSettings_Parms;

	pFnSetStreamSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetStreamSettings, &SetStreamSettings_Parms, NULL );

	pFnSetStreamSettings->FunctionFlags |= 0x400;

	if ( InSettings )
		memcpy ( InSettings, &SetStreamSettings_Parms.InSettings, 0x4 );
};

// Function PlatformCommon.PComOpenBroadcaster.IsStreaming
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UPComOpenBroadcaster::IsStreaming ( )
{
	static UFunction* pFnIsStreaming = NULL;

	if ( ! pFnIsStreaming )
		pFnIsStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 44070 );

	UPComOpenBroadcaster_execIsStreaming_Parms IsStreaming_Parms;

	pFnIsStreaming->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsStreaming, &IsStreaming_Parms, NULL );

	pFnIsStreaming->FunctionFlags |= 0x400;

	return IsStreaming_Parms.ReturnValue;
};

// Function PlatformCommon.PComOpenBroadcaster.CloseWebBrowser
// [0x00120000] 
// Parameters infos:

void UPComOpenBroadcaster::CloseWebBrowser ( )
{
	static UFunction* pFnCloseWebBrowser = NULL;

	if ( ! pFnCloseWebBrowser )
		pFnCloseWebBrowser = (UFunction*) UObject::GObjObjects()->GetIndex( 44055 );

	UPComOpenBroadcaster_execCloseWebBrowser_Parms CloseWebBrowser_Parms;

	this->ProcessEvent ( pFnCloseWebBrowser, &CloseWebBrowser_Parms, NULL );
};

// Function PlatformCommon.PComOpenBroadcaster.OpenWebBrowser
// [0x00120000] 
// Parameters infos:
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

void UPComOpenBroadcaster::OpenWebBrowser ( struct FString URL )
{
	static UFunction* pFnOpenWebBrowser = NULL;

	if ( ! pFnOpenWebBrowser )
		pFnOpenWebBrowser = (UFunction*) UObject::GObjObjects()->GetIndex( 44057 );

	UPComOpenBroadcaster_execOpenWebBrowser_Parms OpenWebBrowser_Parms;
	memcpy ( &OpenWebBrowser_Parms.URL, &URL, 0xC );

	this->ProcessEvent ( pFnOpenWebBrowser, &OpenWebBrowser_Parms, NULL );
};

// Function PlatformCommon.PComOpenBroadcaster.IsWebBrowserLoaded
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UPComOpenBroadcaster::IsWebBrowserLoaded ( )
{
	static UFunction* pFnIsWebBrowserLoaded = NULL;

	if ( ! pFnIsWebBrowserLoaded )
		pFnIsWebBrowserLoaded = (UFunction*) UObject::GObjObjects()->GetIndex( 44059 );

	UPComOpenBroadcaster_execIsWebBrowserLoaded_Parms IsWebBrowserLoaded_Parms;

	this->ProcessEvent ( pFnIsWebBrowserLoaded, &IsWebBrowserLoaded_Parms, NULL );

	return IsWebBrowserLoaded_Parms.ReturnValue;
};

// Function PlatformCommon.PComOpenBroadcaster.PreloadWebBrowser
// [0x00120000] 
// Parameters infos:

void UPComOpenBroadcaster::PreloadWebBrowser ( )
{
	static UFunction* pFnPreloadWebBrowser = NULL;

	if ( ! pFnPreloadWebBrowser )
		pFnPreloadWebBrowser = (UFunction*) UObject::GObjObjects()->GetIndex( 44061 );

	UPComOpenBroadcaster_execPreloadWebBrowser_Parms PreloadWebBrowser_Parms;

	this->ProcessEvent ( pFnPreloadWebBrowser, &PreloadWebBrowser_Parms, NULL );
};

// Function PlatformCommon.PComPerformanceCaptureGame.DoNextAction
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void APComPerformanceCaptureGame::DoNextAction ( )
{
	static UFunction* pFnDoNextAction = NULL;

	if ( ! pFnDoNextAction )
		pFnDoNextAction = (UFunction*) UObject::GObjObjects()->GetIndex( 43434 );

	APComPerformanceCaptureGame_execDoNextAction_Parms DoNextAction_Parms;

	pFnDoNextAction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDoNextAction, &DoNextAction_Parms, NULL );

	pFnDoNextAction->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPerformanceCaptureGame.InitializePerformanceCaptureSettings
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void APComPerformanceCaptureGame::InitializePerformanceCaptureSettings ( )
{
	static UFunction* pFnInitializePerformanceCaptureSettings = NULL;

	if ( ! pFnInitializePerformanceCaptureSettings )
		pFnInitializePerformanceCaptureSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 43433 );

	APComPerformanceCaptureGame_execInitializePerformanceCaptureSettings_Parms InitializePerformanceCaptureSettings_Parms;

	pFnInitializePerformanceCaptureSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializePerformanceCaptureSettings, &InitializePerformanceCaptureSettings_Parms, NULL );

	pFnInitializePerformanceCaptureSettings->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPerformanceCaptureGame.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPerformanceCaptureGame::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->GetIndex( 43432 );

	APComPerformanceCaptureGame_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.PlayTestInputLightingEffect
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )

void APComPlayerController::PlayTestInputLightingEffect ( struct FName InPresetName )
{
	static UFunction* pFnPlayTestInputLightingEffect = NULL;

	if ( ! pFnPlayTestInputLightingEffect )
		pFnPlayTestInputLightingEffect = (UFunction*) UObject::GObjObjects()->GetIndex( 43757 );

	APComPlayerController_execPlayTestInputLightingEffect_Parms PlayTestInputLightingEffect_Parms;
	memcpy ( &PlayTestInputLightingEffect_Parms.InPresetName, &InPresetName, 0x8 );

	this->ProcessEvent ( pFnPlayTestInputLightingEffect, &PlayTestInputLightingEffect_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.SetCurrentTimeForInputLightingEffect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )
// float                          InCurrentTime                  ( CPF_Parm )

void APComPlayerController::SetCurrentTimeForInputLightingEffect ( struct FName InPresetName, float InCurrentTime )
{
	static UFunction* pFnSetCurrentTimeForInputLightingEffect = NULL;

	if ( ! pFnSetCurrentTimeForInputLightingEffect )
		pFnSetCurrentTimeForInputLightingEffect = (UFunction*) UObject::GObjObjects()->GetIndex( 43754 );

	APComPlayerController_execSetCurrentTimeForInputLightingEffect_Parms SetCurrentTimeForInputLightingEffect_Parms;
	memcpy ( &SetCurrentTimeForInputLightingEffect_Parms.InPresetName, &InPresetName, 0x8 );
	SetCurrentTimeForInputLightingEffect_Parms.InCurrentTime = InCurrentTime;

	pFnSetCurrentTimeForInputLightingEffect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCurrentTimeForInputLightingEffect, &SetCurrentTimeForInputLightingEffect_Parms, NULL );

	pFnSetCurrentTimeForInputLightingEffect->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.StopInputLightingEffect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )

void APComPlayerController::StopInputLightingEffect ( struct FName InPresetName )
{
	static UFunction* pFnStopInputLightingEffect = NULL;

	if ( ! pFnStopInputLightingEffect )
		pFnStopInputLightingEffect = (UFunction*) UObject::GObjObjects()->GetIndex( 43752 );

	APComPlayerController_execStopInputLightingEffect_Parms StopInputLightingEffect_Parms;
	memcpy ( &StopInputLightingEffect_Parms.InPresetName, &InPresetName, 0x8 );

	pFnStopInputLightingEffect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopInputLightingEffect, &StopInputLightingEffect_Parms, NULL );

	pFnStopInputLightingEffect->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.PlayInputLightingEffect
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )
// unsigned long                  bUseOverrideStartTime          ( CPF_OptionalParm | CPF_Parm )
// float                          OverrideStartTime              ( CPF_OptionalParm | CPF_Parm )

void APComPlayerController::PlayInputLightingEffect ( struct FName InPresetName, unsigned long bUseOverrideStartTime, float OverrideStartTime )
{
	static UFunction* pFnPlayInputLightingEffect = NULL;

	if ( ! pFnPlayInputLightingEffect )
		pFnPlayInputLightingEffect = (UFunction*) UObject::GObjObjects()->GetIndex( 43748 );

	APComPlayerController_execPlayInputLightingEffect_Parms PlayInputLightingEffect_Parms;
	memcpy ( &PlayInputLightingEffect_Parms.InPresetName, &InPresetName, 0x8 );
	PlayInputLightingEffect_Parms.bUseOverrideStartTime = bUseOverrideStartTime;
	PlayInputLightingEffect_Parms.OverrideStartTime = OverrideStartTime;

	pFnPlayInputLightingEffect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayInputLightingEffect, &PlayInputLightingEffect_Parms, NULL );

	pFnPlayInputLightingEffect->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ClientPlayInputLightingEffect
// [0x010249C2] ( FUNC_Event )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )
// unsigned long                  bUseOverrideStartTime          ( CPF_OptionalParm | CPF_Parm )
// float                          OverrideStartTime              ( CPF_OptionalParm | CPF_Parm )

void APComPlayerController::eventClientPlayInputLightingEffect ( struct FName InPresetName, unsigned long bUseOverrideStartTime, float OverrideStartTime )
{
	static UFunction* pFnClientPlayInputLightingEffect = NULL;

	if ( ! pFnClientPlayInputLightingEffect )
		pFnClientPlayInputLightingEffect = (UFunction*) UObject::GObjObjects()->GetIndex( 43744 );

	APComPlayerController_eventClientPlayInputLightingEffect_Parms ClientPlayInputLightingEffect_Parms;
	memcpy ( &ClientPlayInputLightingEffect_Parms.InPresetName, &InPresetName, 0x8 );
	ClientPlayInputLightingEffect_Parms.bUseOverrideStartTime = bUseOverrideStartTime;
	ClientPlayInputLightingEffect_Parms.OverrideStartTime = OverrideStartTime;

	this->ProcessEvent ( pFnClientPlayInputLightingEffect, &ClientPlayInputLightingEffect_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.TryAutoLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::TryAutoLogin ( )
{
	static UFunction* pFnTryAutoLogin = NULL;

	if ( ! pFnTryAutoLogin )
		pFnTryAutoLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 43742 );

	APComPlayerController_execTryAutoLogin_Parms TryAutoLogin_Parms;

	pFnTryAutoLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTryAutoLogin, &TryAutoLogin_Parms, NULL );

	pFnTryAutoLogin->FunctionFlags |= 0x400;

	return TryAutoLogin_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.TryAutoLoginDelayed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventTryAutoLoginDelayed ( )
{
	static UFunction* pFnTryAutoLoginDelayed = NULL;

	if ( ! pFnTryAutoLoginDelayed )
		pFnTryAutoLoginDelayed = (UFunction*) UObject::GObjObjects()->GetIndex( 43741 );

	APComPlayerController_eventTryAutoLoginDelayed_Parms TryAutoLoginDelayed_Parms;

	this->ProcessEvent ( pFnTryAutoLoginDelayed, &TryAutoLoginDelayed_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.SetAsNewPartyHost
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventSetAsNewPartyHost ( )
{
	static UFunction* pFnSetAsNewPartyHost = NULL;

	if ( ! pFnSetAsNewPartyHost )
		pFnSetAsNewPartyHost = (UFunction*) UObject::GObjObjects()->GetIndex( 43739 );

	APComPlayerController_eventSetAsNewPartyHost_Parms SetAsNewPartyHost_Parms;

	this->ProcessEvent ( pFnSetAsNewPartyHost, &SetAsNewPartyHost_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ToggleGameSessionInvitesAllowed
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bAllowed                       ( CPF_Parm )

void APComPlayerController::eventToggleGameSessionInvitesAllowed ( unsigned long bAllowed )
{
	static UFunction* pFnToggleGameSessionInvitesAllowed = NULL;

	if ( ! pFnToggleGameSessionInvitesAllowed )
		pFnToggleGameSessionInvitesAllowed = (UFunction*) UObject::GObjObjects()->GetIndex( 43736 );

	APComPlayerController_eventToggleGameSessionInvitesAllowed_Parms ToggleGameSessionInvitesAllowed_Parms;
	ToggleGameSessionInvitesAllowed_Parms.bAllowed = bAllowed;

	this->ProcessEvent ( pFnToggleGameSessionInvitesAllowed, &ToggleGameSessionInvitesAllowed_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.TogglePartySessionInvitesAllowed
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bAllowed                       ( CPF_Parm )

void APComPlayerController::eventTogglePartySessionInvitesAllowed ( unsigned long bAllowed )
{
	static UFunction* pFnTogglePartySessionInvitesAllowed = NULL;

	if ( ! pFnTogglePartySessionInvitesAllowed )
		pFnTogglePartySessionInvitesAllowed = (UFunction*) UObject::GObjObjects()->GetIndex( 43732 );

	APComPlayerController_eventTogglePartySessionInvitesAllowed_Parms TogglePartySessionInvitesAllowed_Parms;
	TogglePartySessionInvitesAllowed_Parms.bAllowed = bAllowed;

	this->ProcessEvent ( pFnTogglePartySessionInvitesAllowed, &TogglePartySessionInvitesAllowed_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.UpdateMCTSWithNewPartyInfo
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventUpdateMCTSWithNewPartyInfo ( )
{
	static UFunction* pFnUpdateMCTSWithNewPartyInfo = NULL;

	if ( ! pFnUpdateMCTSWithNewPartyInfo )
		pFnUpdateMCTSWithNewPartyInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 43728 );

	APComPlayerController_eventUpdateMCTSWithNewPartyInfo_Parms UpdateMCTSWithNewPartyInfo_Parms;

	this->ProcessEvent ( pFnUpdateMCTSWithNewPartyInfo, &UpdateMCTSWithNewPartyInfo_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.IsHostOfParty
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::eventIsHostOfParty ( )
{
	static UFunction* pFnIsHostOfParty = NULL;

	if ( ! pFnIsHostOfParty )
		pFnIsHostOfParty = (UFunction*) UObject::GObjObjects()->GetIndex( 43726 );

	APComPlayerController_eventIsHostOfParty_Parms IsHostOfParty_Parms;

	this->ProcessEvent ( pFnIsHostOfParty, &IsHostOfParty_Parms, NULL );

	return IsHostOfParty_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.OnPeoplePickerComplete
// [0x00820002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// TArray< struct FOnlineFriend > PeoplePicked                   ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::OnPeoplePickerComplete ( unsigned long bWasSuccessful, TArray< struct FOnlineFriend > PeoplePicked )
{
	static UFunction* pFnOnPeoplePickerComplete = NULL;

	if ( ! pFnOnPeoplePickerComplete )
		pFnOnPeoplePickerComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 43720 );

	APComPlayerController_execOnPeoplePickerComplete_Parms OnPeoplePickerComplete_Parms;
	OnPeoplePickerComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnPeoplePickerComplete_Parms.PeoplePicked, &PeoplePicked, 0xC );

	this->ProcessEvent ( pFnOnPeoplePickerComplete, &OnPeoplePickerComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnReadFriendsListComplete
// [0x00020002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnReadFriendsListComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadFriendsListComplete = NULL;

	if ( ! pFnOnReadFriendsListComplete )
		pFnOnReadFriendsListComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 43711 );

	APComPlayerController_execOnReadFriendsListComplete_Parms OnReadFriendsListComplete_Parms;
	OnReadFriendsListComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadFriendsListComplete, &OnReadFriendsListComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ShowPeoplePickerUI
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::ShowPeoplePickerUI ( )
{
	static UFunction* pFnShowPeoplePickerUI = NULL;

	if ( ! pFnShowPeoplePickerUI )
		pFnShowPeoplePickerUI = (UFunction*) UObject::GObjObjects()->GetIndex( 43703 );

	APComPlayerController_execShowPeoplePickerUI_Parms ShowPeoplePickerUI_Parms;

	this->ProcessEvent ( pFnShowPeoplePickerUI, &ShowPeoplePickerUI_Parms, NULL );

	return ShowPeoplePickerUI_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.JoinCustomMatchForInviteDelay
// [0x00020002] 
// Parameters infos:

void APComPlayerController::JoinCustomMatchForInviteDelay ( )
{
	static UFunction* pFnJoinCustomMatchForInviteDelay = NULL;

	if ( ! pFnJoinCustomMatchForInviteDelay )
		pFnJoinCustomMatchForInviteDelay = (UFunction*) UObject::GObjObjects()->GetIndex( 43701 );

	APComPlayerController_execJoinCustomMatchForInviteDelay_Parms JoinCustomMatchForInviteDelay_Parms;

	this->ProcessEvent ( pFnJoinCustomMatchForInviteDelay, &JoinCustomMatchForInviteDelay_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.JoinCustomMatchFromInvite
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventJoinCustomMatchFromInvite ( )
{
	static UFunction* pFnJoinCustomMatchFromInvite = NULL;

	if ( ! pFnJoinCustomMatchFromInvite )
		pFnJoinCustomMatchFromInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 43700 );

	APComPlayerController_eventJoinCustomMatchFromInvite_Parms JoinCustomMatchFromInvite_Parms;

	this->ProcessEvent ( pFnJoinCustomMatchFromInvite, &JoinCustomMatchFromInvite_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnJoinSessionForReceivedInviteComplete
// [0x00020102] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnJoinSessionForReceivedInviteComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinSessionForReceivedInviteComplete = NULL;

	if ( ! pFnOnJoinSessionForReceivedInviteComplete )
		pFnOnJoinSessionForReceivedInviteComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 43697 );

	APComPlayerController_execOnJoinSessionForReceivedInviteComplete_Parms OnJoinSessionForReceivedInviteComplete_Parms;
	memcpy ( &OnJoinSessionForReceivedInviteComplete_Parms.SessionName, &SessionName, 0x8 );
	OnJoinSessionForReceivedInviteComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinSessionForReceivedInviteComplete, &OnJoinSessionForReceivedInviteComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnPrivilegeCheckForGameSessionJoin
// [0x00820102] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// unsigned char                  PrivilegeLevel                 ( CPF_Parm )
// unsigned long                  bDiffersFromHint               ( CPF_Parm )

void APComPlayerController::OnPrivilegeCheckForGameSessionJoin ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint )
{
	static UFunction* pFnOnPrivilegeCheckForGameSessionJoin = NULL;

	if ( ! pFnOnPrivilegeCheckForGameSessionJoin )
		pFnOnPrivilegeCheckForGameSessionJoin = (UFunction*) UObject::GObjObjects()->GetIndex( 43691 );

	APComPlayerController_execOnPrivilegeCheckForGameSessionJoin_Parms OnPrivilegeCheckForGameSessionJoin_Parms;
	OnPrivilegeCheckForGameSessionJoin_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeCheckForGameSessionJoin_Parms.Privilege = Privilege;
	OnPrivilegeCheckForGameSessionJoin_Parms.PrivilegeLevel = PrivilegeLevel;
	OnPrivilegeCheckForGameSessionJoin_Parms.bDiffersFromHint = bDiffersFromHint;

	this->ProcessEvent ( pFnOnPrivilegeCheckForGameSessionJoin, &OnPrivilegeCheckForGameSessionJoin_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnPrivilegeLevelCheckedCompleteForPartyJoin
// [0x00820102] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// unsigned char                  PrivilegeLevel                 ( CPF_Parm )
// unsigned long                  bDiffersFromHint               ( CPF_Parm )

void APComPlayerController::OnPrivilegeLevelCheckedCompleteForPartyJoin ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint )
{
	static UFunction* pFnOnPrivilegeLevelCheckedCompleteForPartyJoin = NULL;

	if ( ! pFnOnPrivilegeLevelCheckedCompleteForPartyJoin )
		pFnOnPrivilegeLevelCheckedCompleteForPartyJoin = (UFunction*) UObject::GObjObjects()->GetIndex( 43685 );

	APComPlayerController_execOnPrivilegeLevelCheckedCompleteForPartyJoin_Parms OnPrivilegeLevelCheckedCompleteForPartyJoin_Parms;
	OnPrivilegeLevelCheckedCompleteForPartyJoin_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeLevelCheckedCompleteForPartyJoin_Parms.Privilege = Privilege;
	OnPrivilegeLevelCheckedCompleteForPartyJoin_Parms.PrivilegeLevel = PrivilegeLevel;
	OnPrivilegeLevelCheckedCompleteForPartyJoin_Parms.bDiffersFromHint = bDiffersFromHint;

	this->ProcessEvent ( pFnOnPrivilegeLevelCheckedCompleteForPartyJoin, &OnPrivilegeLevelCheckedCompleteForPartyJoin_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnGameDestroyedForPartyJoin
// [0x00020102] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnGameDestroyedForPartyJoin ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnGameDestroyedForPartyJoin = NULL;

	if ( ! pFnOnGameDestroyedForPartyJoin )
		pFnOnGameDestroyedForPartyJoin = (UFunction*) UObject::GObjObjects()->GetIndex( 43680 );

	APComPlayerController_execOnGameDestroyedForPartyJoin_Parms OnGameDestroyedForPartyJoin_Parms;
	memcpy ( &OnGameDestroyedForPartyJoin_Parms.SessionName, &SessionName, 0x8 );
	OnGameDestroyedForPartyJoin_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnGameDestroyedForPartyJoin, &OnGameDestroyedForPartyJoin_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnAlternatePrivilegeLevelCheckedComplete
// [0x00020102] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// unsigned char                  PrivilegeLevel                 ( CPF_Parm )
// unsigned long                  bDiffersFromHint               ( CPF_Parm )

void APComPlayerController::OnAlternatePrivilegeLevelCheckedComplete ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint )
{
	static UFunction* pFnOnAlternatePrivilegeLevelCheckedComplete = NULL;

	if ( ! pFnOnAlternatePrivilegeLevelCheckedComplete )
		pFnOnAlternatePrivilegeLevelCheckedComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 43675 );

	APComPlayerController_execOnAlternatePrivilegeLevelCheckedComplete_Parms OnAlternatePrivilegeLevelCheckedComplete_Parms;
	OnAlternatePrivilegeLevelCheckedComplete_Parms.LocalUserNum = LocalUserNum;
	OnAlternatePrivilegeLevelCheckedComplete_Parms.Privilege = Privilege;
	OnAlternatePrivilegeLevelCheckedComplete_Parms.PrivilegeLevel = PrivilegeLevel;
	OnAlternatePrivilegeLevelCheckedComplete_Parms.bDiffersFromHint = bDiffersFromHint;

	this->ProcessEvent ( pFnOnAlternatePrivilegeLevelCheckedComplete, &OnAlternatePrivilegeLevelCheckedComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnGameInviteAccepted
// [0x00420102] 
// Parameters infos:
// struct FOnlineGameSearchResult InviteResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void APComPlayerController::OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = (UFunction*) UObject::GObjObjects()->GetIndex( 43668 );

	APComPlayerController_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );

	if ( InviteResult )
		memcpy ( InviteResult, &OnGameInviteAccepted_Parms.InviteResult, 0x8 );
};

// Function PlatformCommon.PComPlayerController.OnPartySessionDestroyed
// [0x00020102] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnPartySessionDestroyed ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnPartySessionDestroyed = NULL;

	if ( ! pFnOnPartySessionDestroyed )
		pFnOnPartySessionDestroyed = (UFunction*) UObject::GObjObjects()->GetIndex( 43665 );

	APComPlayerController_execOnPartySessionDestroyed_Parms OnPartySessionDestroyed_Parms;
	memcpy ( &OnPartySessionDestroyed_Parms.SessionName, &SessionName, 0x8 );
	OnPartySessionDestroyed_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnPartySessionDestroyed, &OnPartySessionDestroyed_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.DestroyPartySession
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:

void APComPlayerController::DestroyPartySession ( )
{
	static UFunction* pFnDestroyPartySession = NULL;

	if ( ! pFnDestroyPartySession )
		pFnDestroyPartySession = (UFunction*) UObject::GObjObjects()->GetIndex( 43664 );

	APComPlayerController_execDestroyPartySession_Parms DestroyPartySession_Parms;

	this->ProcessEvent ( pFnDestroyPartySession, &DestroyPartySession_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.InvitePlayerToParty
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            InPlayerId                     ( CPF_Parm )

void APComPlayerController::eventInvitePlayerToParty ( struct FUniqueNetId InPlayerId )
{
	static UFunction* pFnInvitePlayerToParty = NULL;

	if ( ! pFnInvitePlayerToParty )
		pFnInvitePlayerToParty = (UFunction*) UObject::GObjObjects()->GetIndex( 43662 );

	APComPlayerController_eventInvitePlayerToParty_Parms InvitePlayerToParty_Parms;
	memcpy ( &InvitePlayerToParty_Parms.InPlayerId, &InPlayerId, 0x8 );

	this->ProcessEvent ( pFnInvitePlayerToParty, &InvitePlayerToParty_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.InvitePlayerToPartyByName
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// struct FString                 InPlayerName                   ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::eventInvitePlayerToPartyByName ( struct FString InPlayerName )
{
	static UFunction* pFnInvitePlayerToPartyByName = NULL;

	if ( ! pFnInvitePlayerToPartyByName )
		pFnInvitePlayerToPartyByName = (UFunction*) UObject::GObjObjects()->GetIndex( 43659 );

	APComPlayerController_eventInvitePlayerToPartyByName_Parms InvitePlayerToPartyByName_Parms;
	memcpy ( &InvitePlayerToPartyByName_Parms.InPlayerName, &InPlayerName, 0xC );

	this->ProcessEvent ( pFnInvitePlayerToPartyByName, &InvitePlayerToPartyByName_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnCreatePartySessionComplete
// [0x00020102] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bSuccessful                    ( CPF_Parm )

void APComPlayerController::OnCreatePartySessionComplete ( struct FName SessionName, unsigned long bSuccessful )
{
	static UFunction* pFnOnCreatePartySessionComplete = NULL;

	if ( ! pFnOnCreatePartySessionComplete )
		pFnOnCreatePartySessionComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 43656 );

	APComPlayerController_execOnCreatePartySessionComplete_Parms OnCreatePartySessionComplete_Parms;
	memcpy ( &OnCreatePartySessionComplete_Parms.SessionName, &SessionName, 0x8 );
	OnCreatePartySessionComplete_Parms.bSuccessful = bSuccessful;

	this->ProcessEvent ( pFnOnCreatePartySessionComplete, &OnCreatePartySessionComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.CreatePartySession
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:

void APComPlayerController::CreatePartySession ( )
{
	static UFunction* pFnCreatePartySession = NULL;

	if ( ! pFnCreatePartySession )
		pFnCreatePartySession = (UFunction*) UObject::GObjObjects()->GetIndex( 43654 );

	APComPlayerController_execCreatePartySession_Parms CreatePartySession_Parms;

	this->ProcessEvent ( pFnCreatePartySession, &CreatePartySession_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.UnregisterP2PEnemiesForCustomMatch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// TArray< struct FUniqueNetId >  EnemyIds                       ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::eventUnregisterP2PEnemiesForCustomMatch ( TArray< struct FUniqueNetId > EnemyIds )
{
	static UFunction* pFnUnregisterP2PEnemiesForCustomMatch = NULL;

	if ( ! pFnUnregisterP2PEnemiesForCustomMatch )
		pFnUnregisterP2PEnemiesForCustomMatch = (UFunction*) UObject::GObjObjects()->GetIndex( 43650 );

	APComPlayerController_eventUnregisterP2PEnemiesForCustomMatch_Parms UnregisterP2PEnemiesForCustomMatch_Parms;
	memcpy ( &UnregisterP2PEnemiesForCustomMatch_Parms.EnemyIds, &EnemyIds, 0xC );

	this->ProcessEvent ( pFnUnregisterP2PEnemiesForCustomMatch, &UnregisterP2PEnemiesForCustomMatch_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnGetVoicePermissionsForUsersComplete
// [0x00020102] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// TArray< struct FPermissionsResult > Results                        ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::OnGetVoicePermissionsForUsersComplete ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResult > Results )
{
	static UFunction* pFnOnGetVoicePermissionsForUsersComplete = NULL;

	if ( ! pFnOnGetVoicePermissionsForUsersComplete )
		pFnOnGetVoicePermissionsForUsersComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 43642 );

	APComPlayerController_execOnGetVoicePermissionsForUsersComplete_Parms OnGetVoicePermissionsForUsersComplete_Parms;
	OnGetVoicePermissionsForUsersComplete_Parms.LocalUserNum = LocalUserNum;
	OnGetVoicePermissionsForUsersComplete_Parms.Privilege = Privilege;
	memcpy ( &OnGetVoicePermissionsForUsersComplete_Parms.Results, &Results, 0xC );

	this->ProcessEvent ( pFnOnGetVoicePermissionsForUsersComplete, &OnGetVoicePermissionsForUsersComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnGetSessionMemberInfoComplete
// [0x00020102] 
// Parameters infos:
// TArray< struct FSessionMemberInfo > SessionListInfo                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnGetSessionMemberInfoComplete ( TArray< struct FSessionMemberInfo > SessionListInfo, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnGetSessionMemberInfoComplete = NULL;

	if ( ! pFnOnGetSessionMemberInfoComplete )
		pFnOnGetSessionMemberInfoComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 43638 );

	APComPlayerController_execOnGetSessionMemberInfoComplete_Parms OnGetSessionMemberInfoComplete_Parms;
	memcpy ( &OnGetSessionMemberInfoComplete_Parms.SessionListInfo, &SessionListInfo, 0xC );
	OnGetSessionMemberInfoComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnGetSessionMemberInfoComplete, &OnGetSessionMemberInfoComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnGetUserConnectionInfoComplete
// [0x00020102] 
// Parameters infos:
// TArray< struct FSessionMemberInfo > SessionListInfo                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnGetUserConnectionInfoComplete ( TArray< struct FSessionMemberInfo > SessionListInfo, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnGetUserConnectionInfoComplete = NULL;

	if ( ! pFnOnGetUserConnectionInfoComplete )
		pFnOnGetUserConnectionInfoComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 43634 );

	APComPlayerController_execOnGetUserConnectionInfoComplete_Parms OnGetUserConnectionInfoComplete_Parms;
	memcpy ( &OnGetUserConnectionInfoComplete_Parms.SessionListInfo, &SessionListInfo, 0xC );
	OnGetUserConnectionInfoComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnGetUserConnectionInfoComplete, &OnGetUserConnectionInfoComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.GetUserNamesForPS4P2PConnections
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// TArray< struct FString >       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FString > APComPlayerController::GetUserNamesForPS4P2PConnections ( )
{
	static UFunction* pFnGetUserNamesForPS4P2PConnections = NULL;

	if ( ! pFnGetUserNamesForPS4P2PConnections )
		pFnGetUserNamesForPS4P2PConnections = (UFunction*) UObject::GObjObjects()->GetIndex( 43631 );

	APComPlayerController_execGetUserNamesForPS4P2PConnections_Parms GetUserNamesForPS4P2PConnections_Parms;

	pFnGetUserNamesForPS4P2PConnections->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUserNamesForPS4P2PConnections, &GetUserNamesForPS4P2PConnections_Parms, NULL );

	pFnGetUserNamesForPS4P2PConnections->FunctionFlags |= 0x400;

	return GetUserNamesForPS4P2PConnections_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.CloseConnectionsToInvalidPeers
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// TArray< struct FSessionMemberInfo > SessionListInfo                ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::CloseConnectionsToInvalidPeers ( TArray< struct FSessionMemberInfo > SessionListInfo )
{
	static UFunction* pFnCloseConnectionsToInvalidPeers = NULL;

	if ( ! pFnCloseConnectionsToInvalidPeers )
		pFnCloseConnectionsToInvalidPeers = (UFunction*) UObject::GObjObjects()->GetIndex( 43628 );

	APComPlayerController_execCloseConnectionsToInvalidPeers_Parms CloseConnectionsToInvalidPeers_Parms;
	memcpy ( &CloseConnectionsToInvalidPeers_Parms.SessionListInfo, &SessionListInfo, 0xC );

	pFnCloseConnectionsToInvalidPeers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseConnectionsToInvalidPeers, &CloseConnectionsToInvalidPeers_Parms, NULL );

	pFnCloseConnectionsToInvalidPeers->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.EstablishPeers
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:

void APComPlayerController::EstablishPeers ( )
{
	static UFunction* pFnEstablishPeers = NULL;

	if ( ! pFnEstablishPeers )
		pFnEstablishPeers = (UFunction*) UObject::GObjObjects()->GetIndex( 43627 );

	APComPlayerController_execEstablishPeers_Parms EstablishPeers_Parms;

	this->ProcessEvent ( pFnEstablishPeers, &EstablishPeers_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.LostP2PConnection
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )

void APComPlayerController::eventLostP2PConnection ( struct FUniqueNetId UniqueId )
{
	static UFunction* pFnLostP2PConnection = NULL;

	if ( ! pFnLostP2PConnection )
		pFnLostP2PConnection = (UFunction*) UObject::GObjObjects()->GetIndex( 43625 );

	APComPlayerController_eventLostP2PConnection_Parms LostP2PConnection_Parms;
	memcpy ( &LostP2PConnection_Parms.UniqueId, &UniqueId, 0x8 );

	this->ProcessEvent ( pFnLostP2PConnection, &LostP2PConnection_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.GetControllerIdFromNetId
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// int                            ControllerId                   ( CPF_Parm | CPF_OutParm )

void APComPlayerController::eventGetControllerIdFromNetId ( struct FUniqueNetId PlayerID, int* ControllerId )
{
	static UFunction* pFnGetControllerIdFromNetId = NULL;

	if ( ! pFnGetControllerIdFromNetId )
		pFnGetControllerIdFromNetId = (UFunction*) UObject::GObjObjects()->GetIndex( 43622 );

	APComPlayerController_eventGetControllerIdFromNetId_Parms GetControllerIdFromNetId_Parms;
	memcpy ( &GetControllerIdFromNetId_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnGetControllerIdFromNetId, &GetControllerIdFromNetId_Parms, NULL );

	if ( ControllerId )
		*ControllerId = GetControllerIdFromNetId_Parms.ControllerId;
};

// Function PlatformCommon.PComPlayerController.PairLoggedInUserAndCurrentController
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventPairLoggedInUserAndCurrentController ( )
{
	static UFunction* pFnPairLoggedInUserAndCurrentController = NULL;

	if ( ! pFnPairLoggedInUserAndCurrentController )
		pFnPairLoggedInUserAndCurrentController = (UFunction*) UObject::GObjObjects()->GetIndex( 43619 );

	APComPlayerController_eventPairLoggedInUserAndCurrentController_Parms PairLoggedInUserAndCurrentController_Parms;

	this->ProcessEvent ( pFnPairLoggedInUserAndCurrentController, &PairLoggedInUserAndCurrentController_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.LogoutPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::LogoutPlayer ( )
{
	static UFunction* pFnLogoutPlayer = NULL;

	if ( ! pFnLogoutPlayer )
		pFnLogoutPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 43618 );

	APComPlayerController_execLogoutPlayer_Parms LogoutPlayer_Parms;

	pFnLogoutPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogoutPlayer, &LogoutPlayer_Parms, NULL );

	pFnLogoutPlayer->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.IsInGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::IsInGame ( )
{
	static UFunction* pFnIsInGame = NULL;

	if ( ! pFnIsInGame )
		pFnIsInGame = (UFunction*) UObject::GObjObjects()->GetIndex( 43616 );

	APComPlayerController_execIsInGame_Parms IsInGame_Parms;

	pFnIsInGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsInGame, &IsInGame_Parms, NULL );

	pFnIsInGame->FunctionFlags |= 0x400;

	return IsInGame_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.IsPackageInstalled
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::IsPackageInstalled ( )
{
	static UFunction* pFnIsPackageInstalled = NULL;

	if ( ! pFnIsPackageInstalled )
		pFnIsPackageInstalled = (UFunction*) UObject::GObjObjects()->GetIndex( 43614 );

	APComPlayerController_execIsPackageInstalled_Parms IsPackageInstalled_Parms;

	pFnIsPackageInstalled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPackageInstalled, &IsPackageInstalled_Parms, NULL );

	pFnIsPackageInstalled->FunctionFlags |= 0x400;

	return IsPackageInstalled_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.OnMultiplayerSessionChange
// [0x00020002] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FSessionUpdateInfo      SessionChanges                 ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::OnMultiplayerSessionChange ( struct FName SessionName, struct FSessionUpdateInfo SessionChanges )
{
	static UFunction* pFnOnMultiplayerSessionChange = NULL;

	if ( ! pFnOnMultiplayerSessionChange )
		pFnOnMultiplayerSessionChange = (UFunction*) UObject::GObjObjects()->GetIndex( 43606 );

	APComPlayerController_execOnMultiplayerSessionChange_Parms OnMultiplayerSessionChange_Parms;
	memcpy ( &OnMultiplayerSessionChange_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnMultiplayerSessionChange_Parms.SessionChanges, &SessionChanges, 0x1C );

	this->ProcessEvent ( pFnOnMultiplayerSessionChange, &OnMultiplayerSessionChange_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ClearOnlineDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventClearOnlineDelegates ( )
{
	static UFunction* pFnClearOnlineDelegates = NULL;

	if ( ! pFnClearOnlineDelegates )
		pFnClearOnlineDelegates = (UFunction*) UObject::GObjObjects()->GetIndex( 43603 );

	APComPlayerController_eventClearOnlineDelegates_Parms ClearOnlineDelegates_Parms;

	this->ProcessEvent ( pFnClearOnlineDelegates, &ClearOnlineDelegates_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.RegisterOnlineDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventRegisterOnlineDelegates ( )
{
	static UFunction* pFnRegisterOnlineDelegates = NULL;

	if ( ! pFnRegisterOnlineDelegates )
		pFnRegisterOnlineDelegates = (UFunction*) UObject::GObjObjects()->GetIndex( 43600 );

	APComPlayerController_eventRegisterOnlineDelegates_Parms RegisterOnlineDelegates_Parms;

	this->ProcessEvent ( pFnRegisterOnlineDelegates, &RegisterOnlineDelegates_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ClientRestablishP2PConnections
// [0x010201C2] 
// Parameters infos:

void APComPlayerController::ClientRestablishP2PConnections ( )
{
	static UFunction* pFnClientRestablishP2PConnections = NULL;

	if ( ! pFnClientRestablishP2PConnections )
		pFnClientRestablishP2PConnections = (UFunction*) UObject::GObjObjects()->GetIndex( 43599 );

	APComPlayerController_execClientRestablishP2PConnections_Parms ClientRestablishP2PConnections_Parms;

	this->ProcessEvent ( pFnClientRestablishP2PConnections, &ClientRestablishP2PConnections_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ServerReEstablishP2PConnections
// [0x002200C2] 
// Parameters infos:

void APComPlayerController::ServerReEstablishP2PConnections ( )
{
	static UFunction* pFnServerReEstablishP2PConnections = NULL;

	if ( ! pFnServerReEstablishP2PConnections )
		pFnServerReEstablishP2PConnections = (UFunction*) UObject::GObjObjects()->GetIndex( 43597 );

	APComPlayerController_execServerReEstablishP2PConnections_Parms ServerReEstablishP2PConnections_Parms;

	this->ProcessEvent ( pFnServerReEstablishP2PConnections, &ServerReEstablishP2PConnections_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.IsReconnect
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::IsReconnect ( )
{
	static UFunction* pFnIsReconnect = NULL;

	if ( ! pFnIsReconnect )
		pFnIsReconnect = (UFunction*) UObject::GObjObjects()->GetIndex( 43595 );

	APComPlayerController_execIsReconnect_Parms IsReconnect_Parms;

	pFnIsReconnect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsReconnect, &IsReconnect_Parms, NULL );

	pFnIsReconnect->FunctionFlags |= 0x400;

	return IsReconnect_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.RestablishVoiceForReconnect
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventRestablishVoiceForReconnect ( )
{
	static UFunction* pFnRestablishVoiceForReconnect = NULL;

	if ( ! pFnRestablishVoiceForReconnect )
		pFnRestablishVoiceForReconnect = (UFunction*) UObject::GObjObjects()->GetIndex( 43594 );

	APComPlayerController_eventRestablishVoiceForReconnect_Parms RestablishVoiceForReconnect_Parms;

	this->ProcessEvent ( pFnRestablishVoiceForReconnect, &RestablishVoiceForReconnect_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnJoinOnlineGameCompleteForReceivedSessionInfo
// [0x00020102] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnJoinOnlineGameCompleteForReceivedSessionInfo ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinOnlineGameCompleteForReceivedSessionInfo = NULL;

	if ( ! pFnOnJoinOnlineGameCompleteForReceivedSessionInfo )
		pFnOnJoinOnlineGameCompleteForReceivedSessionInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 43590 );

	APComPlayerController_execOnJoinOnlineGameCompleteForReceivedSessionInfo_Parms OnJoinOnlineGameCompleteForReceivedSessionInfo_Parms;
	memcpy ( &OnJoinOnlineGameCompleteForReceivedSessionInfo_Parms.SessionName, &SessionName, 0x8 );
	OnJoinOnlineGameCompleteForReceivedSessionInfo_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinOnlineGameCompleteForReceivedSessionInfo, &OnJoinOnlineGameCompleteForReceivedSessionInfo_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ReceiveSessionInfo
// [0x010209C2] ( FUNC_Event )
// Parameters infos:
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )
// unsigned char                  ConsoleType                    ( CPF_Parm )

void APComPlayerController::eventReceiveSessionInfo ( unsigned char* PlatformSpecificInfo, unsigned char ConsoleType )
{
	static UFunction* pFnReceiveSessionInfo = NULL;

	if ( ! pFnReceiveSessionInfo )
		pFnReceiveSessionInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 43586 );

	APComPlayerController_eventReceiveSessionInfo_Parms ReceiveSessionInfo_Parms;
	memcpy ( &ReceiveSessionInfo_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );
	ReceiveSessionInfo_Parms.ConsoleType = ConsoleType;

	this->ProcessEvent ( pFnReceiveSessionInfo, &ReceiveSessionInfo_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnCreateOnlineGameComplete
// [0x00020102] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCreateOnlineGameComplete = NULL;

	if ( ! pFnOnCreateOnlineGameComplete )
		pFnOnCreateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 43581 );

	APComPlayerController_execOnCreateOnlineGameComplete_Parms OnCreateOnlineGameComplete_Parms;
	memcpy ( &OnCreateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnCreateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCreateOnlineGameComplete, &OnCreateOnlineGameComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ChooseThisControllerForSessionScout
// [0x00424A02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:
// unsigned long                  bCustomMatch                   ( CPF_Parm )
// int                            MaxPlayers                     ( CPF_Parm )
// unsigned long                  bPrivate                       ( CPF_Parm )
// TArray< struct FUniqueNetId >  ReservedMembers                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APComPlayerController::ChooseThisControllerForSessionScout ( unsigned long bCustomMatch, int MaxPlayers, unsigned long bPrivate, TArray< struct FUniqueNetId >* ReservedMembers )
{
	static UFunction* pFnChooseThisControllerForSessionScout = NULL;

	if ( ! pFnChooseThisControllerForSessionScout )
		pFnChooseThisControllerForSessionScout = (UFunction*) UObject::GObjObjects()->GetIndex( 43574 );

	APComPlayerController_execChooseThisControllerForSessionScout_Parms ChooseThisControllerForSessionScout_Parms;
	ChooseThisControllerForSessionScout_Parms.bCustomMatch = bCustomMatch;
	ChooseThisControllerForSessionScout_Parms.MaxPlayers = MaxPlayers;
	ChooseThisControllerForSessionScout_Parms.bPrivate = bPrivate;

	this->ProcessEvent ( pFnChooseThisControllerForSessionScout, &ChooseThisControllerForSessionScout_Parms, NULL );

	if ( ReservedMembers )
		memcpy ( ReservedMembers, &ChooseThisControllerForSessionScout_Parms.ReservedMembers, 0xC );
};

// Function PlatformCommon.PComPlayerController.OnDestroyOnlineGameComplete
// [0x00020002] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDestroyOnlineGameComplete = NULL;

	if ( ! pFnOnDestroyOnlineGameComplete )
		pFnOnDestroyOnlineGameComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 43571 );

	APComPlayerController_execOnDestroyOnlineGameComplete_Parms OnDestroyOnlineGameComplete_Parms;
	memcpy ( &OnDestroyOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnDestroyOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDestroyOnlineGameComplete, &OnDestroyOnlineGameComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnEndOnlineGameComplete
// [0x00020002] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnEndOnlineGameComplete = NULL;

	if ( ! pFnOnEndOnlineGameComplete )
		pFnOnEndOnlineGameComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 43568 );

	APComPlayerController_execOnEndOnlineGameComplete_Parms OnEndOnlineGameComplete_Parms;
	memcpy ( &OnEndOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnEndOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnEndOnlineGameComplete, &OnEndOnlineGameComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.FinishQuitToMainMenu
// [0x00020002] 
// Parameters infos:

void APComPlayerController::FinishQuitToMainMenu ( )
{
	static UFunction* pFnFinishQuitToMainMenu = NULL;

	if ( ! pFnFinishQuitToMainMenu )
		pFnFinishQuitToMainMenu = (UFunction*) UObject::GObjObjects()->GetIndex( 43567 );

	APComPlayerController_execFinishQuitToMainMenu_Parms FinishQuitToMainMenu_Parms;

	this->ProcessEvent ( pFnFinishQuitToMainMenu, &FinishQuitToMainMenu_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.CleanupOnlineSubsystemSession
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bWasFromMenu                   ( CPF_Parm )

bool APComPlayerController::CleanupOnlineSubsystemSession ( unsigned long bWasFromMenu )
{
	static UFunction* pFnCleanupOnlineSubsystemSession = NULL;

	if ( ! pFnCleanupOnlineSubsystemSession )
		pFnCleanupOnlineSubsystemSession = (UFunction*) UObject::GObjObjects()->GetIndex( 43564 );

	APComPlayerController_execCleanupOnlineSubsystemSession_Parms CleanupOnlineSubsystemSession_Parms;
	CleanupOnlineSubsystemSession_Parms.bWasFromMenu = bWasFromMenu;

	this->ProcessEvent ( pFnCleanupOnlineSubsystemSession, &CleanupOnlineSubsystemSession_Parms, NULL );

	return CleanupOnlineSubsystemSession_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.QuitToMainMenu
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventQuitToMainMenu ( )
{
	static UFunction* pFnQuitToMainMenu = NULL;

	if ( ! pFnQuitToMainMenu )
		pFnQuitToMainMenu = (UFunction*) UObject::GObjObjects()->GetIndex( 43563 );

	APComPlayerController_eventQuitToMainMenu_Parms QuitToMainMenu_Parms;

	this->ProcessEvent ( pFnQuitToMainMenu, &QuitToMainMenu_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.AcknowledgePossession
// [0x00020002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void APComPlayerController::AcknowledgePossession ( class APawn* P )
{
	static UFunction* pFnAcknowledgePossession = NULL;

	if ( ! pFnAcknowledgePossession )
		pFnAcknowledgePossession = (UFunction*) UObject::GObjObjects()->GetIndex( 43561 );

	APComPlayerController_execAcknowledgePossession_Parms AcknowledgePossession_Parms;
	AcknowledgePossession_Parms.P = P;

	this->ProcessEvent ( pFnAcknowledgePossession, &AcknowledgePossession_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.LeaveMatchQueue
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::LeaveMatchQueue ( )
{
	static UFunction* pFnLeaveMatchQueue = NULL;

	if ( ! pFnLeaveMatchQueue )
		pFnLeaveMatchQueue = (UFunction*) UObject::GObjObjects()->GetIndex( 43560 );

	APComPlayerController_execLeaveMatchQueue_Parms LeaveMatchQueue_Parms;

	pFnLeaveMatchQueue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLeaveMatchQueue, &LeaveMatchQueue_Parms, NULL );

	pFnLeaveMatchQueue->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.UpdatePartyUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::UpdatePartyUI ( )
{
	static UFunction* pFnUpdatePartyUI = NULL;

	if ( ! pFnUpdatePartyUI )
		pFnUpdatePartyUI = (UFunction*) UObject::GObjObjects()->GetIndex( 43559 );

	APComPlayerController_execUpdatePartyUI_Parms UpdatePartyUI_Parms;

	pFnUpdatePartyUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePartyUI, &UpdatePartyUI_Parms, NULL );

	pFnUpdatePartyUI->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.TryOpenPartyUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::TryOpenPartyUI ( )
{
	static UFunction* pFnTryOpenPartyUI = NULL;

	if ( ! pFnTryOpenPartyUI )
		pFnTryOpenPartyUI = (UFunction*) UObject::GObjObjects()->GetIndex( 43558 );

	APComPlayerController_execTryOpenPartyUI_Parms TryOpenPartyUI_Parms;

	pFnTryOpenPartyUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTryOpenPartyUI, &TryOpenPartyUI_Parms, NULL );

	pFnTryOpenPartyUI->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShowCustomGameDisallowedPopup
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ShowCustomGameDisallowedPopup ( )
{
	static UFunction* pFnShowCustomGameDisallowedPopup = NULL;

	if ( ! pFnShowCustomGameDisallowedPopup )
		pFnShowCustomGameDisallowedPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 43557 );

	APComPlayerController_execShowCustomGameDisallowedPopup_Parms ShowCustomGameDisallowedPopup_Parms;

	pFnShowCustomGameDisallowedPopup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowCustomGameDisallowedPopup, &ShowCustomGameDisallowedPopup_Parms, NULL );

	pFnShowCustomGameDisallowedPopup->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShowPackageNotInstalledForPartyInviteWarning
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ShowPackageNotInstalledForPartyInviteWarning ( )
{
	static UFunction* pFnShowPackageNotInstalledForPartyInviteWarning = NULL;

	if ( ! pFnShowPackageNotInstalledForPartyInviteWarning )
		pFnShowPackageNotInstalledForPartyInviteWarning = (UFunction*) UObject::GObjObjects()->GetIndex( 43556 );

	APComPlayerController_execShowPackageNotInstalledForPartyInviteWarning_Parms ShowPackageNotInstalledForPartyInviteWarning_Parms;

	pFnShowPackageNotInstalledForPartyInviteWarning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPackageNotInstalledForPartyInviteWarning, &ShowPackageNotInstalledForPartyInviteWarning_Parms, NULL );

	pFnShowPackageNotInstalledForPartyInviteWarning->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShowPartyNoLongerAvailableWarning
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ShowPartyNoLongerAvailableWarning ( )
{
	static UFunction* pFnShowPartyNoLongerAvailableWarning = NULL;

	if ( ! pFnShowPartyNoLongerAvailableWarning )
		pFnShowPartyNoLongerAvailableWarning = (UFunction*) UObject::GObjObjects()->GetIndex( 43555 );

	APComPlayerController_execShowPartyNoLongerAvailableWarning_Parms ShowPartyNoLongerAvailableWarning_Parms;

	pFnShowPartyNoLongerAvailableWarning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPartyNoLongerAvailableWarning, &ShowPartyNoLongerAvailableWarning_Parms, NULL );

	pFnShowPartyNoLongerAvailableWarning->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShowPartyFullWarning
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bPartySession                  ( CPF_Parm )

void APComPlayerController::ShowPartyFullWarning ( unsigned long bPartySession )
{
	static UFunction* pFnShowPartyFullWarning = NULL;

	if ( ! pFnShowPartyFullWarning )
		pFnShowPartyFullWarning = (UFunction*) UObject::GObjObjects()->GetIndex( 43553 );

	APComPlayerController_execShowPartyFullWarning_Parms ShowPartyFullWarning_Parms;
	ShowPartyFullWarning_Parms.bPartySession = bPartySession;

	pFnShowPartyFullWarning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPartyFullWarning, &ShowPartyFullWarning_Parms, NULL );

	pFnShowPartyFullWarning->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShowUnableToReadFriendsListWarning
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ShowUnableToReadFriendsListWarning ( )
{
	static UFunction* pFnShowUnableToReadFriendsListWarning = NULL;

	if ( ! pFnShowUnableToReadFriendsListWarning )
		pFnShowUnableToReadFriendsListWarning = (UFunction*) UObject::GObjObjects()->GetIndex( 43552 );

	APComPlayerController_execShowUnableToReadFriendsListWarning_Parms ShowUnableToReadFriendsListWarning_Parms;

	pFnShowUnableToReadFriendsListWarning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowUnableToReadFriendsListWarning, &ShowUnableToReadFriendsListWarning_Parms, NULL );

	pFnShowUnableToReadFriendsListWarning->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShowNoFriendsForPartyInviteWarning
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ShowNoFriendsForPartyInviteWarning ( )
{
	static UFunction* pFnShowNoFriendsForPartyInviteWarning = NULL;

	if ( ! pFnShowNoFriendsForPartyInviteWarning )
		pFnShowNoFriendsForPartyInviteWarning = (UFunction*) UObject::GObjObjects()->GetIndex( 43551 );

	APComPlayerController_execShowNoFriendsForPartyInviteWarning_Parms ShowNoFriendsForPartyInviteWarning_Parms;

	pFnShowNoFriendsForPartyInviteWarning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowNoFriendsForPartyInviteWarning, &ShowNoFriendsForPartyInviteWarning_Parms, NULL );

	pFnShowNoFriendsForPartyInviteWarning->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShowControllerDisconnectedWarning
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ShowControllerDisconnectedWarning ( )
{
	static UFunction* pFnShowControllerDisconnectedWarning = NULL;

	if ( ! pFnShowControllerDisconnectedWarning )
		pFnShowControllerDisconnectedWarning = (UFunction*) UObject::GObjObjects()->GetIndex( 43550 );

	APComPlayerController_execShowControllerDisconnectedWarning_Parms ShowControllerDisconnectedWarning_Parms;

	pFnShowControllerDisconnectedWarning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowControllerDisconnectedWarning, &ShowControllerDisconnectedWarning_Parms, NULL );

	pFnShowControllerDisconnectedWarning->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShouldPartySessionsBePublic
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::ShouldPartySessionsBePublic ( )
{
	static UFunction* pFnShouldPartySessionsBePublic = NULL;

	if ( ! pFnShouldPartySessionsBePublic )
		pFnShouldPartySessionsBePublic = (UFunction*) UObject::GObjObjects()->GetIndex( 43548 );

	APComPlayerController_execShouldPartySessionsBePublic_Parms ShouldPartySessionsBePublic_Parms;

	this->ProcessEvent ( pFnShouldPartySessionsBePublic, &ShouldPartySessionsBePublic_Parms, NULL );

	return ShouldPartySessionsBePublic_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.ArePartySessionInvitesAllowed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::ArePartySessionInvitesAllowed ( )
{
	static UFunction* pFnArePartySessionInvitesAllowed = NULL;

	if ( ! pFnArePartySessionInvitesAllowed )
		pFnArePartySessionInvitesAllowed = (UFunction*) UObject::GObjObjects()->GetIndex( 43546 );

	APComPlayerController_execArePartySessionInvitesAllowed_Parms ArePartySessionInvitesAllowed_Parms;

	pFnArePartySessionInvitesAllowed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnArePartySessionInvitesAllowed, &ArePartySessionInvitesAllowed_Parms, NULL );

	pFnArePartySessionInvitesAllowed->FunctionFlags |= 0x400;

	return ArePartySessionInvitesAllowed_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.UpdateMCTSSession
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// struct FString                 SessionGuid                    ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsHost                        ( CPF_Parm )

void APComPlayerController::UpdateMCTSSession ( struct FString SessionGuid, unsigned long bIsHost )
{
	static UFunction* pFnUpdateMCTSSession = NULL;

	if ( ! pFnUpdateMCTSSession )
		pFnUpdateMCTSSession = (UFunction*) UObject::GObjObjects()->GetIndex( 43543 );

	APComPlayerController_execUpdateMCTSSession_Parms UpdateMCTSSession_Parms;
	memcpy ( &UpdateMCTSSession_Parms.SessionGuid, &SessionGuid, 0xC );
	UpdateMCTSSession_Parms.bIsHost = bIsHost;

	pFnUpdateMCTSSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateMCTSSession, &UpdateMCTSSession_Parms, NULL );

	pFnUpdateMCTSSession->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.BlockPartySceneInput
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bBlockInput                    ( CPF_Parm )

void APComPlayerController::BlockPartySceneInput ( unsigned long bBlockInput )
{
	static UFunction* pFnBlockPartySceneInput = NULL;

	if ( ! pFnBlockPartySceneInput )
		pFnBlockPartySceneInput = (UFunction*) UObject::GObjObjects()->GetIndex( 43541 );

	APComPlayerController_execBlockPartySceneInput_Parms BlockPartySceneInput_Parms;
	BlockPartySceneInput_Parms.bBlockInput = bBlockInput;

	pFnBlockPartySceneInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBlockPartySceneInput, &BlockPartySceneInput_Parms, NULL );

	pFnBlockPartySceneInput->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.FilterFriendListForPeoplePicker
// [0x00420500] ( FUNC_Native )
// Parameters infos:
// TArray< struct FOnlineFriend > FriendList                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FSessionMemberInfo > SessionMemberList              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APComPlayerController::FilterFriendListForPeoplePicker ( TArray< struct FOnlineFriend >* FriendList, TArray< struct FSessionMemberInfo >* SessionMemberList )
{
	static UFunction* pFnFilterFriendListForPeoplePicker = NULL;

	if ( ! pFnFilterFriendListForPeoplePicker )
		pFnFilterFriendListForPeoplePicker = (UFunction*) UObject::GObjObjects()->GetIndex( 43536 );

	APComPlayerController_execFilterFriendListForPeoplePicker_Parms FilterFriendListForPeoplePicker_Parms;

	pFnFilterFriendListForPeoplePicker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFilterFriendListForPeoplePicker, &FilterFriendListForPeoplePicker_Parms, NULL );

	pFnFilterFriendListForPeoplePicker->FunctionFlags |= 0x400;

	if ( FriendList )
		memcpy ( FriendList, &FilterFriendListForPeoplePicker_Parms.FriendList, 0xC );

	if ( SessionMemberList )
		memcpy ( SessionMemberList, &FilterFriendListForPeoplePicker_Parms.SessionMemberList, 0xC );
};

// Function PlatformCommon.PComPlayerController.ShowPrivilegeMessageAndDeclineInvite
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ShowPrivilegeMessageAndDeclineInvite ( )
{
	static UFunction* pFnShowPrivilegeMessageAndDeclineInvite = NULL;

	if ( ! pFnShowPrivilegeMessageAndDeclineInvite )
		pFnShowPrivilegeMessageAndDeclineInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 43535 );

	APComPlayerController_execShowPrivilegeMessageAndDeclineInvite_Parms ShowPrivilegeMessageAndDeclineInvite_Parms;

	pFnShowPrivilegeMessageAndDeclineInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPrivilegeMessageAndDeclineInvite, &ShowPrivilegeMessageAndDeclineInvite_Parms, NULL );

	pFnShowPrivilegeMessageAndDeclineInvite->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.AcceptPartyInvite
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// struct FString                 InviterName                    ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::AcceptPartyInvite ( struct FString InviterName )
{
	static UFunction* pFnAcceptPartyInvite = NULL;

	if ( ! pFnAcceptPartyInvite )
		pFnAcceptPartyInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 43533 );

	APComPlayerController_execAcceptPartyInvite_Parms AcceptPartyInvite_Parms;
	memcpy ( &AcceptPartyInvite_Parms.InviterName, &InviterName, 0xC );

	pFnAcceptPartyInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptPartyInvite, &AcceptPartyInvite_Parms, NULL );

	pFnAcceptPartyInvite->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ConnectToPeers
// [0x00420500] ( FUNC_Native )
// Parameters infos:
// TArray< struct FSessionMemberInfo > SessionListInfo                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APComPlayerController::ConnectToPeers ( TArray< struct FSessionMemberInfo >* SessionListInfo )
{
	static UFunction* pFnConnectToPeers = NULL;

	if ( ! pFnConnectToPeers )
		pFnConnectToPeers = (UFunction*) UObject::GObjObjects()->GetIndex( 43530 );

	APComPlayerController_execConnectToPeers_Parms ConnectToPeers_Parms;

	pFnConnectToPeers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnConnectToPeers, &ConnectToPeers_Parms, NULL );

	pFnConnectToPeers->FunctionFlags |= 0x400;

	if ( SessionListInfo )
		memcpy ( SessionListInfo, &ConnectToPeers_Parms.SessionListInfo, 0xC );
};

// Function PlatformCommon.PComPlayerController.TryJoinSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::TryJoinSession ( )
{
	static UFunction* pFnTryJoinSession = NULL;

	if ( ! pFnTryJoinSession )
		pFnTryJoinSession = (UFunction*) UObject::GObjObjects()->GetIndex( 43529 );

	APComPlayerController_execTryJoinSession_Parms TryJoinSession_Parms;

	pFnTryJoinSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTryJoinSession, &TryJoinSession_Parms, NULL );

	pFnTryJoinSession->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.MCTSSetSessionId
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

void APComPlayerController::MCTSSetSessionId ( unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnMCTSSetSessionId = NULL;

	if ( ! pFnMCTSSetSessionId )
		pFnMCTSSetSessionId = (UFunction*) UObject::GObjObjects()->GetIndex( 43527 );

	APComPlayerController_execMCTSSetSessionId_Parms MCTSSetSessionId_Parms;
	memcpy ( &MCTSSetSessionId_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );

	pFnMCTSSetSessionId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMCTSSetSessionId, &MCTSSetSessionId_Parms, NULL );

	pFnMCTSSetSessionId->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.IsInCustomMatch
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::IsInCustomMatch ( )
{
	static UFunction* pFnIsInCustomMatch = NULL;

	if ( ! pFnIsInCustomMatch )
		pFnIsInCustomMatch = (UFunction*) UObject::GObjObjects()->GetIndex( 43525 );

	APComPlayerController_execIsInCustomMatch_Parms IsInCustomMatch_Parms;

	pFnIsInCustomMatch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsInCustomMatch, &IsInCustomMatch_Parms, NULL );

	pFnIsInCustomMatch->FunctionFlags |= 0x400;

	return IsInCustomMatch_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.SendSessionEnd
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::SendSessionEnd ( )
{
	static UFunction* pFnSendSessionEnd = NULL;

	if ( ! pFnSendSessionEnd )
		pFnSendSessionEnd = (UFunction*) UObject::GObjObjects()->GetIndex( 43524 );

	APComPlayerController_execSendSessionEnd_Parms SendSessionEnd_Parms;

	pFnSendSessionEnd->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendSessionEnd, &SendSessionEnd_Parms, NULL );

	pFnSendSessionEnd->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.SendSessionStart
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            GameModeId                     ( CPF_Parm )

void APComPlayerController::SendSessionStart ( int GameModeId )
{
	static UFunction* pFnSendSessionStart = NULL;

	if ( ! pFnSendSessionStart )
		pFnSendSessionStart = (UFunction*) UObject::GObjObjects()->GetIndex( 43522 );

	APComPlayerController_execSendSessionStart_Parms SendSessionStart_Parms;
	SendSessionStart_Parms.GameModeId = GameModeId;

	pFnSendSessionStart->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendSessionStart, &SendSessionStart_Parms, NULL );

	pFnSendSessionStart->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.OnRemoteTalkerStatusChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            RemoteNetId                    ( CPF_Parm )
// unsigned long                  bIsTalking                     ( CPF_Parm )

void APComPlayerController::OnRemoteTalkerStatusChange ( struct FUniqueNetId RemoteNetId, unsigned long bIsTalking )
{
	static UFunction* pFnOnRemoteTalkerStatusChange = NULL;

	if ( ! pFnOnRemoteTalkerStatusChange )
		pFnOnRemoteTalkerStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 43519 );

	APComPlayerController_execOnRemoteTalkerStatusChange_Parms OnRemoteTalkerStatusChange_Parms;
	memcpy ( &OnRemoteTalkerStatusChange_Parms.RemoteNetId, &RemoteNetId, 0x8 );
	OnRemoteTalkerStatusChange_Parms.bIsTalking = bIsTalking;

	pFnOnRemoteTalkerStatusChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRemoteTalkerStatusChange, &OnRemoteTalkerStatusChange_Parms, NULL );

	pFnOnRemoteTalkerStatusChange->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.OnCurrentUserChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 CurrentUser                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 LoggedInUser                   ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::OnCurrentUserChanged ( unsigned char LocalUserNum, struct FString CurrentUser, struct FString LoggedInUser )
{
	static UFunction* pFnOnCurrentUserChanged = NULL;

	if ( ! pFnOnCurrentUserChanged )
		pFnOnCurrentUserChanged = (UFunction*) UObject::GObjObjects()->GetIndex( 43515 );

	APComPlayerController_execOnCurrentUserChanged_Parms OnCurrentUserChanged_Parms;
	OnCurrentUserChanged_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnCurrentUserChanged_Parms.CurrentUser, &CurrentUser, 0xC );
	memcpy ( &OnCurrentUserChanged_Parms.LoggedInUser, &LoggedInUser, 0xC );

	pFnOnCurrentUserChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnCurrentUserChanged, &OnCurrentUserChanged_Parms, NULL );

	pFnOnCurrentUserChanged->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.OnConnectionStatusChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ConnectionStatus               ( CPF_Parm )

void APComPlayerController::OnConnectionStatusChange ( unsigned char ConnectionStatus )
{
	static UFunction* pFnOnConnectionStatusChange = NULL;

	if ( ! pFnOnConnectionStatusChange )
		pFnOnConnectionStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 43513 );

	APComPlayerController_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;
	OnConnectionStatusChange_Parms.ConnectionStatus = ConnectionStatus;

	pFnOnConnectionStatusChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, NULL );

	pFnOnConnectionStatusChange->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.OnLoginStatusChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  NewStatus                      ( CPF_Parm )
// struct FUniqueNetId            NewId                          ( CPF_Parm )

void APComPlayerController::OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId )
{
	static UFunction* pFnOnLoginStatusChange = NULL;

	if ( ! pFnOnLoginStatusChange )
		pFnOnLoginStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 43510 );

	APComPlayerController_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;
	OnLoginStatusChange_Parms.NewStatus = NewStatus;
	memcpy ( &OnLoginStatusChange_Parms.NewId, &NewId, 0x8 );

	pFnOnLoginStatusChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, NULL );

	pFnOnLoginStatusChange->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.OnMarketplaceItemPurchased
// [0x00020102] 
// Parameters infos:

void APComPlayerController::OnMarketplaceItemPurchased ( )
{
	static UFunction* pFnOnMarketplaceItemPurchased = NULL;

	if ( ! pFnOnMarketplaceItemPurchased )
		pFnOnMarketplaceItemPurchased = (UFunction*) UObject::GObjObjects()->GetIndex( 43509 );

	APComPlayerController_execOnMarketplaceItemPurchased_Parms OnMarketplaceItemPurchased_Parms;

	this->ProcessEvent ( pFnOnMarketplaceItemPurchased, &OnMarketplaceItemPurchased_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.GetPlayerDLCLicenses
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FOnlineContent > ContentList                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char APComPlayerController::eventGetPlayerDLCLicenses ( TArray< struct FOnlineContent >* ContentList )
{
	static UFunction* pFnGetPlayerDLCLicenses = NULL;

	if ( ! pFnGetPlayerDLCLicenses )
		pFnGetPlayerDLCLicenses = (UFunction*) UObject::GObjObjects()->GetIndex( 43505 );

	APComPlayerController_eventGetPlayerDLCLicenses_Parms GetPlayerDLCLicenses_Parms;

	this->ProcessEvent ( pFnGetPlayerDLCLicenses, &GetPlayerDLCLicenses_Parms, NULL );

	if ( ContentList )
		memcpy ( ContentList, &GetPlayerDLCLicenses_Parms.ContentList, 0xC );

	return GetPlayerDLCLicenses_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.OnReadPlayerMarketplaceInventoryComplete
// [0x00020002] 
// Parameters infos:

void APComPlayerController::OnReadPlayerMarketplaceInventoryComplete ( )
{
	static UFunction* pFnOnReadPlayerMarketplaceInventoryComplete = NULL;

	if ( ! pFnOnReadPlayerMarketplaceInventoryComplete )
		pFnOnReadPlayerMarketplaceInventoryComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 43502 );

	APComPlayerController_execOnReadPlayerMarketplaceInventoryComplete_Parms OnReadPlayerMarketplaceInventoryComplete_Parms;

	this->ProcessEvent ( pFnOnReadPlayerMarketplaceInventoryComplete, &OnReadPlayerMarketplaceInventoryComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.GetMarketplaceInventory
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventGetMarketplaceInventory ( )
{
	static UFunction* pFnGetMarketplaceInventory = NULL;

	if ( ! pFnGetMarketplaceInventory )
		pFnGetMarketplaceInventory = (UFunction*) UObject::GObjObjects()->GetIndex( 43501 );

	APComPlayerController_eventGetMarketplaceInventory_Parms GetMarketplaceInventory_Parms;

	this->ProcessEvent ( pFnGetMarketplaceInventory, &GetMarketplaceInventory_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.GetOSSTokenAndSignature
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::eventGetOSSTokenAndSignature ( struct FString URL )
{
	static UFunction* pFnGetOSSTokenAndSignature = NULL;

	if ( ! pFnGetOSSTokenAndSignature )
		pFnGetOSSTokenAndSignature = (UFunction*) UObject::GObjObjects()->GetIndex( 43499 );

	APComPlayerController_eventGetOSSTokenAndSignature_Parms GetOSSTokenAndSignature_Parms;
	memcpy ( &GetOSSTokenAndSignature_Parms.URL, &URL, 0xC );

	this->ProcessEvent ( pFnGetOSSTokenAndSignature, &GetOSSTokenAndSignature_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.DumpStoreCatalog
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned char                  MediaType                      ( CPF_Parm )

void APComPlayerController::DumpStoreCatalog ( unsigned char MediaType )
{
	static UFunction* pFnDumpStoreCatalog = NULL;

	if ( ! pFnDumpStoreCatalog )
		pFnDumpStoreCatalog = (UFunction*) UObject::GObjObjects()->GetIndex( 43492 );

	APComPlayerController_execDumpStoreCatalog_Parms DumpStoreCatalog_Parms;
	DumpStoreCatalog_Parms.MediaType = MediaType;

	this->ProcessEvent ( pFnDumpStoreCatalog, &DumpStoreCatalog_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.DumpConumables
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void APComPlayerController::DumpConumables ( )
{
	static UFunction* pFnDumpConumables = NULL;

	if ( ! pFnDumpConumables )
		pFnDumpConumables = (UFunction*) UObject::GObjObjects()->GetIndex( 43491 );

	APComPlayerController_execDumpConumables_Parms DumpConumables_Parms;

	this->ProcessEvent ( pFnDumpConumables, &DumpConumables_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.DumpDurables
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void APComPlayerController::DumpDurables ( )
{
	static UFunction* pFnDumpDurables = NULL;

	if ( ! pFnDumpDurables )
		pFnDumpDurables = (UFunction*) UObject::GObjObjects()->GetIndex( 43490 );

	APComPlayerController_execDumpDurables_Parms DumpDurables_Parms;

	this->ProcessEvent ( pFnDumpDurables, &DumpDurables_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.DumpGameProducts
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void APComPlayerController::DumpGameProducts ( )
{
	static UFunction* pFnDumpGameProducts = NULL;

	if ( ! pFnDumpGameProducts )
		pFnDumpGameProducts = (UFunction*) UObject::GObjObjects()->GetIndex( 43489 );

	APComPlayerController_execDumpGameProducts_Parms DumpGameProducts_Parms;

	this->ProcessEvent ( pFnDumpGameProducts, &DumpGameProducts_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnReadAdditionalProductDetailsComplete
// [0x00020002] 
// Parameters infos:
// unsigned char                  MediaType                      ( CPF_Parm )

void APComPlayerController::OnReadAdditionalProductDetailsComplete ( unsigned char MediaType )
{
	static UFunction* pFnOnReadAdditionalProductDetailsComplete = NULL;

	if ( ! pFnOnReadAdditionalProductDetailsComplete )
		pFnOnReadAdditionalProductDetailsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 43486 );

	APComPlayerController_execOnReadAdditionalProductDetailsComplete_Parms OnReadAdditionalProductDetailsComplete_Parms;
	OnReadAdditionalProductDetailsComplete_Parms.MediaType = MediaType;

	this->ProcessEvent ( pFnOnReadAdditionalProductDetailsComplete, &OnReadAdditionalProductDetailsComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnReadAvailableProductsComplete
// [0x00020002] 
// Parameters infos:
// unsigned char                  MediaType                      ( CPF_Parm )

void APComPlayerController::OnReadAvailableProductsComplete ( unsigned char MediaType )
{
	static UFunction* pFnOnReadAvailableProductsComplete = NULL;

	if ( ! pFnOnReadAvailableProductsComplete )
		pFnOnReadAvailableProductsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 43484 );

	APComPlayerController_execOnReadAvailableProductsComplete_Parms OnReadAvailableProductsComplete_Parms;
	OnReadAvailableProductsComplete_Parms.MediaType = MediaType;

	this->ProcessEvent ( pFnOnReadAvailableProductsComplete, &OnReadAvailableProductsComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.RefreshStoreData
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventRefreshStoreData ( )
{
	static UFunction* pFnRefreshStoreData = NULL;

	if ( ! pFnRefreshStoreData )
		pFnRefreshStoreData = (UFunction*) UObject::GObjObjects()->GetIndex( 43482 );

	APComPlayerController_eventRefreshStoreData_Parms RefreshStoreData_Parms;

	this->ProcessEvent ( pFnRefreshStoreData, &RefreshStoreData_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignature
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Token                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Signature                      ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::PlayerReceivedURLTokenAndSignature ( unsigned char LocalUserNum, struct FString URL, struct FString Token, struct FString Signature )
{
	static UFunction* pFnPlayerReceivedURLTokenAndSignature = NULL;

	if ( ! pFnPlayerReceivedURLTokenAndSignature )
		pFnPlayerReceivedURLTokenAndSignature = (UFunction*) UObject::GObjObjects()->GetIndex( 43477 );

	APComPlayerController_execPlayerReceivedURLTokenAndSignature_Parms PlayerReceivedURLTokenAndSignature_Parms;
	PlayerReceivedURLTokenAndSignature_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &PlayerReceivedURLTokenAndSignature_Parms.URL, &URL, 0xC );
	memcpy ( &PlayerReceivedURLTokenAndSignature_Parms.Token, &Token, 0xC );
	memcpy ( &PlayerReceivedURLTokenAndSignature_Parms.Signature, &Signature, 0xC );

	pFnPlayerReceivedURLTokenAndSignature->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayerReceivedURLTokenAndSignature, &PlayerReceivedURLTokenAndSignature_Parms, NULL );

	pFnPlayerReceivedURLTokenAndSignature->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.SendPlayerDLCLicensesToServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::SendPlayerDLCLicensesToServer ( )
{
	static UFunction* pFnSendPlayerDLCLicensesToServer = NULL;

	if ( ! pFnSendPlayerDLCLicensesToServer )
		pFnSendPlayerDLCLicensesToServer = (UFunction*) UObject::GObjObjects()->GetIndex( 43476 );

	APComPlayerController_execSendPlayerDLCLicensesToServer_Parms SendPlayerDLCLicensesToServer_Parms;

	pFnSendPlayerDLCLicensesToServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendPlayerDLCLicensesToServer, &SendPlayerDLCLicensesToServer_Parms, NULL );

	pFnSendPlayerDLCLicensesToServer->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.PlayerRetrievedOSSInventory
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FMarketplaceInventoryItem > Items                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APComPlayerController::PlayerRetrievedOSSInventory ( TArray< struct FMarketplaceInventoryItem >* Items )
{
	static UFunction* pFnPlayerRetrievedOSSInventory = NULL;

	if ( ! pFnPlayerRetrievedOSSInventory )
		pFnPlayerRetrievedOSSInventory = (UFunction*) UObject::GObjObjects()->GetIndex( 43473 );

	APComPlayerController_execPlayerRetrievedOSSInventory_Parms PlayerRetrievedOSSInventory_Parms;

	pFnPlayerRetrievedOSSInventory->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayerRetrievedOSSInventory, &PlayerRetrievedOSSInventory_Parms, NULL );

	pFnPlayerRetrievedOSSInventory->FunctionFlags |= 0x400;

	if ( Items )
		memcpy ( Items, &PlayerRetrievedOSSInventory_Parms.Items, 0xC );
};

// Function PlatformCommon.PComPlayerController.ChallengeJoin
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nQueue                         ( CPF_Parm )
// struct FString                 fsName                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 fsPassword                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::ChallengeJoin ( int nQueue, struct FString fsName, struct FString fsPassword )
{
	static UFunction* pFnChallengeJoin = NULL;

	if ( ! pFnChallengeJoin )
		pFnChallengeJoin = (UFunction*) UObject::GObjObjects()->GetIndex( 43469 );

	APComPlayerController_execChallengeJoin_Parms ChallengeJoin_Parms;
	ChallengeJoin_Parms.nQueue = nQueue;
	memcpy ( &ChallengeJoin_Parms.fsName, &fsName, 0xC );
	memcpy ( &ChallengeJoin_Parms.fsPassword, &fsPassword, 0xC );

	pFnChallengeJoin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChallengeJoin, &ChallengeJoin_Parms, NULL );

	pFnChallengeJoin->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ChallengeCreate
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nQueue                         ( CPF_Parm )
// struct FString                 fsName                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 fsPassword                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::ChallengeCreate ( int nQueue, struct FString fsName, struct FString fsPassword )
{
	static UFunction* pFnChallengeCreate = NULL;

	if ( ! pFnChallengeCreate )
		pFnChallengeCreate = (UFunction*) UObject::GObjObjects()->GetIndex( 43465 );

	APComPlayerController_execChallengeCreate_Parms ChallengeCreate_Parms;
	ChallengeCreate_Parms.nQueue = nQueue;
	memcpy ( &ChallengeCreate_Parms.fsName, &fsName, 0xC );
	memcpy ( &ChallengeCreate_Parms.fsPassword, &fsPassword, 0xC );

	pFnChallengeCreate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChallengeCreate, &ChallengeCreate_Parms, NULL );

	pFnChallengeCreate->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.TeamSetLeader
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 fsLeader                       ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::TeamSetLeader ( struct FString fsLeader )
{
	static UFunction* pFnTeamSetLeader = NULL;

	if ( ! pFnTeamSetLeader )
		pFnTeamSetLeader = (UFunction*) UObject::GObjObjects()->GetIndex( 43463 );

	APComPlayerController_execTeamSetLeader_Parms TeamSetLeader_Parms;
	memcpy ( &TeamSetLeader_Parms.fsLeader, &fsLeader, 0xC );

	pFnTeamSetLeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTeamSetLeader, &TeamSetLeader_Parms, NULL );

	pFnTeamSetLeader->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.TeamLeave
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void APComPlayerController::TeamLeave ( )
{
	static UFunction* pFnTeamLeave = NULL;

	if ( ! pFnTeamLeave )
		pFnTeamLeave = (UFunction*) UObject::GObjObjects()->GetIndex( 43462 );

	APComPlayerController_execTeamLeave_Parms TeamLeave_Parms;

	pFnTeamLeave->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTeamLeave, &TeamLeave_Parms, NULL );

	pFnTeamLeave->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.TeamAccept
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bAccepted                      ( CPF_Parm )

void APComPlayerController::TeamAccept ( unsigned long bAccepted )
{
	static UFunction* pFnTeamAccept = NULL;

	if ( ! pFnTeamAccept )
		pFnTeamAccept = (UFunction*) UObject::GObjObjects()->GetIndex( 43460 );

	APComPlayerController_execTeamAccept_Parms TeamAccept_Parms;
	TeamAccept_Parms.bAccepted = bAccepted;

	pFnTeamAccept->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTeamAccept, &TeamAccept_Parms, NULL );

	pFnTeamAccept->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.TeamInvite
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 fsName                         ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::TeamInvite ( struct FString fsName )
{
	static UFunction* pFnTeamInvite = NULL;

	if ( ! pFnTeamInvite )
		pFnTeamInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 43458 );

	APComPlayerController_execTeamInvite_Parms TeamInvite_Parms;
	memcpy ( &TeamInvite_Parms.fsName, &fsName, 0xC );

	pFnTeamInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTeamInvite, &TeamInvite_Parms, NULL );

	pFnTeamInvite->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.SetConfig
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::SetConfig ( struct FString Key, struct FString Value )
{
	static UFunction* pFnSetConfig = NULL;

	if ( ! pFnSetConfig )
		pFnSetConfig = (UFunction*) UObject::GObjObjects()->GetIndex( 43455 );

	APComPlayerController_execSetConfig_Parms SetConfig_Parms;
	memcpy ( &SetConfig_Parms.Key, &Key, 0xC );
	memcpy ( &SetConfig_Parms.Value, &Value, 0xC );

	pFnSetConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetConfig, &SetConfig_Parms, NULL );

	pFnSetConfig->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.GetConfigBool
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )

bool APComPlayerController::GetConfigBool ( struct FString Key )
{
	static UFunction* pFnGetConfigBool = NULL;

	if ( ! pFnGetConfigBool )
		pFnGetConfigBool = (UFunction*) UObject::GObjObjects()->GetIndex( 43452 );

	APComPlayerController_execGetConfigBool_Parms GetConfigBool_Parms;
	memcpy ( &GetConfigBool_Parms.Key, &Key, 0xC );

	pFnGetConfigBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetConfigBool, &GetConfigBool_Parms, NULL );

	pFnGetConfigBool->FunctionFlags |= 0x400;

	return GetConfigBool_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.GetConfigInt
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )

int APComPlayerController::GetConfigInt ( struct FString Key )
{
	static UFunction* pFnGetConfigInt = NULL;

	if ( ! pFnGetConfigInt )
		pFnGetConfigInt = (UFunction*) UObject::GObjObjects()->GetIndex( 43449 );

	APComPlayerController_execGetConfigInt_Parms GetConfigInt_Parms;
	memcpy ( &GetConfigInt_Parms.Key, &Key, 0xC );

	pFnGetConfigInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetConfigInt, &GetConfigInt_Parms, NULL );

	pFnGetConfigInt->FunctionFlags |= 0x400;

	return GetConfigInt_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.GetConfig
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )

struct FString APComPlayerController::GetConfig ( struct FString Key )
{
	static UFunction* pFnGetConfig = NULL;

	if ( ! pFnGetConfig )
		pFnGetConfig = (UFunction*) UObject::GObjObjects()->GetIndex( 43446 );

	APComPlayerController_execGetConfig_Parms GetConfig_Parms;
	memcpy ( &GetConfig_Parms.Key, &Key, 0xC );

	pFnGetConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetConfig, &GetConfig_Parms, NULL );

	pFnGetConfig->FunctionFlags |= 0x400;

	return GetConfig_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.DumpConfig
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void APComPlayerController::DumpConfig ( )
{
	static UFunction* pFnDumpConfig = NULL;

	if ( ! pFnDumpConfig )
		pFnDumpConfig = (UFunction*) UObject::GObjObjects()->GetIndex( 43445 );

	APComPlayerController_execDumpConfig_Parms DumpConfig_Parms;

	pFnDumpConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDumpConfig, &DumpConfig_Parms, NULL );

	pFnDumpConfig->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.AddCheats
// [0x00020102] 
// Parameters infos:

void APComPlayerController::AddCheats ( )
{
	static UFunction* pFnAddCheats = NULL;

	if ( ! pFnAddCheats )
		pFnAddCheats = (UFunction*) UObject::GObjObjects()->GetIndex( 43444 );

	APComPlayerController_execAddCheats_Parms AddCheats_Parms;

	this->ProcessEvent ( pFnAddCheats, &AddCheats_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ClientAddCheats
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ClientAddCheats ( )
{
	static UFunction* pFnClientAddCheats = NULL;

	if ( ! pFnClientAddCheats )
		pFnClientAddCheats = (UFunction*) UObject::GObjObjects()->GetIndex( 43443 );

	APComPlayerController_execClientAddCheats_Parms ClientAddCheats_Parms;

	pFnClientAddCheats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientAddCheats, &ClientAddCheats_Parms, NULL );

	pFnClientAddCheats->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.Jump
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UPComPlayerInput::Jump ( )
{
	static UFunction* pFnJump = NULL;

	if ( ! pFnJump )
		pFnJump = (UFunction*) UObject::GObjObjects()->GetIndex( 43874 );

	UPComPlayerInput_execJump_Parms Jump_Parms;

	this->ProcessEvent ( pFnJump, &Jump_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.UnbindCommand
// [0x00824202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// int                            nAlternate                     ( CPF_OptionalParm | CPF_Parm )

void UPComPlayerInput::UnbindCommand ( struct FString Command, int nAlternate )
{
	static UFunction* pFnUnbindCommand = NULL;

	if ( ! pFnUnbindCommand )
		pFnUnbindCommand = (UFunction*) UObject::GObjObjects()->GetIndex( 43870 );

	UPComPlayerInput_execUnbindCommand_Parms UnbindCommand_Parms;
	memcpy ( &UnbindCommand_Parms.Command, &Command, 0xC );
	UnbindCommand_Parms.nAlternate = nAlternate;

	this->ProcessEvent ( pFnUnbindCommand, &UnbindCommand_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.UnbindCommandAllExtended
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bStoreToServer                 ( CPF_Parm )

void UPComPlayerInput::UnbindCommandAllExtended ( struct FString Command, unsigned long bStoreToServer )
{
	static UFunction* pFnUnbindCommandAllExtended = NULL;

	if ( ! pFnUnbindCommandAllExtended )
		pFnUnbindCommandAllExtended = (UFunction*) UObject::GObjObjects()->GetIndex( 43862 );

	UPComPlayerInput_execUnbindCommandAllExtended_Parms UnbindCommandAllExtended_Parms;
	memcpy ( &UnbindCommandAllExtended_Parms.Command, &Command, 0xC );
	UnbindCommandAllExtended_Parms.bStoreToServer = bStoreToServer;

	this->ProcessEvent ( pFnUnbindCommandAllExtended, &UnbindCommandAllExtended_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.UnbindCommandAll
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )

void UPComPlayerInput::UnbindCommandAll ( struct FString Command )
{
	static UFunction* pFnUnbindCommandAll = NULL;

	if ( ! pFnUnbindCommandAll )
		pFnUnbindCommandAll = (UFunction*) UObject::GObjObjects()->GetIndex( 43860 );

	UPComPlayerInput_execUnbindCommandAll_Parms UnbindCommandAll_Parms;
	memcpy ( &UnbindCommandAll_Parms.Command, &Command, 0xC );

	this->ProcessEvent ( pFnUnbindCommandAll, &UnbindCommandAll_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.UnbindCommandFromServer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )

void UPComPlayerInput::eventUnbindCommandFromServer ( struct FString Command )
{
	static UFunction* pFnUnbindCommandFromServer = NULL;

	if ( ! pFnUnbindCommandFromServer )
		pFnUnbindCommandFromServer = (UFunction*) UObject::GObjObjects()->GetIndex( 43858 );

	UPComPlayerInput_eventUnbindCommandFromServer_Parms UnbindCommandFromServer_Parms;
	memcpy ( &UnbindCommandFromServer_Parms.Command, &Command, 0xC );

	this->ProcessEvent ( pFnUnbindCommandFromServer, &UnbindCommandFromServer_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.UnbindKey
// [0x00420202] ( FUNC_Exec )
// Parameters infos:
// struct FName                   BindName                       ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPComPlayerInput::UnbindKey ( struct FName* BindName )
{
	static UFunction* pFnUnbindKey = NULL;

	if ( ! pFnUnbindKey )
		pFnUnbindKey = (UFunction*) UObject::GObjObjects()->GetIndex( 43856 );

	UPComPlayerInput_execUnbindKey_Parms UnbindKey_Parms;

	this->ProcessEvent ( pFnUnbindKey, &UnbindKey_Parms, NULL );

	if ( BindName )
		memcpy ( BindName, &UnbindKey_Parms.BindName, 0x8 );
};

// Function PlatformCommon.PComPlayerInput.SetCommandBind
// [0x00820002] 
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// int                            nAlternate                     ( CPF_Parm )
// struct FString                 ExtendedBinding                ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bStoreToServer                 ( CPF_Parm )

void UPComPlayerInput::SetCommandBind ( struct FString Command, int nAlternate, struct FString ExtendedBinding, unsigned long bStoreToServer )
{
	static UFunction* pFnSetCommandBind = NULL;

	if ( ! pFnSetCommandBind )
		pFnSetCommandBind = (UFunction*) UObject::GObjObjects()->GetIndex( 43846 );

	UPComPlayerInput_execSetCommandBind_Parms SetCommandBind_Parms;
	memcpy ( &SetCommandBind_Parms.Command, &Command, 0xC );
	SetCommandBind_Parms.nAlternate = nAlternate;
	memcpy ( &SetCommandBind_Parms.ExtendedBinding, &ExtendedBinding, 0xC );
	SetCommandBind_Parms.bStoreToServer = bStoreToServer;

	this->ProcessEvent ( pFnSetCommandBind, &SetCommandBind_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.SetCommandBindFromServer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// int                            nAlternate                     ( CPF_Parm )
// struct FString                 ExtendedBinding                ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

void UPComPlayerInput::eventSetCommandBindFromServer ( struct FString Command, int nAlternate, struct FString ExtendedBinding )
{
	static UFunction* pFnSetCommandBindFromServer = NULL;

	if ( ! pFnSetCommandBindFromServer )
		pFnSetCommandBindFromServer = (UFunction*) UObject::GObjObjects()->GetIndex( 43842 );

	UPComPlayerInput_eventSetCommandBindFromServer_Parms SetCommandBindFromServer_Parms;
	memcpy ( &SetCommandBindFromServer_Parms.Command, &Command, 0xC );
	SetCommandBindFromServer_Parms.nAlternate = nAlternate;
	memcpy ( &SetCommandBindFromServer_Parms.ExtendedBinding, &ExtendedBinding, 0xC );

	this->ProcessEvent ( pFnSetCommandBindFromServer, &SetCommandBindFromServer_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.SetBindExtended
// [0x00820002] 
// Parameters infos:
// struct FString                 ExtendedBinding                ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bStoreToServer                 ( CPF_Parm )

void UPComPlayerInput::SetBindExtended ( struct FString ExtendedBinding, struct FString Command, unsigned long bStoreToServer )
{
	static UFunction* pFnSetBindExtended = NULL;

	if ( ! pFnSetBindExtended )
		pFnSetBindExtended = (UFunction*) UObject::GObjObjects()->GetIndex( 43835 );

	UPComPlayerInput_execSetBindExtended_Parms SetBindExtended_Parms;
	memcpy ( &SetBindExtended_Parms.ExtendedBinding, &ExtendedBinding, 0xC );
	memcpy ( &SetBindExtended_Parms.Command, &Command, 0xC );
	SetBindExtended_Parms.bStoreToServer = bStoreToServer;

	this->ProcessEvent ( pFnSetBindExtended, &SetBindExtended_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.SetBindFromServer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 BindName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )

void UPComPlayerInput::eventSetBindFromServer ( struct FString BindName, struct FString Command )
{
	static UFunction* pFnSetBindFromServer = NULL;

	if ( ! pFnSetBindFromServer )
		pFnSetBindFromServer = (UFunction*) UObject::GObjObjects()->GetIndex( 43832 );

	UPComPlayerInput_eventSetBindFromServer_Parms SetBindFromServer_Parms;
	memcpy ( &SetBindFromServer_Parms.BindName, &BindName, 0xC );
	memcpy ( &SetBindFromServer_Parms.Command, &Command, 0xC );

	this->ProcessEvent ( pFnSetBindFromServer, &SetBindFromServer_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.SetBind
// [0x00420202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   BindName                       ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPComPlayerInput::SetBind ( struct FString Command, struct FName* BindName )
{
	static UFunction* pFnSetBind = NULL;

	if ( ! pFnSetBind )
		pFnSetBind = (UFunction*) UObject::GObjObjects()->GetIndex( 43829 );

	UPComPlayerInput_execSetBind_Parms SetBind_Parms;
	memcpy ( &SetBind_Parms.Command, &Command, 0xC );

	this->ProcessEvent ( pFnSetBind, &SetBind_Parms, NULL );

	if ( BindName )
		memcpy ( BindName, &SetBind_Parms.BindName, 0x8 );
};

// Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivityY
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UPComPlayerInput::eventGetDisplayLookSensitivityY ( )
{
	static UFunction* pFnGetDisplayLookSensitivityY = NULL;

	if ( ! pFnGetDisplayLookSensitivityY )
		pFnGetDisplayLookSensitivityY = (UFunction*) UObject::GObjObjects()->GetIndex( 43826 );

	UPComPlayerInput_eventGetDisplayLookSensitivityY_Parms GetDisplayLookSensitivityY_Parms;

	this->ProcessEvent ( pFnGetDisplayLookSensitivityY, &GetDisplayLookSensitivityY_Parms, NULL );

	return GetDisplayLookSensitivityY_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivity
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UPComPlayerInput::eventGetDisplayLookSensitivity ( )
{
	static UFunction* pFnGetDisplayLookSensitivity = NULL;

	if ( ! pFnGetDisplayLookSensitivity )
		pFnGetDisplayLookSensitivity = (UFunction*) UObject::GObjObjects()->GetIndex( 43823 );

	UPComPlayerInput_eventGetDisplayLookSensitivity_Parms GetDisplayLookSensitivity_Parms;

	this->ProcessEvent ( pFnGetDisplayLookSensitivity, &GetDisplayLookSensitivity_Parms, NULL );

	return GetDisplayLookSensitivity_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.SetLookSensitivity
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// float                          fSensitivity                   ( CPF_Parm )
// float                          fSensitivityY                  ( CPF_OptionalParm | CPF_Parm )

void UPComPlayerInput::SetLookSensitivity ( float fSensitivity, float fSensitivityY )
{
	static UFunction* pFnSetLookSensitivity = NULL;

	if ( ! pFnSetLookSensitivity )
		pFnSetLookSensitivity = (UFunction*) UObject::GObjObjects()->GetIndex( 43819 );

	UPComPlayerInput_execSetLookSensitivity_Parms SetLookSensitivity_Parms;
	SetLookSensitivity_Parms.fSensitivity = fSensitivity;
	SetLookSensitivity_Parms.fSensitivityY = fSensitivityY;

	this->ProcessEvent ( pFnSetLookSensitivity, &SetLookSensitivity_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.SetMouseInput
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bInvert                        ( CPF_Parm )
// unsigned long                  bSmooth                        ( CPF_Parm )
// float                          fSensitivity                   ( CPF_Parm )

void UPComPlayerInput::SetMouseInput ( unsigned long bInvert, unsigned long bSmooth, float fSensitivity )
{
	static UFunction* pFnSetMouseInput = NULL;

	if ( ! pFnSetMouseInput )
		pFnSetMouseInput = (UFunction*) UObject::GObjObjects()->GetIndex( 43815 );

	UPComPlayerInput_execSetMouseInput_Parms SetMouseInput_Parms;
	SetMouseInput_Parms.bInvert = bInvert;
	SetMouseInput_Parms.bSmooth = bSmooth;
	SetMouseInput_Parms.fSensitivity = fSensitivity;

	this->ProcessEvent ( pFnSetMouseInput, &SetMouseInput_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.SetDirty
// [0x00020102] 
// Parameters infos:

void UPComPlayerInput::SetDirty ( )
{
	static UFunction* pFnSetDirty = NULL;

	if ( ! pFnSetDirty )
		pFnSetDirty = (UFunction*) UObject::GObjObjects()->GetIndex( 43814 );

	UPComPlayerInput_execSetDirty_Parms SetDirty_Parms;

	this->ProcessEvent ( pFnSetDirty, &SetDirty_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.ReadMouseSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComPlayerInput::ReadMouseSettings ( )
{
	static UFunction* pFnReadMouseSettings = NULL;

	if ( ! pFnReadMouseSettings )
		pFnReadMouseSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 43813 );

	UPComPlayerInput_execReadMouseSettings_Parms ReadMouseSettings_Parms;

	pFnReadMouseSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadMouseSettings, &ReadMouseSettings_Parms, NULL );

	pFnReadMouseSettings->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.StoreMouseSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComPlayerInput::StoreMouseSettings ( )
{
	static UFunction* pFnStoreMouseSettings = NULL;

	if ( ! pFnStoreMouseSettings )
		pFnStoreMouseSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 43812 );

	UPComPlayerInput_execStoreMouseSettings_Parms StoreMouseSettings_Parms;

	pFnStoreMouseSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStoreMouseSettings, &StoreMouseSettings_Parms, NULL );

	pFnStoreMouseSettings->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.GetKeybindWithCurrentModifiers
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FKeyBind                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   Key                            ( CPF_Const | CPF_Parm | CPF_OutParm )

struct FKeyBind UPComPlayerInput::GetKeybindWithCurrentModifiers ( struct FName* Key )
{
	static UFunction* pFnGetKeybindWithCurrentModifiers = NULL;

	if ( ! pFnGetKeybindWithCurrentModifiers )
		pFnGetKeybindWithCurrentModifiers = (UFunction*) UObject::GObjObjects()->GetIndex( 43809 );

	UPComPlayerInput_execGetKeybindWithCurrentModifiers_Parms GetKeybindWithCurrentModifiers_Parms;

	pFnGetKeybindWithCurrentModifiers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetKeybindWithCurrentModifiers, &GetKeybindWithCurrentModifiers_Parms, NULL );

	pFnGetKeybindWithCurrentModifiers->FunctionFlags |= 0x400;

	if ( Key )
		memcpy ( Key, &GetKeybindWithCurrentModifiers_Parms.Key, 0x8 );

	return GetKeybindWithCurrentModifiers_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.GetBind
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   Key                            ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FKeyBind                ModifierKeyBind                ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FString UPComPlayerInput::GetBind ( struct FName* Key, struct FKeyBind* ModifierKeyBind )
{
	static UFunction* pFnGetBind = NULL;

	if ( ! pFnGetBind )
		pFnGetBind = (UFunction*) UObject::GObjObjects()->GetIndex( 43805 );

	UPComPlayerInput_execGetBind_Parms GetBind_Parms;

	pFnGetBind->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBind, &GetBind_Parms, NULL );

	pFnGetBind->FunctionFlags |= 0x400;

	if ( Key )
		memcpy ( Key, &GetBind_Parms.Key, 0x8 );

	if ( ModifierKeyBind )
		memcpy ( ModifierKeyBind, &GetBind_Parms.ModifierKeyBind, 0x18 );

	return GetBind_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.KeybindToExtendedString
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FKeyBind                Bind                           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FString UPComPlayerInput::KeybindToExtendedString ( struct FKeyBind* Bind )
{
	static UFunction* pFnKeybindToExtendedString = NULL;

	if ( ! pFnKeybindToExtendedString )
		pFnKeybindToExtendedString = (UFunction*) UObject::GObjObjects()->GetIndex( 43802 );

	UPComPlayerInput_execKeybindToExtendedString_Parms KeybindToExtendedString_Parms;

	pFnKeybindToExtendedString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnKeybindToExtendedString, &KeybindToExtendedString_Parms, NULL );

	pFnKeybindToExtendedString->FunctionFlags |= 0x400;

	if ( Bind )
		memcpy ( Bind, &KeybindToExtendedString_Parms.Bind, 0x18 );

	return KeybindToExtendedString_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.ExtendedStringToKeybind
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FKeyBind                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Str                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Cmd                            ( CPF_Parm | CPF_NeedCtorLink )

struct FKeyBind UPComPlayerInput::ExtendedStringToKeybind ( struct FString Str, struct FString Cmd )
{
	static UFunction* pFnExtendedStringToKeybind = NULL;

	if ( ! pFnExtendedStringToKeybind )
		pFnExtendedStringToKeybind = (UFunction*) UObject::GObjObjects()->GetIndex( 43798 );

	UPComPlayerInput_execExtendedStringToKeybind_Parms ExtendedStringToKeybind_Parms;
	memcpy ( &ExtendedStringToKeybind_Parms.Str, &Str, 0xC );
	memcpy ( &ExtendedStringToKeybind_Parms.Cmd, &Cmd, 0xC );

	pFnExtendedStringToKeybind->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnExtendedStringToKeybind, &ExtendedStringToKeybind_Parms, NULL );

	pFnExtendedStringToKeybind->FunctionFlags |= 0x400;

	return ExtendedStringToKeybind_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.GetBindFromCommand
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FKeyBind                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Cmd                            ( CPF_Parm | CPF_NeedCtorLink )
// int                            nAlternate                     ( CPF_OptionalParm | CPF_Parm )

struct FKeyBind UPComPlayerInput::GetBindFromCommand ( struct FString Cmd, int nAlternate )
{
	static UFunction* pFnGetBindFromCommand = NULL;

	if ( ! pFnGetBindFromCommand )
		pFnGetBindFromCommand = (UFunction*) UObject::GObjObjects()->GetIndex( 43794 );

	UPComPlayerInput_execGetBindFromCommand_Parms GetBindFromCommand_Parms;
	memcpy ( &GetBindFromCommand_Parms.Cmd, &Cmd, 0xC );
	GetBindFromCommand_Parms.nAlternate = nAlternate;

	pFnGetBindFromCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBindFromCommand, &GetBindFromCommand_Parms, NULL );

	pFnGetBindFromCommand->FunctionFlags |= 0x400;

	return GetBindFromCommand_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.GetBindExtended
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Str                            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bExactMatch                    ( CPF_OptionalParm | CPF_Parm )
// struct FKeyBind                Bind                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPComPlayerInput::GetBindExtended ( struct FString Str, unsigned long bExactMatch, struct FKeyBind* Bind )
{
	static UFunction* pFnGetBindExtended = NULL;

	if ( ! pFnGetBindExtended )
		pFnGetBindExtended = (UFunction*) UObject::GObjObjects()->GetIndex( 43789 );

	UPComPlayerInput_execGetBindExtended_Parms GetBindExtended_Parms;
	memcpy ( &GetBindExtended_Parms.Str, &Str, 0xC );
	GetBindExtended_Parms.bExactMatch = bExactMatch;

	pFnGetBindExtended->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBindExtended, &GetBindExtended_Parms, NULL );

	pFnGetBindExtended->FunctionFlags |= 0x400;

	if ( Bind )
		memcpy ( Bind, &GetBindExtended_Parms.Bind, 0x18 );

	return GetBindExtended_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.GetStorageStringForCommand
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )

struct FString UPComPlayerInput::GetStorageStringForCommand ( struct FString Command )
{
	static UFunction* pFnGetStorageStringForCommand = NULL;

	if ( ! pFnGetStorageStringForCommand )
		pFnGetStorageStringForCommand = (UFunction*) UObject::GObjObjects()->GetIndex( 43786 );

	UPComPlayerInput_execGetStorageStringForCommand_Parms GetStorageStringForCommand_Parms;
	memcpy ( &GetStorageStringForCommand_Parms.Command, &Command, 0xC );

	pFnGetStorageStringForCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetStorageStringForCommand, &GetStorageStringForCommand_Parms, NULL );

	pFnGetStorageStringForCommand->FunctionFlags |= 0x400;

	return GetStorageStringForCommand_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.InitKeyBindingsMap
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComPlayerInput::InitKeyBindingsMap ( )
{
	static UFunction* pFnInitKeyBindingsMap = NULL;

	if ( ! pFnInitKeyBindingsMap )
		pFnInitKeyBindingsMap = (UFunction*) UObject::GObjObjects()->GetIndex( 43785 );

	UPComPlayerInput_execInitKeyBindingsMap_Parms InitKeyBindingsMap_Parms;

	pFnInitKeyBindingsMap->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitKeyBindingsMap, &InitKeyBindingsMap_Parms, NULL );

	pFnInitKeyBindingsMap->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.ReadBindings
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComPlayerInput::ReadBindings ( )
{
	static UFunction* pFnReadBindings = NULL;

	if ( ! pFnReadBindings )
		pFnReadBindings = (UFunction*) UObject::GObjObjects()->GetIndex( 43784 );

	UPComPlayerInput_execReadBindings_Parms ReadBindings_Parms;

	pFnReadBindings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadBindings, &ReadBindings_Parms, NULL );

	pFnReadBindings->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.StoreBinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 BindName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 OldCommand                     ( CPF_Parm | CPF_NeedCtorLink )

void UPComPlayerInput::StoreBinding ( struct FString BindName, struct FString Command, struct FString OldCommand )
{
	static UFunction* pFnStoreBinding = NULL;

	if ( ! pFnStoreBinding )
		pFnStoreBinding = (UFunction*) UObject::GObjObjects()->GetIndex( 43780 );

	UPComPlayerInput_execStoreBinding_Parms StoreBinding_Parms;
	memcpy ( &StoreBinding_Parms.BindName, &BindName, 0xC );
	memcpy ( &StoreBinding_Parms.Command, &Command, 0xC );
	memcpy ( &StoreBinding_Parms.OldCommand, &OldCommand, 0xC );

	pFnStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStoreBinding, &StoreBinding_Parms, NULL );

	pFnStoreBinding->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.ResetKeysToDefault
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 PresetName                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UPComPlayerInput::ResetKeysToDefault ( struct FString PresetName )
{
	static UFunction* pFnResetKeysToDefault = NULL;

	if ( ! pFnResetKeysToDefault )
		pFnResetKeysToDefault = (UFunction*) UObject::GObjObjects()->GetIndex( 43778 );

	UPComPlayerInput_execResetKeysToDefault_Parms ResetKeysToDefault_Parms;
	memcpy ( &ResetKeysToDefault_Parms.PresetName, &PresetName, 0xC );

	pFnResetKeysToDefault->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetKeysToDefault, &ResetKeysToDefault_Parms, NULL );

	pFnResetKeysToDefault->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.StoreKeysToDefault
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UPComPlayerInput::StoreKeysToDefault ( )
{
	static UFunction* pFnStoreKeysToDefault = NULL;

	if ( ! pFnStoreKeysToDefault )
		pFnStoreKeysToDefault = (UFunction*) UObject::GObjObjects()->GetIndex( 43777 );

	UPComPlayerInput_execStoreKeysToDefault_Parms StoreKeysToDefault_Parms;

	pFnStoreKeysToDefault->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStoreKeysToDefault, &StoreKeysToDefault_Parms, NULL );

	pFnStoreKeysToDefault->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.ConvertCommandToProperty
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Command                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UPComPlayerInput::ConvertCommandToProperty ( struct FString* Command )
{
	static UFunction* pFnConvertCommandToProperty = NULL;

	if ( ! pFnConvertCommandToProperty )
		pFnConvertCommandToProperty = (UFunction*) UObject::GObjObjects()->GetIndex( 43774 );

	UPComPlayerInput_execConvertCommandToProperty_Parms ConvertCommandToProperty_Parms;

	pFnConvertCommandToProperty->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnConvertCommandToProperty, &ConvertCommandToProperty_Parms, NULL );

	pFnConvertCommandToProperty->FunctionFlags |= 0x400;

	if ( Command )
		memcpy ( Command, &ConvertCommandToProperty_Parms.Command, 0xC );

	return ConvertCommandToProperty_Parms.ReturnValue;
};

// Function PlatformCommon.PComRepInfo_Game.CreateMusicThemePlayer
// [0x00020102] 
// Parameters infos:

void APComRepInfo_Game::CreateMusicThemePlayer ( )
{
	static UFunction* pFnCreateMusicThemePlayer = NULL;

	if ( ! pFnCreateMusicThemePlayer )
		pFnCreateMusicThemePlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 43929 );

	APComRepInfo_Game_execCreateMusicThemePlayer_Parms CreateMusicThemePlayer_Parms;

	this->ProcessEvent ( pFnCreateMusicThemePlayer, &CreateMusicThemePlayer_Parms, NULL );
};

// Function PlatformCommon.PComRepInfo_Game.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void APComRepInfo_Game::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->GetIndex( 43928 );

	APComRepInfo_Game_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function PlatformCommon.PComRepInfo_Game.PlayMusicEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   EventName                      ( CPF_Const | CPF_Parm )

void APComRepInfo_Game::PlayMusicEvent ( struct FName EventName )
{
	static UFunction* pFnPlayMusicEvent = NULL;

	if ( ! pFnPlayMusicEvent )
		pFnPlayMusicEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 43926 );

	APComRepInfo_Game_execPlayMusicEvent_Parms PlayMusicEvent_Parms;
	memcpy ( &PlayMusicEvent_Parms.EventName, &EventName, 0x8 );

	pFnPlayMusicEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayMusicEvent, &PlayMusicEvent_Parms, NULL );

	pFnPlayMusicEvent->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.scLogTickFlags
// [0x40024202] ( FUNC_Exec )
// Parameters infos:
// int                            nFlags                         ( CPF_Parm )
// unsigned long                  bSet                           ( CPF_OptionalParm | CPF_Parm )

void UPComSupportCommands::scLogTickFlags ( int nFlags, unsigned long bSet )
{
	static UFunction* pFnscLogTickFlags = NULL;

	if ( ! pFnscLogTickFlags )
		pFnscLogTickFlags = (UFunction*) UObject::GObjObjects()->GetIndex( 44033 );

	UPComSupportCommands_execscLogTickFlags_Parms scLogTickFlags_Parms;
	scLogTickFlags_Parms.nFlags = nFlags;
	scLogTickFlags_Parms.bSet = bSet;

	this->ProcessEvent ( pFnscLogTickFlags, &scLogTickFlags_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scPerfAlwaysRelevantLimit
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            feet                           ( CPF_Parm )

void UPComSupportCommands::scPerfAlwaysRelevantLimit ( int feet )
{
	static UFunction* pFnscPerfAlwaysRelevantLimit = NULL;

	if ( ! pFnscPerfAlwaysRelevantLimit )
		pFnscPerfAlwaysRelevantLimit = (UFunction*) UObject::GObjObjects()->GetIndex( 44031 );

	UPComSupportCommands_execscPerfAlwaysRelevantLimit_Parms scPerfAlwaysRelevantLimit_Parms;
	scPerfAlwaysRelevantLimit_Parms.feet = feet;

	this->ProcessEvent ( pFnscPerfAlwaysRelevantLimit, &scPerfAlwaysRelevantLimit_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scGPerfServerFlags
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            Flags                          ( CPF_Parm )
// int                            alternate1                     ( CPF_Parm )
// int                            alternate2                     ( CPF_Parm )

void UPComSupportCommands::scGPerfServerFlags ( int Flags, int alternate1, int alternate2 )
{
	static UFunction* pFnscGPerfServerFlags = NULL;

	if ( ! pFnscGPerfServerFlags )
		pFnscGPerfServerFlags = (UFunction*) UObject::GObjObjects()->GetIndex( 44027 );

	UPComSupportCommands_execscGPerfServerFlags_Parms scGPerfServerFlags_Parms;
	scGPerfServerFlags_Parms.Flags = Flags;
	scGPerfServerFlags_Parms.alternate1 = alternate1;
	scGPerfServerFlags_Parms.alternate2 = alternate2;

	this->ProcessEvent ( pFnscGPerfServerFlags, &scGPerfServerFlags_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scPerfPhysThreshold
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// float                          thresh1                        ( CPF_Parm )
// float                          thesh2                         ( CPF_Parm )

void UPComSupportCommands::scPerfPhysThreshold ( float thresh1, float thesh2 )
{
	static UFunction* pFnscPerfPhysThreshold = NULL;

	if ( ! pFnscPerfPhysThreshold )
		pFnscPerfPhysThreshold = (UFunction*) UObject::GObjObjects()->GetIndex( 44024 );

	UPComSupportCommands_execscPerfPhysThreshold_Parms scPerfPhysThreshold_Parms;
	scPerfPhysThreshold_Parms.thresh1 = thresh1;
	scPerfPhysThreshold_Parms.thesh2 = thesh2;

	this->ProcessEvent ( pFnscPerfPhysThreshold, &scPerfPhysThreshold_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scPerfTickRate
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            tickHz                         ( CPF_Parm )
// int                            altTickHz                      ( CPF_Parm )

void UPComSupportCommands::scPerfTickRate ( int tickHz, int altTickHz )
{
	static UFunction* pFnscPerfTickRate = NULL;

	if ( ! pFnscPerfTickRate )
		pFnscPerfTickRate = (UFunction*) UObject::GObjObjects()->GetIndex( 44021 );

	UPComSupportCommands_execscPerfTickRate_Parms scPerfTickRate_Parms;
	scPerfTickRate_Parms.tickHz = tickHz;
	scPerfTickRate_Parms.altTickHz = altTickHz;

	this->ProcessEvent ( pFnscPerfTickRate, &scPerfTickRate_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scPerfDebugRelevMode
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            Mode                           ( CPF_Parm )

void UPComSupportCommands::scPerfDebugRelevMode ( int Mode )
{
	static UFunction* pFnscPerfDebugRelevMode = NULL;

	if ( ! pFnscPerfDebugRelevMode )
		pFnscPerfDebugRelevMode = (UFunction*) UObject::GObjObjects()->GetIndex( 44019 );

	UPComSupportCommands_execscPerfDebugRelevMode_Parms scPerfDebugRelevMode_Parms;
	scPerfDebugRelevMode_Parms.Mode = Mode;

	this->ProcessEvent ( pFnscPerfDebugRelevMode, &scPerfDebugRelevMode_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scPerfDebugSkip
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            skips                          ( CPF_Parm )

void UPComSupportCommands::scPerfDebugSkip ( int skips )
{
	static UFunction* pFnscPerfDebugSkip = NULL;

	if ( ! pFnscPerfDebugSkip )
		pFnscPerfDebugSkip = (UFunction*) UObject::GObjObjects()->GetIndex( 44017 );

	UPComSupportCommands_execscPerfDebugSkip_Parms scPerfDebugSkip_Parms;
	scPerfDebugSkip_Parms.skips = skips;

	this->ProcessEvent ( pFnscPerfDebugSkip, &scPerfDebugSkip_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scPerfDebugFeet
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            feet                           ( CPF_Parm )

void UPComSupportCommands::scPerfDebugFeet ( int feet )
{
	static UFunction* pFnscPerfDebugFeet = NULL;

	if ( ! pFnscPerfDebugFeet )
		pFnscPerfDebugFeet = (UFunction*) UObject::GObjObjects()->GetIndex( 44015 );

	UPComSupportCommands_execscPerfDebugFeet_Parms scPerfDebugFeet_Parms;
	scPerfDebugFeet_Parms.feet = feet;

	this->ProcessEvent ( pFnscPerfDebugFeet, &scPerfDebugFeet_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scDemoStop
// [0x40020202] ( FUNC_Exec )
// Parameters infos:

void UPComSupportCommands::scDemoStop ( )
{
	static UFunction* pFnscDemoStop = NULL;

	if ( ! pFnscDemoStop )
		pFnscDemoStop = (UFunction*) UObject::GObjObjects()->GetIndex( 44014 );

	UPComSupportCommands_execscDemoStop_Parms scDemoStop_Parms;

	this->ProcessEvent ( pFnscDemoStop, &scDemoStop_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scDemoRec
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 sCommand                       ( CPF_Parm | CPF_NeedCtorLink )

void UPComSupportCommands::scDemoRec ( struct FString sCommand )
{
	static UFunction* pFnscDemoRec = NULL;

	if ( ! pFnscDemoRec )
		pFnscDemoRec = (UFunction*) UObject::GObjObjects()->GetIndex( 44012 );

	UPComSupportCommands_execscDemoRec_Parms scDemoRec_Parms;
	memcpy ( &scDemoRec_Parms.sCommand, &sCommand, 0xC );

	this->ProcessEvent ( pFnscDemoRec, &scDemoRec_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scTimer
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 sCommand                       ( CPF_Parm | CPF_NeedCtorLink )

void UPComSupportCommands::scTimer ( struct FString sCommand )
{
	static UFunction* pFnscTimer = NULL;

	if ( ! pFnscTimer )
		pFnscTimer = (UFunction*) UObject::GObjObjects()->GetIndex( 44009 );

	UPComSupportCommands_execscTimer_Parms scTimer_Parms;
	memcpy ( &scTimer_Parms.sCommand, &sCommand, 0xC );

	this->ProcessEvent ( pFnscTimer, &scTimer_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scTime
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            nSeconds                       ( CPF_Parm )

void UPComSupportCommands::scTime ( int nSeconds )
{
	static UFunction* pFnscTime = NULL;

	if ( ! pFnscTime )
		pFnscTime = (UFunction*) UObject::GObjObjects()->GetIndex( 44006 );

	UPComSupportCommands_execscTime_Parms scTime_Parms;
	scTime_Parms.nSeconds = nSeconds;

	this->ProcessEvent ( pFnscTime, &scTime_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scScore
// [0x40024202] ( FUNC_Exec )
// Parameters infos:
// int                            nTeam                          ( CPF_Parm )
// int                            nCount                         ( CPF_OptionalParm | CPF_Parm )

void UPComSupportCommands::scScore ( int nTeam, int nCount )
{
	static UFunction* pFnscScore = NULL;

	if ( ! pFnscScore )
		pFnscScore = (UFunction*) UObject::GObjObjects()->GetIndex( 44002 );

	UPComSupportCommands_execscScore_Parms scScore_Parms;
	scScore_Parms.nTeam = nTeam;
	scScore_Parms.nCount = nCount;

	this->ProcessEvent ( pFnscScore, &scScore_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scEndGame
// [0x40024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UPComSupportCommands::scEndGame ( struct FString Reason )
{
	static UFunction* pFnscEndGame = NULL;

	if ( ! pFnscEndGame )
		pFnscEndGame = (UFunction*) UObject::GObjObjects()->GetIndex( 43999 );

	UPComSupportCommands_execscEndGame_Parms scEndGame_Parms;
	memcpy ( &scEndGame_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnscEndGame, &scEndGame_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scStartGame
// [0x40024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UPComSupportCommands::scStartGame ( struct FString Reason )
{
	static UFunction* pFnscStartGame = NULL;

	if ( ! pFnscStartGame )
		pFnscStartGame = (UFunction*) UObject::GObjObjects()->GetIndex( 43996 );

	UPComSupportCommands_execscStartGame_Parms scStartGame_Parms;
	memcpy ( &scStartGame_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnscStartGame, &scStartGame_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scLogMark
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Comment                        ( CPF_Parm | CPF_NeedCtorLink )

void UPComSupportCommands::scLogMark ( struct FString Comment )
{
	static UFunction* pFnscLogMark = NULL;

	if ( ! pFnscLogMark )
		pFnscLogMark = (UFunction*) UObject::GObjObjects()->GetIndex( 43994 );

	UPComSupportCommands_execscLogMark_Parms scLogMark_Parms;
	memcpy ( &scLogMark_Parms.Comment, &Comment, 0xC );

	this->ProcessEvent ( pFnscLogMark, &scLogMark_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scLog
// [0x40024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 LogName                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bEnabled                       ( CPF_OptionalParm | CPF_Parm )

void UPComSupportCommands::scLog ( struct FString LogName, unsigned long bEnabled )
{
	static UFunction* pFnscLog = NULL;

	if ( ! pFnscLog )
		pFnscLog = (UFunction*) UObject::GObjObjects()->GetIndex( 43990 );

	UPComSupportCommands_execscLog_Parms scLog_Parms;
	memcpy ( &scLog_Parms.LogName, &LogName, 0xC );
	scLog_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnscLog, &scLog_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.gmmf
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UPComSupportCommands::gmmf ( )
{
	static UFunction* pFngmmf = NULL;

	if ( ! pFngmmf )
		pFngmmf = (UFunction*) UObject::GObjObjects()->GetIndex( 43989 );

	UPComSupportCommands_execgmmf_Parms gmmf_Parms;

	this->ProcessEvent ( pFngmmf, &gmmf_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.SetLogServerTickStatsFlags
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Flags                          ( CPF_Parm )
// unsigned long                  bSet                           ( CPF_Parm )

void UPComSupportCommands::SetLogServerTickStatsFlags ( int Flags, unsigned long bSet )
{
	static UFunction* pFnSetLogServerTickStatsFlags = NULL;

	if ( ! pFnSetLogServerTickStatsFlags )
		pFnSetLogServerTickStatsFlags = (UFunction*) UObject::GObjObjects()->GetIndex( 43986 );

	UPComSupportCommands_execSetLogServerTickStatsFlags_Parms SetLogServerTickStatsFlags_Parms;
	SetLogServerTickStatsFlags_Parms.Flags = Flags;
	SetLogServerTickStatsFlags_Parms.bSet = bSet;

	pFnSetLogServerTickStatsFlags->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLogServerTickStatsFlags, &SetLogServerTickStatsFlags_Parms, NULL );

	pFnSetLogServerTickStatsFlags->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugPhysicsThreshold
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fThresh1                       ( CPF_Parm )
// float                          fThresh2                       ( CPF_Parm )

void UPComSupportCommands::GPerfDebugPhysicsThreshold ( float fThresh1, float fThresh2 )
{
	static UFunction* pFnGPerfDebugPhysicsThreshold = NULL;

	if ( ! pFnGPerfDebugPhysicsThreshold )
		pFnGPerfDebugPhysicsThreshold = (UFunction*) UObject::GObjObjects()->GetIndex( 43983 );

	UPComSupportCommands_execGPerfDebugPhysicsThreshold_Parms GPerfDebugPhysicsThreshold_Parms;
	GPerfDebugPhysicsThreshold_Parms.fThresh1 = fThresh1;
	GPerfDebugPhysicsThreshold_Parms.fThresh2 = fThresh2;

	pFnGPerfDebugPhysicsThreshold->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfDebugPhysicsThreshold, &GPerfDebugPhysicsThreshold_Parms, NULL );

	pFnGPerfDebugPhysicsThreshold->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugTickRate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            tickHz                         ( CPF_Parm )
// int                            altTickHz                      ( CPF_Parm )

void UPComSupportCommands::GPerfDebugTickRate ( int tickHz, int altTickHz )
{
	static UFunction* pFnGPerfDebugTickRate = NULL;

	if ( ! pFnGPerfDebugTickRate )
		pFnGPerfDebugTickRate = (UFunction*) UObject::GObjObjects()->GetIndex( 43980 );

	UPComSupportCommands_execGPerfDebugTickRate_Parms GPerfDebugTickRate_Parms;
	GPerfDebugTickRate_Parms.tickHz = tickHz;
	GPerfDebugTickRate_Parms.altTickHz = altTickHz;

	pFnGPerfDebugTickRate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfDebugTickRate, &GPerfDebugTickRate_Parms, NULL );

	pFnGPerfDebugTickRate->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.GPerfAllRelevantLimit
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            feet                           ( CPF_Parm )

void UPComSupportCommands::GPerfAllRelevantLimit ( int feet )
{
	static UFunction* pFnGPerfAllRelevantLimit = NULL;

	if ( ! pFnGPerfAllRelevantLimit )
		pFnGPerfAllRelevantLimit = (UFunction*) UObject::GObjObjects()->GetIndex( 43978 );

	UPComSupportCommands_execGPerfAllRelevantLimit_Parms GPerfAllRelevantLimit_Parms;
	GPerfAllRelevantLimit_Parms.feet = feet;

	pFnGPerfAllRelevantLimit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfAllRelevantLimit, &GPerfAllRelevantLimit_Parms, NULL );

	pFnGPerfAllRelevantLimit->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.GPerfServerFlags
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Flags                          ( CPF_Parm )
// int                            alternate1                     ( CPF_Parm )
// int                            alternate2                     ( CPF_Parm )

void UPComSupportCommands::GPerfServerFlags ( int Flags, int alternate1, int alternate2 )
{
	static UFunction* pFnGPerfServerFlags = NULL;

	if ( ! pFnGPerfServerFlags )
		pFnGPerfServerFlags = (UFunction*) UObject::GObjObjects()->GetIndex( 43974 );

	UPComSupportCommands_execGPerfServerFlags_Parms GPerfServerFlags_Parms;
	GPerfServerFlags_Parms.Flags = Flags;
	GPerfServerFlags_Parms.alternate1 = alternate1;
	GPerfServerFlags_Parms.alternate2 = alternate2;

	pFnGPerfServerFlags->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfServerFlags, &GPerfServerFlags_Parms, NULL );

	pFnGPerfServerFlags->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugRelevMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Mode                           ( CPF_Parm )

void UPComSupportCommands::GPerfDebugRelevMode ( int Mode )
{
	static UFunction* pFnGPerfDebugRelevMode = NULL;

	if ( ! pFnGPerfDebugRelevMode )
		pFnGPerfDebugRelevMode = (UFunction*) UObject::GObjObjects()->GetIndex( 43972 );

	UPComSupportCommands_execGPerfDebugRelevMode_Parms GPerfDebugRelevMode_Parms;
	GPerfDebugRelevMode_Parms.Mode = Mode;

	pFnGPerfDebugRelevMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfDebugRelevMode, &GPerfDebugRelevMode_Parms, NULL );

	pFnGPerfDebugRelevMode->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugSkips
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            skips                          ( CPF_Parm )

void UPComSupportCommands::GPerfDebugSkips ( int skips )
{
	static UFunction* pFnGPerfDebugSkips = NULL;

	if ( ! pFnGPerfDebugSkips )
		pFnGPerfDebugSkips = (UFunction*) UObject::GObjObjects()->GetIndex( 43970 );

	UPComSupportCommands_execGPerfDebugSkips_Parms GPerfDebugSkips_Parms;
	GPerfDebugSkips_Parms.skips = skips;

	pFnGPerfDebugSkips->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfDebugSkips, &GPerfDebugSkips_Parms, NULL );

	pFnGPerfDebugSkips->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugFeet
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            feet                           ( CPF_Parm )

void UPComSupportCommands::GPerfDebugFeet ( int feet )
{
	static UFunction* pFnGPerfDebugFeet = NULL;

	if ( ! pFnGPerfDebugFeet )
		pFnGPerfDebugFeet = (UFunction*) UObject::GObjObjects()->GetIndex( 43968 );

	UPComSupportCommands_execGPerfDebugFeet_Parms GPerfDebugFeet_Parms;
	GPerfDebugFeet_Parms.feet = feet;

	pFnGPerfDebugFeet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfDebugFeet, &GPerfDebugFeet_Parms, NULL );

	pFnGPerfDebugFeet->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.gmDiag
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            Code                           ( CPF_Parm )
// int                            Route                          ( CPF_Parm )

void UPComSupportCommands::gmDiag ( int Code, int Route )
{
	static UFunction* pFngmDiag = NULL;

	if ( ! pFngmDiag )
		pFngmDiag = (UFunction*) UObject::GObjObjects()->GetIndex( 43965 );

	UPComSupportCommands_execgmDiag_Parms gmDiag_Parms;
	gmDiag_Parms.Code = Code;
	gmDiag_Parms.Route = Route;

	pFngmDiag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmDiag, &gmDiag_Parms, NULL );

	pFngmDiag->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.gmC
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sCommand                       ( CPF_Parm | CPF_NeedCtorLink )

void UPComSupportCommands::gmC ( struct FString sCommand )
{
	static UFunction* pFngmC = NULL;

	if ( ! pFngmC )
		pFngmC = (UFunction*) UObject::GObjObjects()->GetIndex( 43963 );

	UPComSupportCommands_execgmC_Parms gmC_Parms;
	memcpy ( &gmC_Parms.sCommand, &sCommand, 0xC );

	pFngmC->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmC, &gmC_Parms, NULL );

	pFngmC->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.gmCommand
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sCommand                       ( CPF_Parm | CPF_NeedCtorLink )

void UPComSupportCommands::gmCommand ( struct FString sCommand )
{
	static UFunction* pFngmCommand = NULL;

	if ( ! pFngmCommand )
		pFngmCommand = (UFunction*) UObject::GObjObjects()->GetIndex( 43961 );

	UPComSupportCommands_execgmCommand_Parms gmCommand_Parms;
	memcpy ( &gmCommand_Parms.sCommand, &sCommand, 0xC );

	pFngmCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmCommand, &gmCommand_Parms, NULL );

	pFngmCommand->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.gmMatchNext
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nMapId                         ( CPF_Parm )

void UPComSupportCommands::gmMatchNext ( int nMapId )
{
	static UFunction* pFngmMatchNext = NULL;

	if ( ! pFngmMatchNext )
		pFngmMatchNext = (UFunction*) UObject::GObjObjects()->GetIndex( 43959 );

	UPComSupportCommands_execgmMatchNext_Parms gmMatchNext_Parms;
	gmMatchNext_Parms.nMapId = nMapId;

	pFngmMatchNext->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmMatchNext, &gmMatchNext_Parms, NULL );

	pFngmMatchNext->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.gmMatchForce
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nQueueId                       ( CPF_OptionalParm | CPF_Parm )

void UPComSupportCommands::gmMatchForce ( int nQueueId )
{
	static UFunction* pFngmMatchForce = NULL;

	if ( ! pFngmMatchForce )
		pFngmMatchForce = (UFunction*) UObject::GObjObjects()->GetIndex( 43957 );

	UPComSupportCommands_execgmMatchForce_Parms gmMatchForce_Parms;
	gmMatchForce_Parms.nQueueId = nQueueId;

	pFngmMatchForce->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmMatchForce, &gmMatchForce_Parms, NULL );

	pFngmMatchForce->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComUIManagerBase.DebugDraw
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UPComUIManagerBase::eventDebugDraw ( class UCanvas* Canvas )
{
	static UFunction* pFnDebugDraw = NULL;

	if ( ! pFnDebugDraw )
		pFnDebugDraw = (UFunction*) UObject::GObjObjects()->GetIndex( 44043 );

	UPComUIManagerBase_eventDebugDraw_Parms DebugDraw_Parms;
	DebugDraw_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDebugDraw, &DebugDraw_Parms, NULL );
};

// Function PlatformCommon.PComMusicThemePlayer.UpdateReplicatedMusicEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   EventName                      ( CPF_Const | CPF_Parm )

void UPComMusicThemePlayer::UpdateReplicatedMusicEvent ( struct FName EventName )
{
	static UFunction* pFnUpdateReplicatedMusicEvent = NULL;

	if ( ! pFnUpdateReplicatedMusicEvent )
		pFnUpdateReplicatedMusicEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 43389 );

	UPComMusicThemePlayer_execUpdateReplicatedMusicEvent_Parms UpdateReplicatedMusicEvent_Parms;
	memcpy ( &UpdateReplicatedMusicEvent_Parms.EventName, &EventName, 0x8 );

	pFnUpdateReplicatedMusicEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateReplicatedMusicEvent, &UpdateReplicatedMusicEvent_Parms, NULL );

	pFnUpdateReplicatedMusicEvent->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.UpdateMusicTrack
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FMusicTrackStruct       NewMusicTrack                  ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// float                          fDuration                      ( CPF_Const | CPF_OptionalParm | CPF_Parm )

void UPComMusicThemePlayer::UpdateMusicTrack ( struct FMusicTrackStruct NewMusicTrack, float fDuration )
{
	static UFunction* pFnUpdateMusicTrack = NULL;

	if ( ! pFnUpdateMusicTrack )
		pFnUpdateMusicTrack = (UFunction*) UObject::GObjObjects()->GetIndex( 43386 );

	UPComMusicThemePlayer_execUpdateMusicTrack_Parms UpdateMusicTrack_Parms;
	memcpy ( &UpdateMusicTrack_Parms.NewMusicTrack, &NewMusicTrack, 0x24 );
	UpdateMusicTrack_Parms.fDuration = fDuration;

	pFnUpdateMusicTrack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateMusicTrack, &UpdateMusicTrack_Parms, NULL );

	pFnUpdateMusicTrack->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.StopMusic
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComMusicThemePlayer::StopMusic ( )
{
	static UFunction* pFnStopMusic = NULL;

	if ( ! pFnStopMusic )
		pFnStopMusic = (UFunction*) UObject::GObjObjects()->GetIndex( 43385 );

	UPComMusicThemePlayer_execStopMusic_Parms StopMusic_Parms;

	pFnStopMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopMusic, &StopMusic_Parms, NULL );

	pFnStopMusic->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.PlayMusicEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   EventName                      ( CPF_Const | CPF_Parm )

void UPComMusicThemePlayer::PlayMusicEvent ( struct FName EventName )
{
	static UFunction* pFnPlayMusicEvent = NULL;

	if ( ! pFnPlayMusicEvent )
		pFnPlayMusicEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 43383 );

	UPComMusicThemePlayer_execPlayMusicEvent_Parms PlayMusicEvent_Parms;
	memcpy ( &PlayMusicEvent_Parms.EventName, &EventName, 0x8 );

	pFnPlayMusicEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayMusicEvent, &PlayMusicEvent_Parms, NULL );

	pFnPlayMusicEvent->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.PlayDefaultMusic
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComMusicThemePlayer::PlayDefaultMusic ( )
{
	static UFunction* pFnPlayDefaultMusic = NULL;

	if ( ! pFnPlayDefaultMusic )
		pFnPlayDefaultMusic = (UFunction*) UObject::GObjObjects()->GetIndex( 43382 );

	UPComMusicThemePlayer_execPlayDefaultMusic_Parms PlayDefaultMusic_Parms;

	pFnPlayDefaultMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayDefaultMusic, &PlayDefaultMusic_Parms, NULL );

	pFnPlayDefaultMusic->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.OnThemeLoaded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComMusicThemePlayer::OnThemeLoaded ( )
{
	static UFunction* pFnOnThemeLoaded = NULL;

	if ( ! pFnOnThemeLoaded )
		pFnOnThemeLoaded = (UFunction*) UObject::GObjObjects()->GetIndex( 43381 );

	UPComMusicThemePlayer_execOnThemeLoaded_Parms OnThemeLoaded_Parms;

	pFnOnThemeLoaded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnThemeLoaded, &OnThemeLoaded_Parms, NULL );

	pFnOnThemeLoaded->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.LoadTheme
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 themepath                      ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

void UPComMusicThemePlayer::LoadTheme ( struct FString themepath )
{
	static UFunction* pFnLoadTheme = NULL;

	if ( ! pFnLoadTheme )
		pFnLoadTheme = (UFunction*) UObject::GObjObjects()->GetIndex( 43379 );

	UPComMusicThemePlayer_execLoadTheme_Parms LoadTheme_Parms;
	memcpy ( &LoadTheme_Parms.themepath, &themepath, 0xC );

	pFnLoadTheme->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoadTheme, &LoadTheme_Parms, NULL );

	pFnLoadTheme->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.GetDefaultThemePath
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UPComMusicThemePlayer::GetDefaultThemePath ( )
{
	static UFunction* pFnGetDefaultThemePath = NULL;

	if ( ! pFnGetDefaultThemePath )
		pFnGetDefaultThemePath = (UFunction*) UObject::GObjObjects()->GetIndex( 43377 );

	UPComMusicThemePlayer_execGetDefaultThemePath_Parms GetDefaultThemePath_Parms;

	pFnGetDefaultThemePath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDefaultThemePath, &GetDefaultThemePath_Parms, NULL );

	pFnGetDefaultThemePath->FunctionFlags |= 0x400;

	return GetDefaultThemePath_Parms.ReturnValue;
};

// Function PlatformCommon.PComMusicThemePlayer.LoadDefaultTheme
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComMusicThemePlayer::LoadDefaultTheme ( )
{
	static UFunction* pFnLoadDefaultTheme = NULL;

	if ( ! pFnLoadDefaultTheme )
		pFnLoadDefaultTheme = (UFunction*) UObject::GObjObjects()->GetIndex( 43376 );

	UPComMusicThemePlayer_execLoadDefaultTheme_Parms LoadDefaultTheme_Parms;

	pFnLoadDefaultTheme->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoadDefaultTheme, &LoadDefaultTheme_Parms, NULL );

	pFnLoadDefaultTheme->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.Init
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComMusicThemePlayer::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->GetIndex( 43375 );

	UPComMusicThemePlayer_execInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemeSyncActor.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void APComMusicThemeSyncActor::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 43396 );

	APComMusicThemeSyncActor_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEventClient
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   EventName                      ( CPF_Parm )

void APComMusicThemeSyncActor::UpdateMusicEventClient ( struct FName EventName )
{
	static UFunction* pFnUpdateMusicEventClient = NULL;

	if ( ! pFnUpdateMusicEventClient )
		pFnUpdateMusicEventClient = (UFunction*) UObject::GObjObjects()->GetIndex( 43394 );

	APComMusicThemeSyncActor_execUpdateMusicEventClient_Parms UpdateMusicEventClient_Parms;
	memcpy ( &UpdateMusicEventClient_Parms.EventName, &EventName, 0x8 );

	pFnUpdateMusicEventClient->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateMusicEventClient, &UpdateMusicEventClient_Parms, NULL );

	pFnUpdateMusicEventClient->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   EventName                      ( CPF_Parm )

void APComMusicThemeSyncActor::UpdateMusicEvent ( struct FName EventName )
{
	static UFunction* pFnUpdateMusicEvent = NULL;

	if ( ! pFnUpdateMusicEvent )
		pFnUpdateMusicEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 43392 );

	APComMusicThemeSyncActor_execUpdateMusicEvent_Parms UpdateMusicEvent_Parms;
	memcpy ( &UpdateMusicEvent_Parms.EventName, &EventName, 0x8 );

	pFnUpdateMusicEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateMusicEvent, &UpdateMusicEvent_Parms, NULL );

	pFnUpdateMusicEvent->FunctionFlags |= 0x400;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif