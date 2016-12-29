#include "Detours.h"

PBYTE DetourFunction(PBYTE pFunc, PBYTE pHook)
{
	if ((pFunc == NULL) || (pHook == NULL))
		return NULL;

	PBYTE oFunc = (PBYTE)VirtualAllocEx((HANDLE)-1, NULL, 32, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

	DWORD oldProtect;
	VirtualProtect((PBYTE)pFunc, 5, PAGE_EXECUTE_READWRITE, &oldProtect);

	for (unsigned int i = 0; i < 5; i++)
		*(BYTE *)&oFunc[i] = *(BYTE *)(pFunc + i);

	*(BYTE *)&oFunc[5] = (BYTE)0xE9;
	*(DWORD *)&oFunc[6] = (DWORD)(pFunc - oFunc - 5);

	*(BYTE *)&pFunc[0] = (BYTE)0xE9;
	*(DWORD *)&pFunc[1] = (DWORD)(pHook - pFunc - 5);
	VirtualProtect((PBYTE)pFunc, 5, oldProtect, &oldProtect);

	return oFunc;
}