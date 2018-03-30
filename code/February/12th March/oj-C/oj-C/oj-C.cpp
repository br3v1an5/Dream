// oj-C.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>
int compare(char *s, char *t);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char a[20];
		char b[20];
		cin >> a;
		cin >> b;
		int result = compare(a, b);
		cout << result << endl;
	}
	system("pause");
    return 0;
}

int compare(char * s, char * t)
{
	int len1, len2;
	len1 = strlen(s);
	len2 = strlen(t);
	if (len1 != len2)
	{
		if (len1 > len2)
			return 1;
		else
			return -1;
	}
	else
	{
	    int count1=0,count3=0;
		for (int i = 0; i < len1; i++,*s++,*t++)
		{
			if (*s > *t)
				count1++;
			if (*s < *t)
				count3++;
		}
		if (count1 > count3)
			return 1;
		if (count1 == count3)
			return 0;
		if (count1 < count3)
			return -1;
	}
}
