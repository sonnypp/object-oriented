/************************************************************
�ļ�����calculator.cpp
���ߣ�031502331
ʱ�䣺2016/3/26
��������Sxiaopeng
���ã������ַ������������,�������ֵ��
***********************************************************/

#include<iostream>
#include<queue>
#include<string>
#include<stack>
#include "Scan.h"
#include "Print.h"
#include "calculation.h"
using namespace std;
int main(int argc,char* argv[])
{
	queue<string>que;
	/*����һ��Scan��Ķ��� a��*/
	Scan a;
	/*����һ��Print��Ķ��� b��*/
	Print b;
	/*����һ��calculation��Ķ��� b��*/
	calcu c;
	/*�����ַ��� ��*/
	string input,_input;
	/* �����ַ��� ��*/
	cin >> input;
	if(input=="-a")
	{
		cin >> _input;
		que=a.ToStringQueue(_input);
		/*����Print���еķ���������У�*/
		b.PrintStringQueue(que);
		cout << " = " << c.Calculation(que) << endl;
	}
	else
	{
		que=a.ToStringQueue(input);
		cout << c.Calculation(que) << endl;
	}
	return 0;
}
