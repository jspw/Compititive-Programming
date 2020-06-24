#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll func(ll x, ll y)
{
    int p = x|y;
    cout<<p<<endl;
    return x | y;
}

int main()
{
    ll n;
    cin >> n;
    ll a[n + 1];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll x = 0;

    if (n == 1)
    {
        cout << a[0] << endl;
    }
    else
    {
        for (ll i = 0; i < n-1; i++)
        {
            if(i==0){
                x = func(a[0], a[1]) - a[1];
            }
            else
            {
                x = func(x,a[i+1]) - a[i+1];
            }
            
            
        }

        cout<<x<<endl;
    }
    return 0;
}