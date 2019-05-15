#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,p,d,i,x,sum=1;
    vector<int>v,v1;
    a=15;
    p=5000;
    d=1000000007;

    while(p)
    {
        v.push_back(p%2);
        p=p/2;

    }
    x=a;
    for(i=1;i<=v.size();i++)
    {
        if(i==1)
            v1.push_back(x%d);
        else{
            x=x*x % d;
        v1.push_back(x);
        }
        cout<<x<<" ";

    }
    cout<<endl;
    for(i=0;i<v1.size();i++)
        cout<<v1[i]<<endl;


    for(i=0;i<v.size();i++)
        cout<<v[i];
    cout<<endl;

    for(i=0;i<v.size();i++){
        if(v[i]==1)
        {
            sum=sum*v1[i];
        }
    }
    cout<<"Modular = ";
    cout<<sum%d<<endl;

    return 0;
}
