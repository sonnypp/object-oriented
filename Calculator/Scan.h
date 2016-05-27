#ifndef __SCAN_H__
#define __SCAN_H__

#include<iostream>
#include<string>
#include<queue>
using namespace std;


/************************************************************
文件名：Scan.h 
作者：031502331
时间：2016/3/26
博客名：Sxiaopeng     
作用：处理main函数传来的数据         
***********************************************************/


//创建Scan的类
class Scan
{
		/*定义一个处理字符串的函数*/
	public:
		queue<string>ToStringQueue(string input);
		bool judge();
	private:
		bool flag;
		queue<string>key;/*设全局的队列queue*/
};

#endif
