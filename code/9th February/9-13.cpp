#include<stdio.h>
int sub_num(int num1,int num2);
int main()
{
   int (*p_f)(int,int);
   p_f=sub_num;
   printf("%dºÍ%dµÄ²îÊÇ:%d\n",34,78,(*p_f)(34,78));	
}
int sub_num(int num1,int num2)
{
	int result=num1-num2;
	return result;
}
