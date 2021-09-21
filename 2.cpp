#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the no. of rows and column :";
    int r,c;
    cin>>r>>c;
    int **arr = new(nothrow) int*[r];

    for(int i=0;i<r;i++){
        arr[i]= new(nothrow) int[c]; 
    }
    cout<<"Enter elements to the Array :"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Transpose Matrix :"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}