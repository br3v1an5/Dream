#include<stdio.h>
#include<string.h> 
int main()
{
   	int i;
   	char str[80];
   	gets(str);
   	for(i=0;i<strlen(str);i++)
   	{
   		if(str[i]=='c')
   		   str[i]='C';
	}
	   puts(str);
	   return 0;
}
	
	 
 
