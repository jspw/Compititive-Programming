/*

Author : 5hifaT

github:https://github.com/jspw

https://stackoverflow.com/story/jspw 


*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
    ll a[n + 1], b[n + 1];
    vector<pair<ll, ll>> vp;
    set<ll> s;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    if (s.size() == n)
        cout << 0 << endl;

    else
    {
        for (int i = 0; i < n; i++)
        {
            vp.push_back(make_pair(a[i], b[i]));
        }

        sort(a, a + n);
        sort(vp.begin(), vp.end());

        
    }

    return 0;
}