#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=0, n,i,a[100];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        p++;
    }
    cout<<p<<endl;
    for(i=0;i<n;i++)
    {
        if(i!=1  && a[i]==1)
        cout<<a[i-1]<<" ";
        else if(i!=n-1 && i!=(n-1))
        cout<<a[i-1]<<" ";
        else if(i==n-1)
        cout<<a[i]<<" ";
    }

    return 0;
}
