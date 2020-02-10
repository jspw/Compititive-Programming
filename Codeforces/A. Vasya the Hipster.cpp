#include<bits/stdc++.h>
using namespace std;
int main()
{
    double  a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<int(b)<<" ";
        cout<<int(floor((a-b)/2))<<endl;

    }
    else if(a<b)
        {
        cout<<int(a)<<" ";
        cout<<int(floor((b-a)/2))<<endl;

    }
    else cout<<int(a)<<" "<<0<<endl;
    return 0;
}
