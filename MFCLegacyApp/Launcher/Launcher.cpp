// Launcher.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "MFCLegacyStartup.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
	g_ExecuteTests = nullptr;
	return StartMyLegacyMFCApp(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
}