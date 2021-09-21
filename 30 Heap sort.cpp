

#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void heapify(int arr[],int n, int i){

    int max =i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && arr[l]>arr[max]){
        max=l;
    }
    if(r<n && arr[r]>arr[max]){
        max=r;
    }
    if(max!=i){
        swap(arr[i],arr[max]);

        heapify(arr,n,max);
    }
}

void heapSort(int arr[],int n){

    for(int i=(n/2)-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
        cout<<"Pass"<<(5-i)<<": "<<endl;
        print(arr,n);
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    heapSort(arr,n);
    cout<<"Heap Sorted Array :";
    print(arr,n);
    return 0;
}
