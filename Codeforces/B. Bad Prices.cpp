#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n+1];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int mn = INT_MAX;
        int ans = 0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>mn)
                ans++;
            mn=min(mn,a[i]);
        }

        printf("%d\n",ans);
    }

    return 0;
 }
