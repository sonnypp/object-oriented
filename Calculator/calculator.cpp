/************************************************************
�ļ�����calculator.cpp 
���ߣ�031502331
ʱ�䣺2016/3/26
��������Sxiaopeng    
���ã������ַ��������������          
***********************************************************/




#include<iostream>
#include<string>
#include "Scan.h" 
#include "Print.h"

using namespace std;

int main()
{
    /*����һ��Scan��Ķ��� a��*/
	Scan a;         
    
	/*����һ��Print��Ķ��� b��*/
	Print b;  
	
	/*�����ַ��� ��*/       
	string input; 
	 
	/* �����ַ��� ��*/
	cin >> input;  
	
	/*����Scan���еķ��������ַ�����*/   
	a.ToStringQueue(input);
	
	/*����Print���еķ���������У�*/   
	b.PrintStringQueue(); 
	    
	return 0;
}
