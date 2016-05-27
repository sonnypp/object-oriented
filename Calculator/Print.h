#ifndef __PRINT_H__
#define __PRINT_H__


#include<iostream>
#include<string>
#include<stack>
#include"Scan.h"
#include"Calculation.h"
using namespace std;

/************************************************************
文件名：Print.h
作者：031502331
时间：2016/3/26
博客名：Sxiaopeng  o
作用：输出Scan类传来的数据
***********************************************************/


//创建一个Print的类
class Print
{
		/*在类中定义一个输出队列的方法*/
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
