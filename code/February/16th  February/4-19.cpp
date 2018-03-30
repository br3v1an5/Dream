#include<stdio.h>
#include<string.h>
int main()
{
	char str[200],ch;
	char *p,*q;
	gets(str);
	p=str;
	q=p+strlen(str)-1;
	while(p<q)
	{
		ch=*p;
		*p=*q;
		*q=ch;
		p++;
		q--;
	}
	printf("%s",str);
} 
