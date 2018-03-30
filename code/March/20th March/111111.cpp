#include<iostream>
using namespace std;
double temp;
double fn1(double r)
{
	temp=r*r*3.14;
	return temp;
}
double& fn2(double r){
	temp=r*r*3.14;
	return temp;
}
int main()
{
	double a=fn1(5.0);
         //double& b=fn1(5.0);
	double c=fn2(5.0);
	double& d=fn2(5.0);
	cout<<a<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	return 1;
}


