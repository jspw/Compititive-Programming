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

    string str;
    cin >> str;
    bool check = true;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (str[i] == '4')
        {
            // cout << str[i] << ", i =  " << i << endl;
            
            if (str[i - 1] == '4')
            {
                if (str[i - 2] != '1')
                {
                    check = false;
                    break;
                }
                else
                    i -= 2;
            }
            else if (str[i - 1] == '1')
            {
                i--;
            }
            else
            {
                check = false;
                break;
            }
            // cout<<check<<", i =  "<<i<<endl;
        }
        else if (str[i] != '1')
        {
            check = false;
            break;
        }
    }

    if (check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
