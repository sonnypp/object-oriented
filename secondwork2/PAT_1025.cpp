//============================================================================
// Name        : reverse.cpp
// Author      : sonnypp
// Version     :
// Copyright   :
// Description : ��ת����
//============================================================================


#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

struct Node
{
	int R;
	int L;
	int num;
	Node *before;
	Node *behind;
} dote[100010];

/*============================
 *
 * ����˫��������������
 *
 *========================== */
int main()
{
	Node *head1,*head,*p1,*p2,*temp;
	head1=head=p1=p2=temp=new Node;
	head=NULL;
	int begin,number,time;
	cin >> begin >> number >> time;
	for(int i=0; i<number; i++)
	{
		int adress,b,next_adress;
		cin >> adress >> b >> next_adress;
		dote[adress].L=adress;
		dote[adress].num=b;
		dote[adress].R=next_adress;
		if(next_adress!=-1)
		{
			dote[adress].behind=&dote[next_adress];
			dote[next_adress].before=&dote[adress];
		}
		else
		{
			dote[adress].behind=NULL;
		}
	}
	head=&dote[begin];
	number=0;
	p1=head;
	/*=====
	 * �������������¼��������ȣ�����������м��ϣ�
	 * ����������� �����Ҫע�⣬������������������������⣬
	 * ��ͬѧ�������ҵ��������ġ�
	 * =======*/
	while(p1)
	{
		number++;
		p1=p1->behind;
	}
	p1=head;
	head1=NULL;  //��������һ���µ�����
	int count=0;

	/*=========
	 * ������ת����
	===================*/
	while(p1&&number>=time)
	{
		count++;
		if(count==time)
		{
			number-=time;
			temp=p1;
			p1=p1->behind;
			while(count--&&temp)
			{
				if(head1==NULL)
					head1=temp;
				else
					p2->behind=temp;
				p2=temp;
				temp=temp->before;
			}
			count=0;
		}
		else{
			p1=p1->behind;
		}

	}
	/*============
	 * �ж�ԭ�����Ƿ񻹴������ݣ�����еĻ�
	 * ��˳����ڷ�ת������
	 * ===========*/
	while(p1)
	{
		if(head1==NULL)
		    head1=p1;
		else p2->behind=p1;
		p2=p1;
		p1=p1->behind;
	}
	p2->behind=NULL;
	/*==========
	 * �����ת����
	 * =============*/
	while(head1)
	{
		if(head1->behind)
		{
			printf("%05d %d %05d\n",head1->L,head1->num,head1->behind->L);
		}
		else
		{
			head1->R=-1;
			printf("%05d %d %d\n",head1->L,head1->num,head1->R);
		}
		head1=head1->behind;
	}
	delete head1;
	head1=NULL;
	return 0;
}
