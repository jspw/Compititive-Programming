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
    cin >> t;
    while (t--)
    {
        ll a, b, p, count1 = 0, count2 = 0,count = 0;
        char ch = 's';
        vector<ll> v;
        v.push_back(0);
        cin >> a >> b >> p;
        string str;
        cin >> str;
        
        reverse(str.begin(), str.end());
 
        // cout<<str<<endl;
        
        for (ll i = 1; i < str.size(); i++)
        {
            if (str[i] == 'A' && str[i] != ch)
            {
                count1++;
                ch =  str[i];
            }
            else if (str[i] == 'B' && str[i] != ch)
            {
                count2++;
                ch =  str[i];
            }
 
            v.push_back((a * count1) +( b * count2));
        }
 
        reverse(v.begin(), v.end());
 
        for (ll i = 0; i < v.size(); i++)
        {
            if (p >= v[i])
            {
                count =1+ i;
                break;
            }
        }
 
        
        cout << count << endl;
    }
 
    return 0;
}