#include "stdafx.h"
#include<stdlib.h>
#include<iostream>
using namespace std;
#define N 4
#define M 3
int main()
{
	int(num[N])[M] = { 1,2,3,4,5,6,7,8,9 }, i, j;
	//int *p = &num[0][0];
	int *p = num[0];
	int(*q)[M] = num;



	/*cout<<num<<" "<<p<<endl;
	cout<<num+1<<" "<<p+1<<endl;*/
	cout << num << " " << q << endl;
	cout << num + 1 << " " << q + 1 << endl;

	for (i = 0; i<N; i++)
		for (j = 0; j<M; j++)
			cout << "[" << i << "][" << j << "] :" << &num[i][j] << endl;

	for (i = 0; i<N; i++)
		for (j = 0; j<M; j++)
		{
			cout << p[i*M + j] << endl;
			cout << p + i * M + j << endl;
		}

	//num[i][j],*(num[i]+j)
	//*(*(num+i)+j),(*(num+i))[j]
	for (i = 0; i<N; i++)
		for (j = 0; j<M; j++)
		{
			cout << num[i][j] << " " << *(num[i] + j) << endl;
			cout << *(*(num + i) + j) << " " << (*(num + i))[j] << endl;
			cout << q[i][j] << " " << *(q[i] + j) << endl;
			cout << *(*(q + i) + j) << " " << (*(q + i))[j] << endl;
		}


	//&num[i][j],num[i]+j
	//*(num+i)+j,
	for (i = 0; i<N; i++)
		for (j = 0; j<M; j++)
		{
			cout << &num[i][j] << " " << num[i] + j << endl;
			cout << *(num + i) + j << endl;
			cout << &q[i][j] << " " << q[i] + j << endl;
			cout << *(q + i) + j << endl;
		}


	system("pause");
	return 0;
}

