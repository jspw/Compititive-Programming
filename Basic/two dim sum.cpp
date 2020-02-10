#include<stdio.h>
int main()
{
    int a[10][10],b[10][10];
    int i,j;

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
         }
    }

        for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
         }
    }




      for (i=0;i<3;i++)
    {

        for (j=0;j<3;j++)
        {
            printf("%d ",a[i][j]*b[i][j]);
        }
        printf("\n");

    }

    return 0;

}
