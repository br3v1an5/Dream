#include<stdio.h>
int max_num(int a,int b);
int min_num(int,int);
int main()
{
	int (*p_f)(int,int); //����ָ������ָ��; 
	p_f=max_num;        //Ϊ��ָ�븳�躯����,����ַ; 
	printf("%d��%d�нϴ������:%d\n\n",86,41,(*p_f)(86,41));
	p_f=min_num;
	printf("%d��%d�н�С������:%d\n\n",86,41,(*p_f)(86,41));
}
int max_num(int a,int b)
{
	if(a>b)
	  return a;
	return b;
}
