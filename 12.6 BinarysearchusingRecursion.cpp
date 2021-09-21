#include<iostream>
#include<conio.h>
using namespace std;
int binarysearch(int arr[],int l,int r,int x){
	int mid=(l+r)/2;
	if(l==mid){
		if(x==arr[l])
		return mid;
		else 
		return -1;
	}
	else{
		if(x<arr[mid])
		binarysearch(arr,l,mid-1,x);
		else
		binarysearch(arr,mid+1,r,x);
	}
	}

int main(){
	int p,n,x;
	cout<<"Enter size of array :";
	cin>>n;
	int arr[n];
	cout<<"Enter sorted elements in array: ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Enter item you want to search: ";
	cin>>x;
	int l=0;
	int r=n-1;
	p=binarysearch(arr,l,r,x);
	if(p!=-1)
	cout<<"Element found at position "<<p+1;
	else
	cout<<"Element not found";
	
}
