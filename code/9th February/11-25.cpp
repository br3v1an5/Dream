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
   printf("��ά������num[3][2]λ�õ������ǣ�%d\n",*(*(p_i+3)+2));
   num[0],num[1],num[2],num[3] �����������ġ� 
   num[0] ����num[0][0]��ָ�롣
    ��Ϊ 
   p_i ����num[0][0]�ĵ�ַ�� p_i+3����num[3][0]�ĵ�ַ�� 
   num[0] ��һ��������5��Ԫ�ص����顣 
   num[1] ��һ��������5��Ԫ�ص����顣
   num[2] ��һ��������5��Ԫ�ص����顣
   num[3] ��һ��������5��Ԫ�ص����顣
   
   p_i+3 ���� num[3] �������ĵ�ַ��
    
   *(p_i+3) ���� num[3]��ʵ�ʵ�ַ
   *(p_i+3)+2 ���� num[3]��ʵ�ʵ�ַ
} 
