#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],r1,c1,i,k,j,sum=0,c2,r2;
    scanf("%d%d",&r1,&c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        scanf("%d%d",&r2,&c2);
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+a[i][k] * b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }

        for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }




    getch();
}
