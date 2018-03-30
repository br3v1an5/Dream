#include<stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int *p,i,j;
	p=&a[0][0];
	for(i=0;i<2;i++)
	  for(j=0;j<3;j++)
	  {
	 printf("a[%d][%d]=%d",i,j,*(p+i*3+j)); 
	 printf("\n"); 
	 printf("a[%d][%d]=%d",i,j,p[i*3+j]);
	 printf("\n");
	 printf("a[%d][%d]=%d",i,j,*(a[0]+i*3+j));
	 printf("\n");
	 printf("a[%d][%d]=%d",i,j,a[0]);
	 printf("\n");
	 printf("a[%d][%d]=%d",i,j,*(a+j));
	 printf("\n");	 
	 } 
} 
