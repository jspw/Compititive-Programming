#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,mn;
    cin>>a>>b>>c;
    c=c/4;
    b=b/2;

    if(a==0 || b==0 || c==0)
        cout<<0<<endl;
    else
    {
        if(a<b && a<c)
            mn=a;
        else if(b<c && b<c)
            mn=b;
        else mn=c;

        if(c==mn)
            cout<<c*7<<endl;
        else if(b==mn)
            cout<<b*7<<endl;
        else cout<<a*7<<endl;

    }
    return 0;

}
