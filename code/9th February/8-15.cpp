#include<stdio.h>
int *find_min(int *num1,int n);
int main()
{
	int i;
	int arr1[5]={23,54,65,21,2};
	int arr2[8]={45,86,28,34,19,35,18,73};
	int *temp;
	temp=find_min(arr1,5);
	printf("%d",*temp);
	
}
int *find_min(int *num1,int n)
{
	int *p_s;
	p_s=num1; 
	for(int i=0;i<n;i++)
	{
		if(*(p_s+i)<*num1)
	    *num1=*(p_s+i); 
	}
	return num1;
}
