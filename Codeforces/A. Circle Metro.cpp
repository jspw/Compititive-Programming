#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n ,x1,y1,x2,y2;
    bool bal=false;
    cin>>n>>x1>>y1>>x2>>y2;
    for(i=1;i<=n;i++)
    {
        if(x1==x2)
            bal=true;
        if(x1==y1 || x2==y2)
            break;
        x1+=1;
        x2-=1;

        if(x1>n)
            x1=1;
        if(x2<1)
            x2=n;

       // cout<<x1<<" "<<x2<<endl;

    }
    if(bal)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
