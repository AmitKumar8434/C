#include<stdio.h>
#include<iostream>
using namespace std;

void recursiveselectionSort(int arr[],int n,int i){
	int minindex;
	if (n==i) return;
	minindex=i;
    for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[minindex]){
            	minindex=j;
        }   
    }
    if(minindex!=i){
    	int temp = arr[i];
                arr[i]=arr[minindex];
                arr[minindex]=temp;
	}
    recursiveselectionSort(arr,n,i+1);
}

int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements to the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    recursiveselectionSort(arr,n,0);
    cout<<"Sorted Array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

