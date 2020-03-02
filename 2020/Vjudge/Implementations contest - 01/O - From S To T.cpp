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

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s, t, p;
        cin >> s >> t >> p;

        if (t == s)
            cout << "YES" << endl;

        else
        {
            int count = 0,in=0;
            for (int i = 0, j = 0; i < t.size(); i++)
            {
                if (t[i] == s[j])
                {
                    count++;
                    j++;
                }
                else
                {
                    bool check = false;
                    for (int k = 0; k < p.size(); k++)
                    {
                        if (t[i] == p[k])
                        {
                            count++;
                            check = true;
                            p[k] = '1';
                            in++;
                            break;
                        }
                    }

                    if (!check)
                    {
                        break;
                    }
                }
            }

            if (count == t.size() && in+s.size()==t.size())
                cout << "YES" << endl;

            else
                cout << "NO" << endl;
        }
    }

    return 0;
}