#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,j,n,i,a[100][3];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=sum-a[i][0];
            sum=sum+a[i][1];
        }
    }
    cout<<sum<<endl;
}
