// ��������DLL.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "��������DLL.h"
#include "HXSYDialog.h"



#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE ����ӵ�
//		�ú�������ǰ�档
//
//		����:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ������ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//

// C��������DLLApp

BEGIN_MESSAGE_MAP(C��������DLLApp, CWinApp)
END_MESSAGE_MAP()


// C��������DLLApp ����

C��������DLLApp::C��������DLLApp()
{
	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� C��������DLLApp ����

C��������DLLApp theApp;


HXSYDialog *PMainDialog;//������
DWORD WINAPI ShowDialog(LPARAM lpData)
{
	PMainDialog =new HXSYDialog;//��ָ�����ռ� 
	PMainDialog->DoModal();//�����ķ�ʽ ģ̬����
	delete PMainDialog;//�ͷſռ�
	FreeLibraryAndExitThread(theApp.m_hInstance,1);//�ͷ�DLL�˳��߳�
	return TRUE;
}
// C��������DLLApp ��ʼ��

BOOL C��������DLLApp::InitInstance()
{
	CWinApp::InitInstance();
	::CreateThread(NULL,NULL,(LPTHREAD_START_ROUTINE)ShowDialog,NULL,NULL,NULL);//�����߳�
	return TRUE;
}
