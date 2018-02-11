#include<stdio.h>
int main()
{
	int i=100;
	int *p=&i;
	int **p_i;
	p_i=&p;
	printf("使用一级指针输出int型数据:%d\n",*p);
	printf("使用二级指针输出int型数据:%d\n",**p_i);
	return 0;
}
