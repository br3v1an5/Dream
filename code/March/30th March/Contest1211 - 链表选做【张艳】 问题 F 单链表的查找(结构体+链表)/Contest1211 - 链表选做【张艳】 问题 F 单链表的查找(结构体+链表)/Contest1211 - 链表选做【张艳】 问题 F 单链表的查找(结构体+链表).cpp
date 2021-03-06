// Contest1211 - 链表选做【张艳】 问题 F 单链表的查找(结构体+链表).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
struct node {
	int data;
	node *next;
};
int createlist(node *h, int number);
void display(node *h, int num);
node*find(node *h, int showorder);
int main()
{
	node *head, *tail,*p;
	head = new node;
	head->next = NULL;
	tail = head;
	int n;
	cin >> n;
	int totalnum=createlist(head, n);
	display(head,totalnum);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int order;
		cin >> order;
		if (order<1 || order>totalnum)
			cout << "error"<<endl;
		else 
		{
			node *temp = find(head,order);
			cout <<temp->data<<endl;
		}
	}
	system("pause");
    return 0;
}

int createlist(node * h, int number)
{
	node *tail, *p;
	tail = h;
	for (int i = 0; i < number; i++)
	{
		p = new node;
		cin >> p->data;
		tail->next = p;
		p->next = NULL;
		tail = p;
	}
	return number;
}

void display(node * h, int num)
{
	cout <<num << " ";
	h = h->next;
	while (h)
	{
		cout<< h->data<<" ";
		h = h->next;
	}
	cout<< endl;
}

node * find(node * h, int showorder)
{
	node *p;
	p = h;
	for (int i = 1; i < showorder; i++)
	{
		p=p->next;
	}
	p = p->next;
	return p;
}

