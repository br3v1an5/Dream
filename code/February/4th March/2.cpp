#include<stdio.h>
void change(int a);
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int num;
	scanf("%x", &num);
	change(num);	
	} 
}void change(int a)
{
	printf("%d\n", a);
}
