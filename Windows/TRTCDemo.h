
// TRTCDemo.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CTRTCDemo: 
// �йش����ʵ�֣������ TRTCDemo.cpp
// MFC�����

class CTRTCDemo : public CWinApp
{
public:
	CTRTCDemo();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CTRTCDemo theApp;