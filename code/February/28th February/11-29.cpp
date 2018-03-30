#include<stdio.h>
int main()
{
   struct trans{
	char true_letter;
	char trans_letter;
    };
struct trans tr[8]={
	'i','a','l','k',
	'o','z','v','b',
	'e','c','y','d',
	'h','l','x','y'};
	char ch;
	ch=getchar();
	while(ch!='\n')
	{
	  int i;
	  for(i=0;i<8;i++)
	  {
	    if(tr[i].true_letter==ch)
		{
		  printf("%c",tr[i].trans_letter);
		  break;	
		}	
	  }	
	  if(i==8)
	     printf("%c",ch);
	ch=getchar();
	}	
}
