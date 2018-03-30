#include<iostream>
using namespace std;

struct person{
   	char name[20];
   	unsigned long id;
   	float salary;
   };
void print(person &pr);	
person allone[4]={
  {"jone",231,331},
  {"David",3321,42},
  {"Joke",234,422},
  {"Michael",345,452}
  };
int main()
{
  for(int i=0;i<4;i++)
  print(allone[i]);
}
void print(person &pr)
{
   cout<<pr.name<<endl;
   cout<<pr.id<<endl;
   cout<<pr.salary<<endl;	
} 
