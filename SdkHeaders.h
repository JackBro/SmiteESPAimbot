/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SdkHeaders.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#include "HackTools.h"
#include <windows.h>

/*
# ========================================================================================= #
# Defines
# ========================================================================================= #
*/

#define GObjects 0x1FE67C0	
#define GNames 0x1FE6770	

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

template< class T > struct TArray 
{ 
public: 
	T* Data; 
	int Count; 
	int Max; 

public: 
	TArray() 
	{ 
		Data = NULL; 
		Count = Max = 0; 
	}; 

public: 
	int Num() 
	{ 
		return this->Count; 
	}; 

	T& operator() ( int i ) 
	{ 
		return this->Data[ i ]; 
	}; 

	const T& operator() ( int i ) const 
	{ 
		return this->Data[ i ]; 
	}; 

	void Add ( T InputData ) 
	{ 
		Data = (T*) realloc ( Data, sizeof ( T ) * ( Count + 1 ) ); 
		Data[ Count++ ] = InputData; 
		Max = Count; 
	}; 

	void Clear() 
	{ 
		free ( Data ); 
		Count = Max = 0; 
	}; 
}; 


template <class T> struct TAntiCheatArray 
{ 
public: 
	inline TAntiCheatArray() 
	{ 
		Data = nullptr; 
		Num = 0; 
	}; 
    
	inline int Num() const 
	{ 
		return (int)Count; 
	}; 
    
	inline T GetIndex(int i) const 
	{ 
		T Addr = (T)((unsigned long)Data[i] ^ GetXorKey(i)); 
		return Addr; 
	} 
    
private: 
	T* Data; 
	DWORD Unknown; 
	DWORD Count; 
}; 
struct FNameEntry 
{ 
	unsigned char	UnknownData00[ 0x10 ]; 
	char			Name[ 0x10 ]; 
}; 

struct FName 
{ 
	int				Index; 
	unsigned char	unknownData00[ 0x4 ]; 

	FName() : Index ( 0 ) {}; 

	FName ( int i ) : Index ( i ) {}; 

	~FName() {}; 

	FName ( char* FindName ) 
	{ 		
		for ( int i = 0; i < this->Names()->Num(); ++i ) 
		{ 
			if ( this->Names()->GetIndex( i ) ) 
			{ 
				if ( ! strcmp ( this->Names()->GetIndex( i )->Name, FindName ) ) 
				{ 
					Index = i; 
					return; 
				} 
			} 
		} 
	}; 

	static TAntiCheatArray< FNameEntry* >* Names() 
	{ 
		static TAntiCheatArray< FNameEntry* >* Names = (TAntiCheatArray< FNameEntry* >*)((DWORD)GNames + (DWORD)GetModuleHandle(L"Smite.exe"));
		return Names;
	}; 

	char* GetName() 
	{ 
		return this->Names()->GetIndex( Index )->Name; 
	}; 

	bool operator == ( const FName& A ) const 
	{ 
		return ( Index == A.Index ); 
	}; 
}; 

struct FString : public TArray< wchar_t > 
{ 
	FString() {}; 

	FString ( wchar_t* Other ) 
	{ 
		this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

		if ( this->Count ) 
			this->Data = Other; 
	}; 

	~FString() {}; 

	FString operator = ( wchar_t* Other ) 
	{ 
		if ( this->Data != Other ) 
		{ 
			this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

			if ( this->Count ) 
				this->Data = Other; 
		} 

		return *this; 
	}; 
}; 

struct FScriptDelegate 
{ 
	unsigned char UnknownData00[ 0xC ]; 
}; 

/*
# ========================================================================================= #
# Includes
# ========================================================================================= #
*/

#include "SDK_HEADERS\Core_structs.h"
#include "SDK_HEADERS\Core_classes.h"
#include "SDK_HEADERS\Core_f_structs.h"
#include "SDK_HEADERS\Core_functions.h"
#include "SDK_HEADERS\Engine_structs.h"
#include "SDK_HEADERS\Engine_classes.h"
#include "SDK_HEADERS\Engine_f_structs.h"
#include "SDK_HEADERS\Engine_functions.h"
#include "SDK_HEADERS\GameFramework_structs.h"
#include "SDK_HEADERS\GameFramework_classes.h"
#include "SDK_HEADERS\GameFramework_f_structs.h"
#include "SDK_HEADERS\GameFramework_functions.h"
#include "SDK_HEADERS\IpDrv_structs.h"
#include "SDK_HEADERS\IpDrv_classes.h"
#include "SDK_HEADERS\IpDrv_f_structs.h"
#include "SDK_HEADERS\IpDrv_functions.h"
#include "SDK_HEADERS\XAudio2_structs.h"
#include "SDK_HEADERS\XAudio2_classes.h"
#include "SDK_HEADERS\XAudio2_f_structs.h"
#include "SDK_HEADERS\XAudio2_functions.h"
#include "SDK_HEADERS\GFxUI_structs.h"
#include "SDK_HEADERS\GFxUI_classes.h"
#include "SDK_HEADERS\GFxUI_f_structs.h"
#include "SDK_HEADERS\GFxUI_functions.h"
#include "SDK_HEADERS\WinDrv_structs.h"
#include "SDK_HEADERS\WinDrv_classes.h"
#include "SDK_HEADERS\WinDrv_f_structs.h"
#include "SDK_HEADERS\WinDrv_functions.h"
#include "SDK_HEADERS\OnlineSubsystemMcts_structs.h"
#include "SDK_HEADERS\OnlineSubsystemMcts_classes.h"
#include "SDK_HEADERS\OnlineSubsystemMcts_f_structs.h"
#include "SDK_HEADERS\OnlineSubsystemMcts_functions.h"
#include "SDK_HEADERS\PlatformCommon_structs.h"
#include "SDK_HEADERS\PlatformCommon_classes.h"
#include "SDK_HEADERS\PlatformCommon_f_structs.h"
#include "SDK_HEADERS\PlatformCommon_functions.h"
#include "SDK_HEADERS\TgGame_structs.h"
#include "SDK_HEADERS\TgGame_classes.h"
#include "SDK_HEADERS\TgGame_f_structs.h"
#include "SDK_HEADERS\TgGame_functions.h"
#include "SDK_HEADERS\BattleGame_structs.h"
#include "SDK_HEADERS\BattleGame_classes.h"
#include "SDK_HEADERS\BattleGame_f_structs.h"
#include "SDK_HEADERS\BattleGame_functions.h"
#include "SDK_HEADERS\TgClientBase_structs.h"
#include "SDK_HEADERS\TgClientBase_classes.h"
#include "SDK_HEADERS\TgClientBase_f_structs.h"
#include "SDK_HEADERS\TgClientBase_functions.h"
#include "SDK_HEADERS\TgClient_structs.h"
#include "SDK_HEADERS\TgClient_classes.h"
#include "SDK_HEADERS\TgClient_f_structs.h"
#include "SDK_HEADERS\TgClient_functions.h"
#include "SDK_HEADERS\BattleClient_structs.h"
#include "SDK_HEADERS\BattleClient_classes.h"
#include "SDK_HEADERS\BattleClient_f_structs.h"
#include "SDK_HEADERS\BattleClient_functions.h"
#include "SDK_HEADERS\TgGameContent_structs.h"
#include "SDK_HEADERS\TgGameContent_classes.h"
#include "SDK_HEADERS\TgGameContent_f_structs.h"
#include "SDK_HEADERS\TgGameContent_functions.h"
