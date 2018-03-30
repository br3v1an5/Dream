#include<stdio.h>
void func(int *p);
int main()
{
	int b=0;
	func(&b);
	printf("%d",b);
}
void func(int *p)
{
	*p=5;
}
