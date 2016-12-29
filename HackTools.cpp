#include "HackTools.h"
#include <TlHelp32.h>
#include <winnt.h>

typedef LONG NTSTATUS;
typedef DWORD KPRIORITY;
typedef WORD UWORD;

typedef struct _CLIENT_ID
{
	PVOID UniqueProcess;
	PVOID UniqueThread;
} CLIENT_ID, *PCLIENT_ID;

typedef struct _THREAD_BASIC_INFORMATION
{
	NTSTATUS                ExitStatus;
	PVOID                   TebBaseAddress;
	CLIENT_ID               ClientId;
	KAFFINITY               AffinityMask;
	KPRIORITY               Priority;
	KPRIORITY               BasePriority;
} THREAD_BASIC_INFORMATION, *PTHREAD_BASIC_INFORMATION;

enum THREADINFOCLASS
{
	ThreadBasicInformation,
};

DWORD GetTeb()
{
	THREADENTRY32 ThreadEntry;
	THREAD_BASIC_INFORMATION BasicInformation = { 0 };
	typedef NTSTATUS(WINAPI *NTQ)(HANDLE, THREADINFOCLASS, PVOID, ULONG, PULONG);

	static NTQ _NTQ = (NTQ)GetProcAddress(GetModuleHandleA("ntdll.dll"), "NtQueryInformationThread");

	HANDLE SnapHandle = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);

	ThreadEntry.dwSize = sizeof(THREADENTRY32);

	Thread32First(SnapHandle, &ThreadEntry);

	while (Thread32Next(SnapHandle, &ThreadEntry))
	{
		if (ThreadEntry.th32OwnerProcessID != GetCurrentProcessId())
			continue;

		HANDLE ThreadHandle = OpenThread(THREAD_QUERY_INFORMATION, false, ThreadEntry.th32ThreadID);

		if (!ThreadHandle)
			continue;

		NTSTATUS ntStatus = _NTQ(ThreadHandle, ThreadBasicInformation, &BasicInformation, sizeof(THREAD_BASIC_INFORMATION), NULL);

		CloseHandle(ThreadHandle);

		if (ntStatus)
			continue;

		break;

		ThreadEntry.dwSize = sizeof(THREADENTRY32);
	}
	CloseHandle(SnapHandle);

	return (DWORD)BasicInformation.TebBaseAddress;
}

DWORD GetXorKey(int index)
{
	static DWORD TEB = GetTeb();

	DWORD t = *(DWORD*)*(DWORD*)(TEB + 0x2C);

	return *(DWORD*)(t + 4 * (index & 0x7FF) + 0x28);
}

void CopyXorArray() {
	DWORD TEB = (DWORD)NtCurrentTeb();
	DWORD t = *(DWORD*)*(DWORD*)(TEB + 0x2C);

	for (DWORD i = 0; i <= 0x7FF; ++i) {
		*(DWORD*)(t + 4 * i + 0x28) = GetXorKey(i);
	}
}