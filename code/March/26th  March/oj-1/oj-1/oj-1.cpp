// oj-1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
struct node {
	int data;
	node *next;
};
int find(node *h, int e);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,i,result;
		cin >> n;
		node *head,*p,*tail;
		head = new node;
		head->next = NULL;
		tail = head;
		for (i = 0; i < n; i++)
		{
			p = new node;
			int b;
			cin >> b;
			if (find(head, b))
			{
				p->data = b;
				tail->next = p;
				tail = p;
			}
		}
		node *h;
		h = head->next;
		while (h)
		{
			cout << h->data << endl;
			h = h->next;
		}
	}
	system("pause");
    return 0;
}

int find(node * h, int e)
{
	node *p = h;
	p->next = NULL;
	while (p)
	{
		if (p->data == e)
			return 0;
		else
			return 1;
		p = p->next;
	}
}
