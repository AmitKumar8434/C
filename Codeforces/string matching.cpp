#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	string sa,sb,f;
	cin>>sa;
	cin>>sb;
	int j=0;
	int n=sa.length();
	for(int i=0;i<n;i++){
		if(sa[i]==sb[j]){
			f[j]=sb[j];
			j++;
		}
	}
	int k=0;
	for(int i=0;i<sb.length();i++){
		if(f[i]==sb[i])
		k++;
	}
	if(k==sb.length())
	cout<<"YES\n";
	else
	cout<<"NO\n";
	}
}

