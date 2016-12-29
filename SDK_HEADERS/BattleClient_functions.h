/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: BattleClient_functions.h
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

// Function BattleClient.BattleHUD.BattleHUDFunction
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ABattleHUD::BattleHUDFunction ( )
{
	static UFunction* pFnBattleHUDFunction = NULL;

	if ( ! pFnBattleHUDFunction )
		pFnBattleHUDFunction = (UFunction*) UObject::GObjObjects()->GetIndex( 130143 );

	ABattleHUD_execBattleHUDFunction_Parms BattleHUDFunction_Parms;

	pFnBattleHUDFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBattleHUDFunction, &BattleHUDFunction_Parms, NULL );

	pFnBattleHUDFunction->FunctionFlags |= 0x400;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif