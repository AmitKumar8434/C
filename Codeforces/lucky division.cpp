#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int c=0;
	if(n%4==0 || n%7==0 || n%47==0 || n%74==0){
		c=1;
		cout<<"YES";
	}
	else{
	if(c==0){
		int p=0;
	while(n>0){
		int r=n%10;
		if(r!=4 && r!=7)
	     p++;
		n=n/10;
	}
	if(p>0)
	cout<<"NO";
	else
	cout<<"YES";
   }
  }
}
