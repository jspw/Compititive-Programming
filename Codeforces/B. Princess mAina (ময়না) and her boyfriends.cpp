#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mx,i,n,m,a[1000];
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    mx=a[0];
    for(i=1;i<m;i++)
    {
        if(a[i]>mx)
        mx=[i];

    }
    for(i=0;i<m;i++)
    {
        if(a[i]==mx){
        cout<<i<<endl;
        return 0;
        }
    }
}
