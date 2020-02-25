/*

Author : 5hifaT

github:https://github.com/jspw

Stackoverflow : https://stackoverflow.com/story/jspw 

linkedin : https://www.linkedin.com/in/mehedi-hasan-shifat-2b10a4172/


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
        int ans = 0;
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }

        sort(a, a + 2);


        for (int i = 0; i < 3; i++)
            if (a[i])
                ans++, a[i]--;
        if (a[2] && a[1])
            ans++, a[2]--, a[1]--;
        if (a[2] && a[0])
            ans++, a[2]--, a[0]--;
        if (a[1] && a[0])
            ans++, a[1]--, a[0]--;
        if (a[0] && a[1] && a[2])
            ans++;
        cout << ans << endl;
    }

    return 0;
}