#include<stdio.h>
int main()
{
    int T,a,b,c,i;
    scanf("%d",&T);
    for (i=1;i<=T;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b && a>c && b>c )
        {
            printf("%d",c);
            break;
        }
        else if(b>a && b>c && a>c)
        {
            printf("%d",);
            break;
        }
        else
        {
            printf("%d",c);
            break;
        }

    }
    return 0;
}
