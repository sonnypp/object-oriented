#include<iostream>
#include<string>
#include<queue>
#include "Scan.h"

/************************************************************
�ļ�����Scan.cpp
���ߣ�031502331
ʱ�䣺2016/4/11 
��������Sxiaopeng
���ã�������������ַ������д���������
***********************************************************/

int count=0;      /*����ȫ�ֱ�����������һ�������м�λ��*/
queue<string>key;/*��ȫ�ֵĶ���queue*/
queue<string>Scan::ToStringQueue(string input)
{
	int len=input.length();    /*����ַ����ĳ���*/
	string tmp="";
	for(int i=0;i<len;i++)
	{
		if(input[i]=='('&&input[i+1]=='-')
		{
			tmp+=input[i];
			tmp+='0';
		}
		else
		{
			tmp+=input[i];
		}
	} 
	int l=tmp.length();
	input="";
	input=tmp;
	tmp="";
	for (int i=0; i<l; i++)
	{
		/*������ֵ�λ������10 �Ͳ�������*/
		if (count>10)
		{
			cout<<"Error"<<endl;
			break;
		}
		/*�ж��Ƿ����ַ�*/
		if (input[i]=='-' || input[i]=='+' || input[i]=='(' || input[i]==')' || input[i]=='/' || input[i]=='*')
		{
			count=0;
			/*�����е����ݴ������*/
			if (tmp!="")
			{
				key.push(tmp);
			}
			/*�ÿ�*/
			tmp="";
			tmp+=input[i];
			/*��һ��һ����ͬ�����ֵ�������������*/
			key.push(tmp);
			tmp="";       /*�ٴ��ÿ�*/
		}
		else if (input[i]>=0||input[i]<=9)     /*�ж�������*/
		{
			count++;          /*�����������ֵĸ���*/
			tmp+=input[i];        /*���������ִ���һ��*/
			continue;
		}
	}
	if(tmp!="")
	{
		key.push(tmp);          /*�������������ִ������*/
		tmp="";
	}
	return key;
}

