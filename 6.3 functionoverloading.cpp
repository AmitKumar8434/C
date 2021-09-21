#include<iostream>
#include<conio.h>
using namespace std;
int volume(int x)
{
	cout<<"\n Volume of cube is "<<x*x*x;
}
int volume(int x,int y){
	cout<<"\n Volume of cylinder is "<<3.14*x*x*y;
}
int volume(int x,int y,int z){
	cout<<"\n Volume of rectangular box  is "<<x*y*z;
}
int main(void)
{
	int a,r,h,l,b,w,n;
	cout<<"Press 1,2,3 to find volume of cube,cylinder,rectangular box respectively \n ";
	cin>>n;
	if(n==1)
	{
		cout<<"Enter length of side of cube";
		cin>>a;
		volume(a);
	}
	else if (n==2)
	{
		cout<<"Enter radius and height of cylinder : ";
		cin>>r>>h;
		volume(r,h);
	}
	else if(n==3)
	{
		cout<<" Enter length ,breadth and height of rectangular box :";
		cin>>l>>b>>w;
		volume(l,b,w);
	}
	else{
		cout<<"Invalid input";
	}
}
