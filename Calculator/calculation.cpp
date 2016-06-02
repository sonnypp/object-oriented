#include "stdafx.h"
#include "Calculation.h"


Calculator::~Calculator()
{
}

int priority[7][7] =
{
	{ 2,2,1,1,1,2,2 }, //'+'
	{ 2,2,1,1,1,2,2 }, //'-'
	{ 2,2,2,2,1,2,2 }, //'*'
	{ 2,2,2,2,1,2,2 }, //'/'
	{ 1,1,1,1,1,0,-1 }, //'('
	{ 2,2,2,2,-1,2,2 }, //')'
	{ 1,1,1,1,1,-1,0 }  //'#'
};
/*===========Punction============================
作用：用来判断队列输入是字符数字还是操作运算符
=============================================*/
int Calculator::Punction(string alpa)
{
	if (alpa == "+" || alpa == "-" || alpa == "*" ||
		alpa == "/" || alpa == "(" || alpa == ")" || alpa == "#")
		return 1;
	else
		return 0;
}
/*===================locate&&Precede============================================
作用:  比较两个运算符的优先级，在数组 priority[][]中找到值然后到calculate判断
==============================================================================*/

int Calculator::locate(string alpa)
{
	int index;
	if (alpa == "+")
		index = 0;
	else if (alpa == "-")
		index = 1;
	else if (alpa == "*")
		index = 2;
	else if (alpa == "/")
		index = 3;
	else if (alpa == "(")
		index = 4;
	else if (alpa == ")")
		index = 5;
	else if (alpa == "#")
		index = 6;
	return index;
}

double Calculator::Precede(string opr1, string opr2)
{
	int index1 = locate(opr1);
	int index2 = locate(opr2);
	return priority[index1][index2];
}

//计算
double Calculator::Operate(double opnd1, string op, double opnd2)
{
	double value;
	if (op == "+")
		value = opnd1 + opnd2;
	else if (op == "-")
		value = opnd1 - opnd2;
	else if (op == "*")
		value = opnd1 * opnd2;
	else if (op == "/")
		value = opnd1 / opnd2;
	return value;
}



double Calculator::Calculation(queue<string>key)
{
	while (!character_1.empty())
	{
		character_1.pop();
	}
	while (!num_1.empty())
	{
		num_1.pop();
	}
	string alpa;
	double tmp;
	character_1.push("#");   /*用来表示开始结束的*/
	key.push("#");        /*来表示开始结束的*/
	num_1.push(0);
	alpa = key.front();
	key.pop();
	//如果##配对，表达式求值完成
	while (alpa != "#" || character_1.top() != "#")
	{
		if (Punction(alpa) == 0)
		{
			stringstream ss;
			ss << alpa;          /*操作数入栈*/
			ss >> tmp;         /*将String转化为int*/
			num_1.push(tmp);
			alpa = key.front();
			key.pop();
		}
		else
		{
			/*比较栈顶操作符和新取得的操作符的优先关系*/
			int pa = Precede(character_1.top(), alpa);
			if (pa == 1) /*栈顶优先权低*/
			{
				character_1.push(alpa);
				alpa = key.front();
				key.pop();
			}
			else if (pa == 0)/*括号配对，栈顶括号弹出*/
			{
				character_1.pop();
				alpa = key.front();
				key.pop();
			}
			else if (pa == 2)/*栈顶优先权高，先弹出，计算，结果操作数入栈*/
			{
				string QAT = character_1.top();
				character_1.pop();
				double num2 = num_1.top();/*第二个操作数在前*/
				num_1.pop();
				double num1 = num_1.top();
				num_1.pop();
				double Newnum = Operate(num1, QAT, num2);
				num_1.push(Newnum);
			}
		}
	}/*end of while*/
	 /*操作数栈的唯一元素即为计算结果*/
	return num_1.top();
}
