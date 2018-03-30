#include "stdafx.h"
#include<iostream>
using namespace std;
#include<stdlib.h>
char *mystrcpy(char *want, char *source);
int main()
{
	char a[20] ="how are you";
	char b[20];
	char *p;
	p=mystrcpy(b,a);
	cout << p << endl;
	system("pause");
    return 0;
}

char *mystrcpy(char * want, char * source)
{
	char *temp = source;
	while (1)
	{
		want= source;
		want++;
		source++;
	}
	return temp;
}

