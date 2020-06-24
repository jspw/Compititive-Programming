/*

Author : 5hifaT

github:https://github.com/jspw

https://stackoverflow.com/story/jspw 


*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (int i = 0; i < int(n); i++)

//Sort array in discending order (n to 1)
bool decSort(ll a, ll b)
{
    return a > b;
}

//find the maximum element of a array
ll max_of_array(ll a[], ll n)
{
    ll mx = a[0];
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > mx)
            mx = a[i];
    }
    return mx;
}

//find the minimum element of a array
ll min_of_array(ll a[], ll n)
{
    ll mn = a[0];
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < mn)
            mn = a[i];
    }
    return mn;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> q(n - 1);
    ll sum = 0;
    ll min_val = 0;
    for (int i = 0; i + 1 < n; i++)
    {
        cin >> q[i];
        sum += q[i];
        if (sum < min_val)
            min_val = sum;
    }
    vector<ll> p(n);
    p[0] = 1 - min_val;
    forn(i, n - 1)
        p[i + 1] = p[i] + q[i];
    bool ok = true;
    for (int i = 0; i < n; i++)
        if (p[i] < 1 || p[i] > n)
            ok = false;
    if (ok)
        ok = set<ll>(p.begin(), p.end()).size() == n;
    if (ok)
    {
        forn(i, n)
                cout<< p[i] << " ";
    }
    else
        cout << -1 << endl;

    return 0;
}