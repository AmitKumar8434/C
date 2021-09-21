#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int p;
		cin>>p;
		int k=0;
		string s= to_string(p);
		for(long long int i=0;i<s.length();i++){
			if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]==7 || s[i]==9){
				k++;
				if(k==2){
					break;
				}
			}
		}
		if(k==2)
		cout<<"committed\n";
		else
		cout<<"single\n";
	}
}
