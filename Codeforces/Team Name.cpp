#include<bits/stdc++.h>
using namespace std;
bool isin(string arr[],long long int n,string key){
    for(long long int i=0;i<n;i++){
        if(arr[i]==key) {
            return true;
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string words[n];
        for(long long int i=0;i<n;i++){
            cin>>words[i];
        }
        int ans=0;
        for(long long int i=0;i<(n-1);i++){
            for(long long int j=i+1;j<n;j++){
                string str1=words[i];
                string str2=words[j];
                if(str1[0]!=str2[0]){
                    swap(str1[0],str2[0]); 
                    if(!isin(words,n,str1) && !isin(words,n,str2)){
                        ans+=2;
                    }
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
