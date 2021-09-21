#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int mj=INT_MIN;
	for(int i=0;i<n;i++){
		int f,t;
		cin>>f>>t;
		if(t<=k){
			if(f>mj)
			mj=f;
		}
		else{
			if((f-(t-k))>mj)
			mj=(f-(t-k));
		}
	}
	cout<<mj;
	return 0;
}
