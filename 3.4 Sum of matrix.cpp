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
	int a[m][n],b[x][y],s[m][n];
	if(!(m==x && n==y)){
		cout<<"Addition not possible";
	}
	else{
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
	cout<<"First Matrix :\n";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<a[i][j]<<" ";		
		}
		cout<<"\n";
	}
	cout<<"Second Matrix :\n";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<b[i][j]<<" ";		
		}
		cout<<"\n";
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			s[i][j]=a[i][j]+b[i][j];		
		}
	}
	cout<<"Added Matrix :\n";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<s[i][j]<<" ";		
		}
		cout<<"\n";
	}
}
}
	
	
	
		

