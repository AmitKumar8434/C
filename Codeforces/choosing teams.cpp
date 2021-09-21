#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int team=0;
	for(int i=0;i<n;i++){
		if(arr[i]+k<=5)
		team++;
	}
	cout<<team/3;
	
}
