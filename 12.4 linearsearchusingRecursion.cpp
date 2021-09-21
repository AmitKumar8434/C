#include<iostream>
#include<conio.h>
using namespace std;
int search(int arr[],int l,int r,int x){
	if(l>r) return -1;
	if(arr[l]==x) return l;
	if(arr[r]==x) return r;
	return search(arr,l+1,r-1,x);
	}
int main(){
	int p,n,x;
	cout<<"Enter size of array :";
	cin>>n;
	int arr[n];
	cout<<"Enter elements in array: ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Enter item you want to search: ";
	cin>>x;
	int l=0;
	int r=n-1;
	p=search(arr,l,r,x);
	if(p!=-1)
	cout<<"Element found at position "<<p+1;
	else
	cout<<"Element not found";
}

