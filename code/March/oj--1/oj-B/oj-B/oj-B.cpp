// oj-B.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
void change(int a);
int main()
{
	int num;
	scanf("%x", &num);
	change(num);
}void change(int a)
{
	printf("%d\n", a);
}

