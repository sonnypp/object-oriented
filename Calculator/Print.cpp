#include<iostream>
#include<string>
#include<queue>
#include<stack> 
#include<fstream>
#include "Print.h"
using namespace std;


/************************************************************
�ļ�����Print.cpp
���ߣ�031502331
ʱ�䣺2016/4/09
��������Sxiaopeng
���ã�����������е� ���д���һЩ�ļ�����
***********************************************************/

void Print::PrintStringQueue(string input)
{
	cout << input  << " ";
}

void Print::Filelong(string text_file,string result_file)
{
	ifstream iosin;      //�����������룩���ļ���
	ofstream iosout;    //д��������������ļ���
	//���ļ�
	iosin.open(text_file.c_str(),ios::in);
	iosout.open(result_file.c_str(),ios::out);

	while(!iosin.eof())
	{
		string get_input;
		getline(iosin,get_input,'\n'); //�Ի��з���Ϊ�ֽ�㡣
		que=KBS.ToStringQueue(get_input);
		double result=0;
		if(KBS.judge())
		{
			result=KBC.Calculation(que);
			//cout << get_input;
			//cout << result << endl;
			//�����������ֵ��¼���ļ���ȥ��
			iosout << result << endl;
		}
		else
		{
			iosout << "ERROR" << endl;   //���ݳ��ִ����ʱ�����Ǿʹ���"ERROR"���ļ�;
		}
	}
	//�ر��ļ�
	iosin.close();
	iosout.close();
}

void Print::Datalong(string input,int flag)
{
	if(flag)
	{
		que=KBS.ToStringQueue(input);
		if(KBS.judge())
		{
			/*����Print���еķ�����������*/
			PrintStringQueue(input);
			cout << KBC.Calculation(que) << endl;
		}
		else
			cout << "ERROR" << endl;  //���ݳ��ִ����ʱ�����Ǿ����"ERROR";
	}
	else
	{
		que=KBS.ToStringQueue(input);
		if(KBS.judge())
			cout << KBC.Calculation(que) << endl;
		else
			cout << "ERROR" << endl; //���ݳ��ִ����ʱ�����Ǿ����"ERROR";
	}
}
