#ifndef __OPERATE_H__
#define __OPERATE_H__
/****************************************
 函数的作用就是用来让calculation调用的，用来
 作优先级的判断；
****************************************/
#include<iostream>
#include<string>


/*=========================================================
2代表优先权高，1代表优先权低，0代表优先权相同并且是括号配对
=========================================================*/
int priority[7][7]=
{
	{2,2,1,1,1,2,2}, //'+'
	{2,2,1,1,1,2,2}, //'-'
	{2,2,2,2,1,2,2}, //'*'
	{2,2,2,2,1,2,2}, //'/'
	{1,1,1,1,1,0,-1}, //'('
	{2,2,2,2,0,2,2}, //')'
	{1,1,1,1,1,-1,0}  //'#'
};


class judge
{
	public:
		int Punction(string alpa);
		int locate(string alpa);
		int Precede(string opr1, string opr2);
		int Operate(int opnd1, string op, int opnd2);
};


/*===========Punction============================
作用：用来判断队列输入是字符数字还是操作运算符
=============================================*/
int judge::Punction(string alpa)
{

	if(alpa == "+" || alpa == "-" || alpa == "*" ||
	        alpa == "/" || alpa == "(" ||  alpa== ")" || alpa == "#")
		return 1;
	else
		return 0;
}
/*===================locate&&Precede============================================

 作用:  比较两个运算符的优先级，在数组 priority[][]中找到值然后到calculate判断

==============================================================================*/

int judge::locate(string alpa)
{
	int index;
	if(alpa=="+")
		index = 0;
	else if(alpa=="-")
		index = 1;
	else if(alpa=="*")
		index = 2;
	else if(alpa=="/")
		index = 3;
	else if(alpa=="(")
		index = 4;
	else if(alpa==")")
		index = 5;
	else if(alpa=="#")
		index = 6;
	return index;
}

int judge::Precede(string opr1, string opr2)
{
	int index1 = locate(opr1);
	int index2 = locate(opr2);
	return priority[index1][index2];
}

//计算
int judge::Operate(int opnd1, string op, int opnd2)
{
	int value;
	if(op=="+")
		value = opnd1 + opnd2;
	else if(op=="-")
		value = opnd1 - opnd2;
	else if(op=="*")
		value = opnd1 * opnd2;
	else if(op=="/")
		value = opnd1 / opnd2;
	return value;
}

#endif
