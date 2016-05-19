
// MFCLegacyAppView.h : interface of the CMFCLegacyAppView class
//

#pragma once


class CMFCLegacyAppView : public CView
{
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

// Implementation
public:
	virtual ~CMFCLegacyAppView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCLegacyAppView.cpp
inline CMFCLegacyAppDoc* CMFCLegacyAppView::GetDocument() const
   { return reinterpret_cast<CMFCLegacyAppDoc*>(m_pDocument); }
#endif

