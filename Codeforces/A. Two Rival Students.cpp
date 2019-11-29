#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,p,q,a,b;
        cin>>n>>x>>p>>q;
        a=max(p,q);
        b=min(p,q);
        b=b-1;
        a=n-a;
        if(x>=a+b)
            cout<<n-1<<endl;
        else cout<<n-a-b+x-1<<endl;
    }
}
