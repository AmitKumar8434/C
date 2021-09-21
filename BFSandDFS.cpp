#include<bits/stdc++.h>
using namespace std;
int v;
int G[1000][1000];
void BFS(int begin){
	queue<int> Q;
	int visited[v]={0};
	int i=begin,j;
	cout<<i+1<<" ";
	Q.push(i);
	visited[i]=1;
	while(!Q.empty()){
		i=Q.front();
		Q.pop();
		for(int j=0;j<v;j++){
			if(G[i][j]==1 && visited[j]==0){
                cout<<j+1<<" ";
                visited[j]=1;
                Q.push(j);
            }
		}
	}
}
void DFS(int begin){
	stack<int> S;
	int visited[v]={0};
	int i=begin,j;
	S.push(i);
	visited[i]=1;
	cout<<i+1<<" ";
	while(!S.empty()){
		i=S.top();
		S.pop();
		for(int j=0;j<v;j++){
			if(visited[i]==0){
   			cout<<i+1<<" ";
   			visited[i]=1;
		   }
		   for(int j=0;j<v;j++){
		   	if(G[i][j]==1 && visited[j]==0) S.push(j);
		   }
		}
	}
}
int main(){
	cout<<"Enter the number of vertices: ";
	cin>>v;
	cout<<"Enter Adjacency matrix: "<<endl;
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++)
		cin>>G[i][j];
	}
	cout<<"Breadth first Transversal: "<<endl;
	BFS(0);
	cout<<"\n Depth first Transversal: "<<endl;
	DFS(0);
	return 0;
}
/* 1 2 3 4 5 
   
0 1 0 1 0
1 0 1 1 0
0 1 0 0 1
1 1 0 0 1
0 0 1 1 0 */
