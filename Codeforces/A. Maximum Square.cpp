#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);
        int p = n;
        for(int i=0; i<n; i++)
        {
    //        cout<<a[i]<<" "<<p<<endl;
            if(a[i]==p || p<a[i])
            {
                cout<<p<<endl;
                break;
            }
            p--;
        }

    }

}
