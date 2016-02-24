#include<iostream>
#include<string>
#include "Class.h"
using namespace std;

int main()
{
	Scan a;  //定义一个Scan类对象 a . 
	Print b; //定义一个Print类对象 b . 
	string input;  //声明字符串 
	cin>>input;  //输入字符串 
	a.ToStringQueue(input);  //对字符串进行处理 并且存在queue的队列中 
	b.PirntStringQueue();   //打印队列 
	return 0;
} 
