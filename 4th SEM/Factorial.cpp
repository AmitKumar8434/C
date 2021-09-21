#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int factorial(int a){
    if(a==0)
        return 1;
    if(a==1)
        return 1;
    else
        return a * factorial(a - 1);
}
long long int fact(long long int N){
    long long int ans=1;
    for(long long int i=1;i<=N;i++){
        ans=((ans%MOD)*(i%MOD))%MOD;
    }
    return ans;
}
string factor(long long n)
{
    long long counter;
    long double sum = 0;
  
    // Base case
    if (n == 0)
        return "1";
  
    // Calculate the sum of
    // logarithmic values
  
    for (counter = 1; counter <= n;
         counter++) {
        sum = sum + log(counter);
    }
  
    // Number becomes too big to hold in
    // unsigned long integers.
    // Hence converted to string
    // Answer is sometimes under
    // estimated due to floating point
    // operations so round() is used
    string result
        = to_string(round(exp(sum)));
  
    return result;
}
  
int main(){
    cout << "Enter a Numbers  :";
    long long int n;
    cin >> n;
    cout <<"Factorial is "<< factor(n);
}