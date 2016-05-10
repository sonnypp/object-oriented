/************************************************************
文件名：calculator.cpp
作者：031502331
时间：2016/3/26
博客名：Sxiaopeng
作用：处理字符串，并且输出,并计算出值。
ps:此次作业将可用文件输入与结果输出到文件 。
***********************************************************/

#include<iostream>
#include<queue>
#include<string>
#include<string.h>
#include<stack>
#include "Scan.h"
#include "Print.h"
#include "calculation.h"
using namespace std;
int main(int argc,char* argv[])
{
	queue<string>que;
	/*创建一个Scan类的对象 a；*/
	Scan a;
	/*创建一个Print类的对象 b；*/
	Print b;
	/*创建一个calculation类的对象 b；*/
	calcu c;
	/*声明字符串 ；*/
	string input;
	int flag=1;
	/*判断是否为文件输入*/
	if(argc<2)
		cout << "无参数" << endl;
	else
	{
		if(strcmp(argv[1],"-f")==0)
		{
			string text_file=argv[argc-2];  //输入文件名
			string result_file=argv[argc-1];  //输出文件名
			b.Filelong(text_file,result_file); //Print类里面处理文件计算的函数
		}
		else
		{
			if(strcmp(argv[1],"-a")==0)
			{
				flag=1;
				input=argv[2];
			}
			else
			{
				flag=0;
				input=argv[1];
			}
			b.Datalong(input,flag); //Print类里面处理非文件的函数
		}
	}
	return 0;
}
