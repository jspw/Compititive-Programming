#include<bits/stdc++.h>
using namespace std;
bool myf(int a,int b)
{
    return (a>b);
}
int main()
{
    int x,n,i,a,b,c,d;
    vector<int>v;
    cin>>n;
    cin>>a>>b>>c>>d;
    x=a+b+c+d;
    v.push_back(x);

    for(i=0;i<n-1;i++)
    {
        cin>>a>>b>>c>>d;
        v.push_back(a+b+c+d);
    }
    sort(v.begin(),v.end(),myf);

    for(i=0;i<v.size();i++)
    {
        if(v[i]==x){
            cout<<i+1<<endl;
            return 0;
        }

    }
}
