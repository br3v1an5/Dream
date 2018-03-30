#include<stdio.h>
void strlshif(char*s,int n);
int main()
{
	int move;
    char ch[80]="Ababakre";
    scanf("%d",&move);
    strlshif(ch,move);
    printf("%s",ch);
}
void strlshif(char*s,int n)
{
    int i=0;
	char *pstart,*pend,temp;
	pstart=s;
	while(i<n)
	{
	    temp=*pstart;
	   	*pstart=*pend;
	   	*pend=temp;
	   	pstart++;
	   	pend--;
	   	i++;
	}
}
