#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n*2];
	for(int i=0;i<n*2;i++){
		cin>>arr[i];
	}
	int c=0;
	for(int i=1;i<n*2;i+=2){
		for(int j=0;j<n*2;j+=2){
			if(arr[j]==arr[i])
			c++;
		}
	}
	cout<<c;
	
}
