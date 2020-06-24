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

bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }

    return true;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v;
        ll max = -1;
        ll min = 1000003;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v.push_back(a);
            if (a > max)
                max = a;
            if (a < min)
                min = a;
        }

        // cout << min << " " << max << endl;

        if (min == max)
        {
            //  cout<<"for ";
            // for (int i = 0; i < n; i++)
            //     cout << v[i] << " ";
            // cout << endl;

            if(isPrime(min)) cout << min * min << endl;
            else cout<<-1<<endl;
        }

        else
        {

            ll ans = min * max;
            bool check = false;

            ll count = 0;

            for (ll i = 1; i * i <= ans; i++)
            {
                /* code */
                if (ans % i == 0)
                {
                    if (ans / i == i)
                        count++;
                    else
                        count += 2;
                }
            }

            if (count != (n + 2))
            {
                
                // cout<<"for ";
                // for (int i = 0; i < n; i++)
                //     cout << v[i] << " ";
                // cout << endl;
                cout << -1 << endl;
            }

            else
            {
                bool check = false;
                for (int i = 0; i < v.size(); i++)
                {
                    if (ans % v[i] != 0)
                    {
                        check = true;
                        break;
                    }
                }

                if (check)
                {
                    
                    //  cout<<"for ";
                    // for (int i = 0; i < n; i++)
                    //     cout << v[i] << " ";
                    // cout << endl;
                    cout << -1 << endl;
                }
                else
                {
                   
                    //  cout<<"for ";
                    // for (int i = 0; i < n; i++)
                    //     cout << v[i] << " ";
                    // cout << endl;
                     cout << ans << endl;
                }
            }
        }
    }


    return 0;
}