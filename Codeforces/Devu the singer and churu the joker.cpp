#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,d;
    cin>>n>>d;

    vector<int> t;
    int s=0;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        s+=e;
        t.push_back(e);
    }
    
    int timeSpent=s+(n-1)*10;
    int jokes=(d-s)/5;
    if(timeSpent>d) cout<<-1;
    else cout<<jokes;

    return 0;
}
