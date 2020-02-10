#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,i,q=0,sum=0;
    scanf("%lld%lld",&n,&m);
    while(n>0)
    {
        q=0;
        scanf("%lld",&a);
        sum=sum+a;
        if(sum==m)
        {
            sum=0;
        //    cout<<"sum==m"<<endl;
            printf("1 ");
        }
        else if(sum<m)
        {
          //  cout<<"sum<m"<<endl;
            printf("0 ");
        }
        else if(sum>m)
        {
          //  cout<<sum<<endl;
            while(sum>=m)
            {
                q++;
                sum=sum-m;
            }
            printf("%lld ",q);
        }
    n--;

    }
    cout<<endl;

    return 0;
}
