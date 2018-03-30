#include<bits/stdc++.h>
using namespace std;
#define N  1000
#define M  20
int main()
{
	char *cities[N];
	int i,j,n;
	cin>>n;
	for(i=0; i<n; i++)
    {
        cities[i] = new char[M];
        cin>>cities[i];
    }
    for(i=1; i<n; i++)
        for(j=0; j<n-i; j++)
            if(strcmp(cities[j],cities[j+1])>0)
                swap(cities[j],cities[j+1]);
    for(i=0; i<n; i++)
    {
        cout<<cities[i]<<endl;
    }
    return 0;
}
