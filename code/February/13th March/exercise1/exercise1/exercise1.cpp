#include "stdafx.h"
#include<stdlib.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int add(int array[], int n);
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int result = add(a, 10);
	cout << result << endl;
	system("pause");
}
int add(int array[], int n)
{
	int sum = 0;
	for(int i=0;i<10;i++)
	sum += *array++;
	return sum;
}
