#include<stdio.h>
int main()
{
	int num[5]={2,4,6,8,10};
	int i,*p_i;
	puts("ͨ�����������±�����������ݣ�");
	for(i=0;i<5;i++)
	   printf("%d",num[i]);
	puts("\nͨ��ָ������������ݣ�");
	for(i=0;i<5;i++)
	 {
	 	p_i=&num[i];
	 	printf("%d",*p_i);
	  } 
	printf("\n\n");
}
