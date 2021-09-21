#include<stdio.h>
#include<iostream>
using namespace std;

void recursivebubbleSort(int arr[],int n){
	if (n==1) return;
    for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
        }   
    }
    recursivebubbleSort(arr,n-1);
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
    recursivebubbleSort(arr,n);
    cout<<"Sorted Array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

