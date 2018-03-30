#include<stdio.h>
int main()
{
	int a;
	int *p1;
	int **p2;
	p1=&a;
	p2=&p1;
	**p2=5;
	printf("%d",**p2);
}
