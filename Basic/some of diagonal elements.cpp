#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a[10][10],sum=0,r,c;
    scanf("%d%d",&r,&c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if (i==j)
            {
                printf("%d ",a[i][j]);
                sum=sum+ a[i][j];
            }
        }
    }
    printf("%d",sum);
    getch();
}
