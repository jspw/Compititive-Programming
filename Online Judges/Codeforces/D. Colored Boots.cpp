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
    string str1, str2;
    cin >> str1 >> str2;

    bool a[n + 1], b[n + 1];

    memset(a, 0, n * sizeof(a[0]));
    memset(b, 0, n * sizeof(b[0]));

    vector<pair<int, int>> vp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (str1[i] != '?' && str1[i] == str2[j] && a[i] == false && b[j] == false)
            {

                vp.push_back(make_pair(i + 1, j + 1));
                a[i] = true;
                b[j] = true;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (str1[i] == '?')
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] == false && b[j] == false && str2[j] != '?')
                {

                    vp.push_back(make_pair(i + 1, j + 1));
                    a[i] = true;
                    b[j] = true;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (str2[i] == '?')
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] == false && b[i] == false)
                {

                    vp.push_back(make_pair(j + 1, i + 1));
                    a[j] = true;
                    b[i] = true;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (str1[i] == '?')
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] == false && b[j] == false)
                {

                    vp.push_back(make_pair(i + 1, j + 1));
                    a[i] = true;
                    b[j] = true;
                }
            }
        }
    }

    cout << vp.size() << endl;

    for (int i = 0; i < vp.size(); i++)
    {
        cout << vp[i].first << " " << vp[i].second << endl;
    }

    return 0;
}