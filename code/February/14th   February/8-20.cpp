#include<stdio.h>
int main()
{
	char ch[20],ch1[20];
	gets(ch);
	char *p;
	p=ch;
	int i=0;
	do
	{
	   if(((*p>=65)&&(*p<=90))||((*p>=97)&&(*p<=122)))
	   {
	   	 ch1[i]=*p;
	   	 i++;
	   }
	   p++;
	}while(*p!='\0');
	int j;
	for(j=0;j<i;j++)
	   printf("%c",ch1[j]);
}
