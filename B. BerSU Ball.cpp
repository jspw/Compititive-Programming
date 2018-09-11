#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,p=0,n,m,a[1000],b[1000],s[1000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    for(i=0;i<m;i++)
        cin>>b[i];
    if(m<n)
    {
        n=m;
    }
    for(i=0;i<n;i++)
        s[i]=abs(a[i]-b[i]);

    sort(s,s+n);

    for(i=0;i<n;i++)
        cout<<s[i]<<" ";
    cout<<endl;

    for(i=0;i<n-1;i++)
        for(j=0;j<n;j++)
            if(i!=j && s[i]+1<=s[j])
            p++;
    cout<<p<<endl;
    return 0;
}
