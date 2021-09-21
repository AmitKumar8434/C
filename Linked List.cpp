#include<iostream>
#include<stdio.h>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
}; 
class Linkedlist{
	Node *head;
	public:
		Linkedlist(){
			head=NULL;
		}
		void insertbeg(int);
		void insertend(int);
		void display();
		void deletebeg();
		void deleteend();
		void deleteitem(int);
		void reverse();
		void count();
		void displayeven();
		void displayodd();
		void swap();
		int getElement(int);
};
void Linkedlist :: insertbeg(int item){
	Node *curr=new Node;
	curr->data=item;
	curr->next=head;
	head=curr;
	return;
	}
void Linkedlist :: insertend(int item){
	Node *curr=new Node;
	curr->data=item;
	curr->next=NULL;
	if(head==NULL){
		head=curr;
		return;
	}
	else{
		Node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=curr;
	}
}
void Linkedlist :: deletebeg(){
	if(head==NULL){
		cout<<"EMPTY LIST \n";
		return;
	}
	Node *temp=head;
	head=head->next;
	delete(temp);
}
void Linkedlist :: deleteend(){
	Node *temp=head,*prev;
	if (head->next==NULL){
		head=NULL;
		delete(temp);
		return;
	}
	while(temp->next != NULL){
		prev=temp;
		temp=temp->next;
	}
	prev->next = NULL;
	delete(temp);
}
void Linkedlist :: reverse(){
	Node *p,*q,*r=NULL;
	p=head;
	while(p!=NULL){
		q=p;
		p=p->next;
		q->next=r;
		r=q;
	}
	head=q;
}
void Linkedlist::display(){
	Node *temp=head;
	if(head==NULL){
		cout<<"EMPTY LIST\n";
		return;
	}
	while(temp->next != NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<temp->data<<endl;
}
void Linkedlist :: count(){
	int c=0;
	Node *temp=head;
	while(temp !=NULL){
		temp=temp->next;
		c++;
	}
	cout<<"There are "<<c<<" elements. \n";
}
void Linkedlist :: displayeven(){
	Node* temp=head;
        int i=1;
        cout<<"Even elements : ";
        while(temp->next!=NULL){

            if(i%2==0) cout<<temp->data<<" ";
            temp=temp->next;
            i++;
        }
        if(i%2==0) cout<<temp->data<<" "<<endl;
        cout<<endl;
}
void Linkedlist :: displayodd(){
        Node* temp=head;
        int i=1;
        cout<<"Odd elements : ";
        while(temp->next!=NULL){

            if(i%2!=0) cout<<temp->data<<" ";
            temp=temp->next;
            i++;
        }
        if(i%2!=0) cout<<temp->data<<" "<<endl;
        cout<<endl;  
}
void Linkedlist :: swap(){
	Node * temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        int temp1=head->data;
        head->data=temp->data;
        temp->data=temp1;
        cout<<"After Swapping : ";
        display();
        cout<<endl;
}
void Linkedlist :: deleteitem(int item){
        if(head==NULL){
            cout<<"List is Empty!"<<endl;
            return;
        }
        Node *temp=head,*prev;
        while(temp!=NULL && temp->data!=item){
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL) return;
        prev->next=temp->next;
    }
    int Linkedlist :: getElement(int pos){
        if(head==NULL) return -1;
        if(pos==0) return head->data;
        int i=0;
        Node *temp=head;
        while(temp!=NULL && i!=pos){
            temp=temp->next;
            i++;
        }
        if(temp==NULL) return -1;
        return temp->data;
    }


int main(){
	int op;
    Linkedlist L;
    int data;
    while(true){
        cout<<"-----------------------------------------------"<<endl;
        cout<<" 1 -> Insert a node at begining. 2 -> Insert a node at the end. 3 -> Display the List. 4 -> Count the number of nodes. 5 -> Display the value of all nodes at even position. 6 -> Display the value of all nodes at odd position. 7 -> Swap the value of first and last node. 8 -> Delete a node at the begining. 9 -> Delete a node at the end. 10 -> Delete an item. 11 -> Reverse the list. 12 -> Exit."<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"Enter Choice >>>> ";
        cin>>op;
        
        switch(op){
            case 1: 
                cout<<"Enter the data : ";
                cin>>data;
                L.insertbeg(data);
                break;
            case 2:
                cout<<"Enter the data : ";
                cin>>data;
                L.insertend(data);
                break;
            case 3:
                L.display();
                break;
            case 4:
                L.count();
                break;
            case 5:
                L.displayeven();
                break;
            case 6:
            L.displayodd();
                break;
            case 7:
                L.swap();
                break;
            case 8:
                L.deletebeg();
                break;
            case 9:
                L.deleteend();
                break;
            case 10:
                int item;
                cout<<"Enter the item to delete :";
                cin>>item;
                L.deleteitem(item);
                break;
            case 11:
                L.reverse();
                break;
            case 12:
                exit(0);
            default:
                cout<<"Choose an correct option !";
        }
}
}

