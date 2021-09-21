#include<bits/stdc++.h>
using namespace std;

int n;
int graph[1000][1000];

void BFS(int begin){
	
	queue<int> q;
	int visited[n]={0};
	int i=begin;
	q.push(i);
	visited[i]=1;
     while(!q.empty()){
     	int i=q.front();
     	char ch='A'+i;
        cout<<"->"<<ch;
     	q.pop();
     	for(int j=0;j<n;j++){
     		if(graph[i][j] == 1 && visited[j]==0){
     			visited[j]=1;
     			q.push(j);
			 }
		 }
	 }
	
}
int main(){
     fstream infile;
     infile.open("ex.txt",ios::in);
     if(!infile){
     	cout<<"Error to open the file \n";
     	exit(1);
	 }
	 infile>>n;
	 for(int i=0;i<n;i++){
	 	for(int j=0;j<n;j++){
	 		infile>>graph[i][j];
		 }
	 }
	 for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        printf("%3d",graph[i][j]); //read a graph from file
         }
        printf("\n");
         }
         cout<<"Breadth-First Traversal";
        BFS(0);
}
