#include<stdio.h>
int main()
{
   int a=50;
   int *p;
   int *q;
   p=&a;
   q=p;
   printf("%d   %d",*q,q);
}
