#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	int n;
	cout<<"Enter order of matrix : ";
	cin>>n;
	int a[n][n];
	cout<<"Enter elements of matrix";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){?
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>j)
			cout<<"0";
			else
			cout<<a[i][j];
		}
		cout<<"\n";
	}
}
