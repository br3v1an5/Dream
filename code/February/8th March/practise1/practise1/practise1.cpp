#include "stdafx.h"
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	    char *pc;
		pc = "hello";	//pc指向字符串
		cout << pc << endl;
		pc+=1;				//移动pc
		cout << pc << endl;
		cout << *pc << endl;
	    system("pause");
	     return 0;
}

