#include<stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int *p,i,j;
	p=&a[0][0];
	//for(i=0;i<2;i++)
	 // for(j=0;j<3;j++)
		printf("%d\n",a);
		printf("%d\n",*a);
		printf("%d\n",&a);
		printf("%d %d\n",*(a+1),(a+1));
		printf("%d\n",a[0]);
		printf("%d %d\n",*(a[0]),*(a[0]+1));
		printf("%d\n",(*(a+1))[1]);
}
	
