#include<bits/stdc++.h>
using namespace std;
struct TrieNode{
	unordered_map<char,TrieNode*> child;
	bool endOfWord;
};
TrieNode* getNewTrieNode(){
	TrieNode* root=new TrieNode;
	root->endOfWord=false;
	return root;
}
void insertTrie(TrieNode* &root,string word){
	if(root==NULL){
		root=getNewTrieNode();
	   }
		TrieNode* curr=root;
		int i=0;
		int n=word.length();
		while(i<n){
			if(curr->child.find(word[i]) == curr->child.end()){
				curr->child[word[i]]=getNewTrieNode();
			}
			curr=curr->child[word[i]];
			i++;
		}
		curr->endOfWord=true;
	}
bool search(TrieNode* root,string str){
	if(root==NULL) return false;
	TrieNode* curr=root;
	int i=0,n=str.length();
	while(i<n){
		curr=curr->child[str[i]];
		if(curr==NULL) return false;
		i++;
	}
	return curr->endOfWord;
}
int main(){
     TrieNode* root=NULL;
     insertTrie(root,"abc");
     insertTrie(root,"def");
     insertTrie(root, "hello");
     insertTrie(root, "helloworld");
     cout<<search(root,"helloworld");
}
