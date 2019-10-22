#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,i,a[1000][2];
    cin>>n;
    for(i=0;i<n;i++)
    {

            cin>>a[i][0]>>a[i][1];
    }

    for(i=0;i<n;i++)
    {
        if(a[i][0]+2<= a[i][1])
            p++;
    }
    cout<<p<<endl;

    return 0;

}
