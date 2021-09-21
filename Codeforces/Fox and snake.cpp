#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<string> s1;
	vector<string> s2;
	vector<string> s3;
	for(int i=0;i<m;i++)
	    s1.push_back("#");
	for(int i=0;i<m;i++){
		if(i==(m-1))
	    s2.push_back("#");
	    else
	    s2.push_back(".");
	}
	for(int i=0;i<m;i++){
		if(i==0)
	    s3.push_back("#");
	    else
	    s3.push_back(".");
	}
	int k=0;
	for(int i=0;i<n;i++){
		if((i%2)==0){
		for(int j=0;j<m;j++)
		cout<<s1[j];
	   }
	   else{
	   	  if(k==0){
	   	  	for(int j=0;j<m;j++)
	         	cout<<s2[j];
	        k=1;
			 }
			else{
			for(int j=0;j<m;j++)
	         	cout<<s3[j];
	        k=0;	
			}
	   }
	   cout<<endl;
	}
	
}

