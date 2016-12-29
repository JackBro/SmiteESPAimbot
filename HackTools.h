#pragma once
#include <Windows.h>

// Get the TEB
DWORD GetTeb();
// Get the Xor Key from the TLS
DWORD GetXorKey(int index);
// Copy the Xor keys from Smite's TLS to our TLS
void CopyXorArray();
