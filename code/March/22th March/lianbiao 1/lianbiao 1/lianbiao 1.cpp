// lianbiao 1.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
struct table {
	int i;
	char c;
	table *p;
};
int main()
{
	t n able st1 = { 1,'a' };
	table st2 = { 2,'b' };
	table st3 = { 3,'c' };
	st1.p = &st2;
	st2.p = &st3;
	cout << st1.i << " " << st1.c << endl;
	cout << st1.p->i << " " << st1.p->c << endl;
	cout << st2.p->i << " " << st2.p->c << endl;
	system("pause");
    return 0;
}

