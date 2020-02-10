#include<stdio.h>
int main()
{
        int T,a,b,c,i,j,min,max,mid;
        scanf("%d",&T);
        for (j=1;j<=T;j++)
         {
             scanf("\n%d%d%d",&a,&b,&c);

             if(((a<b)&&(b<c)) || ((a>b)&&(a<c)))
    {
        mid=b;
    }
    if(((b<a)&&(a>c)) || ((a>b)&&(a<c)))
    {
        mid=a;
    }
    if(((c<a)&&(c>b)) || ((c>a)&&(c<b)))
    {
        mid=c
    }
    printf("%d\n",mid);

    }
         }
        return 0;
}
