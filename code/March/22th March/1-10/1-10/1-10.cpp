// 1-10.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
void swap(char *&a, char*&b);
int main()
{
	const char *ap = "hello";
  const	char *bp = "how are you";
const	char *&pab = ap;
const	char *&pbp = bp;
	swap(pab, pbp);
	cout << pab << " " << pbp << endl;
	system("pause");
}

void swap(char *& a, char *& b)
{
	char *temp;
	temp = a;
	a = b;
	b = temp;
}
