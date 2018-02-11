#include<stdio.h>
int main()
{
   int arr[5][2]={
   {78,782},
   {56,93},
   {91,453},
   {85,39},
   {98,179}
   };
   int *p[5];    不是这个
   是我发给的图片  我打出来吧 
   int i,j;
   printf("%d  %d   %d\n",*arr[0],arr[1],arr[2]);
   for(i=0;i<5;i++)
      p[i]=arr[i];
   for(i=0;i<5;i++)
    {
    	for(j=0;j<2;j++)
    	  printf("%d ",*(p[i]+j));
    	printf("\n");
	}
} 
