#include<stdio.h>
#include<string.h>
int main()
{
	char s[80]="Abdulla";
	char t[80]="Ababakre";
	int i=0,j=0;
	while(s[i]!='\0')
	   i++; 
	while(t[j]!='\0')
	{
		s[i]=t[j];
		i++;
		j++;
	}
	s[i]='\0';
    puts(s);
}
