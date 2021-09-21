#include<bits/stdc++.h>
using namespace std;
int binomialCoefficient(int n,int k){
        if(n<k)
            return -1;
        int res=1;
        for (int i = 0; i<k;i++){
            res = res * (n - i);
            res = res / (i + 1);
        }
        return res;
}
int main(){
    int r;
    cout << "Enter number of rows you want to generate: ";
    cin >> r;
    vector<vector<int>> v(r);
    for (int i = 0; i < r; i++){
        v[i].resize(i+1);
        v[i][i] = 1;
        v[i][0] = 1;
        for (int j = 1; j <i; j++)
        {
            v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
        }
    }
    for (int i = 0; i < r;i++){
        for (int j = 0; j <=i;j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    int row,column;
    cout << "Enter the row and column to get the element:";
    cin >> row >> column;
    cout << binomialCoefficient(row-1, column-1)<<endl;
    int ro;
    cout << "Enter the Row number to get the row: ";
    cin >> ro;
    for (int i = 0; i <ro;i++){
        cout << binomialCoefficient(ro-1,i)<<" ";
    }
        return 0;
}