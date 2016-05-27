#include<iostream>
#include<string>
#include<cctype>
#include<queue>
#include "Scan.h"

/************************************************************
文件名：Scan.cpp
作者：031502331
时间：2016/4/11
博客名：Sxiaopeng
作用：用来对输入的字符串进行处理存入队列
***********************************************************/

bool Scan::judge()
{
	return flag;
}

queue<string>Scan::ToStringQueue(string input)
{
	int count=0;      /*来计算一个数的有几位数*/
	flag=true;
	while(!key.empty())
	{
		key.pop();
	}
	int len=input.length();    /*测出字符串的长度*/
	string tmp="";
	/*===============================================================
	对输入的字符串在入队之前先做处理，判断在'('的下一个是不是'-'，如果
	是的话就在他们之间加入一个'0'，处理完后就对处理后的字符串进行入队处
	理。
	==============================================================*/
	for(int i=0; i<len; i++)
	{
		if(input[i]=='('&&input[i+1]=='-')
		{
			tmp+=input[i];
			tmp+='0';
		}
		else if(input[i]=='-'&&input[i+1]=='-')
		{
			tmp+='+';
			i++;
		}
		else if(input[i]=='-'&&input[i+1]=='+')
		{
			tmp+=input[i];
			i++;
		}
		else if(input[i]=='+'&&input[i+1]=='-')
		{
			tmp+=input[i];
			tmp+='0';
		}
		else if(input[i]=='+'&&input[i+1]=='+')
		{
			tmp+=input[i];
			i++;
		}
		else if(input[i]==')'&&input[i+1]=='(')
		{
			tmp+=input[i];
			tmp+='*';
		}
		else if(input[i]>='0'&&input[i]<='9'&&input[i+1]=='(')
		{
			tmp+=input[i];
			tmp+='*';
		}
		else if(input[i]==')'&&isdigit(input[i+1]))
		{
			tmp+=input[i];
			tmp+='*';
		}
		else
		{
			tmp+=input[i];
		}
	}
	/*====================================
		 对新的字符串做入队处理
	====================================*/
	int l=tmp.length();
	input="";
	input=tmp;
	tmp="";
	for (int i=0; i<l-1; i++)
	{
		/*如果数字的位数超过10 就产生错误；*/
		if (count>10)
		{
		    flag=false;
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
			if(input[i]=='0'&&input[i-1]=='/'&&(input[i+1]<0||input[i+1]>9))
			{
				flag=false;
				break;
			}
			tmp+=input[i];        /*将连续数字存在一起*/
			continue;
		}
	}
	if(tmp!="")
	{
		key.push(tmp);          /*处理最后面的数字传入队列*/
		tmp="";
	}
	return key;
}
