/************************************************************
�ļ�����calculator.cpp
���ߣ�031502331
ʱ�䣺2016/3/26
��������Sxiaopeng
���ã������ַ������������,�������ֵ��
ps:�˴���ҵ�������ļ���������������ļ� ��
***********************************************************/

#include<iostream>
#include<string>
#include<string.h>
#include "Print.h"
using namespace std;
int main(int argc,char* argv[])
{
	queue<string>que;
	/*����һ��Print��Ķ��� b��*/
	Print b;
	string input;
	int flag=1;
	/*�ж��Ƿ�Ϊ�ļ�����*/
	if(argc<2)
		cout << "�޲���" << endl;
	else
	{
		if(strcmp(argv[1],"-f")==0)
		{
			string text_file=argv[argc-2];  //�����ļ���
			string result_file=argv[argc-1];  //����ļ���
			b.Filelong(text_file,result_file); //Print�����洦���ļ�����ĺ���
		}
		else
		{
			if(strcmp(argv[1],"-a")==0)
			{
				flag=1;
				input=argv[2];
			}
			else
			{
				flag=0;
				input=argv[1];
			}
			b.Datalong(input,flag); //Print�����洦����ļ��ĺ���
		}
	}
	return 0;
}
