#include<bits/stdc++.h>
using namespace std;


int PrimMST(int V,vector<vector<int>> adj[]){
	vector<vector<int>> adjM(V,vector<int> (V,0));
	for(int i=0;i<V;i++){
		for(int j=0;j<adj[i].size();j++){
			adjM[i][adj[i][j][0]]=adj[i][j][1];
		}
	}
	vector<int> key(V,INT_MAX);
	vector<bool> mst(V,0);
	vector<int> parent(V,-1);
	key[0]=0;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	pq.push({0,0});
	while(!pq.empty()){
		int u=pq.top().second;
		pq.pop();
		mst[u]=1;
		for(int v=0;v<V;v++){
			if(adjM[u][v]!=0){
				if(mst[v]==0 && (key[v] > adjM[u][v])){
					key[v]=adjM[u][v];
					parent[v]=u;
					pq.push({key[v],v});
				}
			}
		}
	} 
	int cost=0;
	for(int i=0;i<V;i++) cost+=key[i];
	return cost;
}


int main(){
	int V,E;
	cin>>V>>E;
	vector<vector<int>> adj[V];
	for(int i=0;i<E;i++){
		int u,v,w;
		cin>>u>>v>>w;
		vector<int> t1,t2;
		t1.push_back(v);
		t1.push_back(w);
		adj[u].push_back(t1);
		t2.push_back(u);
		t2.push_back(w);
		adj[v].push_back(t2);
	}
	cout<<"Minimum spanning Tree: "<<PrimMST(V,adj);
	return 0;
}
