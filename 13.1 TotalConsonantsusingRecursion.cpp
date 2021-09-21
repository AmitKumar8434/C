#include<iostream>
#include<conio.h>
using namespace std;
int isConsonant(char ch){
	ch=toupper(ch);
	return(!(ch=='A' || ch=='E' || ch =='I' || ch == 'O' || ch=='U') && ch >= 65 && ch <= 90);	
}
int totalConsonants(string str, int n) 
{ 
    if (n == 1) 
        return isConsonant(str[0]); 
  
    return totalConsonants(str, n - 1) + isConsonant(str[n-1]); 
} 
int main(void)
{
	string a;
	cout<<"Enter a String: ";
	getline(cin,a);
	cout<<"Number of Consonants: ";
	cout<<totalConsonants(a,a.length());
}
