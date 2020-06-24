
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

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n + 1];
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    reverse(a, a + n);

    bool b[a[0] + 5];

    for(int i=0;i<(a[0]+5);i++)
        b[i]=false;

    a[0] += 1;
    b[a[0]] = true;

    for (int i = 1; i < n; i++)
    {
        if (b[a[i] + 1] == false)
        {
            b[a[i] + 1] = true;
            count++;
            a[i] += 1;
        }

        else if (b[a[i]] == false)
        {
            b[a[i]] = true;
            count++;
        }

        else if (b[a[i] - 1] == false && (a[i] - 1) > 0)
        {
            b[a[i] - 1] = true;
            count++;
            a[i] -= 1;
        }
    }

    cout << count << endl;

    return 0;
}