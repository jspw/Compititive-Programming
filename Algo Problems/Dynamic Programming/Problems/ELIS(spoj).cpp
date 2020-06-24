#include<bits/stdc++.h>
using namespace std;

int Max (int a,int b)
{
    return a>b ? a : b;
}

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int lis[n+1];
    for(int i=0; i<n; i++)
        lis[i]=1;

    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
            if(a[i]>a[j])
                lis[i]=max(lis[i],lis[j]+1);
    }

//    for(int i=0;i<n;i++) cout<<lis[i]<<" ";

    int mx = -1;
    for(int i=0; i<n; i++)
        mx = Max(lis[i],mx);

    cout<<mx<<endl;

    return 0;


}
