#include<bits/stdc++.h>
#include "Linked list.cpp"
class CLL{
	Node *last;
	public:
		CLL(){last=NULL;}
	void addbeg(int);
	void addend(int);
	void display();
	void deletebeg();
	void deleteend();
};
void CLL :: addbeg(int item){
	Node *curr=new Node;
	curr->data=item;
	if(last==NULL){
		last=curr;
		last->next=curr;
	}
	curr->next=last->next;
	last->next=curr;
}
void CLL :: addend(int item){
	Node *curr=new Node;
	curr->data=item;
	if(last==NULL){
		last=curr;
		last->next=curr;
	}
	curr->next=last->next;
	last->next=curr;
	last=curr;
}
void CLL :: deletebeg(){
	if(last==NULL){
		cout<<"List is Empty \n";
		return;
	}
	if(last==last->next){
		delete last;
		last=NULL;
		return;
	}
	Node *temp=last->next;
	last->next=temp->next;
	delete temp;
	return;
}
void CLL :: deleteend(){
	if(last==NULL){
		cout<<"List is Empty \n";
		return;
	}
	if(last==last->next){
		delete last;
		last=NULL;
		return;
	}
	Node *temp=last->next;
	while(temp->next!=last){
		temp=temp->next;
	}
	temp->next=last->next;;
	delete last;
	last=temp;
	return;
}
void CLL :: display(){
	if(last==NULL){
		cout<<"List is Empty \n";
		return;
	}
	Node*temp=last->next;
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=last->next);
}
int main(){
	CLL c;
	int n;
	int data;
	while(true){
        cout<<"-----------------------------------------------"<<endl;
        cout<<" 1 -> ADD at Begining  2 -> ADD at End. 3 -> DELETE from Begining. 4 -> DELETE from End. 5 ->  DiSPLAY. 6 -> Exit."<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"Enter Choice >>>> ";
        cin>>n;
        
        switch(n){
            case 1: 
                cout<<"Enter the data : ";
                cin>>data;
                c.addbeg(data);
                break;
            case 2: 
                cout<<"Enter the data : ";
                cin>>data;
                c.addend(data);
                break;
            case 3:
                c.deletebeg();
                break;
            case 4:
                c.deleteend();
                break;
            case 5:
                c.display();
                break;
            case 6:
                exit(0);
            default:
                cout<<"Choose an correct option !";
        }
    }
}
