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

int solve(int a, int b, int c, int d)
{

    for (int i = 0; i <= 100; i++)
    {
        if (((b + (i * a)) - d) % c == 0)
        {
            return (b + (i * a));
        }
    }

    return -1;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if(b-d<0)cout << solve(c, d, a, b) << endl;

    else cout << solve(a, b, c, d) << endl;

    return 0;
}