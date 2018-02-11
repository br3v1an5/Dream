#include<stdio.h>
int main()
{
	int num[10]={1,2,3,4,5,6,7,8,9,3};
	int i;
    puts("这个数组的数据依次为:");
	for(i=0;i<10;i++)
	   printf("%d ",num[i]);
	int *p_s=num;
	int *p_t=&num[2];
	for(i=1;i<10;i++)
	{
		if(*(p_t+i)==3)
		{
		  *p_t+=i;
		  break;		
	    }
	 } 
	printf("%d\n", p_t+i-p_t);
}
