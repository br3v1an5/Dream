// getlevel.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
int getlevel(int grade[], int n,int &rta,int &rtb);
int main()
{
	int ta = 0, tb = 0;
	int array[6][4] = 
	{
		{60,80,90,75},
	    {75,85,65,77},
	    {80,88,90,98},
	    {89,100,78,81},
	    {62,68,69,75},
	     {85,85,77,91},
	};
	int i;
	for (i = 0; i < 6; i++)
		(getlevel(array[i], 4, ta, tb));
	cout << "ta=" << ta << endl;
	cout << "tb=" << tb << endl;
	system("pause");
}

int getlevel(int grade[], int n,int &rta,int &rtb)
{
	int i, j,sum=0;
	for (i = 0; i < n; i++)
		sum += grade[i];
	sum = sum / 4;
	if (sum >= 80)
		rta++;
	else
		rtb++;
	return 0;
}
