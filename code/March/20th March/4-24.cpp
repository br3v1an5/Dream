#include<iostream>
using namespace std;
int function(int num,int &,int &);
int main()
{
	int num,square,cube;
    cin>>num;
    int error=function(num,square,cube);
    if(error)
      cout<<"encountered mistake.";
    else
      cout<<num<<" "<<square<<" "<<cube<<endl;
}
int function(int num,int &rsquare,int &rcube)
{
	if(num>20&&num<0)
	   return 1;
	else
	  {
	  	rsquare=num*num;
	  	rcube=num*num*num;
	  	return 0;
	  }
}
