#include<stdio.h>
#include<string.h>
char *substr(char*s,int strloc,int len);
int main()
{
	char *ch, *ch1[20]={"12345678"};
	int begin=0,length=4;
	*ch=substr(ch1,begin,length);
	printf("%s",ch);
}
char *substr(char*s,int strloc,int len)
{
	char *start,*end;
	int i;
	start=s;
	end=start+len;
    while(start<end)
	{
	   return *start;
	   i++;	 	
	}    
}

