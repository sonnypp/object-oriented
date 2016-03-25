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
博客名：Sxiaopeng  
作用：输出Scan类传来的数据           
***********************************************************/


//创建一个Print的类
class Print
{
	/*在类中定义一个输出队列的方法*/
	public:
		void PrintStringQueue();
};

//对Print的类中的方法进行封装
void Print::PrintStringQueue()
{
	if (count<=10)
	{
	     /*判断key队列是否为空*/
		while (!key.empty())            
		{
			cout<<key.front()<<endl;    /*一个一个的输出*/
			key.pop();                /*删除最先那个；因为queue队列是front in front out。*/
		}
	}
}


#endif 

