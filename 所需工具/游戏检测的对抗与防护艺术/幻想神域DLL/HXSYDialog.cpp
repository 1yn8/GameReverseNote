// HXSYDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��������DLL.h"
#include "HXSYDialog.h"
#include "afxdialogex.h"
#include <windows.h>


// HXSYDialog �Ի���

IMPLEMENT_DYNAMIC(HXSYDialog, CDialogEx)

HXSYDialog::HXSYDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(HXSYDialog::IDD, pParent)
{

}

HXSYDialog::~HXSYDialog()
{
}

void HXSYDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(HXSYDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &HXSYDialog::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &HXSYDialog::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &HXSYDialog::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &HXSYDialog::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &HXSYDialog::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &HXSYDialog::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &HXSYDialog::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &HXSYDialog::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &HXSYDialog::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &HXSYDialog::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &HXSYDialog::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &HXSYDialog::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &HXSYDialog::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &HXSYDialog::OnBnClickedButton14)
END_MESSAGE_MAP()


// HXSYDialog ��Ϣ�������


void HXSYDialog::OnBnClickedButton1()
{
	DWORD B = (DWORD)GetModuleHandleA("ELEMENTCLIENT.EXE");
	DWORD a = *(DWORD*)(B + 0x00911A6C);// [00D11A6C]     0xD11A6C =  0x00400000 +00911A6C =    ELEMENTCLIENT.EXE +00911A6C
	a = *(DWORD*)(a + 0x28);// [[00D11A6C]+28]
    a = *(DWORD*)(a + 0x288);//[[[00D11A6C]+28]+288]

	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void HXSYDialog::OnBnClickedButton2()
{
	DWORD a = *(DWORD*)0xD11A6C;// [00D11A6C]
	a = *(DWORD*)(a + 0x28);// [[00D11A6C]+28]
    *(DWORD*)(a + 0x288) = (DWORD)GetModuleHandleA("ELEMENTCLIENT.EXE");
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void HXSYDialog::OnBnClickedButton3()
{
	__asm{

		    mov edx,edx
		    mov edx,edx
			mov edx,edx

			push   1
            mov eax,0x00D0DF1C
			mov eax,[eax]
            mov ecx,[eax+0x1c]
            mov ecx,[ecx+0x28]
			mov eax,0x0047E7E0
            call eax 
	
	}


	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void HXSYDialog::OnBnClickedButton4()
{

	__asm
	{	
		push 0
        push 0
		mov eax,0x004FACD0
        call eax
        mov ecx,eax
		mov eax,0x00491C50
        call eax

	}

	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void HXSYDialog::OnBnClickedButton5()
{
	
	
	DWORD a = (DWORD)malloc(10);
	*(DWORD*)a = 0x02010011;

	__asm
	{

			mov edx,0x00D0DF1C
			mov edx,[edx]
            push 4
            push a
            mov ecx,[edx+0x20]
			mov eax,0x0067D4E0
            call eax
	}

	free((DWORD*)a);

	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void HXSYDialog::OnBnClickedButton6()
{

	__asm
	{
		push 0x1E0001
        push 0x41
        push 0x100
        mov ecx,0x2CB91190
		mov eax,0x006296f0
        call eax
	}

	Sleep(1000);

		__asm
	{
		push 0x1E0001
        push 0x61
        push 0x102
        mov ecx,0x2CB91190
		mov eax,0x006296f0
        call eax
	}
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}



int g_chiyao;

void chiyao()
{
	while(g_chiyao == 1)
	{
		DWORD a = *(DWORD*)0x00D0DF1C;
		a = *(DWORD*)(a + 0x1C);
	    a = *(DWORD*)(a + 0x28);
        a = *(DWORD*)(a + 0x288);
		if(a <= 950)
		{

	     __asm
	    {	
		push 0
        push 0
		mov eax,0x004FACD0
        call eax
        mov ecx,eax
		mov eax,0x00491C50
        call eax
	    }
		
		Sleep(3000);

		}


       Sleep(50);

	}

}



void HXSYDialog::OnBnClickedButton7()
{

	g_chiyao = 1;
	CreateThread(0,0,(LPTHREAD_START_ROUTINE)chiyao,0,0,0);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void HXSYDialog::OnBnClickedButton8()
{
	g_chiyao = 0;
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}






int g_������;

__declspec(naked) void �����call()
{

	__asm
	{
		pushad
	}
	g_������ = 1;
	__asm
	{
		popad
		mov edi,[esp+ 0x14]
		cmp edi,0x19
		retn
	}
}

__declspec(naked) void �ڲ���call()
{

	__asm
	{
		pushad
	}
	g_������ = g_������ - 1;
	if(g_������!= 0)
	{
		MessageBoxA(0,"��⵽���",0,0);
	}
	__asm
	{
		popad
		mov eax,[esp+0x20]
		mov ecx,ebx
		retn
	}
}





void HXSYDialog::OnBnClickedButton9()
{

	DWORD Hook��ַ = 0x00566580;
	DWORD Hook�ӳ���ָ�� = (DWORD)�����call;
	DWORD ��תֵ=Hook�ӳ���ָ��-Hook��ַ-5;


	DWORD old=0;//���ԭ��������
	VirtualProtect((PVOID)0x00566580,114,PAGE_EXECUTE_READWRITE,&old);
	//�޸��ڴ�
	*(BYTE*)0x00566580 = 0xE8;
	*(DWORD*)(0x00566580 + 1) = ��תֵ;
	*(BYTE*)(0x00566580 + 5) = 0x90;
	*(BYTE*)(0x00566580 + 6) = 0x90;

	VirtualProtect((PVOID)0x00566580,114,old,&old);//�ָ�ҳ������



	Hook��ַ = 0x00491C68;
	Hook�ӳ���ָ�� = (DWORD)�ڲ���call;
	��תֵ=Hook�ӳ���ָ��-Hook��ַ-5;


	old=0;//���ԭ��������
	VirtualProtect((PVOID)0x00491C68,114,PAGE_EXECUTE_READWRITE,&old);
	//�޸��ڴ�
	*(BYTE*)0x00491C68 = 0xE8;
	*(DWORD*)(0x00491C68 + 1) = ��תֵ;
	*(BYTE*)(0x00491C68 + 5)= 0x90;

	VirtualProtect((PVOID)0x00491C68,114,old,&old);//�ָ�ҳ������
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


int g_��ջ������;

__declspec(naked) void ��ջ���call()
{

	__asm
	{
		pushad
        mov eax,[esp+0x4C]//  28+ 4��call ��+20(pushad) 
		mov g_��ջ������,eax
	}
	if(g_��ջ������!= 0x566737)
	{
		MessageBoxA(0,"��ջ��⵽���",0,0);
	}
	__asm
	{
		popad
		add ecx,0x0E0
		retn
	}
}


void HXSYDialog::OnBnClickedButton10()
{


	DWORD Hook��ַ = 0x00491FFA;
	DWORD Hook�ӳ���ָ�� = (DWORD)��ջ���call;
	DWORD ��תֵ=Hook�ӳ���ָ��-Hook��ַ-5;


	DWORD old=0;//���ԭ��������
	VirtualProtect((PVOID)0x00491FFA,114,PAGE_EXECUTE_READWRITE,&old);
	//�޸��ڴ�
	*(BYTE*)0x00491FFA = 0xE8;
	*(DWORD*)(0x00491FFA + 1) = ��תֵ;
	*(BYTE*)(0x00491FFA + 5)= 0x90;

	VirtualProtect((PVOID)0x00491FFA,114,old,&old);//�ָ�ҳ������

	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


int g_���ص�ַ;
int g_gg = 0x00492115;
__declspec(naked) void �Ķ�ջcall()
{

	__asm
	{
		pushad
		mov eax,[esp+0x3c]
		mov g_���ص�ַ,eax
        mov dword ptr[esp+0x3c],0x00566737
	}

	__asm
	{
		popad
		je 0x00492115
		retn
	}
}


__declspec(naked) void �Ļض�ջcall()
{

	__asm
	{
		pushad
		mov eax,g_���ص�ַ
        mov [esp+0x2C],eax
	}

	__asm
	{
		popad
		mov al,1
		pop ebx
		add esp,8
		mov edx,0x0049200E
		jmp  edx
	}
}


void HXSYDialog::OnBnClickedButton11()
{

	DWORD Hook��ַ = 0x00491C62;
	DWORD Hook�ӳ���ָ�� = (DWORD)�Ķ�ջcall;
	DWORD ��תֵ=Hook�ӳ���ָ��-Hook��ַ-5;


	DWORD old=0;//���ԭ��������
	VirtualProtect((PVOID)0x00491C62,114,PAGE_EXECUTE_READWRITE,&old);
	//�޸��ڴ�
	*(BYTE*)0x00491C62 = 0xE8;
	*(DWORD*)(0x00491C62 + 1) = ��תֵ;
	*(BYTE*)(0x00491C62 + 5)= 0x90;

	VirtualProtect((PVOID)0x00491C62,114,old,&old);//�ָ�ҳ������




	Hook��ַ = 0x00492008;
	Hook�ӳ���ָ�� = (DWORD)�Ļض�ջcall;
	��תֵ=Hook�ӳ���ָ��-Hook��ַ-5;


	old=0;//���ԭ��������
	VirtualProtect((PVOID)0x00492008,114,PAGE_EXECUTE_READWRITE,&old);
	//�޸��ڴ�
	*(BYTE*)0x00492008 = 0xE9;
	*(DWORD*)(0x00492008 + 1) = ��תֵ;
	*(BYTE*)(0x00492008 + 5)= 0x90;

	VirtualProtect((PVOID)0x00492008,114,old,&old);//�ָ�ҳ������




	//	__asm
	//{	
	//	push 5
 //       push 0
	//	mov eax,0x004FACD0
 //       call eax
 //       mov ecx,eax
	//	mov eax,0x00491C50
 //       call eax

	//}

	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void HXSYDialog::OnBnClickedButton12()
{
			__asm
	{	

		sub esp,0x28
        mov dword ptr[esp+0x28],0x008E1B8E


		push 5
        push 0
		mov eax,0x004FACD0
        call eax
        mov ecx,eax
		mov eax,0x00491C50
        call eax


		add  esp,0x28

	}
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}




int xiaoyan(int a,int b)
{
	int n = 0;
	for(int i =0;i < b - a + 1;i++)
	{
		n = n + *(BYTE*)(a + i);

	}
	if(n == 0x25977CC9)
	{
	return 0;
	}

	return 1;
}



int g_CRC = 0;

void CRC()
{
	while(g_CRC == 1)
	{
		int a = 0x00401000;
		int b = 0x00A00000;
		int c = xiaoyan(a,b);
		if(c == 1)
		{
			MessageBoxA(0,"���������ж�",0,0);
		}

		Sleep(10000);

	}

}



void HXSYDialog::OnBnClickedButton13()
{

	g_CRC = 1;
	CreateThread(0,0,(LPTHREAD_START_ROUTINE)CRC,0,0,0);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}




int g_���ݼ����Ʊ���;
int g_���ݼ�����;
int g_���Ѫ��ԭʼֵ;



void CJJC()
{

	g_���ݼ����� = g_���Ѫ��ԭʼֵ;

	while( g_���ݼ����Ʊ���==1)
	{
		if(g_���ݼ�����!=g_���Ѫ��ԭʼֵ)// ���������ֵ�Ƿ��иı�
		{
			MessageBoxA(0,"�����쳣",0,0);
		}


		Sleep(10000);
	}
}




void AAAA()// ���������� ���ݵķ����Ƿ��ж�     ���������Ҫ���غ�  ���Է��ʵĺ�������10����
{
	Sleep(120000);

	while(g_���ݼ����Ʊ���==1)
	{

		DWORD a = (DWORD)GetModuleHandleA("ELEMENTCLIENT.EXE");
	    a = *(DWORD*)(a + 0x00911A6C);
	    a = *(DWORD*)(a + 0x28);
        a = *(DWORD*)(a + 0x2DC);
		if(g_���ݼ�����!=a)
		{
			MessageBoxA(0,"�����쳣",0,0);
		}

		Sleep(120000);
	}
}




void JJJC()//�������Ѫ����g_���ݼ�����
{
	Sleep(1000);

	DWORD a = (DWORD)GetModuleHandleA("ELEMENTCLIENT.EXE");
	a = *(DWORD*)(a + 0x00911A6C);
	DWORD Temp;

	while(g_���ݼ����Ʊ���==1)
	{


	Temp = *(DWORD*)(a + 0x28);
    Temp = *(DWORD*)(Temp + 0x2DC);
	g_���ݼ����� = Temp;


	Sleep(1000);
	}
}





void HXSYDialog::OnBnClickedButton14()
{

	DWORD a = (DWORD)GetModuleHandleA("ELEMENTCLIENT.EXE");
	a = *(DWORD*)(a + 0x00911A6C);
	a = *(DWORD*)(a + 0x28);
    a = *(DWORD*)(a + 0x2DC);
	g_���Ѫ��ԭʼֵ = a;


	g_���ݼ����Ʊ��� = 1;
	CreateThread(0,0,(LPTHREAD_START_ROUTINE)JJJC,0,0,0);
	CreateThread(0,0,(LPTHREAD_START_ROUTINE)CJJC,0,0,0);
	CreateThread(0,0,(LPTHREAD_START_ROUTINE)AAAA,0,0,0);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
