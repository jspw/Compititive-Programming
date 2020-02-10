#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=0,q=0,i,j,a[10][10];
    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
            cin>>a[i][j];
    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
            if(a[i][j]==1)
            {
                p=i;
                q=j;
                break;
            }


    cout<<abs(p-2)+abs(q-2)<<endl;
    return 0;
}
