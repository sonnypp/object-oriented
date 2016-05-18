//============================================================================
// Name        : reverse.cpp
// Author      : sonnypp
// Version     :
// Copyright   :
// Description : 反转链表
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
 * 构建双向链表，方便链接
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
	 * 在这里我们重新计算链表长度，链表可能在中间间断，
	 * 在做题过程中 ，这点要注意，这就是我在做题做遇到的问题，
	 * 在同学帮助下找到这个错误的。
	 * =======*/
	while(p1)
	{
		number++;
		p1=p1->behind;
	}
	p1=head;
	head1=NULL;  //用来建立一个新的链表
	int count=0;

	/*=========
	 * 构建反转链表
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
	 * 判断原链表是否还存在数据，如果有的话
	 * 按顺序接在反转链表上
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
	 * 输出反转链表
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
