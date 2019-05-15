#include<bits/stdc++.h>
using  namespace std;
int main()
{
    map<string,int>m;
    m["purple"]=0;
    m["green"]=0;
    m["blue"]=0;
    m["orange"]=0;
    m["red"]=0;
    m["yellow"]=0;

    int N;
    cin >> N;
    string str;
    int i;
    for(i=0;i<N;i++)
    {
        cin >> str;
        m[str] = 1;
    }
    cout<<6-N<<endl;
    if(m["purple"]==0)
        cout<<"Power\n";
    if(m["green"]==0)
        cout<<"Time\n";
    if(m["blue"]==0)
        cout<<"Space\n";
    if(m["orange"]==0)
        cout<<"Soul\n";
    if(m["red"]==0)
        cout<<"Reality\n";
    if(m["yellow"]==0)
        cout<<"Mind\n";

    return 0;
}

