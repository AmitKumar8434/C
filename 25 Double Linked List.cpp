#include<iostream>
using namespace std;

struct node{
    public:
	    int data;
	    struct node* next;
        struct node* prev;
};

class dll{
    node *head;
    public:
    dll(){
        head=NULL;
    }
    void InsertBeg(int);
    void InsertEnd(int);
    void InsertBefore(int,int);
    void InsertAfter(int,int);
    void display();
    void delBeg();
    void delEnd();
};

void dll::InsertBeg(int item){
    node *curr=new node;
    curr->prev=NULL;
    curr->data=item;
    curr->next=head;

    if(head!=NULL){
        head->prev=curr;
        }
    head=curr;
    return;
}

void dll::InsertEnd(int item){
    node *curr=new node;
    curr->data=item;
    curr->next=NULL;
    if(head==NULL){
        curr->prev=NULL;
        head=curr;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=curr;
    curr->prev=temp;
    return;
}
void dll::InsertBefore(int data,int before){
    node *curr = new node();
    curr->data=data;

    if(head->data==before){
        InsertBeg(data);
        return;
    }

    node *temp=head;
    while(temp!=NULL && temp->data!=before){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Element not Present."<<endl;
        return;
    }
    curr->prev=temp->prev;
    curr->next=temp;
    temp->prev->next=curr;
    temp->prev=curr;
    return;
}

void dll:: InsertAfter(int data,int after){
    node *curr=new node();
    curr->data=data;
    if(head==NULL){
        InsertBeg(data);
        return;
    }
    node *temp=head;
    while(temp!=NULL && temp->data!=after){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Element not Present."<<endl;
        return;
    }
    if(temp->next==NULL){
        InsertEnd(data);
        return;
    }

    curr->prev=temp->next->prev;
    curr->next=temp->next;
    temp->next->prev=curr;
    temp->next=curr;
    return;
}

void dll::display(){
    if(head==NULL){
        cout<<"List is empty: ";
        return;
    }
    cout<<"The elements in list are :";
    node *temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    return;
}

void dll::delBeg(){
    if(head==NULL){
        cout<<"List is empty ";
        return;
    }
    node *temp=head;
    head=head->next;
    if(head!=NULL){
        head->prev=NULL;
    }
    cout<<temp->data <<" is deleted"<<endl;
    delete temp;
    return;
}

void dll::delEnd(){
   if(head==NULL){
        cout<<"List is empty ";
        return;
    }
    node *temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    cout<<temp->data<<" is deleted"<<endl;
    if(temp->prev==NULL){
        delete temp;
        head=NULL;
        return;
    }
    temp->prev->next=NULL;
    delete temp;
    return;
}

int main(){
    int ch;
    dll c1;
    int data;
    while(true){
        cout<<"*******"<<endl;
        cout<<" 1: Insert an element at the beginning\n 2: Insert an element at the end\n 3: Display the list\n 4: Delete an element from beginning\n 5: Delete an element from end\n 6: Insert Before\n 7: Insert After\n 8:EXIT"<<endl;
        cout<<"*******"<<endl;
        cout<<"Enter choice ";
        cin>>ch;
        switch(ch){
            case 1:
                int n;
                cout<<"Enter data: ";
                cin>>n;
                c1.InsertBeg(n);
                cout<<endl;
                break;
            case 2:
                int n2;
                cout<<"Enter data: ";
                cin>>n2;
                c1.InsertEnd(n2);
                cout<<endl;
                break;
            case 3:
                c1.display();
                cout<<endl;
                break;
            case 4:
                c1.delBeg();
                cout<<endl;
                break;
            case 5:
                c1.delEnd();
                cout<<endl;
                break;
            case 6:
                cout<<"Enter data :";
                cin>>data;
                cout<<"Insert Before :";
                int bef;
                cin>>bef;
                c1.InsertBefore(data,bef);
                break;
            case 7:
                cout<<"Enter data :";
                cin>>data;
                cout<<"Insert After :";
                int aft;
                cin>>aft;
                c1.InsertAfter(data,aft);
                break;
            case 8:
                cout<<endl;
				exit(0);
				break;
            default:
                cout<<"Choose a correct option !";
                cout<<endl;
                break;

        }
    }
}
