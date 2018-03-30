#include<stdio.h>
int main()
{
	char **p;
	char *name[]={"hello","good","world","bye",""};
	p=name+1;
	printf("%x:%s ",*p,*p);
	p+=2;
	printf("%s\n",*p);
}
