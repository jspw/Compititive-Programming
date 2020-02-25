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
    string str;
    cin >> str;
    vector<char> v;
    for (int i = 0; i < n-1; )
    {
        if (str[i] != str[i + 1])
        {
            // cout << str[i] << endl;
            v.push_back(str[i]);
            v.push_back(str[i + 1]);
            i+=2;

        }else i++;
    }

    if (v.empty())
    {
        cout << n << endl;
             cout<< endl;
    }
    else
    {
        if (n == v.size())
        {

            cout << 0 << endl;
            cout << str << endl;
        }
        else
        {
            cout << n - v.size() << endl;
            for (int i = 0; i < v.size(); i++)
                cout << v[i];
            cout << endl;
        }
    }

    v.clear();

    return 0;
}