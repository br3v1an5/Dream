#include<iostream>
using namespace std;
void print(int n)
{
    int **matrix = new int*[n];//建立二维数组
    for (int k = 0; k < n; k++)
    {
        matrix[k] = new int[n];
    }
    int circle = 0;//循环次数
    int v = 1;//矩阵初值
    int i = 0, j = 0;
    while (n-2*circle>=2)//以n-2*circle作为mark，若矩阵宽度为偶数，mark取到2时，矩阵赋值结束；若矩阵宽度为奇数，mark会取到1，此时需要单独处理。
    {
        for (j=circle; j < n-circle; j++)
        {
            matrix[i][j] = v;
            v++;
        }
        j--;
        i++;
        for (i; i < n-circle; i++)
        {
            matrix[i][j] = v;
            v++;
        }
        i--;
        j--;
        for (j; j >= circle; j--)
        {
            matrix[i][j] = v;
            v++;
        }
        j++;
        i--;
        for (i; i > circle; i--)
        {
            matrix[i][j] = v;
            v++;
        }
        i++;
        circle++;
    }
    if (n-2*circle == 1)
    {
        j = circle;
        matrix[i][j] = v;
    }
    for (i = 0; i < n; i++)//输出矩阵
    {
        for (j = 0; j < n; j++)
        {
            cout << matrix[i][j]<<" ";
        }
        cout << endl;
    }
}
int main( )
{
    int N;
    cin >> N;
    print(N);
    return 0;
}
