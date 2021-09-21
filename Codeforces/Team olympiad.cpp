#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int a1[n],a2[n],a3[n];
	int x=0,y=0,z=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]==1)
		a1[x++]=i+1;
		else if(arr[i]==2)
	     a2[y++]=i+1;
		else if(arr[i]==3)
		a3[z++]=i+1;
	}
    int p=min(x,y);
    int q=min(p,z);
    cout<<q<<endl;
    for(int i=0;i<q;i++){
    	cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
	}
}
