#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,a,p,q,r,s,m;
    cin>>t;
    for( i=0;i<t;i++){
        cin>>n;
         p=0,q=0;
        for(j=0;j<n;j++){
            cin>>a;
            if(a%2==0)
                p++;
            else q++;

        }
        r=0,s=0;
        cin>>m;
        for( j=0;j<m;j++){
            cin>>a;
            if(a%2==0)
                r++;
            else s++;

        }

        cout<<(p*r)+(q*s)<<endl;
    }
    return 0;
}
