#include<bits/stdc++.h>
#include<sstream>
using namespace std;
bool isSubSequence(string str1, string str2, long long int m,long long  int n)
{
    // Base Cases
    if (m == 0)
        return true;
    if (n == 0)
        return false;
 
    // If last characters of two
    // strings are matching
    if (str1[m - 1] == str2[n - 1])
        return isSubSequence(str1, str2, m - 1, n - 1);
 
    // If last characters are
    // not matching
    return isSubSequence(str1, str2, m, n - 1);
}

 int decimalToBinary(long long int N)
{
  
    long long int B_Number = 0;
    long long int cnt = 0;
    while (N != 0) {
        long long int rem = N % 2;
        long long int c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        cnt++;
    }
  
    return B_Number;
}
int main(){
	long long int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long int size=s.length();
		for(long long int i=0;i<1000*1000;i++){
			long long int k=decimalToBinary(i);
			char result[s.length()];
			sprintf(result, "%lld", k);
			if(isSubSequence(result,s,strlen(result),size)){
			}
			else{
				cout<<decimalToBinary(i)<<endl;
				break;
			}
		}
	}
}
