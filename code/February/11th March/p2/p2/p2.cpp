#include "stdafx.h"
#include<iostream>
using namespace std;
void output(int (*p)[4]);
int main()
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12 };
	output(a);
	system("pause");
    return 0;
}

void output(int(*p)[4])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			cout << *(*(p + i) + j)<<" ";
}
