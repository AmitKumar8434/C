#include<bits/stdc++.h>
using namespace std;
struct node{
	int u;
	int v;
	int wt;
	node(int f,int s,int t){
		u=f;
		v=s;
		wt=t;
	}
};
int main(){
	int V,E;
	cin>>V>>E;
	vector<node> edges;
	for(int i=0;i<E;i++){
		int u,v,wt;
		cin>>u>>v>>wt;
		edges.push_back(node(u,v,wt));
	}
	int src;
	cin>>src;
	vector<int> dist(V,100007);
	dist[src]=0;
	for(int i=0;i<E-1;i++){
		for(auto j:edges){
			if(dist[j.u] + j.wt<dist[j.v]){
				dist[j.v]=dist[j.u] +j.wt;
			}
		}
	}
	bool fg=0;
	for(auto j:edges){
			if(dist[j.u] + j.wt<dist[j.v]){
			cout<<"----Negative cycle----";
			fg=1;
			break;
			}
		}
		if(!fg){
			for(int i=0;i<V;i++){
				cout<<dist[i]<<" ";
			}
		}
	
	
}
