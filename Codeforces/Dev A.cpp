#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a,b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        if(a>b)
        cout<<"Argentina "<<a<<" - "<<b<<" Brazil"<<endl;
        if (b>a)
        cout<<"Brazil "<<b<<" - "<<a<<" Argentina"<<endl;
    }
    return 0;
}
