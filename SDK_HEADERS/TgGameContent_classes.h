/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgGameContent_classes.h
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

// Class TgGameContent.TgFlagContentData_Content
// 0x0000 (0x0048 - 0x0048)
class UTgFlagContentData_Content : public UTgFlagContentData
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 145281 );

		return pClassPointer;
	};

};

UClass* UTgFlagContentData_Content::pClassPointer = NULL;

// Class TgGameContent.TgMenuTransitionActor_Content
// 0x0000 (0x01FC - 0x01FC)
class ATgMenuTransitionActor_Content : public ATgMenuTransitionActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 145453 );

		return pClassPointer;
	};

};

UClass* ATgMenuTransitionActor_Content::pClassPointer = NULL;

// Class TgGameContent.TgMenuTransitionActor_Pedestal
// 0x0000 (0x01FC - 0x01FC)
class ATgMenuTransitionActor_Pedestal : public ATgMenuTransitionActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 145550 );

		return pClassPointer;
	};

};

UClass* ATgMenuTransitionActor_Pedestal::pClassPointer = NULL;

// Class TgGameContent.TgMenuContentData_Content
// 0x0000 (0x0048 - 0x0048)
class UTgMenuContentData_Content : public UTgMenuContentData
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 145702 );

		return pClassPointer;
	};

};

UClass* UTgMenuContentData_Content::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif