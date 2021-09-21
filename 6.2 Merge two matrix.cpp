#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter the size of 1st Array:";
	cin>>n;
	int arr1[n];
	cout<<"Enter elements to the 1st array :";
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	cout<<"Enter the size of 2nd Array:";
	cin>>m;
	int arr2[m];
	cout<<"Enter elements to the 2nd array :";
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	
	int res[n+m];
	int k=0,i=0,j=0;
	while(i<n && j<m){
		if(arr1[i]>arr2[j]){
			res[k++]=arr2[j++];
		}
		else{
			res[k++]=arr1[i++];
		}
	}
	while(i<n){
		res[k++]=arr1[i++];
	}
	while(j<m){
		res[k++]=arr2[j++];
	}

	cout<<"RESULTANT ARRAY :";
	for(int i=0;i<n+m;i++){\
	cout<<res[i]<<" ";
	}

}
