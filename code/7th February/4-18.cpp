#include<stdio.h>
int y(int x);
int main()
{
	int i,num;
	scanf("%d",&num);
	y(num);
	printf("%d",y(num));
}
int y(int x)
{
    if(x==1)
	  return 3;
	else if(x%2==1)
	   return y(x-1)+6;
	if(x%2==0) 
	    return y(x-1)*2;  	
}
