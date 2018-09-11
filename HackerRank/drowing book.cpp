#include<stdio.h>
int main()
{
    int y, t,q,x,n,p;
    scanf("%d%d",&n,&p);

    if(n%2!=0 && p==(n-1))
        printf("0\n");
    else if(n!=0)
    {
        t=(int)p/2;
        q=(int)n/2;
        if(t<q)
            printf("%d\n",t);
        else if (t>q)
        {
            x=t-q;
            printf("%d\n",x);
        }
        else if(t==q)
            printf("%d\n",t);
    }
    return 0;
}

