#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        int a[n+1];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }

    return 0;
}
