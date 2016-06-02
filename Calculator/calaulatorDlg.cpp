
// calaulatorDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "calaulator.h"
#include "calaulatorDlg.h"
#include "afxdialogex.h"
#include<cstdlib>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CcalaulatorDlg �Ի���



CcalaulatorDlg::CcalaulatorDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_CALAULATOR_DIALOG, pParent)
{
	
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CcalaulatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CcalaulatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CcalaulatorDlg::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT1, &CcalaulatorDlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON6, &CcalaulatorDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CcalaulatorDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON9, &CcalaulatorDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CcalaulatorDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CcalaulatorDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CcalaulatorDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CcalaulatorDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CcalaulatorDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CcalaulatorDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CcalaulatorDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON19, &CcalaulatorDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CcalaulatorDlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON3, &CcalaulatorDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON5, &CcalaulatorDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON8, &CcalaulatorDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON17, &CcalaulatorDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CcalaulatorDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON21, &CcalaulatorDlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON4, &CcalaulatorDlg::OnBnClickedButton4)
	ON_EN_CHANGE(IDC_EDIT3, &CcalaulatorDlg::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT2, &CcalaulatorDlg::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON2, &CcalaulatorDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON22, &CcalaulatorDlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &CcalaulatorDlg::OnBnClickedButton23)
	ON_EN_CHANGE(IDC_EDIT4, &CcalaulatorDlg::OnEnChangeEdit4)
END_MESSAGE_MAP()


// CcalaulatorDlg ��Ϣ�������

BOOL CcalaulatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������
	CFont* m_font = new CFont;
	m_font->CreateFont(36, 0, 0, 0, FW_BOLD, FALSE, FALSE, FALSE, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, FF_SWISS, _T("Arial"));

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CcalaulatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CcalaulatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, (WPARAM)(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CcalaulatorDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CcalaulatorDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	str ="";
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}

void CcalaulatorDlg::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CcalaulatorDlg::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	str += '1';
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	str += '2';
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	str += '3';
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton10()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	str += '4';
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton11()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	str += '5';
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton12()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	str += '6';
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton13()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	str += '7';
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton14()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	str += '8';
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton15()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	str += '9';
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton16()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	if (str != "")
	{
		if (str.GetAt(str.GetLength() - 1) >= '0' && str.GetAt(str.GetLength() - 1) <= '9')
		{
			str = str + '.';
		}
	}
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton19()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	if(str!="0")
	{
			str += '0';
	}
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton20()
{
	//�Ⱥŵ�ʱ��
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str,a;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	if (str != "")
	{
		a = str;
		a += '=';
		str = "";	
		CT2CA pszConvertedAnsiString(a);  // �� TCHAR ת��Ϊ LPCSTR
		string input(pszConvertedAnsiString); // �� LPCSTR ���� string
		queue<string>key;
		Scan KFC;
		Calculator calcu;
		key = KFC.ToStringQueue(input);	
		if (KFC.judge())
		{		
			double s;
			string tmp;
			stringstream ss;
			s = calcu.Calculation(key);
			ss << s;
			ss >> tmp;
			a += tmp.c_str();
		}
		else {
			a = "ERROR";
		}
	   GetDlgItem(IDC_EDIT1)->SetWindowText(a);
	}
}


void CcalaulatorDlg::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	str += '(';
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	if(str!="")
	    str += ')';
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	if (str != "")
	{
		if (str.GetAt(str.GetLength() - 1) != '+' && str.GetAt(str.GetLength() - 1) != '-'
			&& str.GetAt(str.GetLength() - 1) != '*' && str.GetAt(str.GetLength() - 1) != '/')
		{
			str = str + '+';
		}
	}
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton17()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	if (str != "")
	{
		if (str.GetAt(str.GetLength() - 1) != '+' && str.GetAt(str.GetLength() - 1) != '-'
			&& str.GetAt(str.GetLength() - 1) != '*' && str.GetAt(str.GetLength() - 1) != '/')
		{
			str = str + '-';
		}
	}
	else
	{
		str =str + '-';
	}
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton18()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	if (str != "")
	{
		if (str.GetAt(str.GetLength() - 1) != '+' && str.GetAt(str.GetLength() - 1) != '-'
			&& str.GetAt(str.GetLength() - 1) != '*' && str.GetAt(str.GetLength() - 1) != '/')
		{
			str = str + '*';
		}
	}
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}


void CcalaulatorDlg::OnBnClickedButton21()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	if (str == "ERROR")
	{
		str = "";
	}
	else {
		for (int i = 0; i < str.GetLength(); i++)
		{
			if (str[i] == '=')
			{
				str = "";
				break;
			}
		}
	}
	if (str != "")
	{
		if (str.GetAt(str.GetLength() - 1) != '+' && str.GetAt(str.GetLength() - 1) != '-'
			&& str.GetAt(str.GetLength() - 1) != '*' && str.GetAt(str.GetLength() - 1) != '/')
		{
			str = str + '/';
		}
	}
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}

void CcalaulatorDlg::OnBnClickedButton4()
{
		// TODO: Add your control notification handler code here 
	   CString str;
	   GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	   CString a = str;
	   str = "";
	   for (int i = 0; i < a.GetLength() - 1; i++)
	   {
		   str += a[i];
	   }
	   GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}




void CcalaulatorDlg::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CcalaulatorDlg::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
    
}


void CcalaulatorDlg::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString ss3;
	CString ss2;
	GetDlgItem(IDC_EDIT2)->GetWindowText(ss2);
	GetDlgItem(IDC_EDIT3)->GetWindowText(ss3);
	if(ss2!="File Handling Success"&&ss2!="" && ss3!="")
	{
		CT2CA pszConvertedAnsiString(ss2);  // �� TCHAR ת��Ϊ LPCSTR
		string text_file(pszConvertedAnsiString); // �� LPCSTR ���� string
		CT2CA pszConvertedAnsiString1(ss3);  // �� TCHAR ת��Ϊ LPCSTR
		string result_file(pszConvertedAnsiString1); // �� LPCSTR ���� string
		Scan hllo;
		hllo.Filelong(text_file,result_file);
		ss2 = "File Handling Success";
		AfxMessageBox(_T("�ѱ������ݵ� ") + ss3 + _T(" �ļ��У�"));
		CFile file;
		file.Open(ss3, CFile::modeRead);
		CString str;
		int length = file.GetLength();
		char *ch = new char[length];
		file.Read(ch, length);
		SetDlgItemText(IDC_EDIT4, (CString)ch);
		GetDlgItem(IDC_EDIT2)->SetWindowText(ss2);
		GetDlgItem(IDC_EDIT3)->SetWindowText(ss3);
	}
}



void CcalaulatorDlg::OnBnClickedButton22()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString gReadFilePathName;
	CFileDialog fileDlg(true, _T("txt"), _T("*.txt"), OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, _T("txt Files (*.txt)|*.tx|All File (*.*)|*.*||"), NULL);
	if (fileDlg.DoModal() == IDOK)    //�����Ի���  
	{
		gReadFilePathName = fileDlg.GetPathName();//�õ��������ļ�����Ŀ¼����չ��  
		GetDlgItem(IDC_EDIT2)->SetWindowText(gReadFilePathName);//��·����ʾ  
		CString filename = fileDlg.GetFileName();
	}
}

void CcalaulatorDlg::OnBnClickedButton23()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("�ı��ļ�(*.txt)|*.txt||�����ļ�(*.*)|*.*||");
	// ���챣���ļ��Ի���   
	CFileDialog fileDlg(FALSE, _T("doc"), _T("my"), OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);
	CString gReadFilePathName;

	// ��ʾ�����ļ��Ի���   
	if (IDOK == fileDlg.DoModal())
	{
		// ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����   
		gReadFilePathName = fileDlg.GetPathName();
		GetDlgItem(IDC_EDIT3)->SetWindowText(gReadFilePathName);
	}
}






void CcalaulatorDlg::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}

BOOL CcalaulatorDlg::PreTranslateMessage(MSG* pMsg)
{

	if (pMsg->message == WM_KEYDOWN)
	{
		switch (pMsg->wParam)
		{
		case VK_NUMPAD0:
			OnBnClickedButton19(); break;
		case VK_NUMPAD1:
		case '1':
			OnBnClickedButton6(); break;
		case '2':
		case VK_NUMPAD2:
			OnBnClickedButton7(); break;
		case '3':
		case VK_NUMPAD3:
			OnBnClickedButton9(); break;
		case '4':
		case VK_NUMPAD4:
			OnBnClickedButton10(); break;
		case '5':
		case VK_NUMPAD5:
			OnBnClickedButton11(); break;
		case '6':
		case VK_NUMPAD6:
			OnBnClickedButton12(); break;
		case '7':
		case VK_NUMPAD7:
			OnBnClickedButton13(); break;
		case VK_NUMPAD8:
			OnBnClickedButton14(); break;
		case VK_NUMPAD9:
			OnBnClickedButton15(); break;
		case '8':
			if (GetKeyState(VK_SHIFT) < 0)
			{
				OnBnClickedButton18();
			}
			else
			{
				OnBnClickedButton14();
			}
			break;
		case '9':
			if (GetKeyState(VK_SHIFT) < 0)
			{
				OnBnClickedButton3();
			}
			else
			{
				OnBnClickedButton15();
			}
			break;
		case '0':
			if (GetKeyState(VK_SHIFT) < 0)
			{
				OnBnClickedButton5();
			}
			else
			{
				OnBnClickedButton19();
			}
			break;
		case VK_OEM_PLUS:
			if (GetKeyState(VK_SHIFT) < 0)
			{
				OnBnClickedButton8();
			}
			else
			{
				OnBnClickedButton20();
			}
			break;
		case VK_OEM_PERIOD:
		case VK_DECIMAL:
			OnBnClickedButton16(); break;
		case VK_SUBTRACT:
		case VK_OEM_MINUS:
			OnBnClickedButton17(); break;
		case VK_DIVIDE:
		case VK_OEM_2:
			OnBnClickedButton21(); break;
		case VK_ADD:
			OnBnClickedButton8(); break;
		case VK_MULTIPLY:
			OnBnClickedButton18(); break;
		case VK_BACK:
			OnBnClickedButton4(); break;
		case VK_RETURN:
			OnBnClickedButton20(); return TRUE;
		case VK_ESCAPE:
			OnBnClickedButton1(); return TRUE;
		default:
			break;
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}


