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

//main code

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vp.push_back(make_pair(a, b));
    }

    bool check = false;

    if (vp.size() == 1)
        check = true;

    else if (vp.size() == 1)
    {
        if ((vp[0].first == vp[1].first || vp[0].first == vp[1].second) && (vp[0].second == vp[1].second || vp[0].second == vp[1].first))

            check = true;

        else
            check = false;
    }
    else
    {
        int a[4];
        a[0] = vp[0].first, a[1] = vp[0].second;
        for (int i = 1; i < vp.size(); i++)
        {
            if (vp[i].first != a[0] && vp[i].first != a[1] && vp[i].second != a[0] && vp[i].second != a[1])
            {
                a[2] = vp[i].first;
                a[3] = vp[i].second;
                break;
            }
        }

        // for(int i=0;i<4;i++) cout<<a[i]<< " ";cout<<endl;

        int i, j, k;

        for (i = 0; i < 4; i++)
        {
            for (j = i + 1; j < 4; j++)
            {
                for (k = 0; k < vp.size(); k++)
                {
                    if (vp[k].first != a[i] && vp[k].second != a[i] && vp[k].first != a[j] && vp[k].second != a[j])
                        break;
                }

                if (k == vp.size())
                {
                    check = true;
                    break;
                }
            }
            if(check) break;
        }

        
    }

    if(check) cout<<"YES"<<endl; else cout<<"NO"<<endl;

    return 0;
}