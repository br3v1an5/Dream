#include<iostream>
using namespace std;
#include<stdlib.h>
struct node {
	int data;
	node *next;
};
void createlist(node *h);
void display(node *h);
//node* insertbeginning(node *h);
node* insertmiddle(node *h, int num);
int main()
{
	node *head;
	head = new node;
	createlist(head);
	//head=insertbeginning(head);
	int n;
	puts("plz input the order of the list");
	cin >> n;
	head = insertmiddle(head, n);
	display(head);
	//system("pause");
    return 0;
}
void createlist(node *h)
{
	node *tail, *p;
	tail = h;
	int n;
	puts(" how many list u want? ");
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		p = new node;
		puts("plz input the datas");
		cin >> p->data;
		p->next = NULL;
		tail->next = p;
		tail = p;
	}
}
void display(node *h)
{
	h = h->next;
	while (h)
	{
		cout << h->data<<" ";
		h = h->next;
	}
}

/*node* insertbeginning(node * h)       //insert at the beginning;
{
	node *p;
	p = new node;
	cin >> p->data;
	p->next=h->next;
	h->next = p;
	return h;
}*/

node * insertmiddle(node * h, int num)
{
	node *tail, *p;
	tail = h;
	p = new node;
	puts("plz input the data u want to insert:");
	cin >> p->data;
	for (int i = 1; i < num; i++)
		tail = tail->next;
	p->next = tail->next;
	tail->next = p;
	return h;
}
