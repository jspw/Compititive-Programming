#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int p=0,q=0,i,sh,en,la,lo,a,o;
    long int app[100001],org[100001];
    cin>>sh>>en>>la>>lo>>a>>o;
    for(i=0; i<a; i++)
    {
        cin>>app[i];
    }
    for(i=0; i<o; i++)
    {
        cin>>org[i];
    }
    for(i=0; i<a; i++)
    {
        if((app[i]+la)>=sh && (app[i]+la)<=en)
            p++;
    }
    cout<<p<<endl;
    for(i=0; i<o; i++)
    {
        if((org[i]+lo)>=sh && (org[i]+lo)<=en)
            q++;
    }
    cout<<q<<endl;
    return 0;



}
