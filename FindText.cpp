// FindText.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MUL.h"
#include "FindText.h"
#include "afxdialogex.h"


// CFindText �Ի���

IMPLEMENT_DYNAMIC(CFindText, CDialogEx)

CFindText::CFindText(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CFindText::~CFindText()
{
}

void CFindText::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CFindText, CDialogEx)
END_MESSAGE_MAP()


// CFindText ��Ϣ�������
