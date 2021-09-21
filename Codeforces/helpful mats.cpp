#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,r;
	cin>>s;
	int n=s.length();
	for (int i=0;i<n;i+=2){
		for(int j=0;j<n-i-2;j+=2){
			if(s[j]>s[j+2]){
                swap(s[j],s[j+2]);
            }       
		}	
	}
	cout<<s;
}
