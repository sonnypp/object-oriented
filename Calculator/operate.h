#ifndef __OPERATE_H__
#define __OPERATE_H__
/****************************************
 ���������þ���������calculation���õģ�����
 �����ȼ����жϣ�
****************************************/
#include<iostream>
#include<string>


/*=========================================================
2��������Ȩ�ߣ�1��������Ȩ�ͣ�0��������Ȩ��ͬ�������������
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
		double Precede(string opr1, string opr2);
		double Operate(double opnd1, string op, double opnd2);
};


/*===========Punction============================
���ã������ж϶����������ַ����ֻ��ǲ��������
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

 ����:  �Ƚ���������������ȼ��������� priority[][]���ҵ�ֵȻ��calculate�ж�

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

double judge::Precede(string opr1, string opr2)
{
	int index1 = locate(opr1);
	int index2 = locate(opr2);
	return priority[index1][index2];
}

//����
double judge::Operate(double opnd1, string op, double opnd2)
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

#endif
