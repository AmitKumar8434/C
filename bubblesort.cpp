#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int x=0;x<n;x++)
            cout<<arr[x]<<" ";
        cout<<endl;
    return;
}
void bubble(int arr[],int n){
    int temp,steps,pass,q=0,r=0,k=0;
    for(int i=0;i<n-1;i++){
        q++;
        int flag=0;
        //checking each pass..
        cout<<"Pass : "<<i+1<<"\n"<<"------------"<<"\n";
        //sorting...
        for(int j=0;j<n-i-1;j++){
            r++;
            cout<<"(Comparing : "<<arr[j]<<" & "<<arr[j+1]<<"): ";
            if(arr[j]>arr[j+1]){
                k++;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;  
                flag=1;
            }
            print(arr,n);
        }
        cout<<"------------"<<"\n";
        if(flag==0)
            break;
    }
    cout<<"Total comparisons : "<<r<<"\n";
    cout<<"Total passes : "<<q<<"\n";
    cout<<"Total steps : "<<k<<endl;
    cout<<"Array status : "<<"Sorted."<<"\n";
    if(k==0)
        cout<<"Best time complexity O(n)"<<"\n";
    if(k!=0 && k<r)
        cout<<"Average time complexity O(n^2)"<<"\n";
    if(k==r)
        cout<<"Worst time complexity O(n^2)"<<"\n";
}