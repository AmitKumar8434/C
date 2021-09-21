#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
vector<int> sieve(){
    vector<int> primes;
    int isPrime[MAX];
    for (int i = 0; i<MAX;i++)
        isPrime[i] = 1;
    for (int i = 2; i*i <MAX;i++){
        if(isPrime[i]==1){
            for (int j = i * i; j < MAX;j+=i){
                isPrime[j] = 0;
            }
        }
    }
    for (int i = 2; i <MAX;i++){
        if(isPrime[i]==1){
            primes.push_back(i);
        }
    }
    return primes;
}

void segmentedSieve(long long l,long long r,vector<int> primes){
    int isPrime[r - l + 1];
    for (int i = 0; i <= (r-l);i++) {
        isPrime[i] = 1;
    }

    for (int i = 0 ; primes[i]*(long long)primes[i] <= r;i++){
        int curr= primes[i];
        long long base = (l/(curr))*curr;
        if(base<l)
            base += curr;

        for (long long j = base; j<=r;j+=curr){
                isPrime[j-l] = 0;
        }
        if(base == curr)
            isPrime[base-l] = 1;
    }
    for (long long i = 0; i < (r - l + 1);i++){
        if(isPrime[i]==1){
            cout << i + l<<" ";
        }
    }
}
int main(){
    long long L, R;
    cout << "To find prime number in range\n";
    cout << "Enter Lower Limit:";
    cin >> L;
    cout << "Enter upper Limit:";
    cin >> R;
    segmentedSieve(L, R, sieve());
}