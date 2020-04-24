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

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();
        if (n < m)
        {

            vector<int> v;
            int c = 0;
            for (int i = 0; i < n; i++)
            {
                int p = a[i] - '0';
                int q = b[i] - '0';
                v.push_back((((p + q) % 10) + c) % 10);
                if ((((p + q) % 10) + c) >= 10)
                    c = (((p + q) % 10) + c) % 10 + ((p + q) / 10);
                else
                    c = (p + q) / 10;
            }
            for (int i = n; i < m; i++)
            {
                if (i == n)
                    v.push_back((b[i] - '0') + c);
                else
                    v.push_back((b[i] - '0'));
            }

            for (int i = 0; i < v.size(); i++)
                cout << v[i];

            cout << endl;
        }
        else if (m < n)
        {

            vector<int> v;
            int c = 0;
            for (int i = 0; i < m; i++)
            {
                int p = a[i] - '0';
                int q = b[i] - '0';
                v.push_back((((p + q) % 10) + c) % 10);
                if ((((p + q) % 10) + c) >= 10)
                    c = (((p + q) % 10) + c) % 10 + ((p + q) / 10);
                else
                    c = (p + q) / 10;
            }
            for (int i = m; i < n; i++)
            {
                if (i == m)
                    v.push_back((a[i] - '0') + c);
                else
                    v.push_back((b[i] - '0'));
            }

            for (int i = 0; i < v.size(); i++)
                cout << v[i];

            cout << endl;
        }

        else
        {
            vector<int> v;
            int c = 0;
            for (int i = 0; i < n; i++)
            {
                int p = a[i] - '0';
                int q = b[i] - '0';
                v.push_back((((p + q) % 10) + c) % 10);

                cout << ((((p + q) % 10) + c) % 10) << endl;
                
                if ((((p + q) % 10) + c) >= 10)
                    c = (((p + q) % 10) + c) % 10 + ((p + q) / 10);
                else
                    c = (p + q) / 10;

                cout<<" C "<<c<<endl;
            }
            if (c > 0)
                v.push_back(c);

            for (int i = 0; i < v.size(); i++)
                cout << v[i];

            cout << endl;
        }
    }

    return 0;
}
