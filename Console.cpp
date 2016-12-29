#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <conio.h>
#include <FCNTL.H>
#include <io.h>
#include "Console.h"

static BOOL WINAPI MyConsoleCtrlHandler(DWORD dwCtrlEvent) { return dwCtrlEvent == CTRL_C_EVENT; }

CConsole::CConsole() : m_OwnConsole(false) {
	if (!AllocConsole()) return;

	SetConsoleCtrlHandler(MyConsoleCtrlHandler, TRUE);
	RemoveMenu(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_BYCOMMAND);
	m_OldStdin = *stdin;
	m_OldStdout = *stdout;

	freopen("CONIN$", "r", stdin);
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);

	m_OwnConsole = true;
}

CConsole::~CConsole() {
	if (m_OwnConsole) {
		fclose(stdout);
		fclose(stdin);
		*stdout = m_OldStdout;
		*stdin = m_OldStdin;
		SetConsoleCtrlHandler(MyConsoleCtrlHandler, FALSE);
		FreeConsole();
	}
}