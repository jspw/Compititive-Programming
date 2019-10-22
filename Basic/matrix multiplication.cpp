#include<stdio.h>
#include<conio.h>
int  main()
{
    int a[5][5],b[5][5],c[5][5],i,j,k,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);
    }
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                sum=sum+a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum=0;
        }
    }
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
                printf("%d ",c[i][j]);

        }
        printf("\n");
    }



    getch();
}
