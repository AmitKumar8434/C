#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	int n,m,x,y;
	cout<<"Enter rows and columns of first matrix : ";
	cin>>m>>n;
	cout<<"Enter rows and columns of second matrix : ";
	cin>>x>>y;
	if(!(m==x && n==y)){
		cout<<"Matrix is not identical";
	}
	else{
	int a[m][n],b[x][y];
	cout<<"Enter elements of first matrix \n";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
		cout<<"Enter elements of second matrix \n";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>b[i][j];
		}
	}
	int A=1;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=b[i][j])
			A=0;
		}
	}
	if(A==0)
	cout<<"Matrix is not Identical";
	else
	cout<<"Matrix is  identical";
}
}
