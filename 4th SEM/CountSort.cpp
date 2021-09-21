#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int getMAx(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
void countSort(int arr[],int n){
    int ans[n];
    int k = getMAx(arr, n);
    int count[10] = {0};
    for (int i = 0; i < n; i++)
       {
        count[arr[i]]++;
        }
    for (int i = 1; i<=k;i++){
        count[i] = count[i] + count[i - 1];
    }
    for (int i = n - 1; i >= 0;i--){
        count[arr[i]]--;
        ans[count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n;i++){
        arr[i] = ans[i];
    }
}
int main(){
    cout<<"Enter the size of the array :";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements to the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    countSort(arr,n);
    cout<<"Sorted Array : ";
    print(arr,n);
    return 0;
}