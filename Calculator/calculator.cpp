/************************************************************
文件名：calculator.cpp 
作者：031502331
时间：2016/3/26
博客名：Sxiaopeng    
作用：处理字符串，并且输出。          
***********************************************************/




#include<iostream>
#include<string>
#include "Scan.h" 
#include "Print.h"

using namespace std;

int main()
{
    /*创建一个Scan类的对象 a；*/
	Scan a;         
    
	/*创建一个Print类的对象 b；*/
	Print b;  
	
	/*声明字符串 ；*/       
	string input; 
	 
	/* 输入字符串 ；*/
	cin >> input;  
	
	/*调用Scan类中的方法处理字符串；*/   
	a.ToStringQueue(input);
	
	/*调用Print类中的方法输出队列；*/   
	b.PrintStringQueue(); 
	    
	return 0;
}
