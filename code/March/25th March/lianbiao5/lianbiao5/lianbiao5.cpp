// lianbiao5.cpp: 定义控制台应用程序的入口点。
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
	int n;
	puts("请输入结点的个数:");
	cin >> n;

	node *phead,* ptail, *pnew;
	phead=new  node;
	ptail = phead;
	int i, j;
	for (i = 0; i < n; i++)
	{
		pnew=new node;
		cin >> pnew->i>> pnew->c; 
	    ptail->next=pnew;
		ptail=pnew;
	}
	puts("链表中个节点的数据为:");
	node *p = phead->next;
	for (j = 0; j < n; j++)
	{
		cout << p->i << " " << p->c << endl;
		p = p->next;
	}
	system("pause");
    return 0;
}

