// p1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char a[20], b[20];
		cin >> a;
		cin >> b;
		int i, j, len;
		len = strlen(a);
		for (i = 0,j=0; a[i] != '\0'; i++,j++)
		{
			if (len<j)
				j = 0;
			if (a[i] > 'A'&&a[i] < 'Z')
				a[i] = a[i] + b[j] - '0';
			else
				a[i] = a[i] + b[j] - '0';
		}
		cout << a << endl;
	}
	system("pause");
    return 0;
}

