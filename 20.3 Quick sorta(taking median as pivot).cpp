#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int low,int high){
	int left=low;
	int right=high;
	int pivot=a[(low+high)/2];
	while(left<right){
        do {
            left=left+1;
        } while (left<=high && a[left]<pivot);
 
        do {
            right=right-1;
        } while (right>=low && a[right]>pivot);
 
        if (left<right)
        	swap(a[left], a[right]);
    	}
		swap(a[low], a[right]);
		return right;	
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}	
}

int quick_sort(int a[],int low,int high){
	if(low<high){
		int j=partition(a,low,high);
		quick_sort(a,low,j-1);
		quick_sort(a,j+1,high);
	}
}


int main(){
	int n;
	cout<<"Enter the limit: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	quick_sort(arr,0,n-1);
	cout<<"\nthe sorted array is: ";
	print(arr,n);
	return 0;	
}
