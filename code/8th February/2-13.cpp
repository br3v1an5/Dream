#include<stdio.h>
int main()
{
	int i;
	double f;
	int *p_i=&i;
	double *p_f=&f;
	puts("输入数据：");
	scanf("%d",p_i);
	scanf("%lf",p_f);
	puts("使用变来那个输出数据：");
	printf("%d %lf",*p_i,*p_f);	
}
