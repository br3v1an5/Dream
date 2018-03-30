#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	int (**array)=(int**)malloc(sizeof(int)*m*n);
	for(int i=0;i<m;i++)
	  for(int j=0;j<n;j++)
	  {
	     array[i][j]=i;
	     cout<<array[i][j]<<" ";
	 }
	
	
} 
