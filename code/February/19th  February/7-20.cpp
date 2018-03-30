#include<stdio.h>
int main()
{
	int i,j,t;
	int a,b,c,d,e;
	int *p[5]={&a,&b,&c,&d,&e};
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	for(i=1;i<5;i++)
	   for(j=0;j<5-i;j++)
	   {
	   	 if(*p[j]>*p[j+1])
	   	   {
	   	      t=*p[j];
			  *p[j]=*p[j+1];
			  *p[j+1]=t;	
		   }
	   }
	   for(i=0;i<5;i++)
	      printf("%d ",*p[i]);
}
