#pragma once

#include "MFCLegacyAppExp.h"
#include <functional>

int MFC_LEGACY_APP_DLLEXPORT StartMyLegacyMFCApp(HINSTANCE hInstance, HINSTANCE hPrevInstance, _In_ LPTSTR lpCmdLine, int nCmdShow);

// Point of interest: This allows us to call back into the tests without creating a circular reference.
extern MFC_LEGACY_APP_DLLEXPORT std::function<void()> g_ExecuteTests;