#include<stdio.h>
#include<stdlib.h>
struct node
{
	short i;
	char c;
	struct node *next;
};
int main()
{
   struct node node1={1,'a'};
   struct node node2={2,'b'};
   struct node node3={3,'c'};
   node1.next=&node2;
   node2.next=&node3;
   int j;
   struct node *p;
   p=&node1;
   puts("链表个结点数据为:");
   for(j=1;j<4;j++)
   {
   	printf("node%d:%d  %c\n",j,p->i,p->c);
   	p=p->next;
   }
   printf("\n");
   struct node *p_new;
   p_new=(struct node*)malloc(sizeof(struct node));
   if(p_new!=NULL)
   {
   	p_new->i=4;
   	p_new->c='D';
   	node3.next=p_new;
   }
   else
       printf("没有申请到存储空间");
   p=&node1;
   for(j=1;j<5;j++)
   {
   	printf("node%d:%d  %c\n",j,p->i,p->c);
   	p=p->next;
   }
   printf("\n");
   return 0;
}
