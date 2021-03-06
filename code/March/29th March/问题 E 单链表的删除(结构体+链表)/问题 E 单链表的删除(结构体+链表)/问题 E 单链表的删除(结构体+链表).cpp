// 问题 E 单链表的删除(结构体+链表).cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
struct node {
	int data;
	node *next;
};
int create(node *h, int number);
void display(node *h, int number);
int find(int number);
int dellist(node *h, int delorder,int total);
int main()
{
	node *head, *tail;
	head = new node;
	head->next = NULL;
	tail = head;
	int n;
	cin >> n;
	create(head, n);
	display(head, n);
	//puts("input the times");
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) 
	{
		int result = find(n);
		//cout << result << endl;
		int delresult = dellist(head, result,n);
		if (delresult!=0)
			display(head,n-=1);
		else
			cout << "error"<<endl;
	}
	system("pause");
    return 0;
}

int create(node * h, int number)
{
	node *tail, *p;
	tail = h;
	for (int i = 0; i < number; i++)
	{
		p = new node;
		cin >> p ->data;
		tail->next=p;
		p->next = NULL;
		tail = p;
	}
	return number;
}

void display(node * h, int number)
{
	cout << number;
	h = h->next;
	while (h->next!=NULL)
	{
		cout <<" "<<h->data;
		h = h->next;
	}
	cout <<" "<<h->data;
	cout << endl;
}

int find(int number)
{
		int order;
		cin >> order;
		if (order >= 1 && order <= number)
			return order;
		else
			return NULL;
}

int dellist(node * h, int delorder,int total)
{
	node *pfront,*pdel;
	pfront = h;
		if (delorder<1 || delorder>total)
			return 0;
		else
		{
			for (int i = 1; i < delorder; i++)
			{
				pfront= pfront->next;
			}
			pdel = pfront->next;
			pfront->next = pdel->next;
			delete(pdel);
			return 1;
		}
}
