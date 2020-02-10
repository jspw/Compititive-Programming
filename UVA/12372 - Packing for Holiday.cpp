#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a<=20 && b<=20 && c<=20 ? cout<<"Case "<<i<<": good"<<endl : cout<<"Case "<<i<<": bad"<<endl;
    }
    return 0;
}
