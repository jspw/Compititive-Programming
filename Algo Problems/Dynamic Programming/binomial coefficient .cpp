#include<bits/stdc++.h>
using namespace std;

int c[100][100];

void nCr(int n,int r)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=min(i,r);j++)
        {
            if(j==0 || j==i)
                c[i][j]=1;
            else{
                c[i][j]=c[i-1][j-1]+c[i-1][j];
            }
        }
    }
}

int main()
{
    int n,r;
    cin>>n>>r;
    nCr(n,r);

}
