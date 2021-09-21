#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
}
void printGraph(vector<int> adj[], int V){
    for (int v = 0; v < V; ++v){
        char ch= v+65;
        cout << "Adjacency list of vertex "<< ch;
        for (int x=0;x<adj[v].size();x++){
            char ch= x+65;
            cout <<"-> "<<ch;
        }
        cout<<endl;
    }
}
int main(){
    fstream infile;
    infile.open("ex.txt",ios::in);

    if(!infile){
        cout<<"Error to open file .";
        exit(1);
    }
    int n;
    infile>>n;
    int graph[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            infile>>graph[i][j];
        }
    }
    vector<int> adj[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(graph[i][j]==1){
               addEdge(adj,i,j);
           }
        }
    }

    int deg=0;

    for(int i=0;i<n;i++){
        deg+=adj[i].size();
    }

    cout<<"Total Edges = "<<deg/2<<endl;

    cout<<"Total Degree = "<<deg<<endl;

    cout<<"\nDisplaying the Graph : "<<endl; 

    printGraph(adj,n);

    infile.close();

    return 0;
}
