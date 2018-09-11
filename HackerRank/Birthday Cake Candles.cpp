#include<stdio.h>
int main()
{
    long long int n,i,j=0,mx,a[100];
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);

    }
    mx=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>mx)
            mx=a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==mx)
            j++;
    }
    printf("%lld\n",j);

}
