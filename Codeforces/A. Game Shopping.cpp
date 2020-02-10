#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,p=0;
    int g[1000],w[1000];

    cin>>n>>m;

    for(i=0;i<n;i++)
    cin>>g[i];

    for(i=0;i<m;i++)
    cin>>w[i];

    if(m<n)
    n=m;
    else if(n<m)
    m=n;

    for(i=0;i<m;i++)
    {
        if(w[i]>=g[i])
        p++;
    }

    cout<<p<<endl;


    return 0;
}
