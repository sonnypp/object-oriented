#ifndef __PRINT_H__
#define __PRINT_H__


#include<iostream>
#include<string>
#include<queue>
#include"Scan.h"
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
		void PrintStringQueue(queue<string>key);
};


/************************************************************
�ļ�����Print.cpp
���ߣ�031502331
ʱ�䣺2016/4/09 
��������Sxiaopeng
���ã�����������е� 
***********************************************************/


void Print::PrintStringQueue(queue<string>key)
{
	while (!key.empty())
	{
		cout<<key.front();    /*һ��һ�������*/
		key.pop();                /*ɾ�������Ǹ�����Ϊqueue������front in front out��*/
	}
}

#endif 

