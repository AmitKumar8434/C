#include<bits/stdc++.h>
#include "Linked list.cpp"
class Stack{
	Node *top;
	public:
		Stack(){
			top=NULL;
		}
	void push(int);
	int pop();
	void display();
	~Stack();
};
void Stack :: push(int item){
	Node *curr=new Node;
	curr->data=item;
	curr->next=top;
	top=curr;
}
int Stack :: pop(){
	if(top==NULL){
		cout<<"Stack is Empty \n";
		return INT_MIN;
	}
	Node *temp=top;
	top=top->next;
	int x=temp->data;
	delete temp;
	return x;
}
void Stack :: display(){
	if(top==NULL){
		cout<<"Stack is Empty \n";
		return;
	}
	Node*temp=top;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		
		temp=temp->next;
	}
}
Stack :: ~Stack(){
	Node *temp=top;
	while(top!=NULL){
		top=top->next;
		delete temp;
		temp=top;
	}
}
int main(){
	Stack s1;
	int n;
	int data;
	while(true){
        cout<<"-----------------------------------------------"<<endl;
        cout<<" 1 -> PUSH 2 -> POP. 3 -> DiSPLAY. 4 -> Exit."<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"Enter Choice >>>> ";
        cin>>n;
        
        switch(n){
            case 1: 
                cout<<"Enter the data : ";
                cin>>data;
                s1.push(data);
                break;
            case 2:
                s1.pop();
                break;
            case 3:
                s1.display();
                break;
            case 4:
                exit(0);
            default:
                cout<<"Choose an correct option !";
        }
    }
}
