#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  float r;
  cin>>r;
  cout<<setw(5)<<setiosflags(ios::fixed)<<setprecision(2)<<setiosflags(ios::left)<<2*3.14*r<<endl; 
}
