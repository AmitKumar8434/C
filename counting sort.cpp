#include<stdio.h>
#include<iostream>
using namespace std;

void CountingSort(int arr[],int n){
    int count[10];
    int output[n];
    for(int i=0;i<10;i++){
        count[i]=0;
    }

    for(int i=0;i<n;i++){
        count[arr[i]]+=1;
    }

    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }

    for(int i=0;i<n;i++){
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<output[i]<<" ";
    }

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
    CountingSort(arr,n);

    return 0;
}
