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
ll min_of_array(int a[], ll n)
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
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // sort(a,a+n,decSort);

    int seraja = 0, dima = 0, left = 0, right = n - 1;
    int x;
    if (n % 2 == 0)
        x = n / 2;
    else
        x = n / 2 + 1;

    for (int i = 0;; i++)
    {
        if(right==left) break;

        // cout << a[left] << " <- left :: right -> " << a[right] << endl;

        seraja += max(a[left], a[right]);

        if (max(a[left], a[right]) == a[left])
            left++;

        else
            right--;

        if(right==left) break;

        // cout << "S = " << seraja << endl;

        // cout << a[left] << " <- left :: right -> " << a[right] << endl;

        dima += max(a[left], a[right]);

        if (max(a[left], a[right]) == a[left])
            left++;
        else
            right--;

        // cout << "d = " << dima << endl;
        // 
        if(right==left) break;
    }

    if(n%2!=0) seraja+=min_of_array(a,n);
    else dima+=min_of_array(a,n);

    cout << seraja << " " << dima << endl;

    return 0;
}