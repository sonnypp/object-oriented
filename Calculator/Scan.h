#ifndef __SCAN_H__
#define __SCAN_H__

#include<iostream>
#include<string>
#include<queue>
using namespace std;
int count=0;      /*����ȫ�ֱ�����������һ�������м�λ��*/
queue<string>key;/*��ȫ�ֵĶ���queue*/

/************************************************************
�ļ�����Scan.h 
���ߣ�031502331
ʱ�䣺2016/3/26
��������Sxiaopeng     
���ã�����main��������������         
***********************************************************/



//����Scan����
class Scan
{
		/*����һ�������ַ����ĺ���*/
	public:
		void ToStringQueue(string input);
};



//�Ժ������з�װ
void Scan::ToStringQueue(string input)
{
	int l=input.length();    /*����ַ����ĳ���*/
	string tmp="";
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


	key.push(tmp);          /*�������������ִ������*/
	tmp="";
}


#endif
