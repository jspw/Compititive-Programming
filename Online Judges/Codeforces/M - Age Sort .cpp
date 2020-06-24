#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a[1000000];

    while(scanf("%lld",&n)&& n)

    {
        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        //cout<<endl;
        for(i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;

    }
    return 0;

}
