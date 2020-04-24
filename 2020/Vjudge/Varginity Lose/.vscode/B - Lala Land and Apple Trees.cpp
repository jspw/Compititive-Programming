/*

Author : 5hifaT

Github        : https://github.com/jspw

Gists         : https://gist.github.com/jspw

linkedin      : https://www.linkedin.com/in/mehedi-hasan-shifat-2b10a4172/

Stackoverflow : https://stackoverflow.com/story/jspw 

Dev community : https://dev.to/mhshifat

*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdlib>
#include <bitset>
#include <set>
#include <map>
#include <iterator>

using namespace std;
#define ll long long
#define ull unsigned long long

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

bool isPrime(ll n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int,int>>pu,pv;
    // vector<int> u, v;
    while (n--)
    {
        int x, a;
        cin >> x >> a;
        if (x<0)
            pu.push_back(make_pair(x,a));
        else
            pv.push_back(make_pair(x,a));
        
    }


    sort(pu.begin(), pu.end());
    reverse(pu.begin(),pu.end());
    sort(pv.begin(), pv.end());

    ll ans = 0;

    if (pu.empty())
    {
        cout << pv[0].second << endl;
    }
    else if (pv.empty())
        cout << pu[0].second << endl;

    else
    {
        // for (int i = 0; i < pu.size(); i++)
        //     cout <<pu[i].first<<" -> " <<pu[i].second << endl;

        // cout << endl;

        // for (int i = 0; i < pv.size(); i++)
        //     cout <<pv[i].first<<" -> " <<pv[i].second << endl;

        // cout << endl;

        for (int i = 0; i < pu.size() && i < pv.size(); i++)
        {
            ans += pu[i].second + pv[i].second;
        }

        if (pu.size() > pv.size())
        {
            ans += pu[pv.size()].second;
        }
        else if (pv.size() > pu.size())
        {
            ans += pv[pu.size()].second;
        }

        cout << ans << endl;
    }

    return 0;
}
