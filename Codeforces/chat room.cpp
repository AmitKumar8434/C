#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,f,c;
	cin>>s;
	int n;
	int j=0;
	c="hello";
	n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]==c[j]){
			f[j]=c[j];
			j++;
		}
	}
	int k=0;
	for(int i=0;i<5;i++){
		if(f[i]==c[i])
		k++;
	}
	if(k==5)
	cout<<"YES";
	else
	cout<<"NO";
}

