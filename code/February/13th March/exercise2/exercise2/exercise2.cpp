// exercise2.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
void swap(int *p1, int *p2);
int main()
{
	int a, b;
	cin >> a >> b;
	swap(&a, &b);
	cout << a << " " << b << endl;
	system("pause");
    return 0;
}
void swap(int * p1,int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
