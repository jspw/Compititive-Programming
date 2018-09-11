#include<stdio.h>
int main()
{
    int n,i,a,b,sum,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        sum=0;
        for (j=a;j<=b;j++)
        {
            if (j%2!=0)
            sum=sum+j;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
