#include<stdio.h>
#include<conio.h>
int main()
{
    long long int a[100],i,n;
    while(scanf("%lld",&n)!= EOF)
    {
        a[0]=0;
        a[1]=1;
        for(i=2;i<n;i++)
        {
            a[i]=a[i-1]+ a[i-2];
        }
        for(i=0;i<n;i++)
            printf("%lld ",a[i]);
            printf("\n");
        }
    getch();
}
