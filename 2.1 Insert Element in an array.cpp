#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	int k,x,i,n;
	int arr[100];
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter elements in array: ";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Enter the position you want to add element in array : ";
	cin>>k;
	if(k>n)
	{
	cout<<" Position Out of range \n";
    }
    else{
	cout<<"Enter the number you want to insert : ";
	cin>>x;
	n++;
	for(i=n;i>=k;i--)
	arr[i-1]=arr[i-2];
	arr[k-1]=x;
	for(i=0;i<=n;i++){
	cout<<arr[i];
	cout<<"\n";
}}
	return 0;
}
