// oj-F.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include<stdlib.h>
#include<iostream>
using namespace std;
#include <iomanip> //必须包含这个头文件
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		double a,result;
		const double dollar= 6.2619, europe = 6.6744, japan = 0.0516, hk = 0.8065;
		const double *p;
		char ch;
		cin >> ch >> a;
		if (ch == 'Y')
			p = &japan;
		else if (ch == 'D')
			p = &dollar;
		else if (ch == 'E')
			p = &europe;
		else
			p = &hk;
		result = *p*a;
			cout << fixed << setprecision(4) << result << endl;
	}
	//system("pause");
    return 0;
}

