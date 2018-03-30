#include<stdio.h>
int main()
{
	int i=200;
	printf("i=%d\n",i);
	int *p_i;
	p_i=&i;
	*p_i+=14;
	printf("i=%d\n",i);
	(*p_i)++; 
	printf("i=%d\n\n",i);
	return 0;
}
