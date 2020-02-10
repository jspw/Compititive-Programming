#include<bits/stdc++.h>
using namespace std;
long long t,l,r,evenr,oddl,evenl,oddr;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>r>>l;
        if(r==l)
        {
            if(r%2==0)
                cout<<r<<endl;
            else cout<<-r<<endl;

        }
        else {
            if(r%2==0 && l%2==0)
                cout<<l-r<<endl;

            else
            {
                if(r%2==0 && l%2!=0)
                    cout<<r+1-l<<endl;
                else
                    cout<<r-l<<endl;
            }
        }
    }
    return 0;
}
