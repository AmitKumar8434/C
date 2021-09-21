#include<bits/stdc++.h>
using namespace std;
int DecimaltoBinary(int n){
	if(n==0) return 0;
	return n%2 +10*DecimaltoBinary(n/2);
}
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<< n<<" in binary is: "<<DecimaltoBinary(n);
	return 0;
}
