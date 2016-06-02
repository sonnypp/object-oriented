#pragma once
#include<iostream>
#include<string>
#include<cctype>
#include<queue>
#include<fstream>
#include "Calculation.h"
using namespace std;

class Scan
{
public:
	Scan();
	~Scan();
	queue<string>ToStringQueue(string input);
	void Filelong(string text_file, string result_file);
	bool judge();
private:
	bool flag;
	queue<string>key;
	queue<string>que;
	Calculator KBC;
};

