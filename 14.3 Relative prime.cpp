#include<stdio.h>
#include<iostream>
using namespace std;

int Prime(int x,int y){
    if(x==1 || y==1) return 1;
    if((x!=1 || y!=1 )&& x==y) return 0;
    if((x!=1 || y!=1 )&& x<y) return Prime(x,y-x);
    if((x!=1 || y!=1 )&& x>y) return Prime(x-y,y);
}

int main(){
    int x,y,k;
    cout<<"Enter two numbers :\n";
    cin>>x>>y;
    if(Prime(x,y))
    cout<<"Relative Prime";
    else
    cout<<"NOT Relative Prime";
    return 0;
}
