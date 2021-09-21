#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adjL[],int u,int v){
	adjL[u].push_back(v);
	adjL[v].push_back(u);
}

void BFS(vector<int> adjL[],int v){
	bool visited[v]={0};
	queue<int> q;
	q.push(0);
	visited[0]=1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		cout<<x<<" ";
		for(auto k:adjL[x]){
			if(visited[k] !=1)
			q.push(k);
			visited[k]=1;
		}
	}
}
void DFS(vector<int> adjL[],int v){
	stack<int> st;
	bool visited[v]={0};
	st.push(0);
	visited[0]=1;
	while(!st.empty()){
		int x=st.top();
		cout<<x<<" ";
		st.pop();
		for(auto k:adjL[x]){
			if(visited[k]!=1){
				st.push(k);
				visited[k]=1;
			}
		}
		
	}
	
}

void printGraph(vector<int> adjL[],int v){
	for(int i=0;i<v;i++){
		cout<<i;
		for(auto x:adjL[i]){
			cout<<"->"<<x;
		}
		cout<<endl;
	}
	cout<<endl;
} 
int main(){
	int v;
	cout<<"Enter Number of Vertices: ";
	cin>>v;
	vector<int> adj[v];
	addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
 
    printGraph(adj, v);
    cout<<"BFS: ";
    BFS(adj,v);
    cout<<"\nDFS: ";
    DFS(adj,v);
    return 0;
}
