#ifndef __SCAN_H__
#define __SCAN_H__

#include<iostream>
#include<string>
#include<queue>
using namespace std;
int count=0;      /*创建全局变量，来计算一个数的有几位数*/
queue<string>key;/*设全局的队列queue*/

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
		void ToStringQueue(string input);
};



//对函数进行封装
void Scan::ToStringQueue(string input)
{
	int l=input.length();    /*测出字符串的长度*/
	string tmp="";
	for (int i=0; i<l; i++)
	{
		/*如果数字的位数超过10 就产生错误；*/
		if (count>10)
		{
			cout<<"Error"<<endl;
			break;
		}
		/*判断是否有字符*/
		if (input[i]=='-' || input[i]=='+' || input[i]=='(' || input[i]==')' || input[i]=='/' || input[i]=='*')
		{
			count=0;
			/*将已有的数据存入队列*/
			if (tmp!="")
			{
				key.push(tmp);
			}
			/*置空*/
			tmp="";
			tmp+=input[i];
			/*讲一个一个不同于数字的运算符存入队列*/
			key.push(tmp);
			tmp="";       /*再次置空*/
		}
		else if (input[i]>=0||input[i]<=9)     /*判断是数字*/
		{
			count++;          /*计算连续数字的个数*/
			tmp+=input[i];        /*将连续数字存在一起*/
			continue;
		}
	}


	key.push(tmp);          /*处理最后面的数字传入队列*/
	tmp="";
}


#endif
