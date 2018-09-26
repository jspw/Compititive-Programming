#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,a,sum=0,m;
    cin>>m>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        sum+=a;
    }
    cout<<sum-m<<endl;
    return 0;
}
