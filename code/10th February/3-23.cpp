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
	printf("%d\n",&num[0][0]);   
	printf("%d\n",*p);
	printf("%d\n",**p_i);
	printf("二位数组中num[3][2]位 置处的数据为:%d\n",*(*(p_i+3)));
	printf("二位数组中num[2][4]位置处的数据为:%d\n\n",*(*(p_i+2)+4));
	return 0;
}
