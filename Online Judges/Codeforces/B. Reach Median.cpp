#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,s,i,p=0,x,y;
    vector <long int> a;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        cin>>y;
        a.push_back(y);
    }
    sort(a.begin(),a.end());
    x=a[n/2];
    for(;x!=s;x++)
        p++;
    cout<<p<<endl;
    return 0;

}
