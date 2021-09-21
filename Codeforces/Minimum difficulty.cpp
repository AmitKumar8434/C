#include<bits/stdc++.h>
using namespace std;
int maxdifficulty(vector<int> array,int size){
	int max=array[1]-array[0];
	for(int i=0;i<size-1;i++){
		if(max<(array[i+1]-array[i]))
		max=(array[i+1]-array[i]);
	}
	return max;
}
int main(){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
          cin>>arr[i];
      if(n==3){
      cout<<arr[2]-arr[0];
    }
      else{
      	int mxd=INT_MAX;
      for(int j=1;j<n-1;j++){
      	vector<int> A;
      	for(int k=0;k<n;k++){
      		if(k==j){
			  }
			else
			A.push_back(arr[k]);
		  }
		int min=maxdifficulty(A,n-1);
		if(mxd>min)
		mxd=min;
	}
	cout<<mxd<<endl;
    }
     return 0; 
}
