// Compare.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
	char array1[20] = "hello";
	char array2[20] = "hello";
	if (strcmp(array1, array2) == 0)
		cout << "they are equal";
	else
		cout << "they are not equal";
	system("pause");
    return 0;
}

