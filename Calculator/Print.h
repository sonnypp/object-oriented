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
��������Sxiaopeng  
���ã����Scan�ഫ��������           
***********************************************************/


//����һ��Print����
class Print
{
	/*�����ж���һ��������еķ���*/
	public:
		void PrintStringQueue();
};

//��Print�����еķ������з�װ
void Print::PrintStringQueue()
{
	if (count<=10)
	{
	     /*�ж�key�����Ƿ�Ϊ��*/
		while (!key.empty())            
		{
			cout<<key.front()<<endl;    /*һ��һ�������*/
			key.pop();                /*ɾ�������Ǹ�����Ϊqueue������front in front out��*/
		}
	}
}


#endif 

