#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]={"What can I do for you? 007!"};
	printf("arr:%s\n",arr);
	puts("���ַ��������ַ��ĳ�Сд:");
	strlwr(arr);
	printf("arr:%s\n",arr);
	puts("���ַ��������ַ��ĳɴ�д:");
	strupr(arr);
	printf("arr:%s\n",arr);
	return 0;
}
