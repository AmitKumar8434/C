#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the number of arrays :";
    int r;
    cin>>r;
    int **arr = new(nothrow) int*[r];
    int *c=new int [r];
    for(int i=0;i<r;i++){
        cout<<"Enter the size of Array-"<<i+1<<" :";
        cin>>c[i];
        arr[i]= new int[c[i]];
        cout<<"Enter elements to Array-"<<i+1<<" :";
        for(int j=0;j<c[i];j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Jaggerd Array :"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}