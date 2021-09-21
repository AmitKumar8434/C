#include<bits/stdc++.h>
using namespace std;
int GCD(int n1,int n2){
	if(n1==0) return n2;
	if(n2==0 || n1==n2) return n1;
	if(n1>n2){
		return GCD(n1-n2,n2);
	}
	return GCD(n1,n2-n1);
}
int main(){
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"GCD: "<<GCD(a,b);
}
