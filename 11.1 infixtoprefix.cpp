#include<stdio.h>
#include<iostream>
#include "Stack.cpp"
using namespace std;

int prec(char c){ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 
string reverse(string str)  { 
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
void postfix(string ss){
	string s=reverse(ss);
	
	Stack st;
	
	int l =s.length();
	
	string pexp; 
    for(int i = 0; i < l; i++) 
    { 
      
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) 
        pexp+=s[i]; 
  
      
        else if(s[i] == '(') 
          
          st.push('('); 
          
         
        else if(s[i] == ')') 
        { 
            while(st.peek() != '(') 
            { 
                char c = st.peek(); 
                st.pop(); 
                pexp+= c; 
            } 
            if(st.peek() == '(') 
            { 
                char c = st.peek(); 
                st.pop(); 
            } 
        }   
        else{ 
            while(!st.isEmpty() && prec(s[i]) <= prec(st.peek())) 
            { 
                char c = st.peek(); 
                st.pop(); 
                pexp+= c; 
            } 
            st.push(s[i]); 
        } 
  
    } 
    
    while(!st.isEmpty()) 
    { 
        char c = st.peek(); 
        st.pop(); 
        pexp+= c; 
    } 
    string prexp;
    prexp=reverse(pexp);
	cout<<prexp<<endl;  
    
	
}
int main(){
	string infix,prefix,finalexp;
	cout<<"Enter the infix expression: ";
	cin>>infix;
	postfix(infix);
}
