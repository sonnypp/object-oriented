#include "stdafx.h"
#include "Print.h"


Print::Print()
{
}


Print::~Print()
{
}
void Print::PrintStringQueue(string input)
{
	cout << input << " ";
}



void Print::Datalong(string input, int flag)
{
	if (flag)
	{
		que = KBS.ToStringQueue(input);
		if (KBS.judge())
		{
			/*调用Print类中的方法输出结果；*/
			PrintStringQueue(input);
			cout << KBC.Calculation(que) << endl;
		}
		else
			cout << "ERROR" << endl;  //数据出现错误的时候我们就输出"ERROR";
	}
	else
	{
		que = KBS.ToStringQueue(input);
		if (KBS.judge())
			cout << KBC.Calculation(que) << endl;
		else
			cout << "ERROR" << endl; //数据出现错误的时候我们就输出"ERROR";
	}
}
