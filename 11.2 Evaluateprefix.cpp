#include<stdio.h>
#include<iostream>
#include "Stack.cpp"
using namespace std;
string reverse(string str)  
{ 
string sr;
char k;
Stack s1;
 int l=str.length();
 for(int i=0;i<l;i++){
 	s1.push(str[i]);
 }
 for(int i=0;i<l;i++){
 	k=s1.pop();
 	if(k=='(')
 	sr=sr+')';
 	else if(k==')')
 	sr=sr+'(';
 	else
 	sr=sr+k;
 }
 return sr;
}
int isDigit(char c){
	if(c>='0' && c<='9'){
		return 1;
	}
	else{
		return 0;
	}
}

int evaluate(string ss){
	string s=reverse(ss);
	
	Stack st;
	int l =s.length();
	for(int i=0;i<l;i++){
		if(isDigit(s[i])){
			st.push(s[i]-'0');
		}
		else{
			int b =st.pop();
			int a =st.pop();
			switch(s[i]){
				case '+': st.push(a+b); break;
				case '-': st.push(a-b); break;
				case '*': st.push(a*b); break;
				case '/': st.push(a/b); break;
				case '^': st.push(a^b); break;
			}
		}
		
	}	
	return st.pop();
}

int main(){
	string exp;
	cout<<"Enter the Expression:";
	cin>>exp;
	int res = evaluate(exp);
	cout<<"RESULT :"<<res;
}
