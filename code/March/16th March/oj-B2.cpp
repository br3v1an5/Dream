#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
  	int i=0,j=0;
  	int n;
  	cin>>n;
  	int **matrix=new int*[n];
  	for(int k=0;k<n;k++)
  	  matrix[k]=new int[n];
  	int circle=0;
  	int v=1;
  	while(n-2*circle>=2)
  	{
  	  for(j=circle;j<n-circle;j++)
		{
		   matrix[i][j]=v;
		   v++;	
		}
	  j--;
	  i++;
	  for(;i<n-circle;i++)
	  {
	  	matrix[i][j]=v;
	  	v++;
	  }	
	  i--;
	  j--;
	  for(;j>=circle;j--)
	  {
	  	matrix[i][j]=v;
	  	v++;
	  }
	  i--;
	  j++;
	  for(;i>=circle;i--)
	  {
	  	matrix[i][j]=v;
	  	v++;
	  }
	  i++;
	  circle++;
	if(n-2*circle==1)
	{
		j=circle;
		matrix[i][j]=circle;
	}
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n;j++)
	   cout<<matrix[i][j]<<" ";
	   cout<<endl;	
	}
}
} 
