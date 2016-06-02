
// calaulatorDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "calaulator.h"
#include "calaulatorDlg.h"
#include "afxdialogex.h"
#include<cstdlib>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
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


// CcalaulatorDlg 对话框



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


// CcalaulatorDlg 消息处理程序

BOOL CcalaulatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	CFont* m_font = new CFont;
	m_font->CreateFont(36, 0, 0, 0, FW_BOLD, FALSE, FALSE, FALSE, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, FF_SWISS, _T("Arial"));

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CcalaulatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, (WPARAM)(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CcalaulatorDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CcalaulatorDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str);
	str ="";
	GetDlgItem(IDC_EDIT1)->SetWindowText(str);
}

void CcalaulatorDlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CcalaulatorDlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	//等号的时候
	// TODO: 在此添加控件通知处理程序代码
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
		CT2CA pszConvertedAnsiString(a);  // 将 TCHAR 转换为 LPCSTR
		string input(pszConvertedAnsiString); // 从 LPCSTR 构造 string
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	// TODO:  在此添加控件通知处理程序代码
}


void CcalaulatorDlg::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	// TODO:  在此添加控件通知处理程序代码
	// TODO:  在此添加控件通知处理程序代码
    
}


void CcalaulatorDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	CString ss3;
	CString ss2;
	GetDlgItem(IDC_EDIT2)->GetWindowText(ss2);
	GetDlgItem(IDC_EDIT3)->GetWindowText(ss3);
	if(ss2!="File Handling Success"&&ss2!="" && ss3!="")
	{
		CT2CA pszConvertedAnsiString(ss2);  // 将 TCHAR 转换为 LPCSTR
		string text_file(pszConvertedAnsiString); // 从 LPCSTR 构造 string
		CT2CA pszConvertedAnsiString1(ss3);  // 将 TCHAR 转换为 LPCSTR
		string result_file(pszConvertedAnsiString1); // 从 LPCSTR 构造 string
		Scan hllo;
		hllo.Filelong(text_file,result_file);
		ss2 = "File Handling Success";
		AfxMessageBox(_T("已保存数据到 ") + ss3 + _T(" 文件中！"));
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
	// TODO: 在此添加控件通知处理程序代码
	CString gReadFilePathName;
	CFileDialog fileDlg(true, _T("txt"), _T("*.txt"), OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, _T("txt Files (*.txt)|*.tx|All File (*.*)|*.*||"), NULL);
	if (fileDlg.DoModal() == IDOK)    //弹出对话框  
	{
		gReadFilePathName = fileDlg.GetPathName();//得到完整的文件名和目录名拓展名  
		GetDlgItem(IDC_EDIT2)->SetWindowText(gReadFilePathName);//将路径显示  
		CString filename = fileDlg.GetFileName();
	}
}

void CcalaulatorDlg::OnBnClickedButton23()
{
	// TODO: 在此添加控件通知处理程序代码
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("文本文件(*.txt)|*.txt||所有文件(*.*)|*.*||");
	// 构造保存文件对话框   
	CFileDialog fileDlg(FALSE, _T("doc"), _T("my"), OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);
	CString gReadFilePathName;

	// 显示保存文件对话框   
	if (IDOK == fileDlg.DoModal())
	{
		// 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里   
		gReadFilePathName = fileDlg.GetPathName();
		GetDlgItem(IDC_EDIT3)->SetWindowText(gReadFilePathName);
	}
}






void CcalaulatorDlg::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	// TODO:  在此添加控件通知处理程序代码
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


