#include<stdio.h>
void swap1(int a,int b);
void swap2(int *a,int *b);
int main()
{
   int num1=2,num2=4;
   int *k;
   swap1(num1,num2);
   printf("%d  %d\n",num1,num2);
   swap2(&num1,&num2);
   printf("%d  %d\n",num1,num2);
}
void swap1(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
void swap2(int *a,int *b)
{
	int k;
	k=*a;
	*a=*b;
	*b=k;
}
