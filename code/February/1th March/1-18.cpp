#include<stdio.h>
struct table 
{
	int i;
	char c;
	struct table  *st;
};
typedef struct table st_table;
int main()
{
	st_table st1={1,'a'};
	st1.st=&st1;
	printf("%d %c\n",st1.i,st1.c);
	printf("%d %c\n",st1.st->i,st1.st->c);
	printf("%d %c\n",(*st1.st).i,(*st1.st).c);
	return 0;
}
