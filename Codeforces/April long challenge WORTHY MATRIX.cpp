#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int m,n,k;
		cin>>n>>m>>k;
		long long int count=0;
		long long int arr[n][m],a[n+1][m+1]={0};
		for(long long int i=0;i<n;i++){
			for(long long int j=0;j<m;j++){
				cin>>arr[i][j];
				if(arr[i][j]>=k){
					count++;
				}
			}	
		}
		for(long long int i=0;i<n+1;i++){
			a[i][0]=0;
		}
		for(long long int i=0;i<m+1;i++){
			a[0][i]=0;
		}
		for(long long int i=1;i<=m;i++){
			a[1][i]=arr[0][i-1];
		}
		for(long long int i=2;i<=n;i++){
			for(long long int j=1;j<=m;j++){
				a[i][j]=arr[i-1][j-1]+a[i-1][j];
			}
		}
		for(long long int i=1;i<=n;i++){
			for(long long int j=2;j<=m;j++){
				a[i][j]+=a[i][j-1];
			}
		}
	long long int minm=min(n,m);
	long long int od=2;
	long long int sum=0;
	long long int ti,tj;
	while(od<=minm){
		for(long long int i=od;i<=n;i++){
			sum=0;
			for(long long int j=od;j<=m;j++){
				sum=0;
				double avg=0.0;
				ti=i-od+1;
				tj=j-od+1;
			sum=a[i][j]-a[ti-1][j]-a[i][tj-1]+a[ti-1][tj-1];
			avg=(sum*1.0)/(od*od*1.0);
			if(avg>=k){
				count+=m-j+1;
				break;
			}
		}
		}
		od++;
	}	
	cout<<count<<endl;	
	}
	return 0;
}
  //1 2 3 4
 // 4 5 6 7
 // 7 8 9 10
