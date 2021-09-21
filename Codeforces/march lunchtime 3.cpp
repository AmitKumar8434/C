#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--){	
	    long long int u,v,a,s	;
	    cin>>u>>v>>a>>s;
	    long long int maxv;
	    maxv=u*u-2*a*s;
	    if(maxv>v*v){
	    	cout<<"No\n";
		}
		else{
			cout<<"Yes\n";
		}
	}
}
