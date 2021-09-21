#include<bits/stdc++.h>
using namespace std;
int BinarySearchIterative(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    while(start <=end){
        int mid = (start + end) / 2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            end = mid - 1;
        else{
            start = mid + 1;
        }

    }
    return -1;
}
int BinarySearchRecursive(int arr[],int n,int key,int low,int high){
    if(low>high)
        return -1;
    int mid = (low + high) / 2;
    if(arr[mid]==key)
        return mid;
    if(arr[mid]>key){
        return BinarySearchRecursive(arr, n, key, low, mid - 1);
    }
    else{
        return BinarySearchRecursive(arr, n, key, mid + 1, high);
    }
}
int main(){
    cout<<"Enter the size of the array :";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in Sorted order to the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;
    int indexI= BinarySearchIterative(arr, n, key);
    cout << "Iterative result:\n";
    if(indexI>=0)
        cout << "Element found at index " << indexI<<endl;
    else
        cout << "Element not found!!\n";


    int low = 0;
    int high = n - 1;
    int indexR= BinarySearchRecursive(arr, n, key,low,high);
    cout << "Recursive result:\n";
   if(indexR>=0)
    cout << "Element found at index " << indexR<<endl;
    else
     cout << "Element not found!!\n";
}