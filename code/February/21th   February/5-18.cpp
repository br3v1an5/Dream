#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]={"what can i do for you? 007!"};
	int len=0;
	char *p;
	p=arr;
	do
	{
		len++;
		p++;
	}while(*p!='\0');
	printf("%d\n",len);
	len=0;
	len=strlen(arr);
	printf("%d\n",len);
}
