#include<bits/stdc++.h>
using namespace std;
bool myf(long long int a,long long int b)
{
    return (a>b);
}
int main()
{
    long long int a,b,n,m,suma=0,sumb=0,i,p=0;
    vector <long long int> v;
    vector <long long int> :: iterator it;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        suma=suma+a;
        sumb=sumb+b;
        v.push_back(a-b);

    }

    sort(v.begin(),v.end(),myf);

    if(sumb>m)
        cout<<"-1"<<endl;
    else {
        for(it=v.begin();it<v.end();it++)
        {
            if(suma>m){
                suma=suma-*it;
                p++;
            }
          //  else break;
        }
        cout<<p<<endl;
    }
    return 0;
}
