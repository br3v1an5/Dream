#include<stdio.h>
int main()
{
  const double i=30.15;
  const double *p=&i;
  printf("%lf\n",*p); 
} 
