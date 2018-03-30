// oj-C.cpp: 定义控制台应用程序的入口点。
//
 
//#include "stdafx.h"
#include<iostream>
using namespace std;
//#include<stdlib.h>
int main()
{
    struct birthday {
        int year;
        int month;
        int day;
    };
    int  t;
    cin >> t;
    birthday date[10];
    for (int i = 0; i < t; i++)
        cin >> date[i].year >> date[i].month >> date[i].day;
    birthday temp;
    int i, j;
    for (i = 1; i < t; i++)
    {
        for (j = 0; j < t - 1; j++)
        {
            if (date[j].year > date[j + 1].year)
            {
                temp = date[j];
                date[j] = date[j + 1];
                date[j + 1] = date[j];
            }
        }
    }
    for (i = 1; i < t; i++)
    {
        for (j = 0; j < t - 1; j++)
        {
            if (date[j].month > date[j + 1].month)
            {
                temp = date[j];
                date[j] = date[j + 1];
                date[j + 1] = date[j];
            }
        }
    }
    for (i = 1; i < t; i++)
    {
        for (j = 0; j < t - 1; j++)
        {
            if (date[j].day > date[j + 1].day)
            {
                temp = date[j];
                date[j] = date[j + 1];
                date[j + 1] = date[j];
            }
        }
    }
    for(i=0;i<6;i++)
		cout << date[i].year << "-" << date[i].month << "-" << date[i].day << endl;
    cout << date[1].year << "-" << date[1].month << "-" << date[1].day;
    //system("pause");
    return 0;
}
