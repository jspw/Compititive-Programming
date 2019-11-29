#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    while(cin>>n>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0 && n==0)
            break;
        int ans = 1080;
        ans+=n>a ? (n-a)*9 : (40+n-a)*9;
        ans+=b>a ? (b-a)*9 : (40+b-a)*9;
        ans+=b>c ? (b-c)*9 : (40+b-c)*9;
        cout<<ans<<endl;
    }

    return 0;
}
