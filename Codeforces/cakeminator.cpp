#include<bits/stdc++.h>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;
	char cake[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>cake[i][j];
		}
	}
	int row=0,col=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(cake[i][j]=='S'){
				row=row+1;
				break;
			}
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			if(cake[j][i]=='S'){
				col=col+1;
				break;
			}
		}
    }
    cout<<((r*c)-(row*col));
}
