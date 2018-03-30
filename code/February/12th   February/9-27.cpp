#include<stdio.h>
#include<string.h>
void alltrim(char *psstr,char *pdstr);
int main()
{
	char str[20],*pstr;
	pstr="  Good Bye  ";
	puts("before alltrim:");
	printf("%s",pstr);
	alltrim(pstr,str);
	puts("\nafter alltrim:");
	printf("%s",str);
}
void alltrim(char *psstr,char *pdstr)
{
	char *pstart,*pend;
	pstart=psstr;
	while(*pstart==' ')
	  pstart++;
	
    pend=pstart+strlen(pstart)-1;
	while(*pend==' ')
	   pend--;
	while(pstart<=pend)
	   *pdstr++=*pstart++;
	   *pdstr='\0'; 
}
