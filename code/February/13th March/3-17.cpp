#include<iostream>
using namespace std;
int main ()
{
  int m,n,i,j;
  cin>>m>>n;
  int **data;
  data=new int*[m];
  for(i=0;i<m;i++)
     data[i]=new int[n];
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
       cin>>data[i][j];
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
         cout<<data[i][j]<<" ";
}
