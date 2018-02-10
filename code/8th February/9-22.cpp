#include<stdio.h>
int main()
{
	int num[10]={1,2,3,4,5,6,7,1,9,10};
	int i;
	puts("这个数组的数据依次为：");
	for(i=0;i<10;i++)
	   printf("%d",num[i]);
	printf("\n");
	int *p_s=num;
	int *p_t=&num[1];         //num[7]是1; 
	printf("%d\n",*p_t);
	for(i=0;i<10;i++)
	{
		if(*(p_t+i)==1)
		{
			p_t+=i;
			break;
		}
	}
    printf("%d\n",p_t-p_s);
	return 0;
}
