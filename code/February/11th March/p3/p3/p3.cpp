// p3.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"

#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
	char str1[] = "I love Myself！";
	char str2[20], *p1, *p2;
	p1 =str1;
	p2 =str2;
	for (; *p1 != '\0'; p1++, p2++)
		*p2 = *p1;
	*p2 = '\0';
	p1 = str1;
	p2 = str2;
	cout<<str1<< endl;
	cout<<str2<< endl;
	system("pause");
    return 0;
}

