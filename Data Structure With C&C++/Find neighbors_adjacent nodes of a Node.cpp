#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input graph.txt","r",stdin);
    int node,edge,n1,n2,i,j,adj[100][100];
    cin>>node>>edge;
    for(i=0; i<edge; i++)
    {
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    for(i=0; i<node; i++)
    {
        for(j=0; j<node; j++)
        {
            if(adj[i][j] == 1)
                cout<<"Adjacent node of node " <<i<<" is : "<<j<<endl;
        }
    }
    return 0;
}
