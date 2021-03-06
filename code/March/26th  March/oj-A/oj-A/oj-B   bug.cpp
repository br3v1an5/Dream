// oj-A.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
struct node {
	int data;
	node *next;
};
void createlist(node *h, int num);
void show(node *h,int num);
void deletelist(node *h, int i);
int main()
{
	int n;
	cin >> n;
	node *head = new node;
	head->next = NULL;
	createlist(head, n);
	show(head,n);
	int t,order;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> order;
		deletelist(head, order);
		if (order == 0)
			n -= 1;
		if(order>0)
		 show(head, n--);
	}
	system("pause");
    return 0;
}

void createlist(node * h, int num)
{
	node *p,*tail=h;
	for (int i = 0; i < num; i++)
	{
		p = new node;
		cin >> p->data;
		p->next = NULL;
		tail->next = p;
		tail = p;
	}
	  
}

void show(node * h,int num)
{
	cout << num << " ";
	h = h->next;
	while (h)
	{
		cout << h->data << " ";
		h = h->next;
	}
}

void deletelist(node * h, int i)
{
	node *p, *tail = h;
	p = h;
	if (i < 1)
	{
		cout << "error" << endl;
	}
	else {
		for (int j = 0; j < i - 1; j++)
			p = h->next;
		p->next = p->next->next;
	}
	
}
