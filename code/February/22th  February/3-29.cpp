#include<stdio.h>
void swap(int *p1,int *p2);
int main()
{
	int a[10],b[10],num,i;
	puts("input the length of the array:");
	scanf("%d",&num);
	puts("input the content of the array a:");
	for(i=0;i<num;i++)
	   scanf("%d",&a[i]);
	puts("input the content of the array b:");
	for(i=0;i<num;i++)
	   scanf("%d",&b[i]);
	puts("swap the contents of the array a and b");
	for(i=0;i<num;i++)
	  swap(&a[i],&b[i]);
	for(i=0;i<num;i++)
	   printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<num;i++)
	   printf("%d ",b[i]);
}
void swap(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
