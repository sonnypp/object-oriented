#pragma once
#include<iostream>
#include<string>
#include<queue>
#include<stack> 
#include "Scan.h"
#include "Calculation.h"
using namespace std;

class Print
{
public:
	Print();
	~Print();
	void PrintStringQueue(string input);
	void Datalong(string input, int flag);
private:
	queue<string>que;
	Scan KBS;
	Calculator KBC;
};

