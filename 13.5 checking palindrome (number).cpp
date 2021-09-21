i#include<stdio.h>
#include<iostream>
using namespace std;

int IS_PALLINDROME(int num , int temp){
    if(num==0) return temp;
    temp=(temp*10) + (num%10);
    return IS_PALLINDROME(num/10,temp);
}

int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int temp = IS_PALLINDROME(num,0);
    if(temp==num){
        cout<<"PALLINDROME !";
    }
    else{
       cout<<"NOT PALLINDROME !"; 
    }
    return 0;
}
