#include<stdio.h>
int *find_max(int *,int);
int main()
{
	int i;
	//输出数组中的所有数据;
	int arr1[5]={23,54,65,21,2};
	puts("数组arr1中的数据为:");
	for(i=0;i<5;i++)
	   printf("%d ",arr1[i]);
	//2--输出数组arr中的数据;
	int arr2[8]={45,86,28,34,19,35,18,73};
	puts("\n\n数组arr中的数据为:");
	for(i=0;i<8;i++)
	   printf("%d ",arr2[i]);
	printf("\n\n");
    //3--输出两个数组中最大的那个数据;
	int *temp1;
	temp1=find_max(arr1,5);
	printf("数组arr1中的最大的数据是:%d\n",*temp1);
	int *temp2;
	temp2=find_max(arr2,8);
	printf("数组arr2中的最大的数据是:%d\n",*temp2);   
}
int *find_max(int *p_i,int n)
{
	int *p_s;
	p_s=p_i;
	for(int i=1;i<n;i++)
	{
		if(*(p_s+i)>*p_i)
		  p_i=p_s+i;
	}
	return p_i;
} 
