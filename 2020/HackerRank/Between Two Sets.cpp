/*

Author : 5hifaT

github:https://github.com/jspw

linkedin : https://www.linkedin.com/in/mehedi-hasan-shifat-2b10a4172/

Stackoverflow : https://stackoverflow.com/story/jspw 


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
int max_of_array(int a[], int n)
{
    ll mx = a[0];
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

    int n, m;
    while (cin >> n >> m)
    {
        int a[n + 1], b[m + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        int lcmx = 1;

        for (int i = 0; i < n; i++)
        {
            lcmx = lcm(a[i], lcmx);
        }

        // cout << "LCM = " << lcmx << endl;

        vector<int> v;

        int gcdx = b[0];

        for (int i = 1; i < n; i++)
        {
            gcdx = gcd(b[i], gcdx);
        }

        // cout << "GCD = " << gcdx << endl;

        for (int i = 1; i <= max_of_array(b, m); i++)
        {
            bool check = true;
            for (int j = 0; j < m; j++)
            {
                if (b[j] % i != 0)
                {
                    check = false;
                }
            }
            if (check)
                v.push_back(i);
        }

        // for (int i = 0; i < v.size(); i++)
        //     cout << v[i] << " ";

        // cout << endl;

        if (!v.empty())
        {
            int p = 0;

            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] % lcmx == 0)
                    p++;
            }

            cout << p << endl;
        }else cout<<0<<endl;
    }

    return 0;
}