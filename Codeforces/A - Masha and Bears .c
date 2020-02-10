#include<stdio.h>
int max(int x,int y)
{
    if(x>y)
        return x;
    else if (y>x)
        return y;
    else return x;
}
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(d>=a || d>=b || 2*c<d || d<c )
        printf("-1");
            else
    {
        e=max(c,d);
        printf("%d %d %d",a,b,e);
    }
    return 0;
}
