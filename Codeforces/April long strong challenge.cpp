#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		long long int c=0;
		bool flag=true;
		for(long long int i=0;i<n;i++){
			if(s[i]==42){
				c++;
			}
			else{
				c=0;
			}
			if(c==k){
				cout<<"YES\n";
				flag=false;
				break;
			}
		}
		if(flag==true){
			cout<<"NO\n";
		}
	}
}
