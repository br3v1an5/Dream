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
  puts("初始变量后,变量中的数据类型为:");
  printf("结构变量st1中的数据:学号%d,性别%c,身高%hd,体重%hd,年龄%hd\n\n",
  st1.id_number,st1.sex,st1.height,st1.weight,st1.age);
  st1.age=24;
  st1.weight=70;
  puts("单独引用结构变量后并赋值:");
  printf("数据为:学好%d,性别%c,身高%hd,体重%hd,年龄%hd\n\n",
  st1.id_number,st1.sex,st1.height,st1.weight,st1.age);
  return 0;
} 
