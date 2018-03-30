#include<stdio.h>
int main()
{
   int i,j,t;
   int a,b,c,d,e;
   int *p[5]={&a,&b,&c,&d,&e};
   scanf("%d %d %d %d %d",p[0],p[1],p[2],p[3],p[4]);
   
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
