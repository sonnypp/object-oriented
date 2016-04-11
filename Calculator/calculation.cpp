/************************************************************
文件名：calculation.cpp
作者：031502331
时间：2016/4/11 
博客名：Sxiaopeng
作用：算法四则运算
***********************************************************/
#include<iostream>
#include<stack>
#include<queue>
#include<sstream>
#include<cctype>
#include "calculation.h"
#include "operate.h"

judge a; /*定义一个judge对象来调用里面的方法*/

/*从中缀表达式到后缀表达式(逆波兰式)，并且计算*/

int calcu::Calculation(queue<string>key)
{
	/*运算符优先算法*/
	stack<string>character;   /*只处理+ - # / ()运算*/
	stack<int>num;
	string alpa;
	int tmp;
	character.push("#");   /*用来表示开始结束的*/
	key.push("#");        /*来表示开始结束的*/
	num.push(0); 
	alpa = key.front();
	key.pop();
	//如果##配对，表达式求值完成
	for(;alpa != "#" || character.top() != "#";)
	{
		if (a.Punction(alpa)==0)
		{
			stringstream ss;
			ss<<alpa;          /*操作数入栈*/
			ss>>tmp;         /*将String转化为int*/
			num.push(tmp);
			alpa=key.front();
			key.pop();
		}
		else
		{
			/*比较栈顶操作符和新取得的操作符的优先关系*/
			int pa=a.Precede(character.top(), alpa);
			if(pa==1) /*栈顶优先权低*/
			{
				character.push(alpa);
				alpa = key.front();
				key.pop();
			}
			else if(pa==0)/*括号配对，栈顶括号弹出*/
			{
				character.pop();
				alpa = key.front();
				key.pop();
			}
			else if(pa==2)/*栈顶优先权高，先弹出，计算，结果操作数入栈*/
			{
				string QAT = character.top();
				character.pop();
				int num2 = num.top();/*第二个操作数在前*/
				num.pop();
				int num1 = num.top();
				num.pop();
				int Newnum= a.Operate(num1, QAT, num2);
				num.push(Newnum);
			}
		}
	}/*end of while*/
	/*操作数栈的唯一元素即为计算结果*/
	return num.top();
}
