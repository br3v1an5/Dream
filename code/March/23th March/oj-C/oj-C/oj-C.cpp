// oj-C.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
struct student{
   int id;
   char array1[20];
   char array2[20];
   char array3[20];
};
int testcopy(student *answer1, student *answer2);
int main()
{
	int t;
	cin >> t;
	int i, j;
	student array[10];
	for (i = 0; i < t; i++)
		cin >> array[i].id >> array[i].array1 >> array[i].array2 >> array[i].array3;
	int result;
	for (i = 0; i <t; i++)
	{
		for (j = i + 1; j < t; j++)
			result=testcopy(&array[i], &array[j]);
	}
	cout << result << endl;
	system("pause");
}

int testcopy(student * answer1, student * answer2)
{
	int len1 = strlen(answer1->array1);
	int len2 = strlen(answer2->array1);
	static int lenmin = len1 < len1 ? len1 : len2;
	return lenmin;
}
