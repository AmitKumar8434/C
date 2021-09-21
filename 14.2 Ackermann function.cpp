#include<stdio.h>
#include<iostream>
using namespace std;

int A(int m,int n){
    if(m==0 && n>0) return n+1;
    if(n==0 && m>0) return A(m-1,1);
    else return A(m-1,A(m,n-1));
}

int main(){
    int n,m,k;
    cout<<"Enter m and n :\n";
    cin>>m>>n;
    k = A(m,n);
    cout<<"Answer: "<<k;
    return 0;
}
