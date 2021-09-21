// CPP program to find the k-th largest sum
// of subarray
#include <bits/stdc++.h>
using namespace std;

// function to calculate kth largest element
// in contiguous subarray sum
int kthLargestSum(int arr[], int n, int k)
{
   int pre[n];
   pre[0]=arr[0];
   pq.push(arr[0]);
   priority_queue<int,vector<int>,greater<int>> pq;
   for(int i=1;i<n;i++){
   	pre[i]=pre[i-1]+arr[i];
   	if(pq.size()<k) pq.push(arr[i]);

}

// Driver program to test above function
int main()
{
	int a[] = { 10, -10, 20, -40 };
	int n = sizeof(a) / sizeof(a[0]);
	int k = 6;
	cout << kthLargestSum(a, n, k);
	return 0;
}

