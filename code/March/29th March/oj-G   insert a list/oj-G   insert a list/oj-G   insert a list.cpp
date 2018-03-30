// oj-G   insert a list.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
struct node{
	int data;
	node *next;
};
node* insertlist(node *h);
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
		head=insertlist(head);
		display(head);
	}
	system("pause");
    return 0;
}

node* insertlist(node * h)
{
	node *tail, *p;
	tail = h;
	int order;
	cin >> order;
	if (order == 0)
		cout << "error";
	else
	{
		p = new node;
		cin >> p ->data;
		tail->next = p;
		tail = p;
		tail->next = NULL;
	}
	return h;
}
