#include<iostream>
#include<conio.h>
using namespace std;
int TOH(int n,char src,char aux,char dest,int &c){
	c++;
	if(n==1){
		printf("\n Move disk 1 from %c to %c ",src,dest);
		return 0;
	}
	else{
		TOH(n-1,src,dest,aux,c);
		printf("\n Move disk %d from %c to %c",n,src,dest);
		TOH(n-1,aux,src,dest,c);
	}
}
int main(){
	int n;
	cout<<"Enter number of disk ";
	cin>>n;
	char src='S',aux='A',dest='D';
	int c=0;
	TOH(n,src,aux,dest,c);
	cout<<" \n No. of STEPS :"<<c;
	
}
