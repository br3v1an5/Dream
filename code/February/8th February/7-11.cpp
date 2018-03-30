#include<stdio.h>
int main()
{
	int i,num[5]={2,4,6,8,10};
	int *p_i;
	p_i=num;
	for(i=0;i<5;i++)
	   printf("%d ",*(p_i+i));
	printf("\n\n");
	return 0;
}
