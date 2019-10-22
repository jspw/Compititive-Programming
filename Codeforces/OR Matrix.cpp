#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,a[1000][1000];
    cin>>t;
    while(t>=0)
    {
        cin>>n>>m;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i][j]==0)
                a[i][j]=1;
                else if(a[i][j]==1)
                a[i][j]=0;

            }
            }

            a[1][0]=a[1][0] + 1;



        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
        t--;

    }
    return 0;
}
