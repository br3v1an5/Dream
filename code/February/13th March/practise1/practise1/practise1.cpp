// practise1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
void mycopy(char *want, char *source);
int main()
{
	char a[20] = "how are you";
	char b[20];
	mycopy(b, a);
	cout << b << endl;
	system("pause");
}
void mycopy(char *want,char *source)
{
	while (*source!='\0')
	{
		*want = *source;
		*want++;
		*source++;
	}
		
}
