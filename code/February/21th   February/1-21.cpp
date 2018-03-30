#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char arr1[9]="welcome!";
   puts("字符数组arr1中的字符串:");
   puts(arr1);
   printf("\n");
   char arr2[9];
   char *p1=strcpy(arr2,arr1);
   puts("字符数组arr2中的字符串是:");
   puts(p1);
   printf("\n");
   char *p2=(char*)malloc(9*sizeof(char));
   p2=strdup(arr1);
   puts("动态申请存储空间中的字符串:");
   puts(p2);
   free(p2);
   printf("\n");
   return 0;
   	
} 
