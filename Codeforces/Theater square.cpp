#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,m,a;
	cin>>n>>m>>a;
	long long int ans;
	if((n%a)==0 && m%a==0){
		ans=(n/a)*(m/a);
	}
	else if((n%a)==0 && m%a!=0){
		ans=(n/a)*((m/a)+1);
	}
	else if((n%a)!=0 && m%a==0){
		ans=((n/a)+1)*(m/a);
	}
	else{
		ans=((n/a)+1)*((m/a)+1);
	}
	cout<<ans<<endl;
}
