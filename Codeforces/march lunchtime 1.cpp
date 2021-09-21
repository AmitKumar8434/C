#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    	long long int n,x,max=0;
    	cin>>n>>x;
    	for(long long int i=0;i<n;i++){
    		long long int s,r;
    		cin>>s>>r;
    		if(s<=x){
    			if(r>max){
    			max=r;
    		 }
			}
			if(i==n-1)
			cout<<max<<endl;
		}
	}
}
