#include<iostream>
#include<string>
#include "Class.h"
using namespace std;

int main()
{
	Scan a;  //����һ��Scan����� a . 
	Print b; //����һ��Print����� b . 
	string input;  //�����ַ��� 
	cin>>input;  //�����ַ��� 
	a.ToStringQueue(input);  //���ַ������д��� ���Ҵ���queue�Ķ����� 
	b.PirntStringQueue();   //��ӡ���� 
	return 0;
} 
