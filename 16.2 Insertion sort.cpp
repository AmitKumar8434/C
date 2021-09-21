#include<stdio.h>
#include<iostream>
using namespace std;
int comp,pass;
void print(int arr[],int n){
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<"\n";
}
void InsertionSort(int arr[],int n){
    int key;
    comp=0;
    pass=0;
    for(int i=1;i<n;i++){
    	cout<<"PASS "<<i<<": \n";
    	pass++;
        key=arr[i];
        int j=i-1;
        while(key<arr[j] && j>=0){
        	comp++;
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j+1]=key;
        print(arr,n);
    }
}

int main(){
    int n;
    cout<<"Enter the size :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements to the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    InsertionSort(arr,n);
    cout<<"Sorted Array :";
    print(arr,n);
    cout<<"\nPasses: "<<pass;
    cout<<"\nComparisons :"<<comp;
    return 0;
}
