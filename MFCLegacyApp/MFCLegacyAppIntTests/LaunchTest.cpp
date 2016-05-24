// Launcher.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "MFCLegacyStartup.h"
#include "IntegrationTestManager.h"



int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
	// Point of Interest:
	// Setup a the test entry point.
	// Instead of running the App's message loop, the App will run this test.
	g_ExecuteTests = &(IntegrationTestManager::RunTests);

	return StartMyLegacyMFCApp(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
}