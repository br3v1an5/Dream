#include<iostream>
using namespace std;
struct person getperson();
void print(struct person p);#include <bits/stdc++.h>
using namespace std;

struct student
{
    int  no;  //4
    char name[20];  //20
    int  mscore,escore; //8
    float ascore; //4
};

void display(student s)
{
    cout<<s.no<<" "<<s.name<<" "<<s.mscore
        <<" "<<s.escore<<" "<<s.ascore<<endl;
}
void input(student &s1)
{
    //cout<<&s1<<endl;
    cin>>s1.no>>s1.name>>s1.mscore>>s1.escore;

}

int main()
{
    student s;
    cout<<sizeof(s)<<endl;
    /*s.no = 201715001;
    strcpy(s.name,"zhouzonghong");
    s.mscore = 100;
    s.escore = 100;*/
    /*cin>>s.no>>s.name>>s.mscore>>s.escore;*/
    cout<<&s<<endl;
    input(s);
    s.ascore = (s.escore + s.mscore)/2;
    display(s);


    return 0;
}
struct person{
		char name[20];
		unsigned long id;
		float salary;
	};
int main()
{
	person employee[3];
	for(int i=0;i<3;i++)
	{
		employee[i]=getperson();
		print(employee[i]);
	}    
}
person getperson()
{
	person temp;
	cin>>temp.name;
	cin>>temp.id>>temp.salary;
}
void print(person p)
{
	cout<<p.name<<" "<<p.id<<" "<<p.salary<<endl;  
}
