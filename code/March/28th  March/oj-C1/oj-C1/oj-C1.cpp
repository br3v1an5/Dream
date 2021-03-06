// oj-C.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
struct node {
	int data;
	node *next;
};
void createlist(node* h);
void display(node *h);
int main()
{
	node *head, *tail;
	head = new node;
	head->next = NULL;
	tail = head;
	createlist(head);
	display(head);
	system("pause");
	return 0;
}

void createlist(node * h)
{
	node *tail, *p;
	tail = h;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		p = new node;
		cin >> p->data;
		tail->next = p;
		p->next = NULL;
		tail = p;
	}
}

void display(node * h)
{
	node *p;
	p = h->next;
	while (p)
	{
		cout << p->data << " ";
		p = p->next;
	}
}
