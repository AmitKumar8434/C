#include <iostream>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if((b/m)<a){
    	int r=n%m;
    	int p=((((n-r)/m)*b) + (r*a));
    	int q=((n/m)+1)*b;
    	cout<<min(p,q);
	}
	else{
		cout<<a*n;
	}
}
