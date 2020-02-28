#include<bits/stdc++.h>
using namespace std;
#define M 100000000
#define ll long long
bool markted[M];  //ALL INDEX   ARE FALSE 

bool  isPrime(ll n){
    if(n<2) return markted[n] = true;
    else if(n==2) return markted[n] = false;
    else if(n%2==0)
        return markted[n] = true;
    else return markted[n] = false;
}

void seive_eratosthense(ll n){
    for(ll i=3;i*i<n;i++){
        if(markted[i]==false) //prime 
        {
            for(ll j=i*i;j<n;j+=i+i){
                markted[j] = true ;//divideable , not prime
            }
        }
    }

}

int main()
{
    ll n;
    cin>>n;

    for(ll i=0;i<n;i++){
        isPrime(i);
    }

    seive_eratosthense(n);

    for(ll i=0;i<n;i++){
        markted[i] == false ? cout<<i<<endl : cout<<"" ;
    }

    return 0;

}