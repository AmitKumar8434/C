#include<stdio.h>
#include<iostream>
using namespace std;
int p=0;
int comp=0;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge(int arr[],int l,int mid,int r){
    
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1],b[n2];

    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++){
        b[j]=arr[mid+1+j];
    }

    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        comp++;
        if(a[i]<=b[j]){
            arr[k]=a[i];
            i+=1;k+=1;
        }
        else{
            arr[k]=b[j];
            j+=1;k+=1;
        }   
    }
    while(i<n1){
        arr[k]=a[i];
        i+=1;
        k+=1;
    }
    while(j<n2){
        arr[k]=b[j];
        j+=1;
        k+=1;
    }
    
}
void mergeSort(int arr[],int l,int r,int n){
    if(l<r){
        int mid =(l+r)/2;
        mergeSort(arr,l,mid,n);
        mergeSort(arr,mid+1,r,n);
        p++;
        merge(arr,l,mid,r);
        print(arr,n);
    }
    return;
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
    mergeSort(arr,0,n-1,n);
    cout<<"Sorted Array : ";
    print(arr,n);
    cout<<"Passes :"<<p<<endl<<"Comparisons :"<<comp;
    return 0;
}
