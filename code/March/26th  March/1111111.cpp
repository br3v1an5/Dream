#include<iostream>
using namespace std;
#include<stdlib.h>
struct node {
	int data;
	node *next;
};
int create(node *h);
void display(node *h,int num);
void deletelist(node *h,int order);
void display(node *h);
int main()
{
	node *head,*tail,*p;
	head = new node;
	head->next = NULL;
	tail = head;
    int number=create(head);
	display(head,number);
	int t,order;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> order;
		if (order == 0)
			cout << "error" << endl;
		else
		{
			number--;
			deletelist(head, order);
			cout <<number<<" ";
			display(head);
		}
	}
	//system("pause");
	return 0;
}

int create(node * h)
{
	int n;
	cin >> n;
	int num = n;
	node *tail, *p;
	tail = h;
	for (int i = 0; i < n; i++)
	{
		p = new node;
		cin >> p->data;
		tail->next = p;
		tail = p;
		tail->next = NULL;
	}
	return num;
}

void display(node *h,int num)
{
	cout<<num;
	node *p;
	p = h->next;
	while(p)
	{
		cout <<" "<<p->data;
		p = p->next;
	}
	cout << endl;
}

void deletelist(node * h, int order)
{
	node *front;
	front =h;
	for (int i = 1; i < order; i++)
	{
		front = front->next;
	}
	front->next = front->next->next;
}

void display(node *h)
{
	h = h->next;
//	cout<<h->data;
	while (h->next!=0)
	{
		cout <<h->data<<" ";
		h = h->next;
	}
	cout<<h->data;
	cout << endl;
}

