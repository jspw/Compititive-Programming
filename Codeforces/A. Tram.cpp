#include<bits/stdc++.h>
using namespace std;
bool dec(int x,int y)
{
    return (x>y);
}
int main()
{
    int n,a,b,i,sum=0;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        sum=sum-a+b;
        v.push_back(sum);
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<endl;
    return 0;
}

