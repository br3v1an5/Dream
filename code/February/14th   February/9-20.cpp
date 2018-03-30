#include<stdio.h>
#include<string.h>
void func(char *s);
int main()
{
	char str[80];
	printf("input string:");
	gets(str);
	func(str);
	printf("%s",str);
}
void func(char *s)
{
	char *pstr;
	for(pstr=s;*pstr!='\0';pstr++)
	{
		while(*pstr>='0'&&*pstr<='9')
		strcpy(pstr,pstr+1);
	}
}
