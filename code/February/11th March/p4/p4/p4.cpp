// p4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdlib.h>
#include<iostream>
using namespace std;
int max(int x, int y);
int main()
{
	int a, b, m;
	int(*p)(int, int);
	p = max;
	cin >> a >> b;
	m = p(a, b);
	cout << m << endl;
	system("pause");
    return 0;
}

int max(int x, int y)
{
	int z;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}
