// create.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
using namespace std;
//#include<bits/stdc++.h>
using namespace std;
#include<stdlib.h>
typedef int Elemtype;   //表示Elemtype是int的别名
struct Node
{
	Elemtype data;
	Node *next;
};
Node* CreateList1(int n) //带有头节点的单链表的创建,n表示链表长度     
{
	Node *head, *tail, *p; //头节点,尾指针,新建节点
	head = tail = NULL;
	head = new Node;  //头节点
	tail = head;

	for (int i = 1; i <= n; i++)
	{
		p = new Node;
		cin >> p->data;
		tail->next = p;
		tail = p;
	}
	tail->next = NULL;
	return head;
}
Node* CreateList2(int n)//带有头节点的头插法
{
	Node *head;//头节点
	Node  *h;//首结点
	head = new Node;
	head->next = NULL;
	while (n--)
	{
		h = new Node;
		cin >> h->data;
		h->next = head->next;
		head->next = h;
	}
	return head;
}
void display(Node *h)
{
	h = h->next;
	while (h)
	{
		cout << h->data << " ";
		h = h->next;
	}
	cout << endl;
}
void ListInsert(Node* &h, int i, int e)//表示在第i个位置插入一个数e
{
	//我们首先需要找到第i-1的位置
	Node* p = h;
	for (int j = 1; j <= i - 1; j++)
	{
		p = p->next;
	}
	//此时p就是指向第i-1个数了
	Node *node = new Node;    //创建一个要插入的节点
	node->data = e;
	node->next = p->next;
	p->next = node;
}
void ListDelete(Node* &head, int i)  //表示删除第i个数
{
	//我们首先需要找到第i-1的位置
	Node* p = head;
	for (int j = 1; j <= i - 1; j++)
	{
		p = p->next;
	}
	//此时p就是指向第i-1个数了
	Node *delete_elem = p->next;  //找到删除元素的地址，以便释放内存
	p->next = delete_elem->next;
	delete delete_elem;
}

int main()
{
	Node *head;
	head = CreateList1(5);
	ListInsert(head, 5, 100);
	display(head);
	ListDelete(head, 3);
	display(head);
	system("pause");
}

