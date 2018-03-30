#include<iostream>
using namespace std;
//#include<stdlib.h>
int main()
{
    int t;
    cin >> t;
    while (t>0)
    {
        int n;
        int *array;
        cin >> n;
        array = new int[n];
        for (int i = 0; i < n; i++)
            cin >> array[i];
        int *p;
        p = &array[(n-1) / 2];
        cout << *(p-1) << " " << *(p+1) <<" "<< endl;
        int num1, num2, num3;
        cin >> num1;
        cin >> num2;
        cin >> num3;
        cout << array[num1-1] << " " << array[num2-1] << " " << array[num3-1] << " " << endl;
        //system("pause");
        t = t - 1;
    }
}
