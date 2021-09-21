#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,p,q;
	cin>>n>>p>>q;
	long long int a[n],b[n];
	for(long long int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long int sum=0;
	if(p<0){
		sum=sum+p*a[0];
	}
	else{
		sum=sum+p*a[n-1];
	}
	if(q<0){
		sum=sum+q*a[0];
	}
	else{
		sum=sum+q*a[n-1];
	}
	cout<<sum;
	return 0;
}
