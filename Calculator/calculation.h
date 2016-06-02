#pragma once
#include<iostream>
#include<stack>
#include<queue>
#include<sstream>
#include<cctype>
using namespace std;

class Calculator
{
public:
	~Calculator();
	double Calculation(queue<string>key);
	int Punction(string alpa);
	int locate(string alpa);
	double Precede(string opr1, string opr2);
	double Operate(double opnd1, string op, double opnd2);
private:
	stack<string>character_1;   /*只处理+ - # / ()运算*/
	stack<double>num_1;
};
