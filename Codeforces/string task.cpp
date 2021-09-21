#include<bits/stdc++.h>
using namespace std;
int isVowel(char ch){
	ch=tolower(ch);
	if (ch =='a'|| ch=='o' || ch=='y' || ch=='e' || ch=='u' || ch=='i')
	    return 1;
	    else
	    return 0;
}
int main(){
	string s;
	cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++){
		if (!isVowel(s[i])){
			char c=tolower(s[i]);
			cout<<"."<<c;
		}
	}
}

