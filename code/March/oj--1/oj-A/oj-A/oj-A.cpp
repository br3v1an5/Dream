// oj-A.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
using namespace std;
int mul(int num);
int main()
{
	int t;
	cin >> t;
	while(t>0)
	{
		int m, n, result;
		cin >> m;
		cin >> n;
		result = mul(m) / (mul(n)*mul(m - n));
		cout << result << endl;
		t = t - 1;
	}
	
}
int mul(int a)
{
	int total = 1;
	int i = 1;
	for (i = 1; i <= a; i++)
		total *= i;
	return(total);
}
