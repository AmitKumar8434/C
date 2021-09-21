#include<bits/stdc++.h>
using namespace std;

void dfs(int src,vector<bool> &vis,stack<int> &st,vector<int> adj[]){
	vis[src]=1;
	for(auto j:adj[src]){
		if(!vis[j]){
			dfs(j,vis,st,adj);
		}
	}
	st.push(src);
}
void revdfs(int src,vector<bool> &vis,vector<int> adj[]){
	vis[src]=1;
	cout<<src<<" ";
	for(auto j:adj[src]){
		if(!vis[j]){
			revdfs(j,vis,adj);
		}
	}
}
int main(){
	int V,E;
	cin>>V>>E;
	vector<int> adj[V];
	for(int i=0;i<E;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
	}
	vector<bool> vis(V,0);
	stack<int> st;
	for(int i=0;i<V;i++){
		if(!vis[i]){
			dfs(i,vis,st,adj);
		}
	}
	vector<int> transpose[V];
	for(int i=0;i<V;i++){
		vis[i]=0;
		for(auto j:adj[i]){
			transpose[j].push_back(i);
		}
	}
	while(!st.empty()){
		int node=st.top();
		st.pop();
		if(!vis[node]){
			cout<<"SCC: ";
			revdfs(node,vis,transpose);
			cout<<endl;
		}
	}
}
