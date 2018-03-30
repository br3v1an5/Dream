#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int num[3];
        scanf("%d",&num[0]);
        scanf("%d",&num[1]);
        scanf("%d",&num[2]); 
        int *p;
        p = num;
        for(int i=1;i<3;i++)
            for(int j=0;j<2;j++)
                if (p[j] < p[j + 1])
                {
                    int temp;
                    temp = p[j];
                    p[j] = p[j + 1];
                    p[j + 1] = temp;
                }
        for (int i = 0; i < 3; i++)
           printf("%d ",p[i]);
        cout<<endl;   
    }
    return 0;
}
