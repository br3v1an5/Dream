#include<stdio.h>
int third_power(int k);
int sum_list(int num);
int main()
{
	int a;
	scanf("%d",&a);
	sum_list(a);
	printf("%d",sum_list(a));
}
int sum_list(int num)
{
	int i,sum=0;
	for(i=1;i<=num;i++)
	  sum+=third_power(i);
	  return sum;
}
int third_power(int k)
{
   int val;
   val=k*k*k;
   return val;	
}
