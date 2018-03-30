#include<iostream>
using namespace std;
#include<stdlib.h>
void print(int n);
int main()
{
	int N;
	cin>>N;
	print(N);
	return 0;
}
void print(int n)
{
	int **matrix=new int*[n];
	for(int k=0;k<n;k++)
	matrix[k]=new int[n];
    int circle=0;
    int v=1;
    int i=0,j=0;
    while(n-2*circle>=2)
    {
    	for(j=circle;j<n-circle;i++)
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
	   j++;
	   i--;
	   for(;i>circle;i--)
	   {
	   	matrix[i][j]=v;
	   	v++;
	   }
	   i++;
	   circle++;
	}
	if(n-2*circle==1)
	{
		j=circle;
		matrix[i][j]=v;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cout<<matrix[i][j];
		cout<<endl;
	}
}
	
		
		
		
		
		
		

