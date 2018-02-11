#include<stdio.h>
int main()
{
	int num[5]={1,2,3,4,5};
	int *p_i;
	p_i=num;
	for(int i=0;i<5;i++)
	    printf("%d ",*(p_i+i));
	return 0;
}
