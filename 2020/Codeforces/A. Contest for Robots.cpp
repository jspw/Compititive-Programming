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

    int n;
    cin >> n;
    int a[n + 1], b[n + 1];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int x = 0, y = 0,count=0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1 && b[i] == 0)
        {
            x++;
        }

        else if (a[i] == 0 && b[i] == 1)
        {
            y++;
        }

        // else if(a[i]==1 && b[i]==1) count++;
    }

    if(x>y) cout<<1<<endl;
    else if(x==0 && y)cout<<-1<<endl;

    else if (x == y && x == 0)
        cout << -1 << endl;

    else if (x == y &&  count && x != 0)
        cout << 2 << endl;

    else
    {
        cout << (y / x) + 1 << endl;
    }

    return 0;
}