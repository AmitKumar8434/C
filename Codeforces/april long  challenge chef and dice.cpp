#include<bits/stdc++.h>
using namespace std;
int find(int p){
	if(p==1){
			return 20;
		}
		else if(p==2){
			return 36;
		}
		else if(p==3){
			return 51;
		}
		else if(p==0){
			return 0;
		}
}
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		if(n==1){
			cout<<20<<endl;
		}
		else if(n==2){
			cout<<36<<endl;
		}
		else if(n==3){
			cout<<51<<endl;
		}
		else if(n==4){
			cout<<60<<endl;
		}
		else{
			long long int k=n/4;
			long long int r=n%4;
			if(r==0){
				cout<<(k-1)*44+60<<endl;
			}
			else{
				cout<<((k-1)*44+(60)+find(r)-r*4)<<endl;
			}
		}
	}
}
