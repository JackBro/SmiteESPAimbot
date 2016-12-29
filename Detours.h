#pragma once

#include <Windows.h>

/*
@param pFunc = pointer to the function to hook
@param pHook = pointer to the hook, i.e., the detour
@return = the original function with restored stolen code
*/
PBYTE DetourFunction(PBYTE pFunc, PBYTE pHook);


