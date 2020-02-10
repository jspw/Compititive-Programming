#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100];
    int i,n,mn;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mn=a[0];
    for(i=1;i<n;i++)
    {
        if(mn>a[i])
            mn=a[i+1];
    }
    printf("%d",mn);




    getch();
}
