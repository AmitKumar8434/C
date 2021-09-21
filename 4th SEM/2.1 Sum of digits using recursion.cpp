#include<bits/stdc++.h>
using namespace std;
int SumOfDigits(int n){
	if(n==0) return 0;
	int k=n%10;
	n=n/10;
	return k+ SumOfDigits(n);
}
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Sum is: "<<SumOfDigits(n);
}
