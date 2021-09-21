#include<bits/stdc++.h>
#define size 7
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

Node* table[size]={NULL};

Node* newNode(int data){
    Node* node = new Node();
    node->data=data;
    node->next=NULL;
    return node;
}
int hashing(int key){
    return key%size;
}
void insert(int data){
    int indx=hashing(data);

    if(table[indx]==NULL){
        table[indx]=newNode(data);
        return;
    }
    Node* temp= table[indx];
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode(data);
    return;
}
void del(int data){
    int indx=hashing(data);
    if(table[indx]==NULL){
        cout<<"Item Not Found !"<<endl;
        return;
    }
    if(table[indx]->data==data){
        table[indx]=table[indx]->next;
        return;
    }
    Node* temp=table[indx];
    Node* prev;
    while(temp!=NULL && temp->data!=data){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL) {
        cout<<"Item Not Found !"<<endl;
        return;
    }
    prev->next=temp->next;
    delete temp;
    return;
}
void search(int data){
    int indx=hashing(data);
    if(table[indx]->data==data){
        cout<<"Item Found !"<<endl;
        return;
    }
    Node* temp=table[indx];
    while(temp!=NULL && temp->data!=data){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Item Not Found !"<<endl;
        return;
    }
    cout<<"Item Found !"<<endl;
    return;
}
void display(){
    for(int i=0;i<size;i++){
        Node* temp=table[i];
        cout<<i<<" ";
        while(temp!=NULL){
            cout<<" -> "<<temp->data;
            temp=temp->next;
        }
        cout<<endl;
    }
}
int main(){
    int op;
    while(true){
        cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
        cout<<"[1] Insert\n[2] Delete\n[3] Search\n[4] Display\n[5] Exit\n";
        cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
        cout<<"Enter Operation :";
        cin>>op;
        int data;
        switch (op){
        case 1: cout<<"Enter data to insert : ";
                cin>>data;
                insert(data);
                break;
        case 2: cout<<"Enter data to delete : "; 
                cin>>data;
                del(data);
                break;
        case 3: cout<<"Enter data to search :";
                cin>>data;
                search(data);
                break;
        case 4: display();
                break;
        case 5: exit(0);

        default: cout<<"Please Choose an Correct Option !";
            break;
        }
        
    }
    return 0;
}
