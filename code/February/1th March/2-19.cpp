#include<stdio.h>
struct table
{
	int i;
	char c;
	struct table *st;
};
typedef struct table st_table;
int main()
{
  st_table st1={1,'a'};
  st_table st2={2,'b'};
  st_table st3={3,'c'};
  st1.st=&st2;
  st2.st=&st3;
  printf("%d  %c\n",st1.i,st1.c);
  printf("%d   %c\n",st1.st->i,st1.st->c);
  printf("%d   %c\n",st2.st->i,st2.st->c);
} 
