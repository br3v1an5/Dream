// oj-B.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
		struct birthday {
			int year;
			int month;
			int day;
		};
		int n,i,j;
		birthday temp;
		cin >> n;
		birthday date[10];
		for (int i = 0; i < n; i++)
			cin >> date[i].year >> date[i].month >> date[i].day;
		for (i = 1; i < n; i++)
		{
			for (j = 0; j < n - 1; j++)
			{
				if (date[j].year<date[j + 1].year)
				{
					temp = date[j];
					date[j] = date[j + 1];
					date[j + 1] =date[j];
				}
				else if (date[j].year== date[j + 1].year)
				{
					temp = date[j];
					date[j] = date[j + 1];
					date[j + 1] = date[j];
				}
				else if (date[j].month == date[j + 1].month)
				{
					temp = date[j];
					date[j] = date[j + 1];
					date[j + 1] = date[j];
				}
			}	
		}
		for(int i=0;i<6;i++)
		cout << date[i].year << "-" << date[i].month << "-" << date[i].day << endl;
		system("pause");
        return 0;
}

