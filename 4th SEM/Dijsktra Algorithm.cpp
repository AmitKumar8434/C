#include<bits/stdc++.h>
using namespace std;


vector<int> Dijsktra(int V,vector<vector<int>> adj[],int src){
	vector<vector<int>> adjM(V,vector<int> (V,0));
	for(int i=0;i<V;i++){
		for(int j=0;j<adj[i].size();j++){
			adjM[i][adj[i][j][0]]=adj[i][j][1];
		}
	}
	vector<int> dist(V,INT_MAX);
	dist[src]=0;
	priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	pq.push({0,src});
	while(!pq.empty()){
		int x=pq.top().second;
		pq.pop();
		for(int k=0;k<V;k++){
			if(adjM[x][k]!=0 &&(dist[k] > dist[x] + adjM[x][k])){
				dist[k]=dist[x] + adjM[x][k];
				pq.push({dist[k],k});
			}
		}
	}
	return dist;
}
int main(){
	int V,E;
	cin>>V>>E;
	vector<vector<int>> adj[V];
	for(int i=0;i<E;i++){
		int u,v,wt;
		cin>>u>>v>>wt;
		vector<int> t1,t2;
		t1.push_back(v);
		t1.push_back(wt);
		adj[u].push_back(t1);
		t2.push_back(u);
		t2.push_back(wt);
		adj[v].push_back(t2);
	}
	int src;
	cout<<"Enter Source: ";
	cin>>src;
	vector<int> ans=Dijsktra(V,adj,src);
	cout<<"Shortest Path of all vertices :\n";
	for(int i=0;i<V;i++){
		cout<<ans[i]<<" ";
	}
}
