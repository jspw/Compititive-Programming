
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n=3,i,a;
    vector<int>v;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    if(v[0]+v[1]>v[2])
        cout<<0<<endl;
    else
    {
        cout<<v[2]-v[0]<<endl;

    }
    return 0;
}
