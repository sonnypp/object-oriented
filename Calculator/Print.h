#ifndef __PRINT_H__
#define __PRINT_H__


#include<iostream>
#include<string>
#include<queue>
#include"Scan.h"
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
		void PrintStringQueue(queue<string>key);
};


/************************************************************
文件名：Print.cpp
作者：031502331
时间：2016/4/09 
博客名：Sxiaopeng
作用：用来输出队列的 
***********************************************************/



void Print::PrintStringQueue(queue<string>key)
{
	while (!key.empty())
	{
		cout<<key.front();    /*一个一个的输出*/
		key.pop();                /*删除最先那个；因为queue队列是front in front out。*/
	}
}


#endif 

