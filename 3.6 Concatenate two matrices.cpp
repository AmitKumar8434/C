#include<iostream>
using namespace std;
int main(void)
{
	int m,n,a[10][10],b[10][10];
	cout<<"Enter rows and columns of matrices; \n";
	cin>>m>>n;
	cout<<"Enter elements of first matrix :\n";
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	   cin>>a[m][n];
	cout<<"Enter elements of second matrix :\n";
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	   cin>>b[m][n];
	int c[m][2*n];
	for(int i=0;i<m;i++)
	 for(int j=0;j<n;j++){
	      c[i][j]=a[i][j];
	      c[i][j+n]=b[i][j];
    }
	cout<<"Matrix after Concatenation: \n";
	for(int i=0;i<m;i++){
	for(int j=0;j<2*n;j++)
	      cout<<c[i][j]<<" ";
	      cout<<endl;
       }
}
		  	   
