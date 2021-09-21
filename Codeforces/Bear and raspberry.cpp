#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c;
	cin>>n>>c;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int max=arr[0]-arr[1];
	for(int i=1;i<(n-1);i++){
		if((arr[i]-arr[i+1])>max){
			max=arr[i]-arr[i+1];
		}
	}
	if((max-c)<=0)
	cout<<"0";
	else
	cout<<max-c;
	return 0;
}
