#include<bits/stdc++.h>
using namespace std;
int getIndex(vector<int> arr,int b,int n){
	for(int j=0;j<n;j++){
		if (arr[j]==b){
			return j;
			break;
		}
	}
	
}
int main(){
	long long int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		vector<int> w;
		vector<int> l;
		vector<int> pos;
		vector<int> s;
		int count=0;
		for(int i=0;i<n;i++){
		    int x;
			cin>>x;
			w.push_back(x);
		}
		for(int i=0;i<n;i++){
		    int x;
			cin>>x;
			l.push_back(x);
		}
		for(int k=0;k<n;k++){
		    pos.push_back(k);
		}
		for(int i=0;i<n;i++){
			s.push_back(w[i]);
		}
		sort(s.begin(),s.end());
		for(int j=1;j<n;j++){
			int index=getIndex(w,s[j],n);
			int p=pos[getIndex(w,s[j-1],n)];
			int c=index;
			while(c<=p){
				c+=l[index];
				pos[index]=c;
				count++;
			}
		}
		cout<<count<<endl;	
	}
	return 0;
}

