#include<stdio.h>
int max_num(int a,int b);
int min_num(int,int);
int main()
{
	int (*p_f)(int,int); //定义指向函数的指针; 
	p_f=max_num;        //为此指针赋予函数名,即地址; 
	printf("%d和%d中较大的数是:%d\n\n",86,41,(*p_f)(86,41));
	p_f=min_num;
	printf("%d和%d中较小的数是:%d\n\n",86,41,(*p_f)(86,41));
}
int max_num(int a,int b)
{
	if(a>b)
	  return a;
	return b;
}
