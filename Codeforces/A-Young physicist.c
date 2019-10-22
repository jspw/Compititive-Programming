#include<stdio.h>
int main()
{
    int xsum=0,ysum=0,zsum=0,j,i,n,a[100][100];
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        for(i=0; i<3; i++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0,i=0; j<n; j++)
    {
        xsum=xsum+a[i][j];

    }
    for(j=0,i=1; j<n; j++)
    {
        ysum=ysum+a[i][j];
    }
    for(j=0,i=2; j<n; j++)
    {
        zsum=zsum+a[i][j];
    }
    if (xsum==0 && ysum==0 && zsum==0)
        printf("YES");
    else printf("NO");



    return 0;
}
