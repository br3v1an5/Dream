#include<stdio.h>
int main()
{
	int i=100;
	int *p=&i;
	int **p_i;
	p_i=&p;
	printf("ʹ��һ��ָ�����int������:%d\n",*p);
	printf("ʹ�ö���ָ�����int������:%d\n",**p_i);
	return 0;
}
