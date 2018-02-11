#include<stdio.h>
int main()
{
	double d=30.15;
   double *const p=&d;
	(*p)+=10;
	printf("%lf",*p);
}
