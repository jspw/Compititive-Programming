#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        cout << ((y - x) % (a + b) == 0 ? (y - x) / (a + b) : -1) << endl;
    }
}