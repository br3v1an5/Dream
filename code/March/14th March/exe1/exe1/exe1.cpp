// exe1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
int *findmax(int *array, int size, int *index);
int main()
{
	int a[10] = { 33,91,54,67,82,37,85,63,19,68 };
	int *maxaddr;
	int idx;
	maxaddr = findmax(a, sizeof(a) / sizeof(*a), &idx);
	idx = maxaddr - a;
	cout << "the index of maximum element is" << idx << endl
	<< "the address of it is" << maxaddr << endl
	<< "the value of it is" << a[idx] << endl;
	system("pause");
    return 0;
}
int *findmax(int *array, int size, int *index)
{
	int max = array[0];
	int i,count=0;
	for (i = 0; i < size; i++)
		if (*(array + i)>max)
		{
			max = *(array + i);
			count++;
		}
	return array+count;
}

