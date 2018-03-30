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
int find(node *h, int e);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		node *head, *tail, *p;
		head = new node;
		head->next = NULL;
		tail = head;
		int i, j, n;
		cin >> n;
		int b,count=0;
		for (i = 0; i < n; i++)
		{
			cin >> b;
			if (find(head, b))
			{
				p = new node;
				p->data=b;
				tail->next = p;
				p->next = NULL;
				tail = p;
				count++;
			} 
		}
		p = head->next;
		cout << count << " ";
		while (p)
		{
			cout << p->data<<" ";
			p = p->next;
		}
	}
	system("pause");
    return 0;
}

int find(node * h, int e)
{
	h = h ->next;
	while (h)
	{
		if (e == h->data)
			return 0;
		h = h->next;
	}
	return 1;
}
