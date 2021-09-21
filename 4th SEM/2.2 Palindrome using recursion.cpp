#include<bits/stdc++.h>
using namespace std;
int reverse(int m,int temp){
	if(m==0) return temp;
	temp=temp*10+m%10;
	return reverse(m/10,temp);
}
bool isPalindrome(int n){
	if((reverse(n,0))==n){
		return true;
	}
	else 
	return false;
}
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	if(isPalindrome(n)){
		cout<<" Yes! It is a Palindrome";
	}
	else{
		cout<<" No ! It is not a Palindrome";
	}
}
