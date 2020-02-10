#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j;
    printf("Enter the values\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
         }
    }

    printf("The Two Dimentional Array Is\n");
        for (i=0;i<3;i++)
    {

        for (j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }

    return 0;

}
