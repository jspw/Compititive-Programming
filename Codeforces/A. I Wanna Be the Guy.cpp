#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i,p,q;
    set <int> s;
    set <int> :: iterator it;
    cin>>n;
    cin>>p;
    for(i=0;i<p;i++)
    {
        cin>>a;
        s.insert(a);
    }
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>a;
        s.insert(a);
    }
    it=s.end();
  //  cout<<*it;
    if(*it==n)
        cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;

    return 0;
}
