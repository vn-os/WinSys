#pragma once

#include "Interfaces.h"
#include "ViewBase.h"

class CServicesView : public CViewBase<CServicesView> {
public:
	using CViewBase::CViewBase;
	DECLARE_WND_CLASS(NULL)

	void OnFinalMessage(HWND /*hWnd*/) override;
	CString GetTitle() const override;

	BEGIN_MSG_MAP(CServicesView)
		MESSAGE_HANDLER(WM_CREATE, OnCreate)
	END_MSG_MAP()

	// Handler prototypes (uncomment arguments if needed):
	//	LRESULT MessageHandler(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
	//	LRESULT CommandHandler(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
	//	LRESULT NotifyHandler(int /*idCtrl*/, LPNMHDR /*pnmh*/, BOOL& /*bHandled*/)

	LRESULT OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
};

