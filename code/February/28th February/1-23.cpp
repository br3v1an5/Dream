#include<stdio.h>
int main()
{
  struct student_info
  {
    int id_number;
	char sex;
	short height;
	short weight;
	short age;	
  };
  struct student_info st1={200901,'m',170,65,23};
  puts("��ʼ������,�����е���������Ϊ:");
  printf("�ṹ����st1�е�����:ѧ��%d,�Ա�%c,���%hd,����%hd,����%hd\n\n",
  st1.id_number,st1.sex,st1.height,st1.weight,st1.age);
  st1.age=24;
  st1.weight=70;
  puts("�������ýṹ�����󲢸�ֵ:");
  printf("����Ϊ:ѧ��%d,�Ա�%c,���%hd,����%hd,����%hd\n\n",
  st1.id_number,st1.sex,st1.height,st1.weight,st1.age);
  return 0;
} 
