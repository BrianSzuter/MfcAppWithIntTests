#pragma once

// Point of Interest: Define export / import macros for the DLL
#ifdef _MFC_LEGACY_APP_EXP_
#define MFC_LEGACY_APP_DLLEXPORT   __declspec(dllexport)
#else
#define MFC_LEGACY_APP_DLLEXPORT   __declspec(dllimport)
#endif