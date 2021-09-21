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
void countSort(int arr[], int n, int pos)
{
    int ans[n];
    int count[10] = {0};
    for (int i = 0; i < n; i++)
       {
        count[(arr[i]/pos)%10]++;
        }
    for (int i = 1; i<10;i++){
        count[i] = count[i] + count[i - 1];
    }
    for (int i = n - 1; i >= 0;i--){
        ans[--count[(arr[i]/pos)%10]] = arr[i];
    }
    for (int i = 0; i < n;i++){
        arr[i] = ans[i];
    }
}

void RadixSort(int arr[],int n){
    int mx = getMAx(arr, n);
    for (int pos = 1; (mx/pos) > 0;pos=pos*10){
        countSort(arr, n, pos);
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
    RadixSort(arr,n);
    cout<<"Sorted Array : ";
    print(arr,n);
    return 0;
}