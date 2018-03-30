#include<stdio.h>
int *find_max(int *,int);
int main()
{
	int i,arr1[5]={1,2,3,4,5};
	int *temp;
	temp=find_max(arr1,5);
	printf("%d",*temp);
}
int *find_max(int *arr1,int n)
{
	int *p_s=arr1;
	for(int i=0;i<5;i++)
	{
		if(*(p_s+i)>*arr1)
		*arr1=*(p_s+i);
	}
	return arr1;
}
