#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char arr1[9]="welcome!";
   puts("�ַ�����arr1�е��ַ���:");
   puts(arr1);
   printf("\n");
   char arr2[9];
   char *p1=strcpy(arr2,arr1);
   puts("�ַ�����arr2�е��ַ�����:");
   puts(p1);
   printf("\n");
   char *p2=(char*)malloc(9*sizeof(char));
   p2=strdup(arr1);
   puts("��̬����洢�ռ��е��ַ���:");
   puts(p2);
   free(p2);
   printf("\n");
   return 0;
   	
} 
