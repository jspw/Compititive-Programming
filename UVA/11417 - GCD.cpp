#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,j,i;
    while(cin>>n){
        if(n==0)
            return 0;
            sum=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
                sum=sum+__gcd(i,j);
        }

        cout<<sum<<endl;
    }
    return 0;
}
