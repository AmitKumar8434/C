#include<stdio.h>
#include<iostream>
using namespace std;
#define MAX 5
class Stack{
	int arr[MAX];
	int top;
	public:
		Stack(){
			top=-1;
		}
		int isFull(){
			if(top==MAX-1){
				return 1;
			}
			else{
				return 0;
			}
		}
		
		int isEmpty(){
			if(top==-1){
				return 1;
			}
			else{
				return 0;
			}
		}
		void push(int item){
			top++;
			arr[top]=item;
		}
		int pop(){
			int x = arr[top];
			top=top-1;
			return x;
		}
		int peek(){
			return arr[top];
		}
		
		void display(){
			for(int i=0;i<=top;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
};
