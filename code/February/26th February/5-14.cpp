#include<stdio.h>
#define ADD(a,b)  (a+b)
int add(int, int);
int main()
{
	printf("ADD(34,51)=%d\n",ADD(34,51));
	printf("add(34,51)=%d\n",add(34,51));
	printf("\n");
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
