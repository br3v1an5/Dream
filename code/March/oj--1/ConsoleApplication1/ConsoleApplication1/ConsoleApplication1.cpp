// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	char *pc= "hello";
	cout << pc << endl;
	pc++;
	cout << pc << endl;
	cout << *pc << endl;
	system("pause");
}
