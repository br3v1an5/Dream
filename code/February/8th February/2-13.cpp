#include<stdio.h>
int main()
{
	int i;
	double f;
	int *p_i=&i;
	double *p_f=&f;
	puts("�������ݣ�");
	scanf("%d",p_i);
	scanf("%lf",p_f);
	puts("ʹ�ñ����Ǹ�������ݣ�");
	printf("%d %lf",*p_i,*p_f);	
}
