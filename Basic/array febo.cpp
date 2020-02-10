#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,ara[100];
    scanf("%d",&n);
    ara[0]=0;
    ara[1]=1;
    for(i=2;i<n;i++)
    {
        ara[i]=ara[i-1] + ara[i-2];
        printf("%d ",ara[i]);
    }
    getch();
    return 0;
}
