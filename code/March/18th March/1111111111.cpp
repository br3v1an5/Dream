// structure array1.cpp: 定义控制台应用程序的入口点。
//
//#include "stdafx.h"
#include<iostream>
using namespace std;
//#include<stdlib.h>
int main()
{
	struct person {
		char name[20];
		unsigned long id;
		float salary;
	};
	struct person allone[6] =
	{"Jone",13916,339.0}, 
	{"David", 13916, 449.0}, 
	{"marit", 27519, 311.0}, 
	{"peter", 23987, 400.0}, 
	{"yoke", 12335, 511.0} 
	};
	person temp;
	
	for (int i = 1; i < 5; i++)
	{
		for (int j = i + 1; j < 6; j++)
			if (allone[i].salary > allone[j])
			{
				temp = allone[i];
				allone[i] = allone[j];
				allone[j] = temp;
			}
	}
	for (int i = 0; i < 6; i++)
		cout << allone[i].name << " " << allone[i].id << " " << allone[i].salary << endl;
}


