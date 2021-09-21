#include<bits/stdc++.h>
using namespace std;
void dfs(int src,int parent,vector<bool> &vis,vector<int> &tin,vector<int> &low,int &timer,vector<int> adj[]){
	vis[src]=1;
	tin[src]=low[src]=timer++;
	for(auto it:adj[src]){
		if(it!=parent){
			if(!vis[it]){
				dfs(it,src,vis,tin,low,timer,adj);
				low[src]=min(low[src],low[it]);
				if(low[it]>tin[src]){
					cout<<src<<" "<<it<<endl;
				}
			}
			else{
				low[src]=min(low[src],tin[it]);
			}
		}
	}
}

void BridgesInGraph(int V,vector<int> adj[]){
	vector<int> tin(V,-1);
	vector<int> low(V,-1);
	vector<bool> vis(V,0);
	int timer=0;
	for(int i=0;i<V;i++){
		if(!vis[i]){
			dfs(i,-1,vis,tin,low,timer,adj);
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
		adj[v].push_back(u);
	}
	BridgesInGraph(V,adj );
}
