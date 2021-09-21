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

void postfix(string s){
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
      
    cout<<pexp<< endl; 
	
}

int main(){
	string infix;
	cout<<"Enter the infix expression :"; 
	cin>>infix;
	
	postfix(infix);
	
	return 0;
}
