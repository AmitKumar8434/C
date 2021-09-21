#include<iostream>
#include<stdlib.h>
#include"bubblesort.cpp"
#include"insertion sort.cpp"
#include "selectionsort.cpp"
using namespace std;
int main(void){
    int n,temp;
    int arr[100],arr1[100],arr2[100],arr3[100];
    cout<<"Enter number of elements : ";
    cin>>n;
    //taking input....
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        arr1[i]=arr[i];
    for(int i=0;i<n;i++)
        arr2[i]=arr[i];
    for(int i=0;i<n;i++)
        arr3[i]=arr[i];
    cout<<"SORTING USING BUBBLE SORT\n";
    cout<<"--------------------------------------\n";
    bubble(arr1,n);
    cout<<"--------------------------------------\n";
    cout<<"SORTING USING INSERTION SORT\n";
    cout<<"--------------------------------------\n";
    insertionSort(arr2,n);
    cout<<"--------------------------------------\n";
    cout<<"SORTING USING SELECTION SORT\n";
    cout<<"--------------------------------------\n";
    selectionsort(arr3,n);
}
