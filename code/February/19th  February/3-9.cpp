#include<stdio.h>
int main()
{
	int a,*p;
	p=&a;
	*p=10;
	a++;
	printf("%d  %d",*p,a);
}
