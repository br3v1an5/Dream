#include<stdio.h>
int main()
{
   char *pstr="I love MYself!";
   for(;*pstr!='\0';pstr++)
      printf("%c",*pstr);	
} 
