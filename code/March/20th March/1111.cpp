#include <bits/stdc++.h>
using namespace std;
struct student
{
    int  no;  //4
    char name[20];  //20
    int  mscore,escore; //8
    float ascore; //4
};

void display(student *s)
{
    cout<<s->no<<" "<<s->name<<" "<<s->mscore
        <<" "<<s->escore<<" "<<s->ascore<<endl;
}
void input(student &s1)
{
    //cout<<s1<<endl;
    //1
    //cin>>(*s1).no>>(*s1).name>>(*s1).mscore>>(*s1).escore;
    //2
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
    display(&s);
    return 0;
}
