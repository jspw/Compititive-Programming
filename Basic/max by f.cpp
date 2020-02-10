#include<stdio.h>
int main()
{
    int a[100],n,i,mx;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mx=a[0];
    for(i=1;i<n;i++)
    {
        if(mx<a[i])
        mx=a[i];
    }
    printf("%d",mx);

}
