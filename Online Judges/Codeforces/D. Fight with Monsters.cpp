#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
    ll n, a, b, k, count = 0;
    cin >> n >> a >> b >> k;
    ll ar[n + 1];
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll sum = (a + b);
    for (ll i = 0; i < n; i++)
    {
        if (ar[i] % sum == 0)
        {
            ar[i] = sum;
        }
        else
            ar[i] = ar[i] % sum;
    }

    for(ll i=0;i<n;i++){
        //    cout<<ar[i]<<" ";
    }
    // cout<<endl;

    sort(ar, ar + n);

    for (ll i = 0; i < n; i++)
    {

        if (ar[i] <= a)
        {
            // cout<<"less then a"<<endl;
            count++;
            // cout << "Ar[i] : " << ar[i] << endl;
            // cout << "Count : " << count << endl;
        }
        else
        {
            int ext = 0;
            if (ar[i] % a == 0)
            {
                // cout<<"divideable by a"<<endl;
                ext += ar[i] / a;
                // cout << "Ar[i] : " << ar[i] << endl;
                // cout << "Ext : " << ext << endl;
            }
            else
            {
                // cout<<"Not divideable by a"<<endl;
                ext += ar[i] / a + 1;
                // cout << "Ar[i] : " << ar[i] << endl;
                // cout << "Ext : " << ext << endl;
            }
            ext -=1;

            if (ext >0 && k>0)
            {
                // cout<<"Time to reduce k = "<<k<<endl;
                if(ext<=k){
                    k = k - (ext);
                    count++;
                }
                // cout << "K : " << k << endl;
                // cout << "Count : " << count << endl;
            }
        }
    }

    cout << count << endl;
    return 0;
}