#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int a=0,b=0,c=0;
	for(int i=0;i<n;i+=3){
		a+=arr[i];
	}
	for(int i=1;i<n;i+=3){
		b+=arr[i];
	}
	for(int i=2;i<n;i+=3){
		c+=arr[i];
	}
	if(a>b&&a>c)
	cout<<"chest";
	if(b>a && b>c)
	cout<<"biceps";
	if(c>a && c>b)
	cout<<"back";
}
