#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int p[n+1];
    for(i=0;i<=n;i++)
    {
        p[i]=1;
    }
    p[0]=0;
    p[1]=0;

    for(i=2;i*i<n;i++)
    {
        if(p[i]==1)
        {
            for(j=2;i*j<=n;j++)
            {
                p[i*j]=0;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        if(p[i]==1)
            cout<< i <<endl;
    }
    return 0;
}