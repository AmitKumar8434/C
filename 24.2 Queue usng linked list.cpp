#include<bits/stdc++.h>
#include "Linked list.cpp"
class Queue{
	Node *front,*rear;
	public:
		Queue(){
			front=rear=NULL;
		}
	void push(int);
	int pop();
	void display();
};
void Queue :: push(int item){
	Node *curr=new Node;
	curr->data=item;
	curr->next=NULL;
	if(rear==NULL){
		rear=front=curr;
		return;
	}
	else{
		rear->next=curr;
		rear=curr;
	}
}
int Queue :: pop(){
	if(front==NULL){
		cout<<"Queue is Empty \n";
		return INT_MIN;
	}
	else{
	Node *temp=front;
	front=front->next;
	int x=temp->data;
	delete temp;
	return x;
}
}
void Queue :: display(){
	if(front==NULL){
		cout<<"Queue is Empty \n";
		return;
	}
	else{
	Node*temp=front;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
}
int main(){
	Queue q1;
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
                q1.push(data);
                break;
            case 2:
                q1.pop();
                break;
            case 3:
                q1.display();
                break;
            case 4:
                exit(0);
            default:
                cout<<"Choose an correct option !";
        }
    }
}
