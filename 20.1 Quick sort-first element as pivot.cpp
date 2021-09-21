#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}	
	cout<<endl;
}
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high+1;
    do{
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
        	
            j--;
        }while(arr[j]>pivot);
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }while(i<j);

        arr[low]=arr[j];
        arr[j]=pivot;
    return j;
}

void quick_sort(int arr[],int low,int high,int n){
    if(low<high){
        int j=partition(arr,low,high);
        quick_sort(arr,low,j-1,n);
        quick_sort(arr,j+1,high,n);
    }
}
int main(){
    int n;
    cout<<"Enter the total number of elements that u want to sort: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1,n);
    cout<<"\nthe sorted array is: ";
	print(arr,n);
    return 0;
}
