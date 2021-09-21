#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int s=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	s=s+arr[i];
	for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }   
	int sum=0;
	int c=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
		c++;
		if(sum>s/2){
		cout<<c;
		break;
	}
	}	
}
