/************************************************************
文件名：calculator.cpp
作者：031502331
时间：2016/3/26
博客名：Sxiaopeng
作用：处理字符串，并且输出,并计算出值。
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
	/* 输入字符串 ；*/
	if(argc<2)
	{
		cout<<"无参数"<<endl;
	}
	else
	{
		if(strcmp(argv[1],"-a")==0)
		{
			input=argv[2];
			que=a.ToStringQueue(input);
			/*调用Print类中的方法输出队列；*/
			b.PrintStringQueue(que);
			cout << " = " << c.Calculation(que) << endl;
		}
		else
		{
			input=argv[1];
			que=a.ToStringQueue(input);
			cout << c.Calculation(que) << endl;
		}
	}
	return 0;
}
