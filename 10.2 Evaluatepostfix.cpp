#include<stdio.h>
#include<iostream>
#include "Stack.cpp"
using namespace std;

int isDigit(char c){
	if(c>='0' && c<='9'){
		return 1;
	}
	else{
		return 0;
	}
}

int evaluate(string s){
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
