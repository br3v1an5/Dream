// oj-A.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
void wesort(int &ra, int &rb, int &rc);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		wesort(a, b, c);
	}
	system("pause");
    return 0;
}

void wesort(int & ra, int & rb, int & rc)
{
	if (ra > rb)  swap(ra, rb);
	if (ra > rc)   swap(ra, rc);
	if (rb > rc)   swap(rb, rc);
	cout << rc << " " << rb << " " << ra;
	cout << endl;
}
