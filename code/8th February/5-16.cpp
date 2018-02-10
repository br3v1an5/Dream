#include<stdio.h>
int main()
{
	int num[5]={2,4,6,8,10};
	int i,*p_i;
	puts("通过数组名和下标输出数组数据：");
	for(i=0;i<5;i++)
	   printf("%d",num[i]);
	puts("\n通过指针输出数组数据：");
	for(i=0;i<5;i++)
	 {
	 	p_i=&num[i];
	 	printf("%d",*p_i);
	  } 
	printf("\n\n");
}
