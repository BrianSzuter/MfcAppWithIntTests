
// MFCLegacyAppView.cpp : implementation of the CMFCLegacyAppView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MFCLegacyApp.h"
#endif

#include "MFCLegacyAppDoc.h"
#include "MFCLegacyAppView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCLegacyAppView

IMPLEMENT_DYNCREATE(CMFCLegacyAppView, CView)

BEGIN_MESSAGE_MAP(CMFCLegacyAppView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFCLegacyAppView construction/destruction

CMFCLegacyAppView::CMFCLegacyAppView()
{
	// TODO: add construction code here

}

CMFCLegacyAppView::~CMFCLegacyAppView()
{
}

BOOL CMFCLegacyAppView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMFCLegacyAppView drawing

void CMFCLegacyAppView::OnDraw(CDC* /*pDC*/)
{
	CMFCLegacyAppDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CMFCLegacyAppView printing

BOOL CMFCLegacyAppView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCLegacyAppView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCLegacyAppView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CMFCLegacyAppView diagnostics

#ifdef _DEBUG
void CMFCLegacyAppView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCLegacyAppView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCLegacyAppDoc* CMFCLegacyAppView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCLegacyAppDoc)));
	return (CMFCLegacyAppDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCLegacyAppView message handlers
