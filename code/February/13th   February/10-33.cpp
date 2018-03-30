#include<stdio.h>
int add(int,int);
int sub(int,int);
int max(int,int);
int min(int,int);
int main()
{
	int a,b,i,k;
	int (*func[4])(int,int)={add,sub,max,min};
	printf("select-operator(0-add,1-sub,2-max,3-min):");
	scanf("%d",&i);
	printf("input numbers a and b:");
	scanf("%d%d",&a,&b);
	k=(*func[i])(a,b);
	printf("result=%d",k);
}
int add(int x,int y)
{
	return(x+y);
}
int sub(int x,int y)
{
	return(x-y);
}
int max(int x,int y)
{
	return(x>y?x:y);
}
int min(int x,int y)
{
	return(x<y?x:y);
}


