// lianbiao3.cpp: 定义控制台应用程序的入口点。
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
	node *p;
	p = new node; 
	p->i = 10;
	p->c = 'A';
	cout << p->i << " " << p->c << endl;
	system("pause");
    return 0;
}

