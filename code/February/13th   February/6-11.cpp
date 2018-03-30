#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]={"!raey weN yppaH"};
	printf("arr:%s\n",arr);
	char *p;
	p=strrev(arr);
	printf("µ¹ÐòºóµÄ×Ö·û´®:%s\n",p);
	return 0; 
}
