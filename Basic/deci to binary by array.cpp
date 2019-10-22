#include<stdio.h>
#include<conio.h>
int main()
{
    int deci,bin,i,n,reminder,a[100];
    scanf("%d",&deci);
    for(i=0;deci>0;i++)
    {
        a[i]=deci%2;
        deci=deci / 2;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }

    getch();
}

