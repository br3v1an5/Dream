// p5.cpp: 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
#include<iostream>
using namespace std;
void sort(char name[], int n);
void print(char name[], int n);
int main()
{
	char *name[] = { "BASIC","FORTRAIIN","C++","Pascal","COBOL" };
	int n = 5;
	sort(name,n);
	print(name, 5);
	return 0;
}

void sort(char name[], int n)
{
	int i, j;
	char *temp;
	for (i = 0; i < n - 1; i++)
	{
		int k = i;
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(name[k],name[j]) > 0)
				k = j;
			if (k != i)
			{
				
				*temp = name[k];
				name[k] = name[i];
				name[i] = *temp;
			}
		}
	}
}
void print(char *name[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << name[i] << endl;
}
