#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--){
    	long long int n;
    	cin>>n;
    	long long int h[n];
    	for(long long int i=0;i<n;i++){
    		cin>>h[i];
		}
    	for(long long int i=0;i<n;i++){
    		long long int count=0;
    		for(int j=i-1;j>=0;j--){
    			if(h[j]>h[i]){
    				break;
				}
				else if(h[j]==h[i]){
					count++;
				}
			}
			for(int j=i+1;j<n;j++){
    			if(h[j]>h[i]){
    				break;
				}
				else if(h[j]==h[i]){
					count++;
				}
			}
			cout<<count<<" ";
		}
	}
}
