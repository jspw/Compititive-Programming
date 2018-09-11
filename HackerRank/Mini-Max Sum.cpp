#include<stdio.h>
int main()
{
    long long int n=5,i,mx,mn,sum,a[100],b[100];

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    for(i=0;i<n;i++)
    {
        b[i]=sum-a[i];
    }
    mx=b[0];
    mn=b[0];
    for(i=1;i<n;i++)
    {
        if(b[i]>mx)
            mx=b[i];
        if(b[i]<mn)
            mn=b[i];
    }

    printf("%lld %lld\n",mn,mx);

}
