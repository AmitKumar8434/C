#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    bool lthread;
    Node* left;
    int data;
    Node* right;
    bool rthread;
};


Node* newNode(int item){
    Node* ptr=new Node();
    ptr->data=item;
    ptr->lthread=true;
    ptr->rthread=true;
    return ptr;
}

Node* inorder_succ(Node* x){
    if(x->rthread==true)
        return x->right;
    x=x->right;
    while(x->lthread!=true)
        x=x->left;
    return x;
}

void inorder_traversal(Node* root){
    if(root==NULL)
        return;
    Node* temp=root;
    while(temp->left!=NULL)
        temp=temp->left;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=inorder_succ(temp);
    }
}

Node* insert(Node* root,int key){
   if(root==NULL){
       root=newNode(key);
        root->left=NULL;
        root->right=NULL;
        return root;
   }
   Node* temp=root;
   Node* parent=NULL;
   while(temp!=NULL){
       parent=temp;
       if(temp->data==key){
           cout<<"Duplicate key!!";
           return root;
       }
       else if(key<temp->data){
           if(temp->lthread==false)
                temp=temp->left;
            else 
                break;
       }
       else{
           if(temp->rthread==false)
                temp=temp->right;
            else 
                break;
       }
   }
   Node* curr=newNode(key);
   if(key<parent->data){
       curr->left=parent->left;
       curr->right=parent;
       parent->left=curr;
        parent->lthread=false;
   }
   else{
       curr->left=parent;
       curr->right=parent->right;
       parent->right=curr;
       parent->rthread=false;
   }
   return root;
}

void printInorder(Node* root){
    if(root==NULL)
        return;
    else{
        printInorder(root->left);
        cout<<root->data<<" ";
        printInorder(root->right);
    }
}

int main(){
    Node* root=NULL;
    root=newNode(20);
    insert(root,30);
    insert(root,15);
    insert(root,5);
    insert(root,40);
    insert(root,18);
    inorder_traversal(root);
    return 0;
}
