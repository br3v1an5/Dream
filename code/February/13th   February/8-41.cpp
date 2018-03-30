#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int Getmaxrow(int **p,int row,int col);
int Getsumrow(int *p,int num);
int main()
{
	int row,col,i,j,maxrow;
	int **p;
	puts("input the row:");
	scanf("%d",&row);
	puts("input the col:");
	scanf("%d",&col);
    //∑÷≈‰∂ØÃ¨ø’º‰;
	p=(int**)malloc(row*sizeof(int*));
	for(i=0;i<row;i++)
	  p[i]=(int*)malloc(col*sizeof(int));
    
	for(i=0;i<row;i++)
	  for(j=0;j<col;j++)
	   scanf("%d",p[i]+j);
	
    maxrow=Getmaxrow(p,row,col);
	printf("maxrow=%d\n",maxrow);
	for(i=0;i<row;i++)
	  free(p[i]);
	  free(p);
}
int Getmaxrow(int **p,int row,int col)
{
	int t,i,max;
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
	int sum=0,i;
	for(i=0;i<num;i++)
	   sum+=p[i];
	return sum;
}
