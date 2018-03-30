#include<stdio.h>
#include<stdlib.h>
struct student_info
{
  int stu_id;
  char stu_name;
  char stu_sex;
  short age;
  struct student_info *next;	
};
struct student_info *p_head;
//-------------辅助函数;
//输出供用户选择;
void print_item();
int get_choose();
int sum_node(struct student_info *p_head);   //统计结点个数;
//-------用于实现用户请求的函数;
void print_student_info(struct student_info *p_head);
void insert_student_info(struct student_info *p_head,int pos);
void search_student_info(struct student_info *p_head,char stu_name);
 int main()
 {
 	puts("\t学生信息系统\n\n");
 	p_head=(struct student_info*)malloc(sizeof(struct student_info));
 	p_head->next=NULL;
 	print_item();
 	printf("\n");
 	int choose=0;
 	int pos=0;
 	choose=getchoose();
 	while(choose>=1&&choose<=6)
 	{
 	switch(choose)
	 {
	   //1.查看学生信息;
	   case 1:
	   print-student_info(p_head);
	   printf("\n");
	   break;	
	 }	
	 2.//插入学生信息;
	 case 2:
	 puts("插入信息到哪一个位置:");
	 scanf("%d",&pos);
	 insert_student_info(p_head,pos);
	 printf("\n");
	 break;
	 3.//删除学生成绩;
	 case 3:
	 puts("删除哪一个位置的结点:");
	 scanf("%d",&pos);
	 del_student_info(p_head,pos);
	 printf("\n");
	 break;
	 4.//查找学生成绩:
	 case 4:
	 puts("输入要查找学生的成绩:");
	 char c;
	 getchar();
	 scanf("%c",&c);
	 search_student_info(p_head,c);
	 printf("\n");
	 break;
}
   if(choose==6)
   {
     puts("----推出程序:");
	 printf("\n");
	 break;	
   } 
   choose=get_choose();
}
pritnf("\n");
return 0;
}
void print_item()
{
	puts("1.查看所有学生的成绩:");
	puts("2.插入学生的成绩:");
	puts("3.删除学生的信息:");
	puts("4.查找学生的成绩:");
	puts("6.退出系统:"); 
}
int get_choose()
{
	int choose_item=0;
	printf("您选择的操作是:");
	scanf("%d",&choose_item);
	if(choose_item>=1&&choose_item<=6)
	   return choose_item;
	else
	{
		puts("---输入有误,推出程序:");
		return 7;
	}
}
void print_student_info(struct student_info *p_head)
{
	struct student_info *p;
	p=p_head->next;
	int count=0;
	while(p)
	{
	  if(count==0)
	  puts("学号\t姓名\t性别\t年龄");
	  printf("%d\t%c\t%c\t%hd\n",p_>stu_id,p->stu_name,p->stu_sex,p->age);
	  count++;
	  p=p->next;	
	}
	if(count==0)
	{
		puts("---当前没有学生信息:");
		return;
	}
	puts("--以上是全部学生信息--"); 
}
int sum_node(struct student_info *p_head)
{
	int count=0;
	struct studnt_info *p;
	p=p_head->next;
	while(p)
	{
		count++;
		p=p->next;
	}
	return count;
}
void insert_student_info(struct student_info *p_head,int pos)
{
  struct student_info()	
} 
