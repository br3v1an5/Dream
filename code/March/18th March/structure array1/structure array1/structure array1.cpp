// structure array1.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
	struct person {
		char name[20];
		unsigned long id;
		float salary;
	};
	struct person allone[6] = {
	{"Jone",13916,339.0},
	{"david", 13916, 449.0},
	{"marit", 27519, 311.0},
	{"jasen",42876,623.0},
	{"peter", 23987, 400.0},
	{"yoke", 12335, 511.0}  
	};
	person temp;
	
	for (int i = 1; i < 6; i++)
	{
		for (int j =0; j < 6-i; j++)
			if (allone[j].salary > allone[j+1].salary)
			{
				temp = allone[j];
				allone[j] = allone[j+1];
				allone[j+1] = temp;
			}
	}
	for (int i = 0; i < 6; i++)
		cout << allone[i].name << " " << allone[i].id << " " << allone[i].salary << endl;
	system("pause");
}

