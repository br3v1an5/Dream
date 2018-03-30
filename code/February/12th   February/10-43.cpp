#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int Getsumrow(int *p,int num);
int Getmaxrow(int **p,int row,int col);
int main()
{
   int row,col;
   int i,j,**p,maxrow;
   printf("input row=");
   scanf("%d",&row);
   printf("input col=");
   scanf("%d",&col);
   
   p=(int**)malloc(row*sizeof(int*));
   for(i=0;i<row;i++)
      p[i]=(int*)malloc(col*sizeof(int));
   
   printf("input the number:\n");
   for(i=0;i<row;i++)
     for(j=0;j<col;j++)
     scanf("%d",p[i]+j);       
     maxrow=Getmaxrow(p,row,col);
	 printf("-----------");
	 printf("maxrow=%d\n",maxrow);
	 for(i=0;i<row;i++)
	   free(p[i]);
	   free(p); 
} 
int Getmaxrow(int **p,int row,int col)
{
	int i,max,t;
	max=Getsumrow(p[0],col);
	for(i=1;i<row;i++)
	{
	   t=Getsumrow(p[i],col);
	   if(t>max)
	     max=t;	
	} 
	return max;
}
int Getsumrow(int *p,int num)
{
	int i,sum;
	for(i=0;i<num;i++)
	   sum+=p[i];
	return sum;
}

