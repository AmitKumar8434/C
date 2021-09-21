#include<bits/stdc++.h>
using namespace std;
int Largest(int arr[],int n){
	if(n==1) return arr[0];
	return max(arr[n-1], Largest(arr,n-1));	
}
int main(){
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=INT_MIN;
	cout<<"Largest number is: "<<Largest(arr,n);
}
