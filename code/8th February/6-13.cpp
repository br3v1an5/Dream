#include<stdio.h>
int main()
{
	int num[5]={2,4,6,8,10};
	double acc[4]={1.5,5.34,645.1,65.3};
	int *p_i;
	double *p_d;
	p_i=num;
	p_d=acc;
	printf("%d \n",*p_i);
	printf("%lf \n",*p_d);
	return 0; 
}
