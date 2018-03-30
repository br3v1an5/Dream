#include<stdio.h>
int main()
{
	short int a[2][3]={{4,5,6},{7,8,9}};
	short int (*p)[3];
	short int i,j;
	p=a;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		  printf("a[%d][%d]=%d ",i,j,p[i][j]);
	}
	p++;
	for(j=0;j<3;j++)
	   printf("%d \n",p[0][j]);
}
