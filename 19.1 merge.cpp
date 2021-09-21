#include<stdio.h>
#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void merge(int arr1[],int n1,int arr2[],int n2){
    int res[n1+n2];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            res[k]=arr1[i];
            i+=1;
        }
        else{
            res[k]=arr2[j];
            j+=1;
        }
        k+=1;
    }
    while(i<n1){
        res[k]=arr1[i];
        i+=1;
        k+=1;
    }
    while(j<n2){
        res[k]=arr2[j];
        j+=1;
        k+=1;
    }
    cout<<"Merged Array : ";
    print(res,n1+n2);
}

int main(){
    int n1,n2;
    
    cout<<"Enter the size of the first array :";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter elements to the  array :";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    cout<<"Enter the size of the second array :";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter elements to the  array :";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    merge(arr1,n1,arr2,n2);

    return 0;
}
