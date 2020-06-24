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

    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin >> n;
        set<ll> v;
        for (ll i = 2; i * i <= n; i++)
        {
            /* code */
            if (n % i == 0 && v.count(i) == false)
            {
                v.insert(i);
                n /= i;
                break;
            }
        }

        for (ll i = 2; i * i <= n; i++)
        {
            /* code */
            if (n % i == 0 && v.count(i) == false)
            {
                v.insert(i);
                n /= i;
                break;
            }
        }

        // cout<<"WTF"<<endl;

        if(v.empty())
            cout << "NO" << endl;
        else if (v.size()<2 || n == 1 || v.count(n))
            cout << "NO" << endl;

        else
        {
            cout << "YES" << endl;
            for (auto it : v)
                cout << it << " ";
            cout<<n<<endl;
        }
    }

    return 0;
}