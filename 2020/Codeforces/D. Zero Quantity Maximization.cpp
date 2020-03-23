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
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    vector<double> v;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0 && b[i] == 0)
            zero++;
 
        if (a[i] != 0)
            v.push_back((((double)(b[i]*5) / (double)a[i])));
    }
 
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
 
    // cout << endl;
 
    if (v.empty() && zero > 0)
    {
        cout << zero << endl;
    }
    else if (v.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        sort(v.begin(), v.end());
 
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }
 
        // cout << endl;
 
        if (v.size() == 1)
            cout << 1 + zero << endl;
 
        else
        {
 
            vector<pair<int, int>> count;
 
            for (int i = 0; i < v.size() - 1;)
            {
                // cout << v[i] << " " << v[i + 1] << endl;B
                int p = 1;
                while (v[i] == v[i + 1])
                {
                    p++;
                    i++;
                }
                if (v[i] != v[i + 1])
                {
                    count.push_back(make_pair(p, v[i]));
                    i++;
                }
            }
 
            sort(count.begin(), count.end());
            reverse(count.begin(), count.end());
 
            cout << count[0].first + zero << endl;
        }
    }
 
    return 0;
}