// lianbiao4.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
struct node {
	short i;
	char c;
	node *next;
};
int main()
{
	node node1 = { 1,'A' };
	node node2 = { 2,'B' };
	node node3 = { 3,'C' };
	node1.next = &node2;
	node2.next = &node3;
	int j;
	node *p;
	p = &node1;
	for (j =1; j < 4; j++)
	{
		cout << p->i << " " << p->c << endl;
		p =p->next;
	}
	node *p_new;
	p_new = new node;
	if (p_new != NULL)
	{
		p_new->i = 4;
		p_new->c = 'D';
		node3.next = p_new;
	}
	else
		cout << " no available";
	puts("加入新节点后");
	p = &node1;
	for (int i = 0; i < 4; i++)
	{
		cout << p->i << " " << p->c << endl;
		p = p->next;
	}
	system("pause");
    return 0;
}
 
