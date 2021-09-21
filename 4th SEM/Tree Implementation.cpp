#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val){
    	data=val;
    	left=NULL;
    	right=NULL;
	}
};
Node *insertBST(Node *root,int val){
	if(root==NULL){
		return new Node(val);
	}
	if(val<=root->data){
		root->left=insertBST(root->left,val);
	}
	else{
			root->right=insertBST(root->right,val);
	}
	return root;
}
Node* searchBST(Node* root,int key){
	if(root==NULL){
		return NULL;
	}
	if(root->data== key){
		return root;
	}
	if(root->data> key){
		return searchBST(root->left,key);
	}
	return searchBST(root->right,key);
}
int findHeight(Node *root){
     if(root==NULL){
     	return -1;
	 }
	 return max(findHeight(root->left) ,findHeight(root->right))+1;
}
Node* findMin(Node* root){
	if(root->left==NULL){
		return root;
	}
	return findMin(root->left);
} 
void inorder(Node *root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void preorder(Node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
	return;
}
void postorder(Node* root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	return;
}
void levelorder(Node* root){
  if(root==NULL) return;
  queue<Node*> q;
  q.push(root);
  while(!q.empty()){
  	Node * curr=q.front();
  	cout<<curr->data<<" ";
  	if(curr->left!=NULL)
  	 q.push(curr->left);
  	 if(curr->right!=NULL)
  	q.push(curr->right);
  	q.pop();
  }
}

Node* deleteBST(Node* root,int data){
	if(root==NULL) return root;
	else if(data < root->data){
		root->left=deleteBST(root->left,data);
	}
	else if(data > root->data){
		root->right=deleteBST(root->right,data);
	}
	else{
		//case:1 No child
		if(root->left==NULL && root->right==NULL){
			delete root;
			root=NULL;
		}
		//case 2:1 child
		else if(root->left==NULL){
			Node *temp=root;
			root=root->right;
			delete temp;
		}
		else if(root->right==NULL){
			Node *temp=root;
			root=root->left;
			delete temp;
		}
		//case:3: two child
		else{
			Node *temp=findMin(root->right);
			root->data=temp->data;
			root->right=deleteBST(root->right,temp->data);
		}
	}
		return root;
	
}
Node* getsuccessor(Node* root,int data){
	Node* curr=searchBST(root,data);
	if(curr==NULL) return NULL;
	else if(curr->right!=NULL){
		return findMin(curr->right);
	}
	else{
		Node* ancestor=root;
		Node* successor=NULL;
		while(ancestor!=curr){
			if(curr->data<ancestor->data){
				successor=ancestor;
				ancestor=ancestor->left;
			}
			else{
				ancestor=ancestor->right;
			}
		}
		return successor;
	}	
}	
int main(){
	Node* root=NULL;
	root=insertBST(root,6);
	insertBST(root,4);
	insertBST(root,10);
	insertBST(root,2);
	insertBST(root,5);
	insertBST(root,7);
	insertBST(root,11);
	insertBST(root,1);
	insertBST(root,3);
	insertBST(root,9);
	insertBST(root,8);
	deleteBST(root,11);
	Node* k=getsuccessor(root,6);
	cout<<"Successor: "<<k->data<<endl;
	if(searchBST(root,2)==NULL) 
	cout<<"Key doesn't Exist"<<endl;
	else cout<<"Key Exist"<<endl;
	cout<<"\nHeight="<<findHeight(root)<<endl;
	cout<<"Inorder traversal :\n";
	inorder(root); cout<<"\n";
		cout<<"Preorder traversal :\n";
	preorder(root); cout<<"\n";
		cout<<"Postorder traversal :\n";
	postorder(root); cout<<"\n";
		cout<<"Levelorder traversal :\n";
	levelorder(root); cout<<"\n";
	return 0;
    
}
