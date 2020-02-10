#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,sum1=0,i,x,y,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        sum=sum+x;
    }
    for(i=0;i<n;i++)
    {
        cin>>y;
        sum1=sum1+y;
    }
    if(sum1>sum)
        cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}
