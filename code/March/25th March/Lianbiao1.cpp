// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
	struct table {
		int i;
		char c;
		table *p;
	};
	table st1;
	st1.p = &st1;
	st1 = { 2016150200,'A' };
	cout << st1.i << " " << st1.c << endl;
	cout << st1.p->i<<" " << st1.p->c << endl;
	system("pause");
    return 0;
}

