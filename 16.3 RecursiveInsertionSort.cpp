#include<stdio.h>
#include<iostream>
using namespace std;

void recursiveinsertionSort(int arr[],int n){
	if(n<=1) return;
	recursiveinsertionSort(arr,n-1);
	int temp=arr[n-1];
	int j=n-2;
	while(j>=0 && arr[j]>temp){
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=temp;
}
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements to the array :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    recursiveinsertionSort(arr,n);
    cout<<"Sorted Array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

