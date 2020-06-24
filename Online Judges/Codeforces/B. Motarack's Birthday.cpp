
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n + 1];
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= 0)
            {
                v.push_back(a[i]);
            }
        }

        if (v.empty())
        {
            cout << 0 << " " << 1 << endl;
        }
        else if (v.size() == 1)
        {

            ///debug
            // for(int i=0;i<v.size();i++){
            //    cout<<v[i]<<" ";
            //  }
            //   cout<<endl;

            ///debug

            cout << 0 << " " << v[0] << endl;
        }
        else
        {

            ///debug
            //   for(int i=0;i<v.size();i++){
            //   cout<<v[i]<<" ";
            //   }
            //    cout<<endl;

            ///debug

            ll sum;
            // for(int i=0;i<v.size();i++){
            //     sum=sum+v[i];
            // }

            //    cout<<"SUM = "<<sum<<endl;

            ll k;

            sort(v.begin(),v.end());

            ll maxx = v[v.size()-1];
            ll minx =v[0];

            sum = (maxx + minx);

            if (sum % 2 == 0)
            {
                k = sum / 2;
            }
            else
                k = k = sum / 2 + 1;

            //     cout<<"K : "<<k<<endl;

            v.clear();

            for (int i = 0; i < n; i++)
            {
                if (a[i] < 0)
                {
                    a[i] = k;
                }
            }

            for (int i = 0; i < n - 1; i++)
            {
                v.push_back(abs(a[i] - a[i + 1]));
            }

            ///debug

            //     cout<<"main array"<<endl;

            //  for(int i=0;i<n;i++){
            // //     cout<<a[i]<<" ";
            // /  }
            //    cout<<endl;

            //    for(int i=0;i<v.size();i++){
            //       cout<<v[i]<<" ";
            //   }
            //   cout<<endl;

            ///debug

            sort(v.begin(), v.end());

            cout << v[v.size() - 1] << " " << k << endl;
        }
    }

    return 0;
}
