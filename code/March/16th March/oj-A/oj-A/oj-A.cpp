// oj-1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char a[11], b[11], c[11];
		cin >> a >> b >> c;
		char *p1, *p2, *p3;
		p1 = a;
		p2 = b;
		p3 = c;
		int begin1, end1, begin2, end2, begin3, end3;
		static int i, j;
		cin >> begin1 >> end1 >> begin2 >> end2 >> begin3 >> end3;
		int length = (end1 - begin1 + 1) + (end2 - begin2 + 1) + (end3 - begin3 + 1);
		char *pnew = new char[length + 1];
		for (i = 0, j = 0; i < length + 1, j < (end1 - begin1 + 1); i++, j++)
			*(pnew + i) = *(p1 + begin1 + j-1);
		for (j=0; i < length + 1, j < (end2 - begin2 + 1); i++, j++)
			*(pnew + i) = *(p2 + begin2 + j-1);
		for (j=0; i < length + 1, j <(end3 - begin3 + 1); i++, j++)
			*(pnew + i) = *(p3 + begin3 + j-1);
		//*(pnew + i) = '\0';
		cout << pnew << endl;
	}
	system("pause");
	return 0;
}

