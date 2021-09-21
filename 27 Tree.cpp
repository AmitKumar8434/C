#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
    Node(){
    }
    Node(int item){
        this->data=item;
        this->lchild=NULL;
        this->rchild=NULL;
    }
};

Node* newNode(int data){
    Node *node = new Node(data);
    node->lchild=NULL;
    node->rchild=NULL;
    return node;
}

    Node* insert(Node *root,int data){
        if(root==NULL) return newNode(data);
        else{
            Node *temp=root;
            Node *parent=NULL;

            while(temp!=NULL){
                parent=temp;
                if(data>temp->data) temp=temp->rchild;
                else temp=temp->lchild;
            }
            if(data>parent->data) parent->rchild=newNode(data);
            else parent->lchild=newNode(data);   
        }
        return root;
    }

    void printInorder(Node *root){
        if(root==NULL){
            return;
        }
        else{
            printInorder(root->lchild);
            cout<<root->data<<" ";
            printInorder(root->rchild);
        }
    }
    void printPreorder(Node *root){
        if(root==NULL) return;
        else{
            cout<<root->data<<" ";
            printPreorder(root->lchild);
            printPreorder(root->rchild);
        }
    }
    void printPostorder(Node *root){
        if(root==NULL) return;
        else{
            printPreorder(root->lchild);
            printPreorder(root->rchild);
            cout<<root->data<<" ";
        }
    }
    int search(Node *root,int key){
        if(root==NULL) return 0;
        else{
            Node *temp=root;
            if(temp->data==key) return 1;
            else{
                while(temp!=NULL && temp->data!=key){
                    if(temp->data<key) temp=temp->rchild;
                    else temp=temp->lchild;
                }
                if(temp!=NULL) return 1;
            }
        }
        return 0;
    }

    int totalNodes(Node *root){
        if(root==NULL) return 0;
        else return totalNodes(root->lchild)+totalNodes(root->rchild)+1;
    }

    int internalNodes(Node *root){
        if(root==NULL) return 0;
        else if(root->lchild==NULL && root->rchild==NULL) return 0;
        else return internalNodes(root->lchild)+internalNodes(root->rchild)+1;
    }

    int externalNodes(Node *root){
        if(root==NULL) return 0;
        else if(root->lchild==NULL && root->rchild==NULL) return 1;
        else return externalNodes(root->lchild)+externalNodes(root->rchild);
    }

    void smallest(Node *root){
        if(root==NULL){
          cout<<"Tree is Empty .";
          return;  
        } 
        Node *temp=root;
        while(temp->lchild!=NULL){
            temp=temp->lchild;
        }
        cout<<"Smallest Element : "<<temp->data<<endl;
    }

    void largest(Node *root){
        if(root==NULL){
          cout<<"Tree is Empty .";
          return;  
        } 
        Node *temp=root;
        while(temp->rchild!=NULL){
            temp=temp->rchild;
        }
        cout<<"Largest Element : "<<temp->data<<endl;
    }

    int height(Node *root){
        if(root==NULL) return 0;
        int lh=height(root->lchild);
        int rh=height(root->rchild);
        return (max(lh,rh)+1);
    }

    void deleteItem(Node *root,int key){
        Node *x=root;
        Node *parent=NULL;
        while(x!=NULL && x->data!=key){
            parent=x;
            if(x->data>key) x=x->lchild;
            else x=x->rchild;
        }
        if(x==NULL){
            cout<<"Element Not Present !";
            return;
        }
        else{
            if(x->lchild==NULL || x->rchild==NULL){
                Node *ptr;
                if(x->lchild==NULL) ptr=x->rchild;
                else ptr=x->lchild;

                if(parent== NULL){
                    root=ptr;
                    delete x;
                    return;
                }

                if(x==parent->lchild) parent->lchild=ptr;
                else parent->rchild=ptr;

                delete x;
                return;
            }
            else{
                Node *succ=x->lchild;
                Node *psucc=NULL;

                while(succ->lchild!=NULL){
                    psucc=succ;
                    succ=succ->lchild;
                }
                if(psucc==NULL) x->rchild=succ->rchild;
                else psucc->lchild=succ->rchild;

                delete x;
                return;
            }
        }
    }

int main(){
    Node* root=NULL; 
    int opt,data;
    cout<<" [1] Insert Element.\n [2] PreOrder Traversal.\n [3] InOrder Traversal.\n [4] PostOrder Traversal.\n [5] Find the Smallest Element.\n [6] Find the largest Element.\n [7] Delete an Element.\n [8] Count total number of Nodes.\n [9] Count total number of External Nodes.\n[10] Count total number of Internal Nodes.\n[11] Determine height of the tree.\n[12] EXIT."<<endl;
    while(true){
        cout<<"Enter Option ---> ";
        cin>>opt;
        switch(opt){
            case 1: cout<<"Enter Element :";
                    cin>>data; 
                    if(root==NULL) root=insert(root,data);
                    else insert(root,data);
                    break;
            case 2: printPreorder(root);
                    cout<<endl;
                    break;
            case 3: printInorder(root);
                    cout<<endl;
                    break;
            case 4: printPostorder(root);
                    cout<<endl;
                    break;
            case 5: smallest(root);
                    break;
            case 6: largest(root);
                    break;
            case 7: cout<<"Enter item to delete :";
                    cin>>data;
                    deleteItem(root,data);
                    break;
            case 8: cout<<"Total Nodes :"<<totalNodes(root)<<endl;
                    break;
            case 9: cout<<"External Nodes :"<<externalNodes(root)<<endl;
                    break;
            case 10:cout<<"Internal Nodes :"<<internalNodes(root)<<endl;
                    break;
            case 11:cout<<"Height : "<<height(root)<<endl;
                    break;
            case 12:exit(0);
                    break;
            default : cout<<"Please enter an correct option !";
        }
    }  
    return 0;
}
