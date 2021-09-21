#include<bits/stdc++.h>
using namespace std;
float round(float var)
{
    
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
  
int main(){
	long long int t;
	cin>>t;
	while(t--){
		float v,k1,k2,k3;
		cin>>k1>>k2>>k3>>v;
		float u=100/(k1*k2*k3*v);
		float s=round(u);
		if(s < 9.57){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}
