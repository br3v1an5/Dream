#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct node
	{
		short i;
		char c;
		struct node *next;
	};
	int n;
	puts("������ڵ�ĸ���:");
	scanf("%d",&n);
	puts("\n");
	struct node *p_head,*p_tail,*p_new;
	p_head=(struct node*)malloc(sizeof(struct node));
	p_tail=p_head;
	int j;
	for(j=0;j<n;j++)
	{
		p_new=(struct node*)malloc(sizeof(struct node));
		printf("������node%d�е�����:\n",j+1);
		scanf("%d %c",&(p_new->i),&(p_new->c));
		p_tail->next=p_new;
		p_tail=p_new; 
	}
	puts("\n�����еĸ���㼰������Ϊ:");
	struct node *p=p_head->next;
	for(j=0;j<n;j++)
	{
		printf("node%d:%d %c\n",j+1,p->i,p->c);
		p=p->next;
	}
	printf("\n");
	return 0;
}

