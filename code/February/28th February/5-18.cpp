#include<stdio.h>
int main()
{
	struct st
	{
		int *p_i;
		char c; 
	};
	int i=10;
	struct st st1;
	st1.p_i=&i;
	st1.c='a';
	printf("�ṹ������:%d��%c\n\n",*st1.p_i,st1.c);
	i+=2;
	st1.c='b';
	printf("������:%d��%c\n\n",*st1.p_i,st1.c);
	return 0; 
}
