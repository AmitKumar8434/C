#include<stdio.h>
#include<iostream>
using namespace std;
int binarySearch(int arr[],int low,int high,int x){
	if(high<=low){
		if(x>arr[low])
			return (low+1);
		else return low;	
	}
	int mid=(low+high)/2;
	if (x==arr[mid]) return (mid+1);
	if(x>arr[mid]){
		return binarySearch(arr,mid+1,high,x);
	}
	return binarySearch(arr,low,mid-1,x);
}
void insertionSort(int arr[],int n){
	int swap;
    for(int i=1;i<=n-1;i++){
    	int key=arr[i];
    	int j=i-1;
    	int pos=binarySearch(arr,0,j,key);
        while(j>=pos){
        	swap++;
            arr[j+1]=arr[j];
            j=j-1;
            }
            arr[j+1]=key;
        }
        cout<<"Number of swaps: "<<swap;
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
    insertionSort(arr,n);
    cout<<"\n Sorted Array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

