#ifndef __PRINT_H__
#define __PRINT_H__


#include<iostream>
#include<string>
#include<stack>
#include"Scan.h"
#include"Calculation.h"
using namespace std;

/************************************************************
�ļ�����Print.h
���ߣ�031502331
ʱ�䣺2016/3/26
��������Sxiaopeng  o
���ã����Scan�ഫ��������
***********************************************************/


//����һ��Print����
class Print
{
		/*�����ж���һ��������еķ���*/
	public:
		void PrintStringQueue(string input);
		void Filelong(string text_file,string result_file);
		void Datalong(string input,int flag);
	private:
		queue<string>que;
		Scan KBS;
		Calculator KBC;
};


#endif
