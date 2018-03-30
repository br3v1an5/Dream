#include<stdio.h>
#include<string.h>
int main()
{
  char s[]="\ta\018bc";
  char *p;
  p=s;
  printf("%d\n",strlen(s));
  printf("%d\n",strlen(p));	
  
} 
