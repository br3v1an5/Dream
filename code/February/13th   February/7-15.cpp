#include<stdio.h>
#include<string.h>
int main()
{
  char arr[]={"Give your kids lessons in piano ,guitar and violin;"};
  printf("�ַ���:%s\n",arr);
  char c='a';
  printf("Ҫ���ҵ��ַ�:%c\n",c);
  char *p_first;
  p_first=strchr(arr,c);
  printf("%s\n",p_first);
  char *p_last;
  p_last=strchr(arr,c);
  printf("%s\n",p_last);	
} 
