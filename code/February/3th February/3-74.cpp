#include<stdio.h>
#include<stdlib.h>
struct node
{
	int i;
	char c;
	struct node *next;
};
void insert_list(struct node *p_head,struct node *p_new,int pos);
void del_list(struct node *p_head,int pos);
void print_list(struct node *p_head);
int main()
{
	struct node node1={1,'a'};
	struct node node2={2,'b'};
	struct node *p_head;
	p_head=(struct node*)malloc(sizeof(struct node));
	p_head->next=&node1;
	node1.next=&node2;
	print_list(p_head);
	printf("\n");
	//2--为链表插入两个结点;
	struct node *p_new=(struct node*)malloc(sizeof(struct node));
	p_new->i=3;
	p_new->c='c';
	insert_list(p_head,p_new,3);
	p_new=(struct node*)malloc(sizeof(struct node));
	p_new->i=4;
	p_new->c='d';
	insert_list(p_head,p_new,4);
	printf("插入新结点后:");
	print_list(p_head);
	//3--删除链表中的结点;
	del_list(p_head,3);
	printf("\n删除位置3的结点后:");
	print_list(p_head);
	printf("\n");
	return 0; 
}
void insert_list(struct node *p_head,struct node *p_new,int pos)
{
	struct node *p_front;
	p_front=p_head;
	for(int i=1;i<=pos-1;i++)
	{
		p_front=p_front->next;
	}
	p_new->next=p_front->next;
	p_front->next=p_new;
}
void del_list(struct node *p_head,int pos)
{
	struct node *p_front,*p_del;
	p_front=p_head;
	for(int i=1;i<=pos;i++)
	{
		p_front=p_front->next;
	}
	p_del=p_front->next;
	p_front->next=p_del->next;
	free(p_del);
}
void print_list(struct node *p_head)
{
	puts("链表中的结点数据为:");
    struct node *p=p_head->next;
    int j=1;
    while(p)
    {
    	printf("node%d:%d %c\n",j,p->i,p->c);
    	p=p->next;
    	j++;
	}
}





