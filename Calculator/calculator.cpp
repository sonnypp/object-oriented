#include "stdafx.h"
#include<iostream>
#include<string>
#include<string.h>
#include "Print.h"
using namespace std;
int main(int argc,char* argv[])
{
	queue<string>que;
	/*创建一个Print类的对象 b；*/
	Print b;
	Scan a;
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
			a.Filelong(text_file,result_file); //Print类里面处理文件计算的函数
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
