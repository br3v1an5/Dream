// practise1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdlib.h>
#include<iostream>
using namespace std;
int mystrlen(char s[]);
int main()
{
	char ch[20] = "hello";
	int length=mystrlen(ch);
	cout << length << endl;
	system("pause");
    return 0;
}
int mystrlen(char s[])
{
	char *p_begin = s;
	char *p;
	p = p_begin;
	while (*p_begin != '\0')
		p_begin++;
	return(p_begin - p);
}
