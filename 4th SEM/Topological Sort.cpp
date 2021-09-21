#include<bits/stdc++.h>
using namespace std;
void findTopoSort(int src,vector<int> adj[],vector<bool> &vis,stack<int> &st){
	vis[src]=1;
	for(auto i: adj[src]){
		if(!vis[i]){
			vis[i]=1;
			findTopoSort(i,adj,vis,st);
		}
	}
	st.push(src);
}
vector<int> topoSortDFS(int V,vector<int> adj[]){
	vector<bool> vis(V,0);
	stack<int> st;
	for(int i=0;i<V;i++){
		if(!vis[i]){
			findTopoSort(i,adj,vis,st);
		}
	}
	vector<int> ans;
	while(!st.empty()){
		ans.push_back(st.top());
		st.pop();
	}
	return ans;
}

vector<int> topoSort(int V,vector<int> adj[]){
	vector<int> indeg(V,0);
	for(int i=0;i<V;i++){
		for(int j: adj[i]){
			indeg[j]++;
		}
	}
	queue<int> q;
	for(int i=0;i<V;i++){
		if(indeg[i]==0){
			q.push(i);
		}
	}
	vector<int> ans;
	while(!q.empty()){
		int i=q.front();
		q.pop();
		ans.push_back(i);
		for(auto j:adj[i]){
			indeg[j]--;
			if(indeg[j]==0){
				q.push(j);
			}
		}
	}
	return ans;
}
int main(){
	int V,E;
	cin>>V>>E;
	//Directed Acyclic Graph
	vector<int> adj[V];
	for(int i=0;i<E;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
	}
	vector<int> ans=topoSort(V,adj);
	for(int i=0;i<V;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	vector<int> ans1=topoSortDFS(V,adj);
	for(int i=0;i<V;i++){
		cout<<ans1[i]<<" ";
	}
}
