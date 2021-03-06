// oj-B.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
struct node{
	int data;
	node *next;
};
void create(node *h);
void display(node *h);
int main()
{
	node *head, *tail, *p;
	head = new node;
	head->next = NULL;
	tail = head;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		create(head);
	}
	display(head);
    return 0;
}

void create(node * h)
{
	node *tail, *p;
	tail = h;
	p = new node;
	cin >>p->data;
	tail->next = p;
	tail = p;
}

void display(node * h)
{
	node *p;
	p= h->next;
	while (p)
	{
		cout << p->data<<" ";
		p = p->next;
	}
}
