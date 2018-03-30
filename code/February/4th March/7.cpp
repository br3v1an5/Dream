#include<iostream>
using namespace std;
#include <iomanip> //必须包含这个头文件
using namespace std;
int main()
{
	int t;
	cin>>t>>endl;
	while (t > 0)
	{
		double a,result;
		double dollar= 6.2619, europe = 6.6744, japan = 0.0516, hk = 0.8065;
		const double *p;
		char ch;
		cin >> ch >> " " >> a >> " " >> endl;
		if (ch = 'Y')
		{
			p = &japan;
			result = *p*a;
			cout << fixed << setprecision(4) << result << endl;
		}
		t -= 1;
	}
    return 0;
}
