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

    long long q;

    cin >> q;

    while (q--)
    {
        ll n, m;

        cin >> n >> m;

        bool check[n + 1];

        memset(check, 0, sizeof(check));

        vector<pair<int,int>> vp;

        vector<int> moves;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            vp.push_back(make_pair(a, i + 1));
        }

        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            check[a + 1] = 1;
        }

        sort(vp.begin(), vp.end());

        int xnn = 0;

        for (int i = 0; i < vp.size(); i++)
        {
            int x = vp[i].second - (i + 1);

            if (x != 0)
            {
                int start = min(vp[i].second, i + 1);

                int end = max(vp[i].second, i + 1);

                int bal = 0;

                for (int j = start + 1; j <= end; j++)

                {
                    if (check[j] == 0)
                    {
                        bal = 1;
                        break;
                    }
                }



                if (bal == 1)
                {
                    xnn = 1;
                    break;
                }

            }
        }
        if (xnn)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}