#include<stdio.h>
int main() 
{
   double arr[4][3]={
     {78.4,782.1,41.2},
	 {56.4,93.1,58.7},
	 {91.5,453.6,128.3},
	 {85.1,39.4,5869.1}
   };
   double *p_arr[4];
   int i,j;
   for(i=0;i<4;i++)
      p_arr[i]=arr[i];
   for(i=0;i<4;i++)
   {
   	for(j=0;j<3;j++)
   	{
   	  printf("%6.1lf",*(p_arr[i]+j));
     }
   	printf("\n");
   }
   return 0;
} 
