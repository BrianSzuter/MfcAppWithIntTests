
#include "stdafx.h"
#include "IntegrationTestManager.h"

// Classes involved in integration test
#include "MFCLegacyApp.h"
#include "MainFrm.h"
#include "MFCLegacyAppDoc.h"
#include "MFCLegacyAppView.h"

void IntegrationTestManager::RunTests()
{
	TestApplicationStartupState();
}


// Point of interest:
// A simple first test: Test that upon startup, the right objects are automatically created.
void IntegrationTestManager::TestApplicationStartupState()
{
	// Get the CMFCLegacyAppApp - there must be one
	auto pWinApp = AfxGetApp();
	ASSERT_VALID(pWinApp);

	auto pMFCLegacyApp = dynamic_cast<CMFCLegacyAppApp*>(pWinApp);
	ASSERT(pMFCLegacyApp);

	// Get the CMainFrame - one should be created at Application startup
	auto pMainWnd = AfxGetMainWnd();
	ASSERT_VALID(pMainWnd);

	auto pCMainFrame = dynamic_cast<CMainFrame*>(pMainWnd);
	ASSERT(pCMainFrame);

	// Get the CMFCLegacyAppView - one should be created at Application startup
	auto pView = pCMainFrame->MDIGetActive()->GetActiveView();
	ASSERT_VALID(pView);

	auto pCMFCLegacyAppView = dynamic_cast<CMFCLegacyAppView*>(pView);
	ASSERT(pCMFCLegacyAppView);

	// Get the CMFCLegacyAppDoc of the View
	auto pDoc = pCMFCLegacyAppView->GetDocument();
	ASSERT_VALID(pDoc);

	auto pCMFCLegacyAppDoc = dynamic_cast<CMFCLegacyAppDoc*>(pDoc);
	ASSERT(pCMFCLegacyAppDoc);
}