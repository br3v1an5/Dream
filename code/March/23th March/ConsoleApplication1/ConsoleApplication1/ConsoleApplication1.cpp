// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
	struct date {
		int year;
		int month;
		int day;
	};
	int n;
	cin >> n;
	date *array;
	array = new date[n];
	for (int i = 0; i < n; i++)
		cin >> array[i].year >> array[i].month >> array[i].day;
	int i, j;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (array[j].year > array[j + 1].year)
				swap(array[j], array[j + 1]);
			else if (array[j].year == array[j + 1].year)
			{
				if (array[j].month > array[j + 1].month)
					swap(array[j], array[j + 1]);
				else if (array[j].month == array[j + 1].month)
				{
					if (array[j].day > array[j + 1].day)
						swap(array[j], array[j + 1]);
				}
			}
		}
	}
	
	cout << array[1].year <<'-'<< array[1].month <<'-'<< array[1].day << endl;
	
	system("pause");
    return 0;
}

