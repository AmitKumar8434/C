#include<stdio.h>
#include<iostream>
using namespace std;

int IS_PALLINDROME(string str,int left,int right){
    if(left==right) return 1;
    if(str[left]!=str[right]) return 0;
    if(left < right+1) return IS_PALLINDROME(str,left+1,right-1);
    return 1;
}

int main(){
    string str;
    cout<<"Enter the string :";
    getline(cin,str);
    if(IS_PALLINDROME(str,0,str.length()-1)){
        cout<<"PALLINDROME !";
    }
    else{
       cout<<"NOT PALLINDROME !"; 
    }
    return 0;
}
