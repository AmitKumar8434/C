#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	int n,s,a[20];
	cout<<"Enter number of elements: \n";
	cin>>n;
	cout<<"Enter elements: \n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter sum";
	cin>>s;
		int k=0;
	for(int i=0;i<n;i++){
		for(int j=k+1;j<n;j++){
		if(a[k]+a[j]==s)
		cout<<a[k]<<" "<<a[j]<<"\n";
	}
	k++;
	}
}
