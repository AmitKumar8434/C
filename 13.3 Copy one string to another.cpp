#include<iostream>
#include<conio.h>
using namespace std;
void stringCopy(char str1[],char str2[],int i ) 
{  
    str2[i]=str1[i];
    if(str1[i]=='\0') return;
    stringCopy(str1,str2,i+1);
} 
int main(void)
{
	char str1[20],str2[20];
	cout<<"Enter a String: ";
	cin>>str1;
	stringCopy(str1,str2,0);
	cout<<"Original string: "<<str1<<endl;
	cout<<"Copied string :"<<str2<<endl;
}
