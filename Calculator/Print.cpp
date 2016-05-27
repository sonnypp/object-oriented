#include<iostream>
#include<string>
#include<queue>
#include<stack> 
#include<fstream>
#include "Print.h"
using namespace std;


/************************************************************
文件名：Print.cpp
作者：031502331
时间：2016/4/09
博客名：Sxiaopeng
作用：用来输出队列的 还有处理一些文件问题
***********************************************************/

void Print::PrintStringQueue(string input)
{
	cout << input  << " ";
}

void Print::Filelong(string text_file,string result_file)
{
	ifstream iosin;      //读操作（输入）的文件类
	ofstream iosout;    //写操作（输出）的文件类
	//打开文件
	iosin.open(text_file.c_str(),ios::in);
	iosout.open(result_file.c_str(),ios::out);

	while(!iosin.eof())
	{
		string get_input;
		getline(iosin,get_input,'\n'); //以换行符作为分界点。
		que=KBS.ToStringQueue(get_input);
		double result=0;
		if(KBS.judge())
		{
			result=KBC.Calculation(que);
			//cout << get_input;
			//cout << result << endl;
			//将计算出来的值记录到文件中去。
			iosout << result << endl;
		}
		else
		{
			iosout << "ERROR" << endl;   //数据出现错误的时候我们就传入"ERROR"到文件;
		}
	}
	//关闭文件
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
			/*调用Print类中的方法输出结果；*/
			PrintStringQueue(input);
			cout << KBC.Calculation(que) << endl;
		}
		else
			cout << "ERROR" << endl;  //数据出现错误的时候我们就输出"ERROR";
	}
	else
	{
		que=KBS.ToStringQueue(input);
		if(KBS.judge())
			cout << KBC.Calculation(que) << endl;
		else
			cout << "ERROR" << endl; //数据出现错误的时候我们就输出"ERROR";
	}
}
