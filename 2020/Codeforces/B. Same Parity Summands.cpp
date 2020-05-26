/*

Author : 5hifaT

Github        : https://github.com/jprintf(" ")w

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

    ll t;
    cin>> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (k > n)
        {
            cout << "NO";
            cout << endl;
        }
        else if (k == n)
        {
            cout<<"YES";
            cout << endl;
            for (int i = 0; i < n; i++)
                cout << "1 ";
            cout << endl;
        }
        else if (n % 2 == 0)
        {
            if (k % 2)
            {
                ll x = 0;
                for (int i = 1; i < k; i++)
                {
                    x = x + 2;
                }
                if (x >= n)
                {
                    cout << "NO";
                    cout << endl;
                }
                else
                {
                    cout<<"YES";
                    cout << endl;
                    for (int i = 0; i < k - 1; i++)
                    {
                        cout << "2 ";
                        printf(" ");
                    }
                    cout << n - x;
                    cout << endl;
                }
            }
            else
            {
                ll x = 0;
                for (int i = 0; i < k - 1; i++)
                {
                    x = x + 1;
                }
                if (x >= n || (n - x) % 2 == 0)
                {
                    cout << "NO";
                    cout << endl;
                }
                else
                {
                    cout<<"YES";
                    cout << endl;
                    for (int i = 0; i < k - 1; i++)
                    {
                        cout << "1 ";
                        printf(" ");
                    }
                    cout << n - x;
                    cout << endl;
                }
            }
        }
        else if (n % 2)
        {
            if (k % 2)
            {
                ll x = 0;
                for (int i = 1; i < k; i++)
                {
                    x += 1;
                }
                if (x >= n || (n - x) % 2 == 0)
                {
                    cout << "NO";
                    cout << endl;
                }
                else
                {
                    cout<<"YES";
                    cout << endl;
                    for (int i = 0; i < k - 1; i++)
                    {
                        cout << "1 ";
                        printf(" ");
                    }
                    cout << n - x;
                    cout << endl;
                }
            }
            else
            {
                cout << "NO";
                cout << endl;
            }
        }
    }

    return 0;
}
