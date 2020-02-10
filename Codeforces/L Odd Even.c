#include<stdio.h>
#include<stdint.h>
int main()
{
    int64_t n,k,j=0,i,a[10000];
    scanf("%I64d%I64d",&n,&k);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            a[j]=i;
            j++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            a[j]=i;
            j++;
        }
    }

    printf("%I64d",a[k-1]);
    return 0;
}
