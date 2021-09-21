#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	int m,n;
	cout<<"Enter rows and columns of matrix : ";
	cin>>m>>n;
	int a[m][n],b[n][m];
	cout<<"Enter elements of matrix";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[j][i]=a[i][j];
		}
	}
	cout<<"Original Matrix: \n";
		for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
		cout<<"Transpose Matrix: \n";
		for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
}
	
