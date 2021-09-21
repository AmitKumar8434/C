#include<iostream>
#include<conio.h>
using namespace std;
int isUpper(char ch){
	return((ch >= 65 && ch <= 90));	
}
char Firstuppercase(string str, int n=0) 
{  
    if (str[n]=='\0') return 0; 
    if(isUpper(str[n])) return str[n];
    return Firstuppercase(str,n+1); 
} 
int main(void)
{
	string a;
	cout<<"Enter a String: ";
	cin>>a;
	cout<<"First upper case letter : ";
	char c=Firstuppercase(a);
	cout<<c;
}
