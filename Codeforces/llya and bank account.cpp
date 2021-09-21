#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<0){
    	int ones=-1*(n%10);
    	int k=n/10;
    	int tens=-1*(k%10);
    	if(ones >= tens){
    		n=n/10;
    		cout<<n;
		}
		else{
			k=k/10;
			k=k*10+((n%10));
			cout<<k;
		}
	}
	else{
		cout<<n;
	}
}
