#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]={"What can I do for you? 007!"};
	printf("arr:%s\n",arr);
	puts("将字符串所有字符改成小写:");
	strlwr(arr);
	printf("arr:%s\n",arr);
	puts("将字符串所有字符改成大写:");
	strupr(arr);
	printf("arr:%s\n",arr);
	return 0;
}
