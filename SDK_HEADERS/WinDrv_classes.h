/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WinDrv_classes.h
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class WinDrv.FacebookWindows
// 0x0008 (0x00A4 - 0x009C)
class UFacebookWindows : public UFacebookIntegration
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x009C (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1438 );

		return pClassPointer;
	};

};

UClass* UFacebookWindows::pClassPointer = NULL;

// Class WinDrv.HttpRequestWindows
// 0x0020 (0x0068 - 0x0048)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	unsigned char                                      UnknownData00[ 0x20 ];                            		// 0x0048 (0x0020) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1439 );

		return pClassPointer;
	};

};

UClass* UHttpRequestWindows::pClassPointer = NULL;

// Class WinDrv.HttpResponseWindows
// 0x0010 (0x004C - 0x003C)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1440 );

		return pClassPointer;
	};

};

UClass* UHttpResponseWindows::pClassPointer = NULL;

// Class WinDrv.SwrveAnalyticsWindows
// 0x0038 (0x00A0 - 0x0068)
class USwrveAnalyticsWindows : public UAnalyticEventsBase
{
public:
	unsigned char                                      UnknownData00[ 0x38 ];                            		// 0x0068 (0x0038) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1441 );

		return pClassPointer;
	};

};

UClass* USwrveAnalyticsWindows::pClassPointer = NULL;

// Class WinDrv.WindowsClient
// 0x018C (0x01DC - 0x0050)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[ 0x14C ];                           		// 0x0050 (0x014C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                 		// 0x019C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData01[ 0x2C ];                            		// 0x01A0 (0x002C) MISSED OFFSET
	int                                                AllowJoystickInput;                               		// 0x01CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData02[ 0xC ];                             		// 0x01D0 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1442 );

		return pClassPointer;
	};

};

UClass* UWindowsClient::pClassPointer = NULL;

// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x005C - 0x005C)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1443 );

		return pClassPointer;
	};

};

UClass* UXnaForceFeedbackManager::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif