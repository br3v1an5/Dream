 // e1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
	const char *p = "abcdefghij";
	for (int i = 0; i < 10; i++)
		cout << *(p + i) << " ";
	cout << endl;
	for (; *p != '\0'; p++)
		cout << *p << " ";
	cout << endl;
	for (int i = 0;i < 10; i++)
		cout << p[i] << " ";
	cout << endl;
	system("pause");
    return 0;
}

