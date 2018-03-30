#include "stdafx.h"
#include<stdlib.h>
#include<iostream>
using namespace std;
int add(int array[], int n);
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int result=add(a, 10);
	cout << result << endl;
}
int add(int array[], int n)
{
	int sum = 0;
	sum += *array++;
	return sum;
}