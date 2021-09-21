#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n){
	if(n==0 || n==1)
	return 1;
	else
	return n*fact(n-1);
}
int main(void)
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Factorial is :"<<fact(n);
}
