#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int odd=0,even=0;
	int lodd,leven;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			even++;
			leven=i+1;
		}
		else{
			odd++;
			lodd=i+1;
		}
	}
	if(odd==1){
		cout<<lodd;
	}
	else if(even==1){
		cout<<leven;
	}	
	return 0;
}
