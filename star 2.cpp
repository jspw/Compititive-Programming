#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=21;i++)
        {
    for ( j=1;j<=i;j++)
    {
        printf(" * ");
    }
    printf("\n");
        }

        for(i=20;i>=1;i--)
        {
    for ( j=1;j<=i;j++)
    {
        printf(" * ");
    }
    printf("\n");
        }


    getch();
    return 0;
}


