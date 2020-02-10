#include<stdio.h>
int main()
{
    int n,i,j,k=0,p=0 ,a[1002][10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
            {
                if(a[i][j] == 1)
                    k++;
            }
            if(k>=2)
            {
                p++;
            }
        k=0;

    }
    printf("%d",p);
    return 0;

}
