#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
   srand((unsigned int)time(0));
   int num[3][3];
   int i,j;
   int *p[3]={num[0],num[1],num[2]};
   int **p_i=p;
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
	  {
	     num[i][j]=rand()%100;
		 printf("num[%d][%d]:%2d\t",i,j,*(*(p_i+i)+j));	
	  }	
	  printf("\n");
   }
   printf("\n");
   return 0;	
} 
