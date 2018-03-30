#include<stdio.h>
#include<string.h>
int main()
{
	char t[]="Ababakre";
	char s[]="Abdulla";
	char k[40]; 
	int i,j;
	char *p1,*p2;
	p1=t;
	p2=s;
	for(i=0;p1+i!='\0';i++)
	     k[i]=*(p1+i);
    for(j=0;p2+j!='\0';j++)
        k[i]=*(p2+j);
	printf("%s",k);
}
