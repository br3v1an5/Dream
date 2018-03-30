#include<stdio.h>
int main()
{
	char a=50;
	char *p1=&a;
	void *p2;
    p1=(char*)p2;
	printf("%d",*p1);

}
