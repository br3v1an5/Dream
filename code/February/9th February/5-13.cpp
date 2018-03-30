#include<stdio.h>
int *func1();
int *func2();
int main()
{
	int *i=func1();
	int *j=func2();
	printf("%d",*i);
	return 0;
}
int *func1()
{
	int a=100;
	return &a;
}
int * func2()
{
	int b=30;
	return &b;
}
