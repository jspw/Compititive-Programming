#include<bits/stdc++.h>
using namespace std;
vector <int> getPrimes(int n){
        vector<int>primes;
        for(i=2;i<=n;i++){
            if(isPrime(i)){
                primes.push_back(i);
            }
        }
        return primes;
    }

int main()
{
    long int n;
    cin>>n;
    getPrimes(n);
}




