#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define vi          vector<int>
#define vll         vector<ll>
#define pll         pair<ll, ll>
#define pii         pair<int, int>
#define ld          long double
#define ff          first
#define ss          second
#define vs          vector<string>
#define vpll        vector<pll>
#define vb          vector<bool>
#define pb          push_back
#define endl        '\n'

const ll INF       = 2e18;
const ll mod       = 1000000007;
const ll mod2      = 998244353;

void generate(int open,int close,string str){
    if(open==0){
        while(close--){
            str.push_back(')');
        }
        cout<<str<<endl;
    }
    if(open==0 && close==0){
        cout<<str<<endl;
    }
    if(open==close){
        generate(open-1,close,str+'(');
    }
    else if(open<close){
        generate(open-1,close,str+'(');
        generate(open,close-1,str+')');
    }
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        generate(n,n,s);
        cout<<"y"<<endl;
    }

    return 0;
}