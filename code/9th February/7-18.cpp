#include<stdio.h>
void swap_num(int *num1,int *num2);
int main()
{
	int a,b;
	a=10;
	b=30;
	printf("ʹ�ú���ǰ:a=%d b=%d\n",a,b);
	swap_num(&a,&b);
	printf("ʹ�ú�����:a=%d b=%d",a,b); 
}
void swap_num(int *num1,int *num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
    *num2=temp;
}
