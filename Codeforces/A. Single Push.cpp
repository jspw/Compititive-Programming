#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ch,d;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        ch=0,d=0;

        cin>>k;
        int a[k],b[k];
        for(int j=0; j<k; j++)
        {
            cin>>a[j];
        }
        for(int j=0; j<k; j++)
        {
            cin>>b[j];
        }

        for(int j=0; j<k; j++)
        {
            if(b[j]!=a[j]&&d!=b[j]-a[j])
                ch++;
            d=b[j]-a[j];
            if(d<0)
            {
                ch=2;
                break;
            }
        }
        if(ch>=2)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

}
