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
//-------------��������;
//������û�ѡ��;
void print_item();
int get_choose();
int sum_node(struct student_info *p_head);   //ͳ�ƽ�����;
//-------����ʵ���û�����ĺ���;
void print_student_info(struct student_info *p_head);
void insert_student_info(struct student_info *p_head,int pos);
void search_student_info(struct student_info *p_head,char stu_name);
 int main()
 {
 	puts("\tѧ����Ϣϵͳ\n\n");
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
	   //1.�鿴ѧ����Ϣ;
	   case 1:
	   print-student_info(p_head);
	   printf("\n");
	   break;	
	 }	
	 2.//����ѧ����Ϣ;
	 case 2:
	 puts("������Ϣ����һ��λ��:");
	 scanf("%d",&pos);
	 insert_student_info(p_head,pos);
	 printf("\n");
	 break;
	 3.//ɾ��ѧ���ɼ�;
	 case 3:
	 puts("ɾ����һ��λ�õĽ��:");
	 scanf("%d",&pos);
	 del_student_info(p_head,pos);
	 printf("\n");
	 break;
	 4.//����ѧ���ɼ�:
	 case 4:
	 puts("����Ҫ����ѧ���ĳɼ�:");
	 char c;
	 getchar();
	 scanf("%c",&c);
	 search_student_info(p_head,c);
	 printf("\n");
	 break;
}
   if(choose==6)
   {
     puts("----�Ƴ�����:");
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
	puts("1.�鿴����ѧ���ĳɼ�:");
	puts("2.����ѧ���ĳɼ�:");
	puts("3.ɾ��ѧ������Ϣ:");
	puts("4.����ѧ���ĳɼ�:");
	puts("6.�˳�ϵͳ:"); 
}
int get_choose()
{
	int choose_item=0;
	printf("��ѡ��Ĳ�����:");
	scanf("%d",&choose_item);
	if(choose_item>=1&&choose_item<=6)
	   return choose_item;
	else
	{
		puts("---��������,�Ƴ�����:");
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
	  puts("ѧ��\t����\t�Ա�\t����");
	  printf("%d\t%c\t%c\t%hd\n",p_>stu_id,p->stu_name,p->stu_sex,p->age);
	  count++;
	  p=p->next;	
	}
	if(count==0)
	{
		puts("---��ǰû��ѧ����Ϣ:");
		return;
	}
	puts("--������ȫ��ѧ����Ϣ--"); 
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
