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
int max_of_array(int a[], int n)
{
    int mx = a[0];
    for (int i = 0; i < n; i++)
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
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reverse(a, a + n);
    vector<int> v;

    int mx = max_of_array(a, n);

    v.push_back(a[0]);

    for (int i = 1; i < n; i++)
    {
        if (max(v[i - 1], a[i]) != 0)
            v.push_back(max(v[i - 1], a[i]));
        else
            v.push_back(mx - 1);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            v[i] = mx - 1;
        else
            break;
    }

    reverse(v.begin(), v.end());

    ll ans = 0;

    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        ans += v[i];
    }

    cout<< ans << endl;

    return 0;
}