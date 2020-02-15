#include <bits/stdc++.h>
using namespace std;
#define M 500000000
#define ll long long
bool markted[M]; //ALL INDEX   ARE FALSE

bool isPrime(ll n)
{
    if (n < 2)
        return markted[n] = true;
    else if (n == 2)
        return markted[n] = false;
    else if (n % 2 == 0)

        return markted[n] = true;
    else
        return markted[n] = false;
}

void seive_eratosthense(ll n)
{
    for (ll i = 3; i * i < n; i++)
    {
        if (markted[i] == false) //prime
        {
            for (ll j = i * i; j < n; j += i + i)
            {
                markted[j] = true; //divideable , not prime
            }
        }
    }
}

bool isZeroPresent(ll x) 
{ 
    while (x > 0) 
    { 
        if (x % 10 == 0) 
            break; 
  
        x = x / 10; 
    } 
  
    // If loop broke 
    return (x > 0); 
} 

int main()
{
    ll n = 100000;

    for (ll i = 0; i < n; i++)
    {
        isPrime(i);
    }

    seive_eratosthense(n);

    ll t;
    cin>>t;
    while (t--)
    {
        ll p ;
        cin>>p;
        ll count= 0;

        vector<ll> v;

        for (ll i = 0; i <= p; i++)
        {
            if (markted[i] == false)
                v.push_back(i);
        }

        for(ll i=0;i<v.size();i++){
            // cout<<"x : "<<v[i]<<endl;
            if(isZeroPresent(v[i])==false)
                count++;
        }

        cout<<count<<endl;


    }

    return 0;
}