#include<stdio.h>
int main()
{
    int n=5,i,mx,mn,sum,a[100];
    int smax=0,smin=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mx=a[0];
    for(i=1;i<n;i++){
        if(a[i]>mx)
        mx=a[i];
    }
    printf("%d ",mx);
    a[0]=mn;
    for(i=1;i<n;i++)
    {
        if(a[i]<mn)
            mn=a[i];
    }
    printf("%d",mn);
    for(i=0;i<n;i++)
    {
        if(a[i]!=mn)
            smax=smax+a[i];
    }
    printf("%d",smax);
    for(i=0;i<n;i++)
    {
        if(a[i]!=mx)
            smin=smin+a[i];
    }
    printf("%d",smin);
    printf("%d %d",smax,smin);

}
