#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
void sort(int *p, int n);
int main()
{
	int a[10], i;
	for (i = 0; i < 10; i++)
		cin>>a[i];
	cout << endl;
	sort(a, 10);
	cout << "The sorted array:";
	for (i = 0; i < 10; i++)
		cout << a[i] << " ";
	system("pause");
}
void sort(int *p, int n)
{
	int i, j, k, t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		{
			for (j = i + 1; j < n; j++)
			{
				if (*(p + j) < *(p + k))
					k = j;
				if (k != i)
				{
					t = *(p + k);
					*(p + k) = *(p + i);
					*(p + i) = t;
				}
			}
		}
		
	}
		
}
