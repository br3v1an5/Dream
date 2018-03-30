#include<stdio.h>
#include<string.h>
int main()
{
	 char *p1="super";
	 printf("p1:%s\n",p1);
	 char *p2="market";
	 printf("p2:%s\n",p2);
	 char arr[30]={0};
	 char *p3=arr;
	 p3=strcat(p3,p1);
	 p3=strcat(p3,p2);
	 printf("p3:%s\n",p3);
	 char *p4="!*()";
	 p3=strncat(p3,p4,1);
	 printf("p3=%s\n",p3);
	 return 0; 
}
