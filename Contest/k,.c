#include<stdio.h>
int main()
{
    int p,n,m,i,k=0,j;
    scanf("%d%d",&n,&m);
    for(i=n+1; i<=50; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                k++;
            }
        }
        if(k==2)
            p=i;
    }
        printf("%d\n",p);
        if(p==m)
            printf("YES");
        else
            printf("NOT");
        return 0;
    }
