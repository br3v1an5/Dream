#include<stdio.h>
int main()
{
	int i,j,n,num[20][20]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  for(j=1;j<=i;j++)
	  {
	  	if(i==1||(i==j))
	      num[i][j]=1;
	    else
	      num[i][j]=num[i-1][j-1]+num[i-1][j];   
	  }
	for(i=1;i<=n;i++)
	{
	  for(j=1;j<=i;j++)
	     printf("%4d",num[i][j]);
	     printf("\n");
	}
	   
	   
	     
} 
