#include<stdio.h>
#include<iostream>
using namespace std;

int SEARCH(int arr[],int left,int right,int x){
	if(left<=right){
		int mid1=left+(right-left)/3;
		int mid2=right-(right-left)/3;
		if(arr[mid1]==x) return mid1;
		if(arr[mid2]==x) return mid2;
		if(x<arr[mid1]) return SEARCH(arr,left,mid1-1,x);
		else if(x>arr[mid2]) return SEARCH(arr,mid2+1,right,x);
		else return SEARCH(arr,mid1+1,mid2-1,x);	
	}
	return -1;
}

int main(){
    int n,k,x;
    cout<<"Enter size of array :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array in sorted form: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter element you want to Search :";
    cin>>x;
    int left=0;
    int right=n-1;
    k = SEARCH(arr,left,right,x);
    if(k>=0) 
	cout<<"Element found at position :"<<k+1;
	else
	cout<<"Element not found ";
    return 0;
}
