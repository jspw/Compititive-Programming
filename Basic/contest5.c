#include<stdio.h>
int main()
{
    int n,i,x,y,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&y);
        x=(((((y*567)/9)+7492)*235)/47)-498;
        t=(x/10)%10;
        if (t<0)
        {
            t=-t;
            printf("%d\n",t);
        }
        else
        printf("%d\n",t);
    }
            return 0;

}
