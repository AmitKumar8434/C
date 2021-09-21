#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[5][5],a,b;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(arr[i][j]==1){
				a=2-i;
				if(a<0)
				a=-1*a;
				b=2-j;
				if(b<0)
				b=-1*b;
			}
		}
	}
	cout<<a+b;
	
}

