#include<stdio.h>
#include<stdint.h>
int main()
{
    int T,i;
    long long int a,b,j,k,l=0,m=0;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld%lld",&a,&b);
        for(j=a;j<=b;j++)
        {
            l=0;
           for(k=1;k<=j;k++)
           {
               if(j%k==0)
                l++;
           }

           if(l==2){
            m++;
           }
        }
        printf("Case %d: %lld\n",i,m);
        m=0;
    }
    return 0;

}
