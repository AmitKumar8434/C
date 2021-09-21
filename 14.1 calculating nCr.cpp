#include<stdio.h>
#include<iostream>
using namespace std;

int CALCULATE(int n,int r){
    if(n<=r|| r==0) return 1;
    else return CALCULATE(n-1,r-1)+CALCULATE(n-1,r);
}

int main(){
    int n,r,k;
    cout<<"Enter n and r :";
    cin>>n>>r;
    k =CALCULATE(n,r);
    cout<<n<<"C"<<r<<" = "<<k;
    return 0;
}
