#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,n;
	cin>>s>>n;
	vector< vector <int> > arr;
	for(int i=0;i<n;i++){
        vector<int> row;
        for(int j=0;j<2;j++){
            int x;
            cin>>x;
            row.push_back(x);
        }
        arr.push_back(row);
    }
	sort(arr.begin(), arr.end()); 
	bool flag;
	for(int i=0;i<n;i++){
		flag=true;
		for(int j=0;j<1;j++){
			if(s>arr[i][0])
			s=s+arr[i][1];
		else{
		flag=false;
		break;
	}
	}
}
	if(flag==true) cout<<"YES";
    else cout<<"NO";

    return 0;
}
