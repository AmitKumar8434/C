#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

bool isSafe(vector<string> board,int r,int c,int n){
    for(int i=0;i<r;i++){
        if(board[i][c]=='Q') return false;
    }
    int row=r;
    int col=c;
    while(row>=0 && col >=0){
        if(board[row][col]=='Q') return false;
        row--;
        col--;
    }
     row=r;
     col=c;
    while(row>=0 && col<n){
        if(board[row][col]=='Q') return false;
        row--;
        col++;
    }
    return true;
}

void solve( vector<vector<string>> &ans,vector<string> board,int n,int x){
    if(x>=n){
      ans.push_back(board);
       return;
    }
    for(int j=0;j<n;j++){
            if(isSafe(board,x,j,n)){
                board[x][j]='Q';
                solve(ans,board,n,x+1);
                board[x][j]='.';
            }
        }
}

vector<vector<string> >solveNQueens(int n) {
    vector<vector<string> >ans;
    vector<string> board(n,string(n,'.'));
    solve(ans,board,n,0);
    return ans;
}
int main()
{
	int n=5;
    vector<vector<string>> sol=solveNQueens(n);
    for(int i=0;i<sol.size();i++){
    	for(int j=0;j<n;j++){
    		cout<<sol[i][j]<<endl;
		}
		cout<<endl;
	}
}
