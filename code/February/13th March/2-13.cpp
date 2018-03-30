#include<iostream>
using namespace std;
int main ()
{
   int m,i;
   cin>>m;
   int *data;
   data=new int[m];	
   for(i=0;i<m;i++)
      cin>>data[i];
    for(i=0;i<m;i++)
       cout<<data[i]<<endl;
} 
