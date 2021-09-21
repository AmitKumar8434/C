#include<iostream>
using namespace std;
void printArray(int arr[], int n)  {  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
} 
void insertionSort(int arr[], int n)  {  
    int i, key, j,c=0,q=0,r=0;  
    for (i = 1; i < n; i++) {
        q++;
        cout<<"PASS NO:"<<i<<"\n";
        key = arr[i];  
        j = i - 1;  
        while (j >= 0 && (++c &&arr[j] > key)) {
            r++;  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        printArray(arr,n);
        arr[j + 1] = key;  
    } 
    cout<<"No.of steps : "<<c<<"\n"; 
    cout<<"Total comparisons : "<<r<<"\n";
    cout<<"Total passes : "<<q<<"\n";
    cout<<"Array status : "<<"Sorted."<<"\n";
    if(r==0)
        cout<<"Best time complexity O(n)"<<"\n";
    if(r!=0 && r<c)
        cout<<"Average time complexity O(n^2)"<<"\n";
    if(c==r)
        cout<<"Worst time complexity O(n^2)"<<"\n";
}