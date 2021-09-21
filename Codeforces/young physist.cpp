#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n*3];
	for(int i=0;i<n*3;i++){
		cin>>arr[i];
	}
	int c=0;
	for(int j=0;j<3;j++){
		int s=0;
	for(int i=j;i<n*3;i+=3){
		s+=arr[i];
	}
	if(s==0)
	c++;
}
   if(c==3)
   cout<<"YES";
   else
   cout<<"NO";
}
