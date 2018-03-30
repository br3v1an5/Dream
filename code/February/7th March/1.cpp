#include <iostream>
#include <cstdio>
using namespace std;
void invert(int *s,int i,int  j)
{
    int temp;
    for(;i<j;i++,j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

}
int main()
{
    int a[10]= {0,1,2,3,4,5,6,7,8},i;
    invert(a+1,2,6);
    for(i=0; i<10; i++)
        cout<<a[i]<<endl;
    return 0;

}


