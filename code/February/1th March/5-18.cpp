#include<stdio.h>
struct table
{
	int i;
	char c;
	struct tabel *st; 
};
typedef struct table st_table;
int main()
{
	st_table st_arr[3]={
	{1,'a'};
	{2,'b'};
	{3,'c'};
	};
	for(int j=0;j<3;j++)
	  printf("st_arr[%d]=%d  %c\n",j,st_arr[j].i,st_arr[j].c);
}
