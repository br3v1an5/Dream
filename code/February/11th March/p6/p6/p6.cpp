// p6.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void swap(int *a, int *b);
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int *p1, *p2, *p3;
	p1 = &a;
	p2 = &b;
	p3 = &c;
	if (*p1 > *p2)
		swap(*p1, *p2);
	if (*p2 > *p3)
			swap(*p2, *p3);
	if (*p1 > *p2)
		swap(*p1, *p2);
	cout << *p1 << " " << *p2 << " " << *p3;
	system("pause");
    return 0;
	
}

void swap(int * a, int * b)
{
	int *t=NULL;
	*t = *a;
	*a = *b;
	*b = *a;
}
