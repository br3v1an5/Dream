#include<iostream>
using namespace std;
#include<stdlib.h>
int mul(int num);
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int m, n, result;
		puts("please input the number m and n");
		cin >> m;
		cin >> n;
		result = mul(m) / (mul(n)*mul(m - n));
		cout << result << endl;
		system("pause");
		return 0;
	}
	
} 
int mul(int a)
{
	int total = 1;
	int i = 1;
	for (i = 1; i <= a; i++)
		total *= i;
	return(total);
}
