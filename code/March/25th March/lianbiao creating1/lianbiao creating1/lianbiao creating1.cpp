// lianbiao creating1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
struct node {
	int i;
	char c;
	node *next;
};
int main()
{
	node node1 = { 1,'a' };
	node node2 = { 2,'b' };
	node *p_head;
	p_head = new node;
	p_head->next = &node1;
	node1.next = &node2;
	int j;
	node *p = &node1;
	for (j = 1; j <= 2; j++)
	{
		cout << p->i << " " << p->c << endl;
		p = p->next;
	}
	node *p_new;
	p_new = new node;
	puts("plz input the new data");
	cin >> p_new->i >> p_new->c;
	p_new->next = &node1;
	p_head->next= p_new;
	p =p_head->next;
	for (j = 1; j <= 3; j++)
	{
		cout << p->i << " " << p->c << endl;
		p = p->next;
	}
	system("pause");
    return 0;
}

