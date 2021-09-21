#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *lchild;
    int data;
    int height;
    Node *rchild;
};
Node* newNode(int data){
    Node* ptr = new Node();
    ptr->data=data;
    ptr->rchild=NULL;
    ptr->lchild=NULL;
    ptr->height=1;

    return ptr;
}
int getHeight(Node* x){
    if(x==NULL) return 0;
    else return x->height;
}
int getBalance(Node *x){
    if(x==NULL) return 0;
    else return (getHeight(x->lchild)-getHeight(x->rchild));
}
Node* rotateLeft(Node *x){
    Node *y=x->rchild;
    Node *temp=y->lchild;
    y->lchild=x;
    x->rchild=temp;
    x->height=max(getHeight(x->lchild),getHeight(x->rchild));
    y->height=max(getHeight(y->lchild),getHeight(y->rchild));
    return y;
}
Node* rotateRight(Node *x){
    Node *y=x->lchild;
    Node *temp=y->rchild;
    y->rchild=x;
    x->lchild=temp;
    x->height=max(getHeight(x->lchild),getHeight(x->rchild))+1;
    y->height=max(getHeight(y->lchild),getHeight(y->rchild))+1;
    return y;
}
Node* insert(Node *root,int key){
    if(root==NULL) return newNode(key);

    if(key<root->data) root->lchild=insert(root->lchild,key);
    else if(key>root->data) root->rchild=insert(root->rchild,key);
    else return root;

    int bf=getBalance(root);

    if(bf<-1 && key>root->rchild->data) return rotateLeft(root);
    if(bf<-1 && key<root->rchild->data){
        root->rchild=rotateRight(root);
        return rotateLeft(root);
    }
    if(bf>1 && key<root->rchild->data) return rotateRight(root);
    if(bf>1 && key>root->rchild->data){
        root->lchild=rotateLeft(root);
        return rotateRight(root);
    }
    return root;
}

void printPreorder(Node *root){
        if(root==NULL) return;
        else{
            cout<<root->data<<" ";
            printPreorder(root->lchild);
            printPreorder(root->rchild);
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
Node * minValueNode(Node* node){  
    Node* current = node;  
    while (current->lchild != NULL)  
        current = current->lchild;  
    return current;  
}

Node* deleteNode(Node* root, int key)  
{   
    if (root == NULL) return root; 
    if ( key < root->data ) root->lchild = deleteNode(root->lchild, key);  
    else if( key > root->data ) root->rchild = deleteNode(root->rchild, key);   
    else{  
        if((root->lchild == NULL) || (root->rchild == NULL)){  
            Node *temp = root->lchild ?root->lchild:root->rchild;   
            if (temp == NULL){  
                temp = root;  
                root = NULL;  
            }  
            else *root = *temp; 
            delete temp;  
        }  
        else{  
            Node* temp = minValueNode(root->rchild); 
            root->data = temp->data;   
            root->rchild = deleteNode(root->rchild,temp->data);  
        }  
    }   
    if (root == NULL)  
    return root;  
    root->height = 1 + max(getHeight(root->lchild), getHeight(root->rchild));  
    int balance = getBalance(root);  
    if (balance > 1 && getBalance(root->lchild) >= 0)  return rotateRight(root); 
    if (balance > 1 && getBalance(root->lchild) < 0){  
        root->lchild = rotateLeft(root->lchild);  
        return rotateRight(root);  
    }   
    if (balance < -1 && getBalance(root->rchild) <= 0) return rotateLeft(root);    
    if(balance < -1 && getBalance(root->rchild) > 0){  
        root->rchild = rotateRight(root->rchild);  
        return rotateLeft(root);  
    }
    return root;  
}  
int height(Node *root){
    if(root==NULL) return 0;
    int lh=height(root->lchild);
    int rh=height(root->rchild);
    return (max(lh,rh)+1);
}

int main(){
    Node* root=NULL; 
    int opt,data;
    cout<<" [1] Insert Element.\n [2] PreOrder Traversal.\n [3] Search an Item.\n [4] Delete an Item.\n [5] Determine the height of the tree.\n [6] EXIT."<<endl;
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
            case 3: cout<<"Enter element to search :";
                    cin>>data;
                    if(search(root,data)==1) cout<<"Item Found !";
                    else cout<<"Item not Present !";
                    cout<<endl;
                    break;
            case 4: cout<<"Enter element to delete :";
                    cin>>data;
                    deleteNode(root,data);
                    break;
            case 5: cout<<"Height : "<<height(root)<<endl;
                    break;
            case 6:exit(0);
                    break;
            default : cout<<"Please enter an correct option !";
        }
    }  
    return 0;
}
