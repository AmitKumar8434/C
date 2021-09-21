#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll bs_lower_bound(vector<ll> a, ll n, ll x) {
    ll l = 0;
    ll h = n; // Not n - 1
    while (l < h) {
        ll mid =  l + (h - l) / 2;
        if (x <= a[mid]) {
            h = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;
//    cin>>t;
     t=1;
    while(t--){
      ll n;
      cin>>n;
      vector<ll> hero(n);
      ll sum=0;
      for(ll i=0;i<n;i++){
      	cin>>hero[i];
      	sum+=hero[i];
	  }
	  ll m;
	  cin>>m;
	  sort(hero.begin(),hero.end());
      while(m--){
      	  ll defence,attack;
      	  cin>>defence>>attack;
      	  ll gold=0;
      	  ll ind = bs_lower_bound(hero,n,defence);
      	 // cout<<"ind: "<<ind<<endl;
      	  if(ind==n){
      	  	    gold+=(defence-hero[n-1]);
      	  	    ll temp=attack -(sum-hero[n-1]);
      	  	    if(temp>0){
      	  	        gold+=temp;
      	  	    }
		  }
		  else{
		      
                     if(ind>0){
                         ll temp=min(attack-(sum-hero[ind]),attack-(sum-hero[ind-1])+(defence-hero[ind-1]));
                         temp=max(ll(0),temp);
                         gold+=temp;
                     }
                     else
		  	  gold+=attack-(sum-hero[ind]);
		  }
		  if(gold<0) gold=0;
		  cout<<gold<<endl;
	  }
    }

    return 0;
}
