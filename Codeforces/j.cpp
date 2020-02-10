#include<stdio.h>
int main()
{
    int a,b,c,T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if (a>b && a>c || c>a && c>b)
            {
                printf("Case %d: %d\n",i,b);
            }
            else   if (b>a && b>c || c>a && c>b)
            {
                printf("Case %d: %d\n",i,a);
            }
            else    if (a>b && a>c || b>a && b>c)
            {
                printf("Case %d: %d\n",i,c);
            }

    }
    return 0;
}
