#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,p=0,q=0;
    vector <int> v;
    // vector<int> :: iterator it;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0; i<v.size(); i++)
    {
        if(v[i]%2==0)
            p++;
        else q++;
    }
    if(p<q)
    {
        for(i=0; i<v.size(); i++)
        {
            if(v[i]%2==0)
                cout<<i+1<<endl;
        }
    }
    else if(p>q)
    {
        for(i=0; i<v.size(); i++)
        {
            if(v[i]%2!=0)
                cout<<i+1<<endl;
        }
    }
    return 0;
}
