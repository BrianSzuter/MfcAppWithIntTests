
// MFCLegacyAppView.h : interface of the CMFCLegacyAppView class
//

#pragma once

#include "MFCLegacyAppExp.h"

class CMFCLegacyAppDoc;

namespace MFCLegacyAppUnitTests
{
	class MFCLegacyAppViewTests;
}

//Point of Interest : 
// In order to unit test a method in this MFC-based class, we do the following:
// 1. Add missing includes & forward declarations so a test is able to build.
// 2. Add a DLL Export macro so the test can link against this class.
// 3. Because we want to test a protected method, we make the test a friend.

class MFC_LEGACY_APP_DLLEXPORT CMFCLegacyAppView : public CView
{
	friend MFCLegacyAppUnitTests::MFCLegacyAppViewTests;

protected: // create from serialization only
	CMFCLegacyAppView();
	DECLARE_DYNCREATE(CMFCLegacyAppView)

// Attributes
public:
	CMFCLegacyAppDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

	virtual void RecordPrintingSuccess();

// Implementation
public:
	virtual ~CMFCLegacyAppView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	int m_NumberOfSuccessfulPrints;

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCLegacyAppView.cpp
inline CMFCLegacyAppDoc* CMFCLegacyAppView::GetDocument() const
   { return reinterpret_cast<CMFCLegacyAppDoc*>(m_pDocument); }
#endif

