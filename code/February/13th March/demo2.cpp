#include <iostream>
using namespace std;
int main()
{
    double dA[3][4] = {1,2,3,4,5.6,6.5,7,8};
	int  i,j;  	
	//��ָͨ�����
	double *pdA = dA[0];  
	for(i=0; i<3; i++)  
	{
		for(j=0; j<4; j++)
			cout<<pdA[i*4+j]<<" ";
		cout<<endl;
	}
	//���������� 
	for(i=0; i<3; i++)   
		for(j=0; j<4; j++)  
		{
			//dA[i][j],value
			cout<<dA[i][j]<<endl;
			cout<<*(dA[i]+j)<<endl;
			cout<<*(*(dA+i)+j)<<endl;
			cout<<(*(dA+i))[j]<<endl;


			//dA[i][j],address
			cout<<&dA[i][j]<<endl;
			cout<<dA[i]+j<<endl;
			cout<<*(dA+i)+j<<endl;
			cout<<&(*(dA+i))[j]<<endl;	
		}

	//��ָ�����
	double (*pdA2)[4] = dA;  
	//���������λͬ������dA 
	for(i=0; i<3; i++)
		cout<<dA+i<<" "<<pdA2+i<<endl;
	for(i=0; i<3; i++)  
		for(j=0; j<4; j++)
		{
			//dA[i][j],value
			cout<<pdA2[i][j]<<endl;
			cout<<*(pdA2[i]+j)<<endl;
			cout<<*(*(pdA2+i)+j)<<endl;
			cout<<(*(pdA2+i))[j]<<endl;

			//dA[i][j],address
			cout<<&pdA2[i][j]<<endl;
			cout<<pdA2[i]+j<<endl;
			cout<<*(pdA2+i)+j<<endl;
			cout<<&(*(pdA2+i))[j]<<endl;
		}
	return 0;
}

