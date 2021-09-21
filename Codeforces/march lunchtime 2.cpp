#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    	long long int n,sum=0;
    	cin>>n;
    	bool flag=false;
    	long long int a[n];
    	for(long long int i=0;i<n;i++){
    		cin>>a[i];
    		sum=sum+a[i];
    		if(a[i]==2){
    			flag=true;
			}
		}
		if(sum%2==0){
			cout<<0<<endl;
		}
		else if(flag==true){
			cout<<1<<endl;
		}
		else{
			cout<<-1<<endl;
		}
		
	}
}
