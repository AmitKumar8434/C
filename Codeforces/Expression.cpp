#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int temp=a+b+c;
	if(((a+b)*c)>temp)
	temp=((a+b)*c);
	if((a+(b*c))>temp)
	temp=(a+(b*c));
	if(((a*b)+c)>temp)
	temp=((a*b)+c);
	if((a*(b+c))>temp)
	temp=(a*(b+c));
	if((a*b*c)>temp)
	temp=a*b*c;
	cout<<temp;
}
	

