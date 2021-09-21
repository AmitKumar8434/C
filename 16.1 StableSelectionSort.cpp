#include<iostream>
#include<stdio.h>
using namespace std;
void stableselectionsort(int arr[],int n){
	int c=0,v=0;
	for(int i=0;i<=n-2;i++){
		int minindex=i;
		for(int j=i+1;j<=n-1;j++){
			if(arr[j]<arr[minindex]){
			   minindex=j;
		    	v++;
		    }
		}
		int temp=arr[minindex];
		c++;
		while(minindex>i){
			arr[minindex]=arr[minindex-1];
			minindex--;
		}
		arr[i]=temp;
	}
	cout<<"Sorted array: ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\nNumber of Iterations: "<<c;
	cout<<"\nNumber of Comparisons: "<<v;
	
}

int main(void){
	int n;
	cout<<"Enter size of array:\n ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements: ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	stableselectionsort(arr,n);
}

