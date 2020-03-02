/*

Author : 5hifaT

github:https://github.com/jspw

linkedin : https://www.linkedin.com/in/mehedi-hasan-shifat-2b10a4172/

Stackoverflow : https://stackoverflow.com/story/jspw 


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

vector<ll> v, p;

void divisor(ll n)
{
    for (ll i = 1; i * i <= n; i++)
    {
        if (i == 1000000000)
            break;
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != n / i)
                p.push_back(n / i);
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    divisor(n);

    reverse(p.begin(), p.end());

    for (int i = 0; i < p.size(); i++)
        v.push_back(p[i]);

    // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;

    if (k > v.size())
        cout << -1 << endl;

    else
        cout << v[k - 1] << endl;

    return 0;
}