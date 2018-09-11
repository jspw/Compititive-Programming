#include<stdio.h>
int main()
{
    int a,c,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&c);
        if(c>10)
            printf("10 %d\n",c-10);
        else if (c<10)
            printf("0 %d\n",c-0);
            else if(c==0)
                printf("0 0\n");
        else printf("3 7\n");

    }
    return 0;
}
