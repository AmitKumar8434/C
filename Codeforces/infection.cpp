#include <bits/stdc++.h>
using namespace std;
bool isFeasible(long long int mid,long long int arr[], long long int n,long long int k)
{
	long long int pos = arr[0];
	long long int elements = 1;
	for (long long int i = 1; i < n; i++) {
		if (arr[i] - pos >= mid) {
			pos = arr[i];
			elements++;
			if (elements == k)
				return true;
		}
	}
	return 0;
}
int largestMinDist(long long int arr[], long long int n,long long int k)
{
	sort(arr, arr + n);
	long long int res = -1;
	long long int left = 1, right = arr[n - 1] - arr[0];
	while (left < right) {
		long long int mid = (left + right) / 2;
		if (isFeasible(mid, arr, n, k)) {
			res = max(res, mid);
			left = mid + 1;
		}
		else
			right = mid;
	}

	return res;
}
int main()
{    
    long long int t;
    cin>>t;
    while(t--){
    	long long int n,c;
    	cin>>n>>c;
    	long long int arr[n];
    	for(long long int i=0;i<n;i++){
    		cin>>arr[i];
		}
	cout << largestMinDist(arr, n, c);
    }
	return 0;
}

