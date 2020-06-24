#include<bits/stdc++.h>
using namespace std;

#define WHITE 1
#define BLACK 3
#define GRAY 3

int adj[100][100];
int color [100];
int edge,node;

void dfsVisit(int x)
{
    color[x]=GRAY;
    ///
    for(int i=0;i<node;i++)
    {
        if(adj[x][i]==1)
        {
            if(color[i]==WHITE)
                dfsVisit(i);
        }
    }


    color[x]=BLACK;
}

void dfs(){
    for(int i=0;i<node;i++)
        color[i]=WHITE;

    for(int i=0;i<node;i++)
    {

        if(color[i] == WHITE)
            dfsVisit(i);
    }
}




int main()
{
    freopen("input","r",stdin);
    scanf("%d%d",&node,&edge);

    int n1,n2;

    for(int i=0;i<edge;i++)
    {
        scanf("%d%d",&n1,&n2);
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    dfs();
}
