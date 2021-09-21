#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str;
	for (int i=0;i<n;i++){
		cin>>str;
		int size=str.length();
		if(size>10){
	      cout<<str[0]<<size-2<<str[size-1]<<endl;
		}
		else{
			cout<<str<<endl;
		}
	}
}
