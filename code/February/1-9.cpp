#include<iostream>
using namespace std;
int main()
{
  int arraysize;
  int *array=new int[arraysize];
  cout<<"plz inter the array size:";
  cin>>arraysize;
  for(int i=0;i<arraysize;i++)
  {
  	array[i]=i*2;
  	cout<<array[i]<<" ";
  }
    cout<<endl;
	delete[] array;  
	  	
} 
