#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int x,y;
		cin>>x>>y;
		ll k=0;
	     for(ll i=2;i<=x;i++){
	     	if (isPrime(i)) 
            k++;
            if(k>y){
            	cout<<"Divyam"<<endl;
            	break;
			}
		 }
		 if(k<=y){
		 	cout<<"Chef"<<endl;
		 }	
	}
	return 0;
}
