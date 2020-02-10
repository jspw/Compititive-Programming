#include<stdio.h>
#include<conio.h>
int main()
{
    int temp,j,i,n,x[100];
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<n-i; j++)
        {
            if (x[j]>x[j+1])
            {
                temp = x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }

    }
    for (i=0; i<n; i++)
    {
        printf("%d ",x[i]);
    }

    getch();
}


