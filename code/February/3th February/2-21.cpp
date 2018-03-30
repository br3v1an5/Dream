#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count=0;
	for(int i=1;i<=50;i++)
	{
	  int *p_i=(int*)malloc(sizeof(int));
	  *p_i=i;
	  printf("%3d",*p_i);
	  count++;
	  if(count==10)
	  {
	     printf("\n");
	     count=0;
	  }	
	 free(p_i);
	} 
	printf("\n");
	return 0;
}
