// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
void  aaa() {
	printf("hha\n");
}

int main()
{
	int a = 100;
	int *p = &a;
	printf("%d\n", *p);
	aaa();
	system("pause");
    return 0;

}