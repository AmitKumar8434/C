#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	int n;
	cout << "Enter the size :"<<"\n";
	cin >> n;
	cout << "Enter the elements:";
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    int max=arr[0],max2=arr[0];
    for(int i=0;i<n;i++){
    	if(arr[i]>max){
    		max2=max;
    	    max=arr[i];
	
	} }
	if(max==max2)
	cout<<"Second largest number does not exist";
	else
	cout<<"second largest number is : "<<max2;
}

