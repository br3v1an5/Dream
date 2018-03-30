#include<iostream>
using namespace std;
int main()
{ 
	cout<<"请输入一个整数N:"<<endl;
	int n;
	cin>>n;
	int row=1,col;
	for(int i=0;i<n;i++)
	{	
		row+=i;
		col=row;
		for(int j=0;j<n-i;j++)
		{
			
			cout<<col;
			if(j!=n-i-1) cout<<" ";
			col=col+j+i+2;
		}
		cout<<"\n";
	}
	return 0;
}
