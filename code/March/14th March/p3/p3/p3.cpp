// p3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
void print(char *parray[],int len);
int main()
{
    char *array[] = { "hello","how","are"，"you" };
	int n = sizeof(array) / sizeof(char*);
	print(array,n);
	system("pause");
    return 0;
}

void print(char *parray[],int len)
{
	int i;
	for (i = 0; i <len; i++)
		cout << parray[i] << " ";	
}
