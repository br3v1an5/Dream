#include<stdio.h>
int *find_max(int *,int);
int main()
{
	int i;
	//��������е���������;
	int arr1[5]={23,54,65,21,2};
	puts("����arr1�е�����Ϊ:");
	for(i=0;i<5;i++)
	   printf("%d ",arr1[i]);
	//2--�������arr�е�����;
	int arr2[8]={45,86,28,34,19,35,18,73};
	puts("\n\n����arr�е�����Ϊ:");
	for(i=0;i<8;i++)
	   printf("%d ",arr2[i]);
	printf("\n\n");
    //3--������������������Ǹ�����;
	int *temp1;
	temp1=find_max(arr1,5);
	printf("����arr1�е�����������:%d\n",*temp1);
	int *temp2;
	temp2=find_max(arr2,8);
	printf("����arr2�е�����������:%d\n",*temp2);   
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
