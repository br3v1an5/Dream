// p2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int *p;
	for (int i = 0; i < 3; i++)
	{
		p = a[i];
		for (int j = 0; j < 4; j++)
			cout << (p + j) << " ";
		cout << endl;
	}
	system("pause");
    return 0;
}

