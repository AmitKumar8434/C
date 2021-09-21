#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         long long int n;
		 cin>>n;
		 n-=1;
		 long long int m=1000000007;
		 long long int temp=1;
		 long long int x=2;
		 while(n>0){
		 	    if(n%2==1)
		 		temp = (x*temp)%m;
		 		x=(x*x)%m;
		 		n=n/2;
		 }
		 cout<<temp<<endl;
	}
	
}
