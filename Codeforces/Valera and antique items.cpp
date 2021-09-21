#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,v;
	cin>>n>>v;
	int arr[n][50];
	int sellers=0;
	vector<int> op;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		for(int j=0;j<k;j++)
		cin>>arr[i][j];
		for(int j=0;j<k;j++){
			if(arr[i][j]<v){
				sellers+=1;
				op.push_back(i+1);
				break;
			}
		}
	}
	cout<<sellers<<endl;
	if(op.size()!=0){
	for(int i=0;i<op.size();i++)
	cout<<op[i]<<" ";
  }
  return 0;
}
