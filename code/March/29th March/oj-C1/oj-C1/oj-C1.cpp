// oj-C1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
struct node {
	int data;
	node *next;
};
node* insertlist(node *h,int number);
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
		int order;
		cin >> order;
		head = insertlist(head,order);
		display(head);
	}
	system("pause");
	return 0;
}

node* insertlist(node * h,int number)
{
	node *tail, *p;
	tail = h;
	int number;
	cin >> number;
	if (number == 0)
		cout << "error";
	else 
	{
		for (int i = 0; i < number; i++)
		{
			p = new node;


		}
	}
	return h;
}
void display(node *h)
{
	h = h->next;
	while (h)
	{
		cout << h->data<<" ";
		h = h->next;
	}
}

