#include<iostream>
using namespace std;
void print(int n)
{
    int **matrix = new int*[n];//������ά����
    for (int k = 0; k < n; k++)
    {
        matrix[k] = new int[n];
    }
    int circle = 0;//ѭ������
    int v = 1;//�����ֵ
    int i = 0, j = 0;
    while (n-2*circle>=2)//��n-2*circle��Ϊmark����������Ϊż����markȡ��2ʱ������ֵ��������������Ϊ������mark��ȡ��1����ʱ��Ҫ��������
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
    for (i = 0; i < n; i++)//�������
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
