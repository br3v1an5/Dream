// create function.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
char *createstring(char ch, int n)
{
	char *str;
	str = new char[n + 1];
	int i;
	for ( i = 0; i < n; i++)
		str[i] = ch + i;
	str[i] = '\0';
	return str;
}
int main()
{
	char *p = createstring('D', 10);
	cout << p << endl;
	system("pause");
    return 0;
}
