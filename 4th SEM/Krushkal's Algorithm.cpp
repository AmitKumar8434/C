#include<bits/stdc++.h>
using namespace std;
struct node{
	int u;
	int v;
	int wt;
	node(int first,int second,int weight){
		u=first;
		v=second;
		wt=weight;
	}
};
bool comp(node a,node b){
	return a.wt < b.wt;
}
int findPar(int u,vector<int> &parent){
	if(u==parent[u]) return u;
	return parent[u]=findPar(parent[u],parent);
}
void unionn(int u,int v,vector<int> & parent,vector<int> & rank){
	u=findPar(u,parent);
	v=findPar(v,parent);
	if(rank[u]<rank[v]){
		parent[u]=v;
	}
	else if(rank[v] <rank[u]){
		parent[v]=parent[u];
	}
	else{
		parent[v]=u;
		rank[u]++;
	}
}

int KrushkalMST(int V,vector<vector<int>> adj[]){
	vector<vector<int>> adjM(V,vector<int> (V,0));
	for(int i=0;i<V;i++){
		for(int j=0;j<adj[i].size();j++){
			adjM[i][adj[i][j][0]]=adj[i][j][1];
		}
	}
	vector<node> edges;
	for(int i=0;i<V;i++){
		for(int j=i;j<V;j++){
			if(adjM[i][j]!=0){
			edges.push_back(node(i,j,adjM[i][j]));
		}
		}
	}
	sort(edges.begin(),edges.end(),comp);
	vector<int> parent(V);
	for(int i=0;i<V;i++){
		parent[i]=i;
	}
	vector<int> rank(V,0);
	int cost=0;
	vector<pair<int,int>> mst;
	for(auto it :edges){
		if(findPar(it.v,parent) != findPar(it.u,parent)){
			cost+=it.wt;
			mst.push_back({it.u,it.v});
			unionn(it.u,it.v,parent,rank);
		}
	}
	for(auto it : mst){
		cout<<it.first<<"-"<<it.second<<endl;
	}
	return cost;
	
}

int main(){
	int V,E;
	cin>>V>>E;
	vector<vector<int>> adj[V];
	for(int i=0;i<E;i++){
		int u,v,w;
		cin>>u>>v>>w;
		vector<int> t1;
		vector<int> t2;
		t1.push_back(v);
		t1.push_back(w);
		adj[u].push_back(t1);
		t2.push_back(u);
		t2.push_back(w);
		adj[v].push_back(t2);
	}
	cout<<"Minimum Spanning Tree: "<<KrushkalMST(V,adj);
	
}
