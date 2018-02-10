#include<stdio.h>
int convert_letter();
int main()
{
	puts("plz input a character:");
	convert_letter();
	printf("%c",convert_letter());
}
int convert_letter()
{
	char ch,result;
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	    result=ch-32;
	if(ch>='A'&&ch<='Z')
	   result=ch+32;
	return result;    
}
