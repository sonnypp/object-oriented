#ifndef __CALCULATION_H__
#define __CALCULATION_H__

#include<iostream>
#include<stack>
#include<queue>
#include<string>
#include "Scan.h"

class Calculator
{
	public:
		double Calculation(queue<string>key);
		int Punction(string alpa);
		int locate(string alpa);
		double Precede(string opr1, string opr2);
		double Operate(double opnd1, string op, double opnd2);
	private:
		stack<string>character;   /*ֻ����+ - # / ()����*/
		stack<double>num;
		/*����׺���ʽ����׺���ʽ(�沨��ʽ)�����Ҽ���*/
};

#endif
