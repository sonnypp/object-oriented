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
			/*����Print���еķ�����������*/
			PrintStringQueue(input);
			cout << KBC.Calculation(que) << endl;
		}
		else
			cout << "ERROR" << endl;  //���ݳ��ִ����ʱ�����Ǿ����"ERROR";
	}
	else
	{
		que = KBS.ToStringQueue(input);
		if (KBS.judge())
			cout << KBC.Calculation(que) << endl;
		else
			cout << "ERROR" << endl; //���ݳ��ִ����ʱ�����Ǿ����"ERROR";
	}
}
