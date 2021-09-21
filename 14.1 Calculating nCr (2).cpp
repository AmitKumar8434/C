#include<stdio.h>
#include<iostream>
using namespace std;

float comb(float n,float r){
    if(r>0){
        return (n/r)*comb(n-1,r-1);
    }
    return 1;
}

int main(){
    float n, r;
    cout<<"Enter the value of n and r :";
    cin>>n>>r;
    float res = comb(n,r);
    cout<<"Result :"<<res;
    return 0;
}

