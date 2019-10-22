#include<bits/stdc++.h>
using namespace std;
bool myf(long int a,long int b)
{
    return a>b;
}
int main()
{
    long int a,b,mxl,mxr,mnl,mnr ,n,i;
    vector <long int> v;
    vector <long int> v1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(a);
        v1.push_back(b);
    }
    sort(v.begin(),v.end(),myf);
    mxl=v[0];
    sort(v1.begin(),v1.end());
    mnr=v1[0];
    v.clear();
    v1.clear();
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(a);
        v1.push_back(b);
    }
    sort(v.begin(),v.end(),myf);
    mxr=v[0];
    sort(v1.begin(),v1.end());
    mnl=v1[0];
    v.clear();
    v1.clear();
    cout<<max(mxl-mnl,mxr-mnr)<<endl;
    return 0;
}
