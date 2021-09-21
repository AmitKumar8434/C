/*
Suraj loves playing football.The college ground is perfectly rectangular but not completely empty.
 There are trees growing anywhere in between the ground. 
 You are given the format of the ground with 0 representing an empty unit square and 1 representing a tree 
 and you need to find the largest square area of empty space for Suraj.
 
 
 Input1
 4 5
 0 1 0 1 1
 0 1 0 0 0
 0 0 0 0 0
 0 1 1 0 1
Output1
 4
 Input 2
 2 2
 1 0
 0 1
Output2
 1
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll r,c;
	cin>>r>>c;
	ll a[r][c];
	for(ll i=0;i<r;i++){
		for(ll j=0;j<c;j++){
			ll qwerty;
			cin>>qwerty;
			if(qwerty==0){
				a[i][j]=1;
			}else{
				a[i][j]=0;
			}
		}
	}
    ll x[r][c];
    ll max_of_s, max_i, max_j;
    for(ll i = 0; i < r; i++)
        x[i][0] = a[i][0];
    for(ll j = 0; j < c; j++)
        x[0][j] = a[0][j];
    for(ll i = 1; i < r; i++){
        for(ll j = 1; j < c; j++){
            if(a[i][j] == 1)
                x[i][j] = min(x[i][j-1],min( x[i-1][j],x[i-1][j-1])) + 1;
            else
                x[i][j] = 0;
        }
    }
    max_of_s = x[0][0]; max_i = 0; max_j = 0;
    for(ll i = 0; i < r; i++){
        for(ll j = 0; j < c; j++){
            if(max_of_s < x[i][j]){
                max_of_s = x[i][j];
                max_i = i;
                max_j = j;
            }
        }            
    }
    ll side=0;
    for(ll i = max_i; i > max_i - max_of_s; i--){
        for(ll j = max_j; j > max_j - max_of_s; j--){
            side++;
        }
    }
    cout<<side;
}
