#include<iostream>
#include<conio.h>
#define MAX 5
using namespace std;
int arr[MAX];
int top; 
class Stack{
	public:
		Stack(){
			top=-1;
		}
		int isFull(){
			if(top==(MAX-1))
			return 1;
			else
			return 0;
		}
		int isEmpty(){
			if(top==-1)
			return 1;
			else
			return 0;
		}
		void push(int item){
			if(!isFull()){
				top++;
				arr[top]=item;
			}
			else{
				cout<<"Stack is Full \n";
			}
		}
		int pop(){
			if(!isEmpty()){
				int x=arr[top];
				top--;
				return x;
			}
			else{
				cout<<"Stack is Empty";
			}
			
		}
		int peek(int pos){
			if(!isEmpty()){
				return arr[top];
			}
			else
			cout<<"Stack overflow  \n";
		}
		
	
};
int main(){
	Stack s1;
	while(1){
		cout<<"PRESS  1 for PUSH, "<<"2 for POP,  "<<"3 for DISPLAY ";
		int ch;
		cin>>ch;
		switch(ch){
			case 1:
				if(!s1.isFull()){
					cout<<"Enter item : ";
					int item;
					cin>>item;
					s1.push(item);
					break;
				}
				else{
				cout<<"Stack is full \n";
				break;
		     	}
			case 2:
				if(!s1.isEmpty()){
					int x=s1.pop();
					break;
				}
				else{
					cout<<"Stack is Empty \n";
					break;
				}
			case 3:
				if(!s1.isEmpty()){
					for(int i=top;i>=0;i--){
						cout<<arr[i]<<" \n";
					}
				}
					else{
						cout<<"Stack is Empty \n";
					}
				}
				
				}
		}
