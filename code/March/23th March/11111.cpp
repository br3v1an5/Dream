#include<iostream>
using namespace std;
#include<stdlib.h>
struct node {
	int data;
	node *next;
};
int find(node *h, int e);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,i,result;
		cin >> n;
		node *head,*p,*tail;
		head = new node;
		head->next = NULL;
		tail = head;
		int count=0;
		for (i = 0; i < n; i++)
		{
			p = new node;
			int b;
			cin >> b;
			if (find(head, b))
			{
				p->data = b;
				tail->next = p;
				tail = p;
				p->next=NULL;
				count++;
			}
        }
	  cout<<count<<" ";
	  p=head->next;
	  while(p)
	  {
		cout<<p->data<<" ";
		p=p->next;	
	  }
	  cout<<endl;	
	}
}
int find(node *h, int e)
{
	node *p;
    p=h;
	while (p)
	{
		if (p->data == e)
			return 0;
		p=p->next;
	}
	return 1;
}

