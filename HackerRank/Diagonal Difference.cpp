#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int sum=0,mus=0,total,i,n,j,a[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                sum=sum+a[i][j];

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==(n-1))
                mus=mus+a[i][j];

        }
    }

    total=abs(sum-mus);
    printf("%d\n",total);
    return 0;

}
