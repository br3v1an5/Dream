// oj-D.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n,i,j;
		cin >> m >> n;
		int **p = new int *[m];
		for (i = 0; i < m; i++)
			p[i] = new int[n];
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
				cin >> p[i][j];
		int max, min;
		max= *(*(p + 0) + 0);
		min= *(*(p + 0) + 0);
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
			{
				if (*(p[i] + j) > max)
					max = *(p[i] + j);
				if (*(p[i] + j) < min)
					min=*(p[i] + j);
			}
		cout << min <<" " <<max << endl;
	}
	system("pause");
    return 0;
}

