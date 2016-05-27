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
		stack<string>character;   /*只处理+ - # / ()运算*/
		stack<double>num;
		/*从中缀表达式到后缀表达式(逆波兰式)，并且计算*/
};

#endif
