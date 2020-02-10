#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=0,i,j,n,m,a[1001];
    cin>>m>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if( i!=j && a[i] == a[j] )
            {
                p++;
            }
        }
    }

    if(p==m)
        cout<<"0"<<endl;
    else
    {
        sort(a,a+n);
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        cout<<a[m-1]-a[0]<<endl;
    }

    return 0;
}
