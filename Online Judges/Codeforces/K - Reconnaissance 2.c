#include<stdio.h>
int main()
{
    int n,i,a[101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        a[0]-a[i];
    }
}
