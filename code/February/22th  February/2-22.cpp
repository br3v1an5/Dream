#include<stdio.h>
void swap(char *p1,char *p2);
int main()
{
	char a[20]={"Abdulla"},b[20]={"°¢²¼¶¼À­"};
	char *str1,*str2;
	int i,j;
	str1=a;
	str2=b;
	swap(str1,str2);
}
void swap(char *p1,char *p2)
{
	puts("before exchange:");
	printf("%s  %s\n",p1,p2);
	char *p;
	p=p1;
	p1=p2;
	p2=p;
	puts("after exchange:");
	printf("%s  %s",p1,p2);
}
