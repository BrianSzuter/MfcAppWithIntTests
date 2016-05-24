
#include "stdafx.h"
#include "MFCLegacyStartup.h"

// Point of Interest: Declare the AfxWinMain entry point
extern int AFXAPI AfxWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, _In_ LPTSTR lpCmdLine, int nCmdShow);

// Point of Interest: Declare no tests by default
std::function<void()> g_ExecuteTests = nullptr;

// Point of Interest: A new entry point to expose your MFCLegacyApp-as-DLL to the Launcher
int StartMyLegacyMFCApp(HINSTANCE hInstance, HINSTANCE hPrevInstance, _In_ LPTSTR lpCmdLine, int nCmdShow)
{
	return AfxWinMain(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
}
