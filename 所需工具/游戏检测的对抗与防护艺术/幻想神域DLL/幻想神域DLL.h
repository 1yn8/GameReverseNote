// ��������DLL.h : ��������DLL DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C��������DLLApp
// �йش���ʵ�ֵ���Ϣ������� ��������DLL.cpp
//

class C��������DLLApp : public CWinApp
{
public:
	C��������DLLApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
