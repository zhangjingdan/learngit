
// FiveChess.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CFiveChessApp:
// �йش����ʵ�֣������ FiveChess.cpp
//

class CFiveChessApp : public CWinApp
{
public:
	CFiveChessApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CFiveChessApp theApp;