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
#include "operate.h"

judge a; /*����һ��judge��������������ķ���*/

/*����׺���ʽ����׺���ʽ(�沨��ʽ)�����Ҽ���*/

double calcu::Calculation(queue<string>key)
{
	/*����������㷨*/
	stack<string>character;   /*ֻ����+ - # / ()����*/
	stack<double>num;
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
		if (a.Punction(alpa)==0)
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
			int pa=a.Precede(character.top(), alpa);
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
				double Newnum= a.Operate(num1, QAT, num2);
				num.push(Newnum);
			}
		}
	}/*end of while*/
	/*������ջ��ΨһԪ�ؼ�Ϊ������*/
	return num.top();
}
