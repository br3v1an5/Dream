#include<stdio.h>
int main()
{
	int arr[5][2]={
       {78,782},
	   {56,93},
	   {91,453},
	   {85,39},
	   {98,179}
	  };
	int *p_i[5];
	int i,j;
	for(i=0;i<5;i++)
	   p_i[i]=arr[i];
	for(i=0;i<5;i++)
	{
	  for(j=0;j<2;j++)
	   {
	   	printf("%d ",*(p_i[i]+j));
	   }
	   printf("\n");	
	}
	printf("\n");
	return 0;  
}
