
// MFCLegacyApp.h : main header file for the MFCLegacyApp application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFCLegacyAppApp:
// See MFCLegacyApp.cpp for the implementation of this class
//

class CMFCLegacyAppApp : public CWinApp
{
public:
	CMFCLegacyAppApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCLegacyAppApp theApp;
