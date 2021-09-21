
#include<iostream>
#include<stdio.h>
using namespace std;
int pass,comp;
void print(int arr[],int n){
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<"\n";
}
void selectionsort(int arr[],int n){
	pass=0;
	comp=0;
	for(int i=0;i<n-1;i++){
		pass++;
		int s=0;
		int min=i;
		cout<<"PASS "<<i+1<<":" <<"\n";
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				comp++;
				cout<<"Sub pass "<<++s<<": \n";
				cout<<"(Comparing "<<arr[j]<<" and "<<arr[min]<<" )  ";
				print(arr,n);
			    min=j;
		    }
		}
		swap(arr[min],arr[i]);
	}	
}

int main(void){
	int n;
	cout<<"Enter size of array:\n ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements: ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	selectionsort(arr,n);
	cout<<"Sorted array: ";
	print(arr,n);
	cout<<"\nNumber of Iterations: "<<pass;
	cout<<"\nNumber of Comparisons: "<<comp;
}

