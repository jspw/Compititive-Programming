#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
 
    ll q, n, m;
    cin>>q;
    while(q--)
    {
        cin>>n>>m;

        ll t[n], l[n], h[n], flag = 0;

        for(ll i=0;i<n;i++){
            cin>>t[i]>>l[i]>>h[i];
        }
            
        ll low = m - t[0], high = m + t[0];
        
        for(ll i=0;i<n;i++)
        {
            if(i != 0)
            {
                low = low - (t[i] - t[i-1]);
                high = high + (t[i] - t[i-1]);
            }
            if(high < l[i] || low > h[i])
            {
                cout<<"NO"<<endl;
                flag = 1;
                break;
            }
            else
            {
                if(low < l[i])
                    low = l[i];
                if(high > h[i])
                high = h[i];
            }
        }
        if(!flag)
            cout<<"YES"<<endl;
    }
}