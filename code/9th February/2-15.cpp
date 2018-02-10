#include<stdio.h>
void add_five(int *a);
int main()
{
    int i=10;
	printf("将地址传入函数前,i=%d\n",i);
	add_five(&i);
	printf("将地址传入函数后:i=%d\n",i);
	return 0;
}
void add_five(int *a)
{
	*a=*a+5;
} 
