#include<stdio.h>
int main()
{
	int i=30;
	int *p;
	p=&i;
	printf("%d\n",i);
	*p++;
	printf("%d\n",*p);
	*p*=2;
	printf("%d\n",*p);
	
}
