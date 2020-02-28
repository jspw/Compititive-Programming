#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>PII;
int main()
{
    freopen("input list.txt","r",stdin);
    int edge,vertex;
    cin>>vertex>>edge;
    vector <PII>v[vertex];
    for(int i=0;i<edge;i++)
    {
        int source;
        PII p;
        cin>>source>>p.first>>p.second;
        v[source].push_back(p);

        int s2=p.first;
        p.first=source;
        v[s2].push_back(p);

    }

    for(int i=0;i<vertex;i++)
    {
        cout<<i<<" --> ";
        for(int j=0;j<v[i].size();j++)
            cout<<v[i][j].first<<" - "<<v[i][j].second <<" ";
        cout<<endl;
    }
}
