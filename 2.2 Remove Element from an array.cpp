#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter the size :"<<"\n";
	cin >> n;
	cout << "Enter the elements:";
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the Deletion Positon :"<<"\n";
	int k;
	cin>>k;
	if(n>k){
	
	k--;
	n--;
	for(int i=k;i<n;i++){
		arr[i]=arr[i+1];
	}
	cout<<"Your Array after deletion :";
	for(int i=0;i<n;i++){
		cout<<arr[i];
		cout<<"\n";
	}
}
else{
	cout<<"Index Out Of Range !";
}
	return 0;
}

