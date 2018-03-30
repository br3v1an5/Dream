#include<iostream>
#include<string.h>
using namespace std;
struct student{
	int no;
	char name[20];
    int score;
}; 
int main()
{
	student s1;
	student *ps1;
	ps1=&s1;
	ps1->no=2016150200;
	strcpy(ps1->name,"Abdulla");
	ps1->score=99;
	cout<<(*ps1).no<<endl; 
	cout<<(*ps1).name<<endl;
	cout<<(*ps1).score<<endl;
}
