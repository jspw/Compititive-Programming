#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[1000];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(j=0; j<n; j++)
    {

        if( (a[j]) % 2 == 0)
        a[j]=a[j]-1;
    }

    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;


}
