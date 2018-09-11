#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,a,sum=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a;
        a=sum+a;
        cout<<a/m<<" ";
        sum=a%m;

    }
    return 0;
}
