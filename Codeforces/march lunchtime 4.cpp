#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--){
    	long long int a,y,x,l;
    	cin>>a>>y>>x;
    	if(a>=y){
    		cout<<x*y<<endl;
		}
		else{
			cout<<x*a+1<<endl;
		}
	}
}
