#include<stdio.h>
#include<string.h>
int main()
{
	char p1[]="Are u ok?";
	printf("p1:%s\n",p1);
	strset(p1,'a');
	printf("%s\n",p1);
	char p2[]="Thank u";
	printf("%s\n",p2);
	strnset(p2,'b',2);
	printf("%s\n",p2);
	return 0;
}
