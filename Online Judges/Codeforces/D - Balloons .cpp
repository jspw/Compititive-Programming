#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,a,p;
    vector<int > v;
  //  set<int> :: iterator it;
    cin>>t;
    while(t>0)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(i=0;i<n;i++)
        {
            if(v[i]==0)
                p++;
        }
        cout<<v.size()-p<<endl;
        v.clear();
        t--;
    }
}
