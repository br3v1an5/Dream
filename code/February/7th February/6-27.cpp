#include<stdio.h>
int fun(int row,int col)
{
	if(col==1||row==col)
	   return 1;
	return fun(row-1,col-1)+fun(row-1,col);
}
int main()
{
	int n;
	int i,j;
	printf("请输入要打印的杨辉三角行数：");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 {
	 	for(j=1;j<=(n-i)*4;j++)
	 	   printf(" ");
	 	for(j=1;j<=i;j++)
	 	 {
	 	 	printf("%4d",fun(i,j));
	 	 	printf("    ");
		 }
		 printf("\n");
	 } 
	 printf("\n");
	 return 0;
}
