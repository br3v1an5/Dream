#include<stdio.h>
int main()
{
  short int a[2][3]={{1,2,3},{4,5,6}};
  short int i,j,*p;
  p=&a[0][0];
  //printf("%d %d %d %d %d %d\n",p[0],p[1],p[2],p[3],p[4],p[5]);
  //printf("%d %d %d %d %d %d\n",*(p+0),*(p+1),*(p+2),*(p+3),*(p+4),*(p+5));
  //printf("%d %d %d %d %d %d\n",a[0],a[0]+1,a[0]+2,a[0]+3,a[0]+4,a[0]+5);
  //printf("%d %d %d\n",a[1],a[1]+1,a[1]+2);
  printf("%d %d %d\n",*(a[0]+1),(a+1)); 
  for(i=0;i<2;i++)
  {
     for(j=0;j<3;j++)
	 printf("a[%d][%d]=%d ",i,j,*(p+i*3+j));
	 printf("\n");	
  }	
} 


