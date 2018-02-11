#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
   srand((unsigned int)time(0));
   int num[4][5];
   int i,j;
   for(i=0;i<4;i++)
   {
   	for(j=0;j<5;j++)
   	{
   	 num[i][j]=rand()%100;
   	 printf("num[%d][%d]:%2d\t",i,j,num[i][j]);	
    }
   	printf("\n");	
   }
   int *p[4]={num[0],num[1],num[2],num[3]};
   int **p_i=p;
   printf("二维数组中num[3][2]位置的数据是：%d\n",*(*(p_i+3)+2));
   num[0],num[1],num[2],num[3] 都是数组来的。 
   num[0] 等于num[0][0]的指针。
    因为 
   p_i 等于num[0][0]的地址； p_i+3等于num[3][0]的地址。 
   num[0] 是一个包含有5个元素的数组。 
   num[1] 是一个包含有5个元素的数组。
   num[2] 是一个包含有5个元素的数组。
   num[3] 是一个包含有5个元素的数组。
   
   p_i+3 等于 num[3] 这个数组的地址。
    
   *(p_i+3) 等于 num[3]的实际地址
   *(p_i+3)+2 等于 num[3]的实际地址
} 
