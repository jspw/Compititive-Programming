#include<stdio.h>
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",i,a+b);
    }
    return 0;

}

