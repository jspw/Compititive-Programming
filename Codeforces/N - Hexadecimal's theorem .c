#include<stdio.h>
#include<string.h>
int main()
{
    long long int a[1000000000],b,i,n;
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;a[i]!=n;i++)
    {
        a[2]=a[i-2]+a[i-1];
    }
    for(i=2;a[i]!=n;i++)
    {

    }


}

