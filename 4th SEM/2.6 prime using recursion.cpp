#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n,int k){
	if(n==2) return true;
	if(n<2) return false;
	if(n%k==0) return false;
	if(k*k>n) return true;
	return isPrime(n,k+1);
	
}
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	if(isPrime(n,2)){
		cout<<" Yes! It is a Prime number ";
	}
	else{
		cout<<" No ! It is not a Prime number ";
	}
}
