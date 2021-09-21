#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int n=s1.length();
	int k=0;
	for(int i=0;i<n;i++){
		char c1=tolower(s1[i]);
		char c2=tolower(s2[i]);
		if(c1<c2){
		k=-1;
		break;
	}
		else if(c1>c2){
		k=1;
		break;
	}
	}
	if(k==-1)
	cout<<"-1";
	else if(k==1)
	cout<<"1";
	else if(k==0)
	cout<<"0";
}
