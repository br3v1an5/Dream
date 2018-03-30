// oj-B.cpp: 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		 char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December" };
		int number;
		cin >> number;
		if (number > 12)
			cout << "error" << endl;
		else
		    cout << month[number-1]<<endl;
	}
	system("pause");
    return 0;
}


