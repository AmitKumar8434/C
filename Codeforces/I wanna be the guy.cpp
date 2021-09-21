#include <bits/stdc++.h>
using namespace std;
bool isIn(int arr[],int r,int size){
    for(int j=0;j<size;j++){
        if(r==arr[j]) return true;
    }
    return false;
}
int main(){
	int n;
	cin>>n;
	int  p,q;
	cin>>p;
	int arr1[p];
	for(int i=0;i<p;i++)
	cin>>arr1[i];
	cin>>q;
	int arr2[q];
	for(int i=0;i<q;i++)
	cin>>arr2[i];
	bool m;
	for(int i=1;i<=n;i++){
		if(!isIn(arr1,i,p) && !isIn(arr2,i,q)){
		m=false;
		break;	
		}
		else{
			m=true;
		}
	}
	if(m==true)
	cout<<"I become the guy.";
	else
	cout<<"Oh, my keyboard!";
}
