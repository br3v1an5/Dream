#include<bits/stdc++.h>
using namespace std;

void itostr(int num,char *str)
{
    int count=0;
    //cout<<num<<" "<<(int)str<<endl;
    if(num<0)
    {
        str[count++] = '-';
        num = -num;
    }
    str[count] = 0;
    if(num/10)
        itostr(num/10,str+count);

    count = strlen(str);
    //cout<<num%10<<" "<<(int)(str+count)<<endl;
    str[count++] = num%10+'0';
    str[count] = '\0';
}

int main()
{
    const int SIZE = 20;
    int t,num;
    char str[SIZE];
    cin>>t;
    while(t--)
    {
        cin>>num;
        itostr(num,str);
        cout<<str<<endl;
    }
    return 0;
}
