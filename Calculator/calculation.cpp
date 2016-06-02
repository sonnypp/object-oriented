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
���ã������ж϶����������ַ����ֻ��ǲ��������
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
����:  �Ƚ���������������ȼ��������� priority[][]���ҵ�ֵȻ��calculate�ж�
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

//����
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
	character_1.push("#");   /*������ʾ��ʼ������*/
	key.push("#");        /*����ʾ��ʼ������*/
	num_1.push(0);
	alpa = key.front();
	key.pop();
	//���##��ԣ����ʽ��ֵ���
	while (alpa != "#" || character_1.top() != "#")
	{
		if (Punction(alpa) == 0)
		{
			stringstream ss;
			ss << alpa;          /*��������ջ*/
			ss >> tmp;         /*��Stringת��Ϊint*/
			num_1.push(tmp);
			alpa = key.front();
			key.pop();
		}
		else
		{
			/*�Ƚ�ջ������������ȡ�õĲ����������ȹ�ϵ*/
			int pa = Precede(character_1.top(), alpa);
			if (pa == 1) /*ջ������Ȩ��*/
			{
				character_1.push(alpa);
				alpa = key.front();
				key.pop();
			}
			else if (pa == 0)/*������ԣ�ջ�����ŵ���*/
			{
				character_1.pop();
				alpa = key.front();
				key.pop();
			}
			else if (pa == 2)/*ջ������Ȩ�ߣ��ȵ��������㣬�����������ջ*/
			{
				string QAT = character_1.top();
				character_1.pop();
				double num2 = num_1.top();/*�ڶ�����������ǰ*/
				num_1.pop();
				double num1 = num_1.top();
				num_1.pop();
				double Newnum = Operate(num1, QAT, num2);
				num_1.push(Newnum);
			}
		}
	}/*end of while*/
	 /*������ջ��ΨһԪ�ؼ�Ϊ������*/
	return num_1.top();
}
