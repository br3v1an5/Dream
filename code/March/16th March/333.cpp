#include <iostream>
#include <malloc.h>
using namespace std;
int arr[100][100];
int startNum=1;
void DrawCircle(int len,int n);
int main(){
	int i,j,k,n,len;
	cout<<"���������ξ������n\nn=";
	cin>>n;
	len=n;
	if(n%2!=0){
		while(len>1){
			DrawCircle(len,n);
			len=len-2;	
		}
		arr[n/2+1][n/2+1]=n*n;
	} 
	else{
		while(len>1){
			DrawCircle(len,n);
			len=len-2;	
		}
	}
	cout<<"��Ӧ�����ξ�������"<<endl;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<arr[i][j];
			if(j<n){
				if(arr[i][j]>=10)
					cout<<" ";
				else
					cout<<"  ";
			}
			else
				cout<<endl;
		}	
	}
	return 0;
}
void DrawCircle(int len,int n){
	int i,number,row,col;
	number=(n-len)/2+1;//��ǰ�����ǵڼ���Ȧ 
	row=number;col=number;
	for(i=1;i<=len;i++){
		arr[row][col]=startNum++;
		col++;
	}
	col--;//forѭ��Ҫ����ʱ�����������һ�Σ�����ط����� 
	for(i=1;i<=len-1;i++){
		row++;
		arr[row][col]=startNum++;
	}
	for(i=1;i<=len-1;i++){
		col--;
		arr[row][col]=startNum++;
	}
	for(i=1;i<=len-2;i++){
		row--;
		arr[row][col]=startNum++;
	}
}
