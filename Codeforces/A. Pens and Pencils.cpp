#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int ansa,ansb;
        if(b%d==0)
            ansa = b/d;
        else if(b%d!=0)
            ansa = b/d+1;
        if(a%c==0)
            ansb=a/c;
        else if(a%c!=0)
            ansb=a/c+1;

        if(ansa+ansb<=k)
            cout<<ansb<<" "<<ansa<<endl;
        else cout<<-1<<endl;


    }

    return 0;
}
