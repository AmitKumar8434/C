#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++) cin>>arr[i];
    vector<int> diff;
     sort(arr,arr+m);
    for(int i=0;i<m;i++){
        if(i>(m-n)) break;
        vector<int> std;
        for(int j=i;j<n+i && j<m;j++){          
            std.push_back(arr[j]);
        }
        int max=std[0];
        int min=std[0];
        for(int i=0;i<std.size();i++){
            if(max<std[i]){
                max=std[i];
            }
        }
        for(int i=0;i<std.size();i++){
            if(min>std[i]){
                min=std[i];
            }
        }
        diff.push_back(max-min);
    }
    int minDiff=diff[0];
    for(int i=0;i<diff.size();i++){
        if(diff[i]<minDiff){
            minDiff=diff[i];
        }
    }
    cout<<minDiff;
    return 0;
}
