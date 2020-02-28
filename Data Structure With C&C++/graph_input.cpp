#include<bits/stdc++.h>
using namespace std;
int main()
{
    int edge,node,i,n1,n2,adj[100][100],j;
    cout<<"Enter number of nodes : ";
    cin>>node;
    cout<<"Enter number of edges : ";
    cin>>edge;
    for(i=0; i<edge; i++)
    {
        cin>>n1>>n2;
        adj[n1][n2] = 1;
        adj[n2][n1] =  1;
    }

    for(i=0; i<node; i++)
    {
        for(j=0; j<node; j++)
            cout<<adj[i][j]<<" ";
        cout<<endl;
    }
}
