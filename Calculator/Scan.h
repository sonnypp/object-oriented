#ifndef __SCAN_H__
#define __SCAN_H__

#include<iostream>
#include<string>
#include<queue>
using namespace std;


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
		queue<string>ToStringQueue(string input);
		bool judge();
	private:
		bool flag;
};

#endif
