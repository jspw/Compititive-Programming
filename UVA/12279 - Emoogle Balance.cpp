#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    while(scanf("%d",&n)!=0)
    {

        if(n==0)
            break;
        x++;
        int p=0,a;

        for(int i=0; i<n; i++)
        {
            scanf("%d",&a);
            if(a==0)
                p++;
        }
     //   cout<<p<<endl;

        printf("Case %d: %d\n",x,n-2*p);
    }

    return 0;
}

