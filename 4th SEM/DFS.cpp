#include<bits/stdc++.h>
using namespace std;

int n;
int graph[1000][1000];

void DFS(int begin){
	stack<int> st;
	int visited[n]={0};
	int i=begin;
	st.push(i);
	char ch='A'+i;
   	cout<<"->"<<ch;
	visited[i]=1;
   while(!st.empty()){
   	i=st.top();
   	st.pop();
   	for(int j=0;j<n;j++){
   		if(visited[i]==0){
   			char ch='A'+i;
   			cout<<"->"<<ch;
   			visited[i]=1;
		   }
		   for(int j=0;j<n;j++){
		   	if(graph[i][j]==1 && visited[j]==0) st.push(j);
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
         cout<<"Depth first Traversal ";
        DFS(0);

}
