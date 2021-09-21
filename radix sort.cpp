#include<stdio.h>
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
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
void countSort(int arr[],int n,int p){
    int output[n];
    int count[10];
    
    for(int i=0;i<10;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[(arr[i]/p)%10]+=1;
    }
    cout<<"For "<<p<<"'s place :"<<endl;
    
    cout<<"Count Array with no. of occurences [0-9] :";
    print(count,10);
    cout<<endl;

    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
        cout<<"Count Array with summation of Relative Indices :";
        print(count,10);
        cout<<endl;
    }

    for(int i=n-1;i>=0;i--){
        output[count[(arr[i]/p)%10]-1]=arr[i];
        count[(arr[i]/p)%10]--;
    }

    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }

}

void RadixSort(int arr[],int n){
    int m=getMAx(arr,n);
    for(int p=1;m/p>0;p*=10){
        countSort(arr,n,p);
    }

}

int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements to the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    RadixSort(arr,n);
    print(arr,n);
    return 0;
}
