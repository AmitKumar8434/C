#include <bits/stdc++.h>
using namespace std;
int main() {
	long N;
	cin>>N;
	long spf[N+1];   //Smallest Prime Factor
	for(long i=2;i<=N;i++){
		spf[i]=i;
	}
	for(long i=2;i*i<=N;i++){
	    if(spf[i]==i){
	        for(int j=i*i;j<=N;j+=i){
	        	if(spf[j]==j)
	            spf[j]=i;
	        }
	    }
	}
   while(N!=1){
   	cout<<spf[N]<<" ";
   	N=N/spf[N];
   }
   
	return 0;
}
