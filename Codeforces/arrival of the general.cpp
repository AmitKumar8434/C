#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=arr[0],c=0,p=(n-1);
	int min=arr[n-1];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
			c=i;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(arr[i]<min){
			min=arr[i];
			p=i;
		}
	}
	int ans;
	if(c>p){
		ans=(c)+(n-1-p-1);
	}
	else if(c<p){
		ans=(c)+(n-1-p);
	}
	else{
		ans=0;
	}
	cout<<ans;
	
}
