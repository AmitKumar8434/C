#include<bits/stdc++.h>
using namespace std;
int arr[100005],seg[4*100005];

void build(int index,int l,int r){
	if(l==r){
		seg[index]=arr[l];
		return;
	}
	int mid=(r+l)/2;
	build(2*index+1,l,mid);
	build(2*index+2,mid+1,r);
	seg[index]=max(seg[2*index+1],seg[2*index+2]);
}
int query(int index,int low,int high,int l,int r){
	if(low>=l && high <=r){
		return seg[index];
	}
	if(low>r || high <l) return INT_MIN;
	int mid=(low+high)/2;
	int left=query(2*index+1,low,mid,l,r);
	int right=query(2*index+2,mid+1,high,l,r);
	return max(left,right);
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cout<<"Enter Size of Array: ";
	int n;
	cin>>n;
	cout<<"\nEnter "<<n<<" elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	build(0,0,n-1);
	cout<<"Enter number of queries: ";
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cout<<"\nEnter range: ";
		cin>>l>>r;
		cout<<"\nMaximum Element in range:"<<query(0,0,n-1,l,r);
		cout<<endl;
	}
}
	
}
