#include<bits/stdc++.h>
using namespace std;
int mn(int a[])
{
    int m,i;
    m=a[0];
    for(i=0;i<4;i++)
    {
        if(a[i]<m)
        a[i]=m;
    }
    return m;

}
int main()
{
    int t,i,a[5],j,n,b,x;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>a[j];
        }
        cin>>n;
        b=mn(a);

        if(a[0]==a[1] && a[0]==a[2] && a[0]==a[3]){
        x=b*4+1;
        cout<<x<<endl;
        }


    }
    return 0;
}
