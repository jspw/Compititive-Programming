#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j;
    j=0;
    while(j<3)
    {
        i=0;
        while(i<3)
        {
            scanf("%d",&a[i][j]);
            i++;
        }
        j++;
    }


        j=0;
    while(j<3)
    {
        i=0;
        while(i<3)
        {
            printf("%d ",a[i][j]);
            i++;
        }
        printf("\n");
        j++;
    }

    return 0;

}

