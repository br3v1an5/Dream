#include<iostream>				//ch8_9.cpp
using namespace std;
int main()
{	int arraysize;
	int *array;
	cout<<"please enter the size:\n";
	cin>>arraysize;
	array=new int[arraysize];			//分配堆内存
	for(int i=0;i<arraysize;i++){	
		array[i]=i*2;
		cout<<array[i]<<" ";
	}
	cout<<endl;
	delete[] array;				//释放堆内存
}

