#include<stdio.h>
int main()
{
	int a[10],*p;
	p=a;
	for(int i=0;i<10;i++)
	   scanf("%d",&a[i]);
	printf("%d %d %d %d\n",a[0],a[1],a[2],a[3]);
	printf("%d %d %d %d\n",(p+0),(p+1),(p+2),(p+3));
	printf("%d %d %d %d\n",(a+0),(a+1),(a+2),(a+3));
}
