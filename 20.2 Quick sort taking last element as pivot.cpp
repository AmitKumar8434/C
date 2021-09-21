#include<bits/stdc++.h>
using namespace std;
int x=0;
int comp=0;
int part(int a[],int low,int high){
	int left=low-1;
	int right=high;
	int pivot=a[high];
	while(left<right){
        do {
            left=left+1;
        } while (a[left]<pivot && ++comp) ;
 
        do {
            right=right-1;
        } while (right>=low && a[right]>pivot  && ++comp);
 
        if (left<right)
        	swap(a[left], a[right]);
    	}
		swap(a[left], a[high]);
		return left;	
	}
	
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}	
}

void QuickSort(int a[],int low,int high)
{
    if (low<high)
    {
    int pivot = part(a, low, high);
    cout<<"\npass: "<<++x<<endl;
	for(int i=low;i<high;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	cout<<"-------------------";
    QuickSort(a, low, pivot-1);
    QuickSort(a, pivot + 1, high);
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
	QuickSort(arr,0,n-1);
	cout<<"\nthe sorted array is: ";
	print(arr,n);
	cout<<"\ntotal comparisons: "<<comp;
	return 0;
}
