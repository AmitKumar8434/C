#include<iostream>
#include<stdio.h>
using namespace std;
int main(void)
{
	int x,temp,sum=0;
	cout<<"Enter a number \n";
	cin>>x;
	while(x!=0)
	{
		temp=x%10;
		sum=sum+temp;
		x=x/10;
	}
	cout<<"sum of digits is "<<sum;
	return 0;
}
