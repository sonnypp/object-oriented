/************************************************************
�ļ�����calculation.cpp
���ߣ�031502331
ʱ�䣺2016/4/11
��������Sxiaopeng
���ã��㷨��������
***********************************************************/

#include<iostream>
#include<stack>
#include<queue>
#include<sstream>
#include<cctype>
#include "calculation.h"
using namespace std;

int priority[7][7]=
{
	{2,2,1,1,1,2,2}, //'+'
	{2,2,1,1,1,2,2}, //'-'
	{2,2,2,2,1,2,2}, //'*'
	{2,2,2,2,1,2,2}, //'/'
	{1,1,1,1,1,0,-1}, //'('
	{2,2,2,2,-1,2,2}, //')'
	{1,1,1,1,1,-1,0}  //'#'
};
/*===========Punction============================
���ã������ж϶����������ַ����ֻ��ǲ��������
=============================================*/
int Calculator::Punction(string alpa)
{
	if(alpa == "+" || alpa == "-" || alpa == "*" ||
	        alpa == "/" || alpa == "(" ||  alpa== ")" || alpa == "#")
		return 1;
	else
		return 0;
}
/*===================locate&&Precede============================================
 ����:  �Ƚ���������������ȼ��������� priority[][]���ҵ�ֵȻ��calculate�ж�
==============================================================================*/

int Calculator::locate(string alpa)
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

double Calculator::Precede(string opr1, string opr2)
{
	int index1 = locate(opr1);
	int index2 = locate(opr2);
	return priority[index1][index2];
}

//����
double Calculator::Operate(double opnd1, string op, double opnd2)
{
	double value;
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



double Calculator::Calculation(queue<string>key)
{
	while(!character.empty())
	{
		character.pop();
	}
	while(!num.empty())
	{
		num.pop();
	}
	string alpa;
	double tmp;
	character.push("#");   /*������ʾ��ʼ������*/
	key.push("#");        /*����ʾ��ʼ������*/
	num.push(0);
	alpa = key.front();
	key.pop();
	//���##��ԣ����ʽ��ֵ���
	while(alpa != "#" || character.top() != "#")
	{
		if (Punction(alpa)==0)
		{
			stringstream ss;
			ss<<alpa;          /*��������ջ*/
			ss>>tmp;         /*��Stringת��Ϊint*/
			num.push(tmp);
			alpa=key.front();
			key.pop();
		}
		else
		{
			/*�Ƚ�ջ������������ȡ�õĲ����������ȹ�ϵ*/
			int pa=Precede(character.top(), alpa);
			if(pa==1) /*ջ������Ȩ��*/
			{
				character.push(alpa);
				alpa = key.front();
				key.pop();
			}
			else if(pa==0)/*������ԣ�ջ�����ŵ���*/
			{
				character.pop();
				alpa = key.front();
				key.pop();
			}
			else if(pa==2)/*ջ������Ȩ�ߣ��ȵ��������㣬�����������ջ*/
			{
				string QAT = character.top();
				character.pop();
				double num2 = num.top();/*�ڶ�����������ǰ*/
				num.pop();
				double num1 = num.top();
				num.pop();
				double Newnum= Operate(num1, QAT, num2);
				num.push(Newnum);
			}
		}
	}/*end of while*/
	/*������ջ��ΨһԪ�ؼ�Ϊ������*/
	return num.top();
}
