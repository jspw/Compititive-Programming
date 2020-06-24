#include<bits/stdc++.h>
using namespace std;
#define white 1
#define gray 2
#define black 3

void DfsVisit(int x)
{
    color[x]=gray;
    stime[x]=time;

    for(int i=0;i<node;i++)
    {
        if(adj[x][i]==1)
        {
            if(color[i]==white)
               DfsVisit(i);
        }
    }

    color[x]=black;
    ftime[x]=time;
    time++;
}
void dfs()
{
    for(int i=0;i<node;i++)color[i]=white;
    for(int i=0;i<node;i++)
    {
        if(color[i]==white)
            DfsVisit(i);
    }
}

int main()
{
    freopen("input graph.txt","r",stdin);
    int node,edge,n1,n2,i,j,adj[100][100],color[100];
    int time=1,stime[100],ftime[100];
    cin>>node>>edge;
    for(i=0;i<edge;i++)
    {
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    dfs();
}
