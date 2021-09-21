#include<stdio.h>
#include<iostream>
using namespace std;
int n;
int p=0;
int comp=0;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge (int arr[],int l,int mid,int r){
	int i=l;
	int j=mid+1;
	int k=l;
	int b[n];
	while(i<=mid && j<=r){
		if(arr[i]<arr[j]){
		 b[k]=arr[i];
		 i++;
     	}
     	else{
     		b[k]=arr[j];
     		j++;
		 }
		 k++;
	}
	if(i>mid){
		while(j<=r){
			b[k]=arr[j];
			j++;
			k++;
		}
	}
	else{
			while(i<=mid){
			b[k]=arr[i];
			i++;
			k++;
		}
	}
	for(int m=l;m<=r;m++){
		arr[m]=b[m];
	}
}
/*void merge(int arr[],int l,int mid,int r){
    
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
    
}*/
void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid =(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        p++;
        merge(arr,l,mid,r);
    }
    return;
}
int main(){
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements to the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    cout<<"Sorted Array : ";
    print(arr,n);
    cout<<"Passes :"<<p<<endl<<"Comparisons :"<<comp;
    return 0;
}
