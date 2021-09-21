#include<bits/stdc++.h>
using namespace std;
int main(){
     fstream infile;
     infile.open("ex.txt",ios::in);
     if(!infile){
     	cout<<"Error to open the file \n";
     	exit(1);
	 }
	 int n;
	 infile>>n;
	 int graph[10][10];
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
         int deg=0;
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		if(graph[i][j]==1) deg++;
		}
	}
	cout<<"Total degree of graph: "<<deg<<endl;
	cout<<"Number of Edges: "<<deg/2<<endl;
	char c;
	cout<<"Enter vertex to find adjacent elements ";
	cin>>c;
	for(int j=0;j<n;j++){
		if(graph[c-65][j]==1){
			cout<<c<<" is adjacent to "<<(char)(j+65)<<endl;
		}
	}
         infile.close (); //to close the file
        return 0;
}
