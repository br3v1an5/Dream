// p3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
void swap(char *p1, char *p2);
int main()
{
	const char *name[] = {"Borlandc","Turbo C","c","c++","VC6.0","Foxpro" };
	for (int i = 0; i < 5; i++)
	{
		int k = i;
		for (int j = i + 1; j < 6; j++)
			if (strcmp(name[j],name[k])<0)
				k = j;
		if (k != i)
			swap(name[k], name[i]);
	}
	for (int i = 0; i < 6; i++)
		cout << name[i] << " ";
	system("pause");
    return 0;
}
void swap(char * p1, char * p2)
{
	char temp; 
	temp =*p1;
	*p1 = *p2;
	*p2 = temp;
}
