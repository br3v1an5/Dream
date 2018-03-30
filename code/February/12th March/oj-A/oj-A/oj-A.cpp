// oj-A.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<string.h>
#include<cmath>
#include<iostream>
using namespace  std;
#include<stdlib.h>
int isnumber(char *p);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char a[20];
		cin >> a;
		int result = isnumber(a);
		cout << result << endl;
		system("pause");
	}
}
int isnumber(char *p)
{
	int sum = 0;
	if (*p == '-')
		*p++;
	int len = strlen(p);
	for (int i = 0; i < len; i++)
		if (*(p + i)<'0' || *(p + i)>'9')
			return -1;

	for (int i = 0; i < len; i++)
		sum += (*(p + i) - '0')*pow(10, len - i - 1);
	if (*(p-1) == '-')
		return -sum;
	else
		return sum;
}
